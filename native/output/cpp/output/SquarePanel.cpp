#include "../native_jvm.hpp"
#include "../string_pool.hpp"
#include "SquarePanel.hpp"

// SquarePanel
namespace native_jvm::classes::__ngen_SquarePanel {

    char *string_pool;

    std::mutex cclasses_mtx[1];
    jclass cclasses[1];
    jmethodID cmethods[2];

    // ChangeColor(Ljava/awt/Color;)V
    void JNICALL __ngen_native_ChangeColor1(JNIEnv *env, jobject obj, jobject arg0) {
        utils::jvm_stack<2> cstack;
        utils::local_vars<2> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
        clocals.setref(1, arg0); refs.insert(clocals.getref(1));
    
        L1637290981: if (env->ExceptionCheck()) { return (void) 0; }
        // L 17:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(2); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1252LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[0]) { cmethods[0] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1582LL)), ((char *)(string_pool + 1276LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 244LL)), 17); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[0]), (jobject) cstack.fetchref(-2)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1888442711: if (env->ExceptionCheck()) { return (void) 0; }
        // L 18:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1252LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[1]) { cmethods[1] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1596LL)), ((char *)(string_pool + 4LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 244LL)), 18); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[1])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1754894440: if (env->ExceptionCheck()) { return (void) 0; }
        // L 19:
        return;
        L1998767043: if (env->ExceptionCheck()) { return (void) 0; }
        return (void) 0;
    }
    
    // <clinit>()V
    void JNICALL __ngen_YumeCloudObfInit2(JNIEnv *env, jclass clazz) {
        std::unordered_set<jobject> refs;
    
    
        return (void) 0;
    }
    
    
    void __ngen_register_methods(JNIEnv *env, jclass clazz) {
        string_pool = string_pool::get_pool();


        JNINativeMethod __ngen_methods[] = {
            { (char *)((char *)(string_pool + 1264LL)), (char *)((char *)(string_pool + 1276LL)), (void *)&__ngen_native_ChangeColor1 },
            { (char *)((char *)(string_pool + 1296LL)), (char *)((char *)(string_pool + 4LL)), (void *)&__ngen_YumeCloudObfInit2 },
        };

        if (clazz) env->RegisterNatives(clazz, __ngen_methods, sizeof(__ngen_methods) / sizeof(__ngen_methods[0]));
        if (env->ExceptionCheck()) { fprintf(stderr, "Exception occured while registering native_jvm for %s\n", ((char *)(string_pool + 1252LL))); fflush(stderr); env->ExceptionDescribe(); env->ExceptionClear(); }

    }
}