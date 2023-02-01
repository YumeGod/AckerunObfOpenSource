#include "../native_jvm.hpp"
#include "../string_pool.hpp"
#include "Main.hpp"

// Main
namespace native_jvm::classes::__ngen_Main {

    char *string_pool;

    jstring cstrings[2];
    std::mutex cclasses_mtx[2];
    jclass cclasses[2];
    jmethodID cmethods[5];
    jfieldID cfields[1];

    // main([Ljava/lang/String;)V
    void JNICALL __ngen_native_main1(JNIEnv *env, jclass clazz, jarray arg0) {
        utils::jvm_stack<3> cstack;
        utils::local_vars<2> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, arg0); refs.insert(clocals.getref(0));
    
        L2128029086: if (env->ExceptionCheck()) { return (void) 0; }
        // L 5:
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1474LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (jobject obj = env->AllocObject((cclasses[0]))) { cstack.pushref(obj); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        memmove(&cstack.data[cstack.sptr - 0], &cstack.data[cstack.sptr - 1], 1 * sizeof(cstack.data[0])); memmove(&cstack.data[cstack.sptr - 1], &cstack.data[cstack.sptr], 1 * sizeof(cstack.data[0]));    
        memmove(&cstack.refs[cstack.sptr - 0], &cstack.refs[cstack.sptr - 1], 1 * sizeof(cstack.refs[0])); memmove(&cstack.refs[cstack.sptr - 1], &cstack.refs[cstack.sptr], 1 * sizeof(cstack.refs[0]));
        cstack.sptr++;
        cstack.popcnt(1); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1474LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[0]) { cmethods[0] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 865LL)), ((char *)(string_pool + 4LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 92LL)), 5); else env->CallNonvirtualVoidMethod(cstack.fetchref(-1), (cclasses[0]), (cmethods[0])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        clocals.setref(1, cstack.popref()); refs.insert(clocals.getref(1));
        L686466458: if (env->ExceptionCheck()) { return (void) 0; }
        // L 6:
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        cstack.pushref((cstrings[0]));
        cstack.popcnt(2); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1474LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[1]) { cmethods[1] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1481LL)), ((char *)(string_pool + 607LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 244LL)), 6); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[1]), (jobject) cstack.fetchref(-2)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L875016237: if (env->ExceptionCheck()) { return (void) 0; }
        // L 7:
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        cstack.push(300);
        cstack.push(300);
        cstack.popcnt(3); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1474LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[2]) { cmethods[2] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1490LL)), ((char *)(string_pool + 872LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 244LL)), 7); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[2]), (jint) cstack.fetch(-2), (jint) cstack.fetch(-3)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L105374791: if (env->ExceptionCheck()) { return (void) 0; }
        // L 8:
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        cstack.push(1);
        cstack.popcnt(2); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1474LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[3]) { cmethods[3] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1498LL)), ((char *)(string_pool + 1509LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 244LL)), 8); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[3]), (jboolean) cstack.fetch(-2)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1107024580: if (env->ExceptionCheck()) { return (void) 0; }
        // L 9:
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        cstack.push(3);
        cstack.popcnt(2); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1474LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 1514LL)), ((char *)(string_pool + 56LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 244LL)), 9); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[4]), (jint) cstack.fetch(-2)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1010856212: if (env->ExceptionCheck()) { return (void) 0; }
        // L 10:
        return;
        L904861801: if (env->ExceptionCheck()) { return (void) 0; }
        return (void) 0;
    }
    
    // <clinit>()V
    void JNICALL __ngen_YumeCloudObfInit2(JNIEnv *env, jclass clazz) {
        utils::jvm_stack<1> cstack;
        std::unordered_set<jobject> refs;
    
    
        L204715855: if (env->ExceptionCheck()) { return (void) 0; }
        // L 2:
        cstack.pushref((cstrings[1]));
        if (!cclasses[1]  || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1539LL)))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[0]) { cfields[0] = env->GetStaticFieldID((cclasses[1]), ((char *)(string_pool + 1544LL)), ((char *)(string_pool + 1548LL))); if (env->ExceptionCheck()) { return (void) 0; }  } env->SetStaticObjectField((cclasses[1]), (cfields[0]), (jobject) cstack.popref()); 
        if (env->ExceptionCheck()) { return (void) 0; }
        return;
        return (void) 0;
    }
    
    
    void __ngen_register_methods(JNIEnv *env, jclass clazz) {
        string_pool = string_pool::get_pool();

        if (jstring str = env->NewStringUTF(((char *)(string_pool + 1567LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[1] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 1576LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[0] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }

        JNINativeMethod __ngen_methods[] = {
            { (char *)((char *)(string_pool + 1446LL)), (char *)((char *)(string_pool + 1451LL)), (void *)&__ngen_native_main1 },
            { (char *)((char *)(string_pool + 1296LL)), (char *)((char *)(string_pool + 4LL)), (void *)&__ngen_YumeCloudObfInit2 },
        };

        if (clazz) env->RegisterNatives(clazz, __ngen_methods, sizeof(__ngen_methods) / sizeof(__ngen_methods[0]));
        if (env->ExceptionCheck()) { fprintf(stderr, "Exception occured while registering native_jvm for %s\n", ((char *)(string_pool + 1539LL))); fflush(stderr); env->ExceptionDescribe(); env->ExceptionClear(); }

    }
}