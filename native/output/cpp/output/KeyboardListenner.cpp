#include "../native_jvm.hpp"
#include "../string_pool.hpp"
#include "KeyboardListenner.hpp"

// KeyboardListenner
namespace native_jvm::classes::__ngen_KeyboardListenner {

    char *string_pool;

    std::mutex cclasses_mtx[2];
    jclass cclasses[2];
    jmethodID cmethods[1];
    jfieldID cfields[1];

    // keyPressed(Ljava/awt/event/KeyEvent;)V
    void JNICALL __ngen_native_keyPressed1(JNIEnv *env, jobject obj, jobject arg0) {
        utils::jvm_stack<2> cstack;
        utils::local_vars<2> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
        clocals.setref(1, arg0); refs.insert(clocals.getref(1));
    
        L404214852: if (env->ExceptionCheck()) { return (void) 0; }
        // L 8:
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1354LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[0]) { cmethods[0] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1378LL)), ((char *)(string_pool + 344LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 348LL)), 8); else cstack.push(env->CallIntMethod(cstack.fetchref(-1), (cmethods[0]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        switch (cstack.pop()) {
            case 37: goto L1822971466; break;
            case 38: goto L1354003114; break;
            case 39: goto L825658265; break;
            case 40: goto L388357135; break;
            default: goto L957465255; break;
        }
        L825658265: if (env->ExceptionCheck()) { return (void) 0; }
        // L 10:
        refs.erase(clocals.refs[0]); refs.erase(clocals.refs[1]); 
        utils::clear_refs(env, refs);
        if (!cclasses[1]  || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[0]) { cfields[0] = env->GetStaticFieldID((cclasses[1]), ((char *)(string_pool + 27LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack.push(env->GetStaticIntField((cclasses[1]), (cfields[0]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(2);
        if (cstack.pop() == cstack.pop()) goto L957465255;
        L1254344205: if (env->ExceptionCheck()) { return (void) 0; }
        // L 11:
        cstack.push(1);
        if (!cclasses[1]  || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[0]) { cfields[0] = env->GetStaticFieldID((cclasses[1]), ((char *)(string_pool + 27LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->SetStaticIntField((cclasses[1]), (cfields[0]), (jint) cstack.pop()); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1336735375: if (env->ExceptionCheck()) { return (void) 0; }
        // L 12:
        goto L957465255;
        L1354003114: if (env->ExceptionCheck()) { return (void) 0; }
        // L 14:
        refs.erase(clocals.refs[0]); refs.erase(clocals.refs[1]); 
        utils::clear_refs(env, refs);
        if (!cclasses[1]  || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[0]) { cfields[0] = env->GetStaticFieldID((cclasses[1]), ((char *)(string_pool + 27LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack.push(env->GetStaticIntField((cclasses[1]), (cfields[0]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(4);
        if (cstack.pop() == cstack.pop()) goto L957465255;
        L1984990929: if (env->ExceptionCheck()) { return (void) 0; }
        // L 15:
        cstack.push(3);
        if (!cclasses[1]  || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[0]) { cfields[0] = env->GetStaticFieldID((cclasses[1]), ((char *)(string_pool + 27LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->SetStaticIntField((cclasses[1]), (cfields[0]), (jint) cstack.pop()); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1105423942: if (env->ExceptionCheck()) { return (void) 0; }
        // L 16:
        goto L957465255;
        L1822971466: if (env->ExceptionCheck()) { return (void) 0; }
        // L 19:
        refs.erase(clocals.refs[0]); refs.erase(clocals.refs[1]); 
        utils::clear_refs(env, refs);
        if (!cclasses[1]  || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[0]) { cfields[0] = env->GetStaticFieldID((cclasses[1]), ((char *)(string_pool + 27LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack.push(env->GetStaticIntField((cclasses[1]), (cfields[0]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(1);
        if (cstack.pop() == cstack.pop()) goto L957465255;
        L365181913: if (env->ExceptionCheck()) { return (void) 0; }
        // L 20:
        cstack.push(2);
        if (!cclasses[1]  || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[0]) { cfields[0] = env->GetStaticFieldID((cclasses[1]), ((char *)(string_pool + 27LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->SetStaticIntField((cclasses[1]), (cfields[0]), (jint) cstack.pop()); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1031061344: if (env->ExceptionCheck()) { return (void) 0; }
        // L 21:
        goto L957465255;
        L388357135: if (env->ExceptionCheck()) { return (void) 0; }
        // L 24:
        refs.erase(clocals.refs[0]); refs.erase(clocals.refs[1]); 
        utils::clear_refs(env, refs);
        if (!cclasses[1]  || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[0]) { cfields[0] = env->GetStaticFieldID((cclasses[1]), ((char *)(string_pool + 27LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack.push(env->GetStaticIntField((cclasses[1]), (cfields[0]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(3);
        if (cstack.pop() == cstack.pop()) goto L957465255;
        L1327536153: if (env->ExceptionCheck()) { return (void) 0; }
        // L 25:
        cstack.push(4);
        if (!cclasses[1]  || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[0]) { cfields[0] = env->GetStaticFieldID((cclasses[1]), ((char *)(string_pool + 27LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->SetStaticIntField((cclasses[1]), (cfields[0]), (jint) cstack.pop()); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L367746789: if (env->ExceptionCheck()) { return (void) 0; }
        // L 26:
        goto L957465255;
        L957465255: if (env->ExceptionCheck()) { return (void) 0; }
        // L 30:
        refs.erase(clocals.refs[0]); refs.erase(clocals.refs[1]); 
        utils::clear_refs(env, refs);
        return;
        L558216562: if (env->ExceptionCheck()) { return (void) 0; }
        return (void) 0;
    }
    
    // keyReleased(Ljava/awt/event/KeyEvent;)V
    void JNICALL __ngen_native_keyReleased2(JNIEnv *env, jobject obj, jobject arg0) {
        utils::local_vars<2> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
        clocals.setref(1, arg0); refs.insert(clocals.getref(1));
    
        L961712517: if (env->ExceptionCheck()) { return (void) 0; }
        // L 33:
        return;
        L1928931046: if (env->ExceptionCheck()) { return (void) 0; }
        return (void) 0;
    }
    
    // keyTyped(Ljava/awt/event/KeyEvent;)V
    void JNICALL __ngen_native_keyTyped3(JNIEnv *env, jobject obj, jobject arg0) {
        utils::local_vars<2> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
        clocals.setref(1, arg0); refs.insert(clocals.getref(1));
    
        L1034568234: if (env->ExceptionCheck()) { return (void) 0; }
        // L 34:
        return;
        L835227336: if (env->ExceptionCheck()) { return (void) 0; }
        return (void) 0;
    }
    
    // <clinit>()V
    void JNICALL __ngen_YumeCloudObfInit4(JNIEnv *env, jclass clazz) {
        std::unordered_set<jobject> refs;
    
    
        return (void) 0;
    }
    
    
    void __ngen_register_methods(JNIEnv *env, jclass clazz) {
        string_pool = string_pool::get_pool();


        JNINativeMethod __ngen_methods[] = {
            { (char *)((char *)(string_pool + 1314LL)), (char *)((char *)(string_pool + 1325LL)), (void *)&__ngen_native_keyPressed1 },
            { (char *)((char *)(string_pool + 1389LL)), (char *)((char *)(string_pool + 1325LL)), (void *)&__ngen_native_keyReleased2 },
            { (char *)((char *)(string_pool + 1401LL)), (char *)((char *)(string_pool + 1325LL)), (void *)&__ngen_native_keyTyped3 },
            { (char *)((char *)(string_pool + 1410LL)), (char *)((char *)(string_pool + 4LL)), (void *)&__ngen_YumeCloudObfInit4 },
        };

        if (clazz) env->RegisterNatives(clazz, __ngen_methods, sizeof(__ngen_methods) / sizeof(__ngen_methods[0]));
        if (env->ExceptionCheck()) { fprintf(stderr, "Exception occured while registering native_jvm for %s\n", ((char *)(string_pool + 1428LL))); fflush(stderr); env->ExceptionDescribe(); env->ExceptionClear(); }

    }
}