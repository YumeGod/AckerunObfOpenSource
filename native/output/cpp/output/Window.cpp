#include "../native_jvm.hpp"
#include "../string_pool.hpp"
#include "Window.hpp"

// Window
namespace native_jvm::classes::__ngen_Window {

    char *string_pool;

    std::mutex cclasses_mtx[1];
    jclass cclasses[1];
    jfieldID cfields[2];

    // <clinit>()V
    void JNICALL __ngen_YumeCloudObfInit0(JNIEnv *env, jclass clazz) {
        utils::jvm_stack<1> cstack;
        std::unordered_set<jobject> refs;
    
    
        L1302227152: if (env->ExceptionCheck()) { return (void) 0; }
        // L 13:
        cstack.push(20);
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1474LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[0]) { cfields[0] = env->GetStaticFieldID((cclasses[0]), ((char *)(string_pool + 1854LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->SetStaticIntField((cclasses[0]), (cfields[0]), (jint) cstack.pop()); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1122606666: if (env->ExceptionCheck()) { return (void) 0; }
        // L 14:
        cstack.push(20);
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1474LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[1]) { cfields[1] = env->GetStaticFieldID((cclasses[0]), ((char *)(string_pool + 1860LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->SetStaticIntField((cclasses[0]), (cfields[1]), (jint) cstack.pop()); 
        if (env->ExceptionCheck()) { return (void) 0; }
        return;
        return (void) 0;
    }
    
    
    void __ngen_register_methods(JNIEnv *env, jclass clazz) {
        string_pool = string_pool::get_pool();


        JNINativeMethod __ngen_methods[] = {
            { (char *)((char *)(string_pool + 1836LL)), (char *)((char *)(string_pool + 4LL)), (void *)&__ngen_YumeCloudObfInit0 },
        };

        if (clazz) env->RegisterNatives(clazz, __ngen_methods, sizeof(__ngen_methods) / sizeof(__ngen_methods[0]));
        if (env->ExceptionCheck()) { fprintf(stderr, "Exception occured while registering native_jvm for %s\n", ((char *)(string_pool + 1474LL))); fflush(stderr); env->ExceptionDescribe(); env->ExceptionClear(); }

    }
}