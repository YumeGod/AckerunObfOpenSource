#include "../native_jvm.hpp"
#include "../string_pool.hpp"
#include "DataOfSquare.hpp"

// DataOfSquare
namespace native_jvm::classes::__ngen_DataOfSquare {

    char *string_pool;

    std::mutex cclasses_mtx[4];
    jclass cclasses[4];
    jmethodID cmethods[2];
    jfieldID cfields[2];

    // lightMeUp(I)V
    void JNICALL __ngen_native_lightMeUp1(JNIEnv *env, jobject obj, jint arg0) {
        utils::jvm_stack<3> cstack;
        utils::local_vars<2> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
        clocals.set(1, arg0);
    
        L128359175: if (env->ExceptionCheck()) { return (void) 0; }
        // L 22:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 816LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[0]) { cfields[0] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 794LL)), ((char *)(string_pool + 1206LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 22); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[0]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 816LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[1]) { cfields[1] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 1220LL)), ((char *)(string_pool + 277LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 22); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[1]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(clocals.get(1));
        cstack.popcnt(2); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[0]) { cmethods[0] = env->GetMethodID((cclasses[1]), ((char *)(string_pool + 370LL)), ((char *)(string_pool + 374LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 396LL)), 22); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[0]), (jint) cstack.fetch(-2))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1222LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack.fetchref(0) != nullptr && !env->IsInstanceOf(cstack.fetchref(0), (cclasses[2]))) { utils::throw_re(env, ((char *)(string_pool + 427LL)), (std::string(((char *)(string_pool + 456LL))) + std::string(((char *)(string_pool + 1237LL)))).c_str(), 22); cstack.clear(); cstack.pushref(env->ExceptionOccurred()); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(2); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1252LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[1]) { cmethods[1] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 1264LL)), ((char *)(string_pool + 1276LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 244LL)), 22); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[1]), (jobject) cstack.fetchref(-2)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1585635178: if (env->ExceptionCheck()) { return (void) 0; }
        // L 23:
        return;
        L1058634310: if (env->ExceptionCheck()) { return (void) 0; }
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
            { (char *)((char *)(string_pool + 829LL)), (char *)((char *)(string_pool + 56LL)), (void *)&__ngen_native_lightMeUp1 },
            { (char *)((char *)(string_pool + 1296LL)), (char *)((char *)(string_pool + 4LL)), (void *)&__ngen_YumeCloudObfInit2 },
        };

        if (clazz) env->RegisterNatives(clazz, __ngen_methods, sizeof(__ngen_methods) / sizeof(__ngen_methods[0]));
        if (env->ExceptionCheck()) { fprintf(stderr, "Exception occured while registering native_jvm for %s\n", ((char *)(string_pool + 816LL))); fflush(stderr); env->ExceptionDescribe(); env->ExceptionClear(); }

    }
}