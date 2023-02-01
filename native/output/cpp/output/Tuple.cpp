#include "../native_jvm.hpp"
#include "../string_pool.hpp"
#include "Tuple.hpp"

// Tuple
namespace native_jvm::classes::__ngen_Tuple {

    char *string_pool;

    std::mutex cclasses_mtx[1];
    jclass cclasses[1];
    jfieldID cfields[4];

    // ChangeData(II)V
    void JNICALL __ngen_native_ChangeData1(JNIEnv *env, jobject obj, jint arg0, jint arg1) {
        utils::jvm_stack<2> cstack;
        utils::local_vars<3> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
        clocals.set(1, arg0);
        clocals.set(2, arg1);
    
        L1089418272: if (env->ExceptionCheck()) { return (void) 0; }
        // L 12:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.push(clocals.get(1));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[0]) { cfields[0] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 534LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 639LL)), 12); else env->SetIntField(cstack.fetchref(1), (cfields[0]), (jint) cstack.fetch(0)); cstack.popcnt(2); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1233990028: if (env->ExceptionCheck()) { return (void) 0; }
        // L 13:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.push(clocals.get(2));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[1]) { cfields[1] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 515LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 639LL)), 13); else env->SetIntField(cstack.fetchref(1), (cfields[1]), (jint) cstack.fetch(0)); cstack.popcnt(2); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1847008471: if (env->ExceptionCheck()) { return (void) 0; }
        // L 14:
        return;
        L1076607567: if (env->ExceptionCheck()) { return (void) 0; }
        return (void) 0;
    }
    
    // getX()I
    jint JNICALL __ngen_native_getX2(JNIEnv *env, jobject obj) {
        utils::jvm_stack<1> cstack;
        utils::local_vars<1> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
    
        L2036127838: if (env->ExceptionCheck()) { return (jint) 0; }
        // L 16:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jint) 0; } } if (!cfields[0]) { cfields[0] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 534LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (jint) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 16); else cstack.push(env->GetIntField(cstack.popref(), (cfields[0]))); 
        if (env->ExceptionCheck()) { return (jint) 0; }
        return (jint) cstack.pop();
        L1509791656: if (env->ExceptionCheck()) { return (jint) 0; }
        return (jint) 0;
    }
    
    // getY()I
    jint JNICALL __ngen_native_getY3(JNIEnv *env, jobject obj) {
        utils::jvm_stack<1> cstack;
        utils::local_vars<1> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
    
        L257608164: if (env->ExceptionCheck()) { return (jint) 0; }
        // L 19:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jint) 0; } } if (!cfields[1]) { cfields[1] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 515LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (jint) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 19); else cstack.push(env->GetIntField(cstack.popref(), (cfields[1]))); 
        if (env->ExceptionCheck()) { return (jint) 0; }
        return (jint) cstack.pop();
        L306115458: if (env->ExceptionCheck()) { return (jint) 0; }
        return (jint) 0;
    }
    
    // getXf()I
    jint JNICALL __ngen_native_getXf4(JNIEnv *env, jobject obj) {
        utils::jvm_stack<1> cstack;
        utils::local_vars<1> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
    
        L230643635: if (env->ExceptionCheck()) { return (jint) 0; }
        // L 22:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jint) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 1806LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (jint) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 22); else cstack.push(env->GetIntField(cstack.popref(), (cfields[2]))); 
        if (env->ExceptionCheck()) { return (jint) 0; }
        return (jint) cstack.pop();
        L944427387: if (env->ExceptionCheck()) { return (jint) 0; }
        return (jint) 0;
    }
    
    // getYf()I
    jint JNICALL __ngen_native_getYf5(JNIEnv *env, jobject obj) {
        utils::jvm_stack<1> cstack;
        utils::local_vars<1> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
    
        L1636182655: if (env->ExceptionCheck()) { return (jint) 0; }
        // L 25:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jint) 0; } } if (!cfields[3]) { cfields[3] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 1815LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (jint) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 25); else cstack.push(env->GetIntField(cstack.popref(), (cfields[3]))); 
        if (env->ExceptionCheck()) { return (jint) 0; }
        return (jint) cstack.pop();
        L71399214: if (env->ExceptionCheck()) { return (jint) 0; }
        return (jint) 0;
    }
    
    // <clinit>()V
    void JNICALL __ngen_YumeCloudObfInit6(JNIEnv *env, jclass clazz) {
        std::unordered_set<jobject> refs;
    
    
        return (void) 0;
    }
    
    
    void __ngen_register_methods(JNIEnv *env, jclass clazz) {
        string_pool = string_pool::get_pool();


        JNINativeMethod __ngen_methods[] = {
            { (char *)((char *)(string_pool + 933LL)), (char *)((char *)(string_pool + 872LL)), (void *)&__ngen_native_ChangeData1 },
            { (char *)((char *)(string_pool + 472LL)), (char *)((char *)(string_pool + 344LL)), (void *)&__ngen_native_getX2 },
            { (char *)((char *)(string_pool + 477LL)), (char *)((char *)(string_pool + 344LL)), (void *)&__ngen_native_getY3 },
            { (char *)((char *)(string_pool + 1800LL)), (char *)((char *)(string_pool + 344LL)), (void *)&__ngen_native_getXf4 },
            { (char *)((char *)(string_pool + 1809LL)), (char *)((char *)(string_pool + 344LL)), (void *)&__ngen_native_getYf5 },
            { (char *)((char *)(string_pool + 1818LL)), (char *)((char *)(string_pool + 4LL)), (void *)&__ngen_YumeCloudObfInit6 },
        };

        if (clazz) env->RegisterNatives(clazz, __ngen_methods, sizeof(__ngen_methods) / sizeof(__ngen_methods[0]));
        if (env->ExceptionCheck()) { fprintf(stderr, "Exception occured while registering native_jvm for %s\n", ((char *)(string_pool + 421LL))); fflush(stderr); env->ExceptionDescribe(); env->ExceptionClear(); }

    }
}