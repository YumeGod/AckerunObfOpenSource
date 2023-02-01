#include "native_jvm.hpp"
#include "native_jvm_output.hpp"

#include "output/ControlleurThreads.hpp"
#include "output/DataOfSquare.hpp"
#include "output/KeyboardListenner.hpp"
#include "output/Main.hpp"
#include "output/SquarePanel.hpp"
#include "output/ThreadSquare.hpp"
#include "output/Tuple.hpp"
#include "output/Window.hpp"


namespace native_jvm {

    typedef void (* reg_method)(JNIEnv *,jclass);

    reg_method reg_methods[8];

    void register_for_class(JNIEnv *env, jclass, jint id, jclass clazz) {
        reg_methods[id](env, clazz);
    }

    void prepare_lib(JNIEnv *env, jvmtiEnv *jvmti_env) {
        utils::init_utils(env);
        if (env->ExceptionCheck())
            return;

        reg_methods[0] = &(native_jvm::classes::__ngen_ControlleurThreads::__ngen_register_methods);
        reg_methods[1] = &(native_jvm::classes::__ngen_DataOfSquare::__ngen_register_methods);
        reg_methods[2] = &(native_jvm::classes::__ngen_KeyboardListenner::__ngen_register_methods);
        reg_methods[3] = &(native_jvm::classes::__ngen_Main::__ngen_register_methods);
        reg_methods[4] = &(native_jvm::classes::__ngen_SquarePanel::__ngen_register_methods);
        reg_methods[5] = &(native_jvm::classes::__ngen_ThreadSquare::__ngen_register_methods);
        reg_methods[6] = &(native_jvm::classes::__ngen_Tuple::__ngen_register_methods);
        reg_methods[7] = &(native_jvm::classes::__ngen_Window::__ngen_register_methods);


        char method_name[] = "registerNativesForClass";
        char method_desc[] = "(ILjava/lang/Class;)V";
        JNINativeMethod loader_methods[] = {
            { (char *) method_name, (char *) method_desc, (void *)&register_for_class }
        };
        env->RegisterNatives(env->FindClass("YumeCloudObfuscator/Loader"), loader_methods, 1);
    }
}

extern "C" JNIEXPORT jint JNICALL JNI_OnLoad(JavaVM *vm, void *reserved) {
    JNIEnv *env = nullptr;
    jvmtiEnv *jvmti_env = nullptr;
    vm->GetEnv((void **)&env, JNI_VERSION_1_8);
    vm->GetEnv((void **)&jvmti_env, JVMTI_VERSION);
    native_jvm::prepare_lib(env, jvmti_env);
    return JNI_VERSION_1_8;
}