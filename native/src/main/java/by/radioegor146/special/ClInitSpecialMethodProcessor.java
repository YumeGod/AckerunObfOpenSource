package by.radioegor146.special;

import by.radioegor146.Main;
import by.radioegor146.MethodContext;
import by.radioegor146.Util;
import org.objectweb.asm.Opcodes;
import org.objectweb.asm.Type;
import org.objectweb.asm.tree.*;

public class ClInitSpecialMethodProcessor implements SpecialMethodProcessor {

    @Override
    public String preProcess(MethodContext context) {
        //native_clinit
        //自定义初始化方法名
        String name = Main.configManager.getConfig().getClinit_method_name() + context.methodIndex;
        context.proxyMethod = new MethodNode(Opcodes.ASM7,
                Opcodes.ACC_NATIVE | Opcodes.ACC_PRIVATE | Opcodes.ACC_STATIC | Opcodes.ACC_SYNTHETIC,
                name, context.method.desc, context.method.signature, new String[0]);
        context.clazz.methods.add(context.proxyMethod);
        return name;
    }

    @Override
    public void postProcess(MethodContext context) {
        InsnList instructions = context.method.instructions;
        instructions.clear();

        instructions.add(new LdcInsnNode(context.classIndex));
        instructions.add(new LdcInsnNode(Type.getObjectType(context.clazz.name)));
        //需要修改
        instructions.add(new MethodInsnNode(Opcodes.INVOKESTATIC, context.obfuscator.getNativeDir() + "/Loader",
                "init", "()V", false));
        instructions.add(new MethodInsnNode(Opcodes.INVOKESTATIC, context.obfuscator.getNativeDir() + "/Loader",
                "registerNativesForClass", "(ILjava/lang/Class;)V", false));
        instructions.add(new MethodInsnNode(Opcodes.INVOKESTATIC, context.clazz.name,
                Main.configManager.getConfig().getClinit_method_name() + context.methodIndex, context.method.desc, false));

        if (Util.getFlag(context.clazz.access, Opcodes.ACC_INTERFACE)) {
            if (context.nativeMethod == null) {
                throw new RuntimeException("Native method not created?!");
            }

            context.proxyMethod.instructions.add(new MethodInsnNode(Opcodes.INVOKESTATIC,
                    context.obfuscator.getStaticClassProvider().getCurrentClassName(),
                    context.nativeMethod.name, context.nativeMethod.desc, false));
            context.proxyMethod.instructions.add(new InsnNode(Opcodes.RETURN));
        }
        instructions.add(new InsnNode(Opcodes.RETURN));
    }
}
