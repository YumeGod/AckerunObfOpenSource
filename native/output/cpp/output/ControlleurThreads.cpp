#include "../native_jvm.hpp"
#include "../string_pool.hpp"
#include "ControlleurThreads.hpp"

// ControlleurThreads
namespace native_jvm::classes::__ngen_ControlleurThreads {

    char *string_pool;

    jstring cstrings[2];
    std::mutex cclasses_mtx[10];
    jclass cclasses[10];
    jmethodID cmethods[26];
    jfieldID cfields[11];

    // run()V
    void JNICALL __ngen_native_run1(JNIEnv *env, jobject obj) {
        utils::jvm_stack<2> cstack;
        utils::local_vars<1> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
    
        L1100767002: if (env->ExceptionCheck()) { return (void) 0; }
        // L 35:
        refs.erase(clocals.refs[0]); 
        utils::clear_refs(env, refs);
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[0]) { cfields[0] = env->GetStaticFieldID((cclasses[0]), ((char *)(string_pool + 27LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack.push(env->GetStaticIntField((cclasses[0]), (cfields[0]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(2); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[0]) { cmethods[0] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 44LL)), ((char *)(string_pool + 56LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 92LL)), 35); else env->CallNonvirtualVoidMethod(cstack.fetchref(-1), (cclasses[0]), (cmethods[0]), (jint) cstack.fetch(-2)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L536765369: if (env->ExceptionCheck()) { return (void) 0; }
        // L 36:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[1]) { cmethods[1] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 115LL)), ((char *)(string_pool + 4LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 92LL)), 36); else env->CallNonvirtualVoidMethod(cstack.fetchref(-1), (cclasses[0]), (cmethods[1])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1374026904: if (env->ExceptionCheck()) { return (void) 0; }
        // L 37:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[2]) { cmethods[2] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 130LL)), ((char *)(string_pool + 4LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 92LL)), 37); else env->CallNonvirtualVoidMethod(cstack.fetchref(-1), (cclasses[0]), (cmethods[2])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L2085002312: if (env->ExceptionCheck()) { return (void) 0; }
        // L 38:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[3]) { cmethods[3] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 142LL)), ((char *)(string_pool + 4LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 92LL)), 38); else env->CallNonvirtualVoidMethod(cstack.fetchref(-1), (cclasses[0]), (cmethods[3])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L317071334: if (env->ExceptionCheck()) { return (void) 0; }
        // L 39:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 153LL)), ((char *)(string_pool + 4LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 92LL)), 39); else env->CallNonvirtualVoidMethod(cstack.fetchref(-1), (cclasses[0]), (cmethods[4])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L2129221032: if (env->ExceptionCheck()) { return (void) 0; }
        // L 34:
        goto L1100767002;
        L1472465: if (env->ExceptionCheck()) { return (void) 0; }
        return (void) 0;
    }
    
    // pauser()V
    void JNICALL __ngen_native_pauser2(JNIEnv *env, jobject obj) {
        if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 160LL)))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (void) 0; } }
        utils::jvm_stack<2> cstack;
        utils::local_vars<2> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
    
        L1791045777: if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      if (env->IsInstanceOf(exception, (cclasses[1]))) { goto L1224347463; }     env->Throw(exception); return (void) 0; }
        // L 46:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      if (env->IsInstanceOf(exception, (cclasses[1]))) { goto L1224347463; }     env->Throw(exception); return (void) 0; } } if (!cfields[1]) { cfields[1] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 191LL)), ((char *)(string_pool + 197LL))); if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      if (env->IsInstanceOf(exception, (cclasses[1]))) { goto L1224347463; }     env->Throw(exception); return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 199LL)), 46); else cstack.push2(env->GetLongField(cstack.popref(), (cfields[1]))); 
        if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0)); 
        if (env->IsInstanceOf(exception, (cclasses[1]))) { goto L1224347463; }
        env->Throw(exception); return (void) 0; }
        cstack.popcnt(2); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      if (env->IsInstanceOf(exception, (cclasses[1]))) { goto L1224347463; }     env->Throw(exception); return (void) 0; } } if (!cmethods[5]) { cmethods[5] = env->GetStaticMethodID((cclasses[0]), ((char *)(string_pool + 217LL)), ((char *)(string_pool + 223LL))); if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      if (env->IsInstanceOf(exception, (cclasses[1]))) { goto L1224347463; }     env->Throw(exception); return (void) 0; }  } env->CallStaticVoidMethod((cclasses[0]), (cmethods[5]), (jlong) cstack.fetch2raw(-1)); 
        if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0)); 
        if (env->IsInstanceOf(exception, (cclasses[1]))) { goto L1224347463; }
        env->Throw(exception); return (void) 0; }
        L1580297332: if (env->ExceptionCheck()) { return (void) 0; }
        // L 47:
        goto L1831477404;
        L1224347463: if (env->ExceptionCheck()) { return (void) 0; }
        refs.erase(cstack.refs[0]); 
        refs.erase(clocals.refs[0]); 
        utils::clear_refs(env, refs);
        clocals.setref(1, cstack.popref()); refs.insert(clocals.getref(1));
        L1966250569: if (env->ExceptionCheck()) { return (void) 0; }
        // L 48:
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 160LL)))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[6]) { cmethods[6] = env->GetMethodID((cclasses[1]), ((char *)(string_pool + 228LL)), ((char *)(string_pool + 4LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 244LL)), 48); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[6])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1831477404: if (env->ExceptionCheck()) { return (void) 0; }
        // L 50:
        refs.erase(clocals.refs[0]); 
        utils::clear_refs(env, refs);
        return;
        L370440646: if (env->ExceptionCheck()) { return (void) 0; }
        return (void) 0;
    }
    
    // checkCollision()V
    void JNICALL __ngen_native_checkCollision3(JNIEnv *env, jobject obj) {
        utils::jvm_stack<3> cstack;
        utils::local_vars<4> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
    
        L1125381564: if (env->ExceptionCheck()) { return (void) 0; }
        // L 54:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 267LL)), ((char *)(string_pool + 277LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 54); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[2]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 267LL)), ((char *)(string_pool + 277LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 54); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[2]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(1); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 339LL)), ((char *)(string_pool + 344LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 348LL)), 54); else cstack.push(env->CallIntMethod(cstack.fetchref(-1), (cmethods[7]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(1);
        cstack.set(1, cstack.fetch(1) - cstack.fetch(0)); cstack.popcnt(1);
        cstack.popcnt(2); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 370LL)), ((char *)(string_pool + 374LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 396LL)), 54); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[8]), (jint) cstack.fetch(-2))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack.fetchref(0) != nullptr && !env->IsInstanceOf(cstack.fetchref(0), (cclasses[3]))) { utils::throw_re(env, ((char *)(string_pool + 427LL)), (std::string(((char *)(string_pool + 456LL))) + std::string(((char *)(string_pool + 421LL)))).c_str(), 54); cstack.clear(); cstack.pushref(env->ExceptionOccurred()); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        clocals.setref(1, cstack.popref()); refs.insert(clocals.getref(1));
        L2130772866: if (env->ExceptionCheck()) { return (void) 0; }
        // L 55:
        cstack.push(0);
        clocals.set(2, cstack.pop());
        L511717113: if (env->ExceptionCheck()) { return (void) 0; }
        goto L728739494;
        L2005733474: if (env->ExceptionCheck()) { return (void) 0; }
        // L 56:
        refs.erase(clocals.refs[0]); refs.erase(clocals.refs[1]); 
        utils::clear_refs(env, refs);
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[9]) { cmethods[9] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 472LL)), ((char *)(string_pool + 344LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 348LL)), 56); else cstack.push(env->CallIntMethod(cstack.fetchref(-1), (cmethods[9]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 267LL)), ((char *)(string_pool + 277LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 56); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[2]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(clocals.get(2));
        cstack.popcnt(2); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 370LL)), ((char *)(string_pool + 374LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 396LL)), 56); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[8]), (jint) cstack.fetch(-2))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack.fetchref(0) != nullptr && !env->IsInstanceOf(cstack.fetchref(0), (cclasses[3]))) { utils::throw_re(env, ((char *)(string_pool + 427LL)), (std::string(((char *)(string_pool + 456LL))) + std::string(((char *)(string_pool + 421LL)))).c_str(), 56); cstack.clear(); cstack.pushref(env->ExceptionOccurred()); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(1); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[9]) { cmethods[9] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 472LL)), ((char *)(string_pool + 344LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 348LL)), 56); else cstack.push(env->CallIntMethod(cstack.fetchref(-1), (cmethods[9]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (cstack.pop() != cstack.pop()) goto L6750210;
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[10]) { cmethods[10] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 477LL)), ((char *)(string_pool + 344LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 348LL)), 56); else cstack.push(env->CallIntMethod(cstack.fetchref(-1), (cmethods[10]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 267LL)), ((char *)(string_pool + 277LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 56); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[2]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(clocals.get(2));
        cstack.popcnt(2); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 370LL)), ((char *)(string_pool + 374LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 396LL)), 56); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[8]), (jint) cstack.fetch(-2))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack.fetchref(0) != nullptr && !env->IsInstanceOf(cstack.fetchref(0), (cclasses[3]))) { utils::throw_re(env, ((char *)(string_pool + 427LL)), (std::string(((char *)(string_pool + 456LL))) + std::string(((char *)(string_pool + 421LL)))).c_str(), 56); cstack.clear(); cstack.pushref(env->ExceptionOccurred()); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(1); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[10]) { cmethods[10] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 477LL)), ((char *)(string_pool + 344LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 348LL)), 56); else cstack.push(env->CallIntMethod(cstack.fetchref(-1), (cmethods[10]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (cstack.pop() != cstack.pop()) goto L6750210;
        cstack.push(1);
        goto L521081105;
        L6750210: if (env->ExceptionCheck()) { return (void) 0; }
        refs.erase(clocals.refs[0]); refs.erase(clocals.refs[1]); 
        utils::clear_refs(env, refs);
        cstack.push(0);
        L521081105: if (env->ExceptionCheck()) { return (void) 0; }
        refs.erase(clocals.refs[0]); refs.erase(clocals.refs[1]); 
        utils::clear_refs(env, refs);
        clocals.set(3, cstack.pop());
        L1237550792: if (env->ExceptionCheck()) { return (void) 0; }
        // L 57:
        cstack.push(clocals.get(3));
        if (cstack.pop() == 0) goto L1448247698;
        L1846406218: if (env->ExceptionCheck()) { return (void) 0; }
        // L 58:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[11]) { cmethods[11] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 482LL)), ((char *)(string_pool + 4LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 92LL)), 58); else env->CallNonvirtualVoidMethod(cstack.fetchref(-1), (cclasses[0]), (cmethods[11])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1448247698: if (env->ExceptionCheck()) { return (void) 0; }
        // L 55:
        refs.erase(clocals.refs[0]); refs.erase(clocals.refs[1]); 
        utils::clear_refs(env, refs);
        clocals.set(2, clocals.get(2) + 1);
        L728739494: if (env->ExceptionCheck()) { return (void) 0; }
        refs.erase(clocals.refs[0]); refs.erase(clocals.refs[1]); 
        utils::clear_refs(env, refs);
        cstack.push(clocals.get(2));
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 267LL)), ((char *)(string_pool + 277LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 55); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[2]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(1); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 339LL)), ((char *)(string_pool + 344LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 348LL)), 55); else cstack.push(env->CallIntMethod(cstack.fetchref(-1), (cmethods[7]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(2);
        cstack.set(1, cstack.fetch(1) - cstack.fetch(0)); cstack.popcnt(1);
        if (cstack.pop() >= cstack.pop()) goto L2005733474;
        L158199555: if (env->ExceptionCheck()) { return (void) 0; }
        // L 62:
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[9]) { cmethods[9] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 472LL)), ((char *)(string_pool + 344LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 348LL)), 62); else cstack.push(env->CallIntMethod(cstack.fetchref(-1), (cmethods[9]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[3]) { cfields[3] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 494LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 62); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[3]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[4]) { cfields[4] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 515LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 62); else cstack.push(env->GetIntField(cstack.popref(), (cfields[4]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (cstack.pop() != cstack.pop()) goto L1556995360;
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[10]) { cmethods[10] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 477LL)), ((char *)(string_pool + 344LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 348LL)), 62); else cstack.push(env->CallIntMethod(cstack.fetchref(-1), (cmethods[10]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[3]) { cfields[3] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 494LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 62); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[3]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[5]) { cfields[5] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 534LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 62); else cstack.push(env->GetIntField(cstack.popref(), (cfields[5]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (cstack.pop() != cstack.pop()) goto L1556995360;
        cstack.push(1);
        goto L517052730;
        L1556995360: if (env->ExceptionCheck()) { return (void) 0; }
        refs.erase(clocals.refs[0]); refs.erase(clocals.refs[1]); 
        utils::clear_refs(env, refs);
        cstack.push(0);
        L517052730: if (env->ExceptionCheck()) { return (void) 0; }
        refs.erase(clocals.refs[0]); refs.erase(clocals.refs[1]); 
        utils::clear_refs(env, refs);
        clocals.set(2, cstack.pop());
        L2035070981: if (env->ExceptionCheck()) { return (void) 0; }
        // L 63:
        cstack.push(clocals.get(2));
        if (cstack.pop() == 0) goto L1264213713;
        L1506809545: if (env->ExceptionCheck()) { return (void) 0; }
        // L 64:
        if (!cclasses[4]  || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 536LL)))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[6]) { cfields[6] = env->GetStaticFieldID((cclasses[4]), ((char *)(string_pool + 553LL)), ((char *)(string_pool + 557LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack.pushref(env->GetStaticObjectField((cclasses[4]), (cfields[6]))); refs.insert(cstack.fetchref(0)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref((cstrings[0]));
        cstack.popcnt(2); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 579LL)))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[12]) { cmethods[12] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 599LL)), ((char *)(string_pool + 607LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 244LL)), 64); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[12]), (jobject) cstack.fetchref(-2)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1019384604: if (env->ExceptionCheck()) { return (void) 0; }
        // L 65:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        memmove(&cstack.data[cstack.sptr - 0], &cstack.data[cstack.sptr - 1], 1 * sizeof(cstack.data[0])); memmove(&cstack.data[cstack.sptr - 1], &cstack.data[cstack.sptr], 1 * sizeof(cstack.data[0]));    
        memmove(&cstack.refs[cstack.sptr - 0], &cstack.refs[cstack.sptr - 1], 1 * sizeof(cstack.refs[0])); memmove(&cstack.refs[cstack.sptr - 1], &cstack.refs[cstack.sptr], 1 * sizeof(cstack.refs[0]));
        cstack.sptr++;
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[7]) { cfields[7] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 629LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 65); else cstack.push(env->GetIntField(cstack.popref(), (cfields[7]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(1);
        cstack.set(1, cstack.fetch(1) + cstack.fetch(0)); cstack.popcnt(1);
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[7]) { cfields[7] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 629LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 639LL)), 65); else env->SetIntField(cstack.fetchref(1), (cfields[7]), (jint) cstack.fetch(0)); cstack.popcnt(2); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L550668305: if (env->ExceptionCheck()) { return (void) 0; }
        // L 66:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[13]) { cmethods[13] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 656LL)), ((char *)(string_pool + 677LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 687LL)), 66); else { cstack.pushref(env->CallNonvirtualObjectMethod(cstack.fetchref(-1), (cclasses[0]), (cmethods[13]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[3]) { cfields[3] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 494LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 712LL)), 66); else env->SetObjectField(cstack.fetchref(1), (cfields[3]), (jobject) cstack.fetchref(0)); cstack.popcnt(2); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L963110412: if (env->ExceptionCheck()) { return (void) 0; }
        // L 68:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[3]) { cfields[3] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 494LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 68); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[3]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(2); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[14]) { cmethods[14] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 732LL)), ((char *)(string_pool + 742LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 92LL)), 68); else env->CallNonvirtualVoidMethod(cstack.fetchref(-1), (cclasses[0]), (cmethods[14]), (jobject) cstack.fetchref(-2)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1264213713: if (env->ExceptionCheck()) { return (void) 0; }
        // L 70:
        refs.erase(clocals.refs[0]); refs.erase(clocals.refs[1]); 
        utils::clear_refs(env, refs);
        return;
        L1624820151: if (env->ExceptionCheck()) { return (void) 0; }
        return (void) 0;
    }
    
    // stopTheGame()V
    void JNICALL __ngen_native_stopTheGame4(JNIEnv *env, jobject obj) {
        utils::jvm_stack<2> cstack;
        utils::local_vars<1> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
    
        L1219161283: if (env->ExceptionCheck()) { return (void) 0; }
        // L 74:
        if (!cclasses[4]  || env->IsSameObject(cclasses[4], NULL)) { cclasses_mtx[4].lock(); if (!cclasses[4] || env->IsSameObject(cclasses[4], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 536LL)))) { cclasses[4] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[4].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[6]) { cfields[6] = env->GetStaticFieldID((cclasses[4]), ((char *)(string_pool + 553LL)), ((char *)(string_pool + 557LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack.pushref(env->GetStaticObjectField((cclasses[4]), (cfields[6]))); refs.insert(cstack.fetchref(0)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref((cstrings[1]));
        cstack.popcnt(2); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { cclasses_mtx[5].lock(); if (!cclasses[5] || env->IsSameObject(cclasses[5], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 579LL)))) { cclasses[5] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[5].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[12]) { cmethods[12] = env->GetMethodID((cclasses[5]), ((char *)(string_pool + 599LL)), ((char *)(string_pool + 607LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 244LL)), 74); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[12]), (jobject) cstack.fetchref(-2)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L2081191879: if (env->ExceptionCheck()) { return (void) 0; }
        // L 76:
        refs.erase(clocals.refs[0]); 
        utils::clear_refs(env, refs);
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[4]) { cmethods[4] = env->GetMethodID((cclasses[0]), ((char *)(string_pool + 153LL)), ((char *)(string_pool + 4LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 92LL)), 76); else env->CallNonvirtualVoidMethod(cstack.fetchref(-1), (cclasses[0]), (cmethods[4])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L2061347276: if (env->ExceptionCheck()) { return (void) 0; }
        // L 75:
        goto L2081191879;
        L1559122513: if (env->ExceptionCheck()) { return (void) 0; }
        return (void) 0;
    }
    
    // spawnFood(LTuple;)V
    void JNICALL __ngen_native_spawnFood5(JNIEnv *env, jobject obj, jobject arg0) {
        utils::jvm_stack<2> cstack;
        utils::local_vars<2> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
        clocals.setref(1, arg0); refs.insert(clocals.getref(1));
    
        L1128096251: if (env->ExceptionCheck()) { return (void) 0; }
        // L 82:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[8]) { cfields[8] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 753LL)), ((char *)(string_pool + 277LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 82); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[8]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[5]) { cfields[5] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 534LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 82); else cstack.push(env->GetIntField(cstack.popref(), (cfields[5]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(2); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 370LL)), ((char *)(string_pool + 374LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 396LL)), 82); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[8]), (jint) cstack.fetch(-2))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack.fetchref(0) != nullptr && !env->IsInstanceOf(cstack.fetchref(0), (cclasses[2]))) { utils::throw_re(env, ((char *)(string_pool + 427LL)), (std::string(((char *)(string_pool + 456LL))) + std::string(((char *)(string_pool + 761LL)))).c_str(), 82); cstack.clear(); cstack.pushref(env->ExceptionOccurred()); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[4]) { cfields[4] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 515LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 82); else cstack.push(env->GetIntField(cstack.popref(), (cfields[4]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(2); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 370LL)), ((char *)(string_pool + 374LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 396LL)), 82); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[8]), (jint) cstack.fetch(-2))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 781LL)))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack.fetchref(0) != nullptr && !env->IsInstanceOf(cstack.fetchref(0), (cclasses[6]))) { utils::throw_re(env, ((char *)(string_pool + 427LL)), (std::string(((char *)(string_pool + 456LL))) + std::string(((char *)(string_pool + 781LL)))).c_str(), 82); cstack.clear(); cstack.pushref(env->ExceptionOccurred()); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[6]  || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 781LL)))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[9]) { cfields[9] = env->GetFieldID((cclasses[6]), ((char *)(string_pool + 794LL)), ((char *)(string_pool + 801LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 82); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[9]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(1);
        cstack.popcnt(2); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 816LL)))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[15]) { cmethods[15] = env->GetMethodID((cclasses[7]), ((char *)(string_pool + 829LL)), ((char *)(string_pool + 56LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 244LL)), 82); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[15]), (jint) cstack.fetch(-2)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1552978964: if (env->ExceptionCheck()) { return (void) 0; }
        // L 83:
        return;
        L1259652483: if (env->ExceptionCheck()) { return (void) 0; }
        return (void) 0;
    }
    
    // getValAleaNotInSnake()LTuple;
    jobject JNICALL __ngen_native_getValAleaNotInSnake6(JNIEnv *env, jobject obj) {
        utils::jvm_stack<5> cstack;
        utils::local_vars<5> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
    
        L1699113578: if (env->ExceptionCheck()) { return (jobject) 0; }
        // L 88:
        cstack.push(0);
        if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { cclasses_mtx[8].lock(); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 839LL)))) { cclasses[8] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[8].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[16]) { cmethods[16] = env->GetStaticMethodID((cclasses[8]), ((char *)(string_pool + 854LL)), ((char *)(string_pool + 861LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } cstack.push2(utils::cdl(env->CallStaticDoubleMethod((cclasses[8]), (cmethods[16])))); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        cstack.push2(utils::cdl(19.0));
        cstack.set2(1, utils::cdl(utils::cld(cstack.fetch2(1)) * utils::cld(cstack.fetch2(0)))); cstack.popcnt(2);
        cstack.push(utils::cast_di(utils::cld(cstack.pop2())));
        cstack.set(1, cstack.fetch(1) + cstack.fetch(0)); cstack.popcnt(1);
        clocals.set(2, cstack.pop());
        L1306324352: if (env->ExceptionCheck()) { return (jobject) 0; }
        // L 89:
        cstack.push(0);
        if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { cclasses_mtx[8].lock(); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 839LL)))) { cclasses[8] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[8].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[16]) { cmethods[16] = env->GetStaticMethodID((cclasses[8]), ((char *)(string_pool + 854LL)), ((char *)(string_pool + 861LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } cstack.push2(utils::cdl(env->CallStaticDoubleMethod((cclasses[8]), (cmethods[16])))); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        cstack.push2(utils::cdl(19.0));
        cstack.set2(1, utils::cdl(utils::cld(cstack.fetch2(1)) * utils::cld(cstack.fetch2(0)))); cstack.popcnt(2);
        cstack.push(utils::cast_di(utils::cld(cstack.pop2())));
        cstack.set(1, cstack.fetch(1) + cstack.fetch(0)); cstack.popcnt(1);
        clocals.set(3, cstack.pop());
        L355790875: if (env->ExceptionCheck()) { return (jobject) 0; }
        // L 90:
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (jobject obj = env->AllocObject((cclasses[3]))) { cstack.pushref(obj); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        memmove(&cstack.data[cstack.sptr - 0], &cstack.data[cstack.sptr - 1], 1 * sizeof(cstack.data[0])); memmove(&cstack.data[cstack.sptr - 1], &cstack.data[cstack.sptr], 1 * sizeof(cstack.data[0]));    
        memmove(&cstack.refs[cstack.sptr - 0], &cstack.refs[cstack.sptr - 1], 1 * sizeof(cstack.refs[0])); memmove(&cstack.refs[cstack.sptr - 1], &cstack.refs[cstack.sptr], 1 * sizeof(cstack.refs[0]));
        cstack.sptr++;
        cstack.push(clocals.get(2));
        cstack.push(clocals.get(3));
        cstack.popcnt(3); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[17]) { cmethods[17] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 865LL)), ((char *)(string_pool + 872LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 92LL)), 90); else env->CallNonvirtualVoidMethod(cstack.fetchref(-1), (cclasses[3]), (cmethods[17]), (jint) cstack.fetch(-2), (jint) cstack.fetch(-3)); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        clocals.setref(1, cstack.popref()); refs.insert(clocals.getref(1));
        L2028017635: if (env->ExceptionCheck()) { return (jobject) 0; }
        // L 91:
        cstack.push(0);
        clocals.set(4, cstack.pop());
        L782378927: if (env->ExceptionCheck()) { return (jobject) 0; }
        goto L70807318;
        L910091170: if (env->ExceptionCheck()) { return (jobject) 0; }
        // L 92:
        refs.erase(clocals.refs[0]); refs.erase(clocals.refs[1]); 
        utils::clear_refs(env, refs);
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[10]) { cmethods[10] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 477LL)), ((char *)(string_pool + 344LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 348LL)), 92); else cstack.push(env->CallIntMethod(cstack.fetchref(-1), (cmethods[10]))); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 267LL)), ((char *)(string_pool + 277LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 92); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[2]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        cstack.push(clocals.get(4));
        cstack.popcnt(2); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 370LL)), ((char *)(string_pool + 374LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 396LL)), 92); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[8]), (jint) cstack.fetch(-2))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (cstack.fetchref(0) != nullptr && !env->IsInstanceOf(cstack.fetchref(0), (cclasses[3]))) { utils::throw_re(env, ((char *)(string_pool + 427LL)), (std::string(((char *)(string_pool + 456LL))) + std::string(((char *)(string_pool + 421LL)))).c_str(), 92); cstack.clear(); cstack.pushref(env->ExceptionOccurred()); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        cstack.popcnt(1); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[9]) { cmethods[9] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 472LL)), ((char *)(string_pool + 344LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 348LL)), 92); else cstack.push(env->CallIntMethod(cstack.fetchref(-1), (cmethods[9]))); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        if (cstack.pop() != cstack.pop()) goto L1183888521;
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[9]) { cmethods[9] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 472LL)), ((char *)(string_pool + 344LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 348LL)), 92); else cstack.push(env->CallIntMethod(cstack.fetchref(-1), (cmethods[9]))); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 267LL)), ((char *)(string_pool + 277LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 92); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[2]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        cstack.push(clocals.get(4));
        cstack.popcnt(2); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 370LL)), ((char *)(string_pool + 374LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 396LL)), 92); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[8]), (jint) cstack.fetch(-2))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (cstack.fetchref(0) != nullptr && !env->IsInstanceOf(cstack.fetchref(0), (cclasses[3]))) { utils::throw_re(env, ((char *)(string_pool + 427LL)), (std::string(((char *)(string_pool + 456LL))) + std::string(((char *)(string_pool + 421LL)))).c_str(), 92); cstack.clear(); cstack.pushref(env->ExceptionOccurred()); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        cstack.popcnt(1); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[10]) { cmethods[10] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 477LL)), ((char *)(string_pool + 344LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 348LL)), 92); else cstack.push(env->CallIntMethod(cstack.fetchref(-1), (cmethods[10]))); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        if (cstack.pop() != cstack.pop()) goto L1183888521;
        L2041605291: if (env->ExceptionCheck()) { return (jobject) 0; }
        // L 93:
        cstack.push(0);
        if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { cclasses_mtx[8].lock(); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 839LL)))) { cclasses[8] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[8].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[16]) { cmethods[16] = env->GetStaticMethodID((cclasses[8]), ((char *)(string_pool + 854LL)), ((char *)(string_pool + 861LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } cstack.push2(utils::cdl(env->CallStaticDoubleMethod((cclasses[8]), (cmethods[16])))); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        cstack.push2(utils::cdl(19.0));
        cstack.set2(1, utils::cdl(utils::cld(cstack.fetch2(1)) * utils::cld(cstack.fetch2(0)))); cstack.popcnt(2);
        cstack.push(utils::cast_di(utils::cld(cstack.pop2())));
        cstack.set(1, cstack.fetch(1) + cstack.fetch(0)); cstack.popcnt(1);
        clocals.set(2, cstack.pop());
        L1052245076: if (env->ExceptionCheck()) { return (jobject) 0; }
        // L 94:
        cstack.push(0);
        if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { cclasses_mtx[8].lock(); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 839LL)))) { cclasses[8] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[8].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[16]) { cmethods[16] = env->GetStaticMethodID((cclasses[8]), ((char *)(string_pool + 854LL)), ((char *)(string_pool + 861LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } cstack.push2(utils::cdl(env->CallStaticDoubleMethod((cclasses[8]), (cmethods[16])))); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        cstack.push2(utils::cdl(19.0));
        cstack.set2(1, utils::cdl(utils::cld(cstack.fetch2(1)) * utils::cld(cstack.fetch2(0)))); cstack.popcnt(2);
        cstack.push(utils::cast_di(utils::cld(cstack.pop2())));
        cstack.set(1, cstack.fetch(1) + cstack.fetch(0)); cstack.popcnt(1);
        clocals.set(3, cstack.pop());
        L2136288211: if (env->ExceptionCheck()) { return (jobject) 0; }
        // L 95:
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (jobject obj = env->AllocObject((cclasses[3]))) { cstack.pushref(obj); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        memmove(&cstack.data[cstack.sptr - 0], &cstack.data[cstack.sptr - 1], 1 * sizeof(cstack.data[0])); memmove(&cstack.data[cstack.sptr - 1], &cstack.data[cstack.sptr], 1 * sizeof(cstack.data[0]));    
        memmove(&cstack.refs[cstack.sptr - 0], &cstack.refs[cstack.sptr - 1], 1 * sizeof(cstack.refs[0])); memmove(&cstack.refs[cstack.sptr - 1], &cstack.refs[cstack.sptr], 1 * sizeof(cstack.refs[0]));
        cstack.sptr++;
        cstack.push(clocals.get(2));
        cstack.push(clocals.get(3));
        cstack.popcnt(3); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[17]) { cmethods[17] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 865LL)), ((char *)(string_pool + 872LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 92LL)), 95); else env->CallNonvirtualVoidMethod(cstack.fetchref(-1), (cclasses[3]), (cmethods[17]), (jint) cstack.fetch(-2), (jint) cstack.fetch(-3)); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        clocals.setref(1, cstack.popref()); refs.insert(clocals.getref(1));
        L1008925772: if (env->ExceptionCheck()) { return (jobject) 0; }
        // L 96:
        cstack.push(0);
        clocals.set(4, cstack.pop());
        L1183888521: if (env->ExceptionCheck()) { return (jobject) 0; }
        // L 91:
        refs.erase(clocals.refs[0]); refs.erase(clocals.refs[1]); 
        utils::clear_refs(env, refs);
        clocals.set(4, clocals.get(4) + 1);
        L70807318: if (env->ExceptionCheck()) { return (jobject) 0; }
        refs.erase(clocals.refs[0]); refs.erase(clocals.refs[1]); 
        utils::clear_refs(env, refs);
        cstack.push(clocals.get(4));
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 267LL)), ((char *)(string_pool + 277LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 91); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[2]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        cstack.popcnt(1); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (jobject) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 339LL)), ((char *)(string_pool + 344LL))); if (env->ExceptionCheck()) { return (jobject) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 348LL)), 91); else cstack.push(env->CallIntMethod(cstack.fetchref(-1), (cmethods[7]))); 
        if (env->ExceptionCheck()) { return (jobject) 0; }
        cstack.push(1);
        cstack.set(1, cstack.fetch(1) - cstack.fetch(0)); cstack.popcnt(1);
        if (cstack.pop() >= cstack.pop()) goto L910091170;
        L1175259735: if (env->ExceptionCheck()) { return (jobject) 0; }
        // L 99:
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        return (jobject) cstack.popref();
        L1205406622: if (env->ExceptionCheck()) { return (jobject) 0; }
        return (jobject) 0;
    }
    
    // moveInterne(I)V
    void JNICALL __ngen_native_moveInterne7(JNIEnv *env, jobject obj, jint arg0) {
        utils::jvm_stack<5> cstack;
        utils::local_vars<2> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
        clocals.set(1, arg0);
    
        L293907205: if (env->ExceptionCheck()) { return (void) 0; }
        // L 105:
        cstack.push(clocals.get(1));
        switch (cstack.pop()) {
            case 1: goto L988800485; break;
            case 2: goto L345902941; break;
            case 3: goto L454325163; break;
            case 4: goto L796667727; break;
            default: goto L1794717576; break;
        }
        L796667727: if (env->ExceptionCheck()) { return (void) 0; }
        // L 107:
        refs.erase(clocals.refs[0]); 
        utils::clear_refs(env, refs);
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[10]) { cfields[10] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 878LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 107); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[10]) { cfields[10] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 878LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 107); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[5]) { cfields[5] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 534LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 107); else cstack.push(env->GetIntField(cstack.popref(), (cfields[5]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[10]) { cfields[10] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 878LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 107); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[4]) { cfields[4] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 515LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 107); else cstack.push(env->GetIntField(cstack.popref(), (cfields[4]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(1);
        cstack.set(1, cstack.fetch(1) + cstack.fetch(0)); cstack.popcnt(1);
        cstack.push(20);
        if (cstack.fetch(0) == 0) utils::throw_re(env, ((char *)(string_pool + 891LL)), ((char *)(string_pool + 921LL)), 107); else { cstack.set(1, cstack.fetch(1) % cstack.fetch(0)); cstack.popcnt(1); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(3); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[18]) { cmethods[18] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 933LL)), ((char *)(string_pool + 872LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 244LL)), 107); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[18]), (jint) cstack.fetch(-2), (jint) cstack.fetch(-3)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L251210093: if (env->ExceptionCheck()) { return (void) 0; }
        // L 108:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 267LL)), ((char *)(string_pool + 277LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 108); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[2]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (jobject obj = env->AllocObject((cclasses[3]))) { cstack.pushref(obj); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        memmove(&cstack.data[cstack.sptr - 0], &cstack.data[cstack.sptr - 1], 1 * sizeof(cstack.data[0])); memmove(&cstack.data[cstack.sptr - 1], &cstack.data[cstack.sptr], 1 * sizeof(cstack.data[0]));    
        memmove(&cstack.refs[cstack.sptr - 0], &cstack.refs[cstack.sptr - 1], 1 * sizeof(cstack.refs[0])); memmove(&cstack.refs[cstack.sptr - 1], &cstack.refs[cstack.sptr], 1 * sizeof(cstack.refs[0]));
        cstack.sptr++;
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[10]) { cfields[10] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 878LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 108); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[5]) { cfields[5] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 534LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 108); else cstack.push(env->GetIntField(cstack.popref(), (cfields[5]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[10]) { cfields[10] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 878LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 108); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[4]) { cfields[4] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 515LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 108); else cstack.push(env->GetIntField(cstack.popref(), (cfields[4]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(3); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[17]) { cmethods[17] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 865LL)), ((char *)(string_pool + 872LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 92LL)), 108); else env->CallNonvirtualVoidMethod(cstack.fetchref(-1), (cclasses[3]), (cmethods[17]), (jint) cstack.fetch(-2), (jint) cstack.fetch(-3)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(2); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[19]) { cmethods[19] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 944LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 970LL)), 108); else cstack.push(env->CallBooleanMethod(cstack.fetchref(-1), (cmethods[19]), (jobject) cstack.fetchref(-2))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pop();
        L919112242: if (env->ExceptionCheck()) { return (void) 0; }
        // L 109:
        goto L1794717576;
        L454325163: if (env->ExceptionCheck()) { return (void) 0; }
        // L 111:
        refs.erase(clocals.refs[0]); 
        utils::clear_refs(env, refs);
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[10]) { cfields[10] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 878LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 111); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[4]) { cfields[4] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 515LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 111); else cstack.push(env->GetIntField(cstack.popref(), (cfields[4]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(1);
        cstack.set(1, cstack.fetch(1) - cstack.fetch(0)); cstack.popcnt(1);
        if (cstack.pop() >= 0) goto L2021707251;
        L1541857308: if (env->ExceptionCheck()) { return (void) 0; }
        // L 112:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[10]) { cfields[10] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 878LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 112); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[10]) { cfields[10] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 878LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 112); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[5]) { cfields[5] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 534LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 112); else cstack.push(env->GetIntField(cstack.popref(), (cfields[5]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(19);
        cstack.popcnt(3); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[18]) { cmethods[18] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 933LL)), ((char *)(string_pool + 872LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 244LL)), 112); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[18]), (jint) cstack.fetch(-2), (jint) cstack.fetch(-3)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L479397964: if (env->ExceptionCheck()) { return (void) 0; }
        // L 113:
        goto L1861781750;
        L2021707251: if (env->ExceptionCheck()) { return (void) 0; }
        // L 115:
        refs.erase(clocals.refs[0]); 
        utils::clear_refs(env, refs);
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[10]) { cfields[10] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 878LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 115); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[10]) { cfields[10] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 878LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 115); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[5]) { cfields[5] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 534LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 115); else cstack.push(env->GetIntField(cstack.popref(), (cfields[5]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[10]) { cfields[10] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 878LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 115); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[4]) { cfields[4] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 515LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 115); else cstack.push(env->GetIntField(cstack.popref(), (cfields[4]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(1);
        cstack.set(1, cstack.fetch(1) - cstack.fetch(0)); cstack.popcnt(1);
        cstack.popcnt(1); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { cclasses_mtx[8].lock(); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 839LL)))) { cclasses[8] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[8].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[20]) { cmethods[20] = env->GetStaticMethodID((cclasses[8]), ((char *)(string_pool + 996LL)), ((char *)(string_pool + 1000LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack.push(env->CallStaticIntMethod((cclasses[8]), (cmethods[20]), (jint) cstack.fetch(-1))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(20);
        if (cstack.fetch(0) == 0) utils::throw_re(env, ((char *)(string_pool + 891LL)), ((char *)(string_pool + 921LL)), 115); else { cstack.set(1, cstack.fetch(1) % cstack.fetch(0)); cstack.popcnt(1); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(3); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[18]) { cmethods[18] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 933LL)), ((char *)(string_pool + 872LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 244LL)), 115); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[18]), (jint) cstack.fetch(-2), (jint) cstack.fetch(-3)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1861781750: if (env->ExceptionCheck()) { return (void) 0; }
        // L 117:
        refs.erase(clocals.refs[0]); 
        utils::clear_refs(env, refs);
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 267LL)), ((char *)(string_pool + 277LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 117); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[2]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (jobject obj = env->AllocObject((cclasses[3]))) { cstack.pushref(obj); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        memmove(&cstack.data[cstack.sptr - 0], &cstack.data[cstack.sptr - 1], 1 * sizeof(cstack.data[0])); memmove(&cstack.data[cstack.sptr - 1], &cstack.data[cstack.sptr], 1 * sizeof(cstack.data[0]));    
        memmove(&cstack.refs[cstack.sptr - 0], &cstack.refs[cstack.sptr - 1], 1 * sizeof(cstack.refs[0])); memmove(&cstack.refs[cstack.sptr - 1], &cstack.refs[cstack.sptr], 1 * sizeof(cstack.refs[0]));
        cstack.sptr++;
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[10]) { cfields[10] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 878LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 117); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[5]) { cfields[5] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 534LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 117); else cstack.push(env->GetIntField(cstack.popref(), (cfields[5]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[10]) { cfields[10] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 878LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 117); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[4]) { cfields[4] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 515LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 117); else cstack.push(env->GetIntField(cstack.popref(), (cfields[4]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(3); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[17]) { cmethods[17] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 865LL)), ((char *)(string_pool + 872LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 92LL)), 117); else env->CallNonvirtualVoidMethod(cstack.fetchref(-1), (cclasses[3]), (cmethods[17]), (jint) cstack.fetch(-2), (jint) cstack.fetch(-3)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(2); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[19]) { cmethods[19] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 944LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 970LL)), 117); else cstack.push(env->CallBooleanMethod(cstack.fetchref(-1), (cmethods[19]), (jobject) cstack.fetchref(-2))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pop();
        L283717519: if (env->ExceptionCheck()) { return (void) 0; }
        // L 118:
        goto L1794717576;
        L345902941: if (env->ExceptionCheck()) { return (void) 0; }
        // L 120:
        refs.erase(clocals.refs[0]); 
        utils::clear_refs(env, refs);
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[10]) { cfields[10] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 878LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 120); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[5]) { cfields[5] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 534LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 120); else cstack.push(env->GetIntField(cstack.popref(), (cfields[5]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(1);
        cstack.set(1, cstack.fetch(1) - cstack.fetch(0)); cstack.popcnt(1);
        if (cstack.pop() >= 0) goto L2095303566;
        L2025221430: if (env->ExceptionCheck()) { return (void) 0; }
        // L 121:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[10]) { cfields[10] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 878LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 121); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(19);
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[10]) { cfields[10] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 878LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 121); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[4]) { cfields[4] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 515LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 121); else cstack.push(env->GetIntField(cstack.popref(), (cfields[4]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(3); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[18]) { cmethods[18] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 933LL)), ((char *)(string_pool + 872LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 244LL)), 121); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[18]), (jint) cstack.fetch(-2), (jint) cstack.fetch(-3)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1378084334: if (env->ExceptionCheck()) { return (void) 0; }
        // L 122:
        goto L200224114;
        L2095303566: if (env->ExceptionCheck()) { return (void) 0; }
        // L 124:
        refs.erase(clocals.refs[0]); 
        utils::clear_refs(env, refs);
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[10]) { cfields[10] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 878LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 124); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[10]) { cfields[10] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 878LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 124); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[5]) { cfields[5] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 534LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 124); else cstack.push(env->GetIntField(cstack.popref(), (cfields[5]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(1);
        cstack.set(1, cstack.fetch(1) - cstack.fetch(0)); cstack.popcnt(1);
        cstack.popcnt(1); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { cclasses_mtx[8].lock(); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 839LL)))) { cclasses[8] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[8].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[20]) { cmethods[20] = env->GetStaticMethodID((cclasses[8]), ((char *)(string_pool + 996LL)), ((char *)(string_pool + 1000LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack.push(env->CallStaticIntMethod((cclasses[8]), (cmethods[20]), (jint) cstack.fetch(-1))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(20);
        if (cstack.fetch(0) == 0) utils::throw_re(env, ((char *)(string_pool + 891LL)), ((char *)(string_pool + 921LL)), 124); else { cstack.set(1, cstack.fetch(1) % cstack.fetch(0)); cstack.popcnt(1); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[10]) { cfields[10] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 878LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 124); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[4]) { cfields[4] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 515LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 124); else cstack.push(env->GetIntField(cstack.popref(), (cfields[4]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(3); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[18]) { cmethods[18] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 933LL)), ((char *)(string_pool + 872LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 244LL)), 124); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[18]), (jint) cstack.fetch(-2), (jint) cstack.fetch(-3)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L200224114: if (env->ExceptionCheck()) { return (void) 0; }
        // L 126:
        refs.erase(clocals.refs[0]); 
        utils::clear_refs(env, refs);
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 267LL)), ((char *)(string_pool + 277LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 126); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[2]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (jobject obj = env->AllocObject((cclasses[3]))) { cstack.pushref(obj); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        memmove(&cstack.data[cstack.sptr - 0], &cstack.data[cstack.sptr - 1], 1 * sizeof(cstack.data[0])); memmove(&cstack.data[cstack.sptr - 1], &cstack.data[cstack.sptr], 1 * sizeof(cstack.data[0]));    
        memmove(&cstack.refs[cstack.sptr - 0], &cstack.refs[cstack.sptr - 1], 1 * sizeof(cstack.refs[0])); memmove(&cstack.refs[cstack.sptr - 1], &cstack.refs[cstack.sptr], 1 * sizeof(cstack.refs[0]));
        cstack.sptr++;
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[10]) { cfields[10] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 878LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 126); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[5]) { cfields[5] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 534LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 126); else cstack.push(env->GetIntField(cstack.popref(), (cfields[5]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[10]) { cfields[10] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 878LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 126); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[4]) { cfields[4] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 515LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 126); else cstack.push(env->GetIntField(cstack.popref(), (cfields[4]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(3); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[17]) { cmethods[17] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 865LL)), ((char *)(string_pool + 872LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 92LL)), 126); else env->CallNonvirtualVoidMethod(cstack.fetchref(-1), (cclasses[3]), (cmethods[17]), (jint) cstack.fetch(-2), (jint) cstack.fetch(-3)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(2); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[19]) { cmethods[19] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 944LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 970LL)), 126); else cstack.push(env->CallBooleanMethod(cstack.fetchref(-1), (cmethods[19]), (jobject) cstack.fetchref(-2))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pop();
        L1773283386: if (env->ExceptionCheck()) { return (void) 0; }
        // L 128:
        goto L1794717576;
        L988800485: if (env->ExceptionCheck()) { return (void) 0; }
        // L 130:
        refs.erase(clocals.refs[0]); 
        utils::clear_refs(env, refs);
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[10]) { cfields[10] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 878LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 130); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[10]) { cfields[10] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 878LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 130); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[5]) { cfields[5] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 534LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 130); else cstack.push(env->GetIntField(cstack.popref(), (cfields[5]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(1);
        cstack.set(1, cstack.fetch(1) + cstack.fetch(0)); cstack.popcnt(1);
        cstack.popcnt(1); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { cclasses_mtx[8].lock(); if (!cclasses[8] || env->IsSameObject(cclasses[8], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 839LL)))) { cclasses[8] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[8].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[20]) { cmethods[20] = env->GetStaticMethodID((cclasses[8]), ((char *)(string_pool + 996LL)), ((char *)(string_pool + 1000LL))); if (env->ExceptionCheck()) { return (void) 0; }  } cstack.push(env->CallStaticIntMethod((cclasses[8]), (cmethods[20]), (jint) cstack.fetch(-1))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(20);
        if (cstack.fetch(0) == 0) utils::throw_re(env, ((char *)(string_pool + 891LL)), ((char *)(string_pool + 921LL)), 130); else { cstack.set(1, cstack.fetch(1) % cstack.fetch(0)); cstack.popcnt(1); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[10]) { cfields[10] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 878LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 130); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[4]) { cfields[4] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 515LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 130); else cstack.push(env->GetIntField(cstack.popref(), (cfields[4]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(3); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[18]) { cmethods[18] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 933LL)), ((char *)(string_pool + 872LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 244LL)), 130); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[18]), (jint) cstack.fetch(-2), (jint) cstack.fetch(-3)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L581318631: if (env->ExceptionCheck()) { return (void) 0; }
        // L 131:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 267LL)), ((char *)(string_pool + 277LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 131); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[2]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (jobject obj = env->AllocObject((cclasses[3]))) { cstack.pushref(obj); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        memmove(&cstack.data[cstack.sptr - 0], &cstack.data[cstack.sptr - 1], 1 * sizeof(cstack.data[0])); memmove(&cstack.data[cstack.sptr - 1], &cstack.data[cstack.sptr], 1 * sizeof(cstack.data[0]));    
        memmove(&cstack.refs[cstack.sptr - 0], &cstack.refs[cstack.sptr - 1], 1 * sizeof(cstack.refs[0])); memmove(&cstack.refs[cstack.sptr - 1], &cstack.refs[cstack.sptr], 1 * sizeof(cstack.refs[0]));
        cstack.sptr++;
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[10]) { cfields[10] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 878LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 131); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[5]) { cfields[5] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 534LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 131); else cstack.push(env->GetIntField(cstack.popref(), (cfields[5]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[10]) { cfields[10] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 878LL)), ((char *)(string_pool + 507LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 131); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[10]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[4]) { cfields[4] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 515LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 131); else cstack.push(env->GetIntField(cstack.popref(), (cfields[4]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(3); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[17]) { cmethods[17] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 865LL)), ((char *)(string_pool + 872LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 92LL)), 131); else env->CallNonvirtualVoidMethod(cstack.fetchref(-1), (cclasses[3]), (cmethods[17]), (jint) cstack.fetch(-2), (jint) cstack.fetch(-3)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(2); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[19]) { cmethods[19] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 944LL)), ((char *)(string_pool + 948LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 970LL)), 131); else cstack.push(env->CallBooleanMethod(cstack.fetchref(-1), (cmethods[19]), (jobject) cstack.fetchref(-2))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pop();
        L1794717576: if (env->ExceptionCheck()) { return (void) 0; }
        // L 134:
        refs.erase(clocals.refs[0]); 
        utils::clear_refs(env, refs);
        return;
        L1877453512: if (env->ExceptionCheck()) { return (void) 0; }
        return (void) 0;
    }
    
    // moveExterne()V
    void JNICALL __ngen_native_moveExterne8(JNIEnv *env, jobject obj) {
        utils::jvm_stack<2> cstack;
        utils::local_vars<5> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
    
        L487694075: if (env->ExceptionCheck()) { return (void) 0; }
        // L 138:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 267LL)), ((char *)(string_pool + 277LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 138); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[2]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(1); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[21]) { cmethods[21] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 1005LL)), ((char *)(string_pool + 1014LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 396LL)), 138); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[21]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        clocals.setref(2, cstack.popref()); refs.insert(clocals.getref(2));
        goto L1704629915;
        L1989184704: if (env->ExceptionCheck()) { return (void) 0; }
        refs.erase(clocals.refs[0]); refs.erase(clocals.refs[2]); 
        utils::clear_refs(env, refs);
        cstack.pushref(clocals.getref(2)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { cclasses_mtx[9].lock(); if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1037LL)))) { cclasses[9] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[9].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[22]) { cmethods[22] = env->GetMethodID((cclasses[9]), ((char *)(string_pool + 1056LL)), ((char *)(string_pool + 1061LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 1082LL)), 138); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[22]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack.fetchref(0) != nullptr && !env->IsInstanceOf(cstack.fetchref(0), (cclasses[3]))) { utils::throw_re(env, ((char *)(string_pool + 427LL)), (std::string(((char *)(string_pool + 456LL))) + std::string(((char *)(string_pool + 421LL)))).c_str(), 138); cstack.clear(); cstack.pushref(env->ExceptionOccurred()); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        clocals.setref(1, cstack.popref()); refs.insert(clocals.getref(1));
        L611572016: if (env->ExceptionCheck()) { return (void) 0; }
        // L 139:
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[9]) { cmethods[9] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 472LL)), ((char *)(string_pool + 344LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 348LL)), 139); else cstack.push(env->CallIntMethod(cstack.fetchref(-1), (cmethods[9]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        clocals.set(3, cstack.pop());
        L889486595: if (env->ExceptionCheck()) { return (void) 0; }
        // L 140:
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[10]) { cmethods[10] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 477LL)), ((char *)(string_pool + 344LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 348LL)), 140); else cstack.push(env->CallIntMethod(cstack.fetchref(-1), (cmethods[10]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        clocals.set(4, cstack.pop());
        L77269878: if (env->ExceptionCheck()) { return (void) 0; }
        // L 141:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[8]) { cfields[8] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 753LL)), ((char *)(string_pool + 277LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 141); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[8]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(clocals.get(4));
        cstack.popcnt(2); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 370LL)), ((char *)(string_pool + 374LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 396LL)), 141); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[8]), (jint) cstack.fetch(-2))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack.fetchref(0) != nullptr && !env->IsInstanceOf(cstack.fetchref(0), (cclasses[2]))) { utils::throw_re(env, ((char *)(string_pool + 427LL)), (std::string(((char *)(string_pool + 456LL))) + std::string(((char *)(string_pool + 761LL)))).c_str(), 141); cstack.clear(); cstack.pushref(env->ExceptionOccurred()); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(clocals.get(3));
        cstack.popcnt(2); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 370LL)), ((char *)(string_pool + 374LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 396LL)), 141); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[8]), (jint) cstack.fetch(-2))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 781LL)))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack.fetchref(0) != nullptr && !env->IsInstanceOf(cstack.fetchref(0), (cclasses[6]))) { utils::throw_re(env, ((char *)(string_pool + 427LL)), (std::string(((char *)(string_pool + 456LL))) + std::string(((char *)(string_pool + 781LL)))).c_str(), 141); cstack.clear(); cstack.pushref(env->ExceptionOccurred()); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(1); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 781LL)))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[23]) { cmethods[23] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 1109LL)), ((char *)(string_pool + 4LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 244LL)), 141); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[23])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1990160809: if (env->ExceptionCheck()) { return (void) 0; }
        // L 142:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[8]) { cfields[8] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 753LL)), ((char *)(string_pool + 277LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 142); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[8]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(clocals.get(4));
        cstack.popcnt(2); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 370LL)), ((char *)(string_pool + 374LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 396LL)), 142); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[8]), (jint) cstack.fetch(-2))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack.fetchref(0) != nullptr && !env->IsInstanceOf(cstack.fetchref(0), (cclasses[2]))) { utils::throw_re(env, ((char *)(string_pool + 427LL)), (std::string(((char *)(string_pool + 456LL))) + std::string(((char *)(string_pool + 761LL)))).c_str(), 142); cstack.clear(); cstack.pushref(env->ExceptionOccurred()); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(clocals.get(3));
        cstack.popcnt(2); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 370LL)), ((char *)(string_pool + 374LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 396LL)), 142); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[8]), (jint) cstack.fetch(-2))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 781LL)))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack.fetchref(0) != nullptr && !env->IsInstanceOf(cstack.fetchref(0), (cclasses[6]))) { utils::throw_re(env, ((char *)(string_pool + 427LL)), (std::string(((char *)(string_pool + 456LL))) + std::string(((char *)(string_pool + 781LL)))).c_str(), 142); cstack.clear(); cstack.pushref(env->ExceptionOccurred()); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[6]  || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 781LL)))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[9]) { cfields[9] = env->GetFieldID((cclasses[6]), ((char *)(string_pool + 794LL)), ((char *)(string_pool + 801LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 142); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[9]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(0);
        cstack.popcnt(2); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 816LL)))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[15]) { cmethods[15] = env->GetMethodID((cclasses[7]), ((char *)(string_pool + 829LL)), ((char *)(string_pool + 56LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 244LL)), 142); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[15]), (jint) cstack.fetch(-2)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1704629915: if (env->ExceptionCheck()) { return (void) 0; }
        // L 138:
        refs.erase(clocals.refs[0]); refs.erase(clocals.refs[2]); 
        utils::clear_refs(env, refs);
        cstack.pushref(clocals.getref(2)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { cclasses_mtx[9].lock(); if (!cclasses[9] || env->IsSameObject(cclasses[9], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1037LL)))) { cclasses[9] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[9].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[24]) { cmethods[24] = env->GetMethodID((cclasses[9]), ((char *)(string_pool + 1121LL)), ((char *)(string_pool + 1129LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 1133LL)), 138); else cstack.push(env->CallBooleanMethod(cstack.fetchref(-1), (cmethods[24]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (cstack.pop() != 0) goto L1989184704;
        L1285524499: if (env->ExceptionCheck()) { return (void) 0; }
        // L 145:
        return;
        L1524960486: if (env->ExceptionCheck()) { return (void) 0; }
        return (void) 0;
    }
    
    // deleteTail()V
    void JNICALL __ngen_native_deleteTail9(JNIEnv *env, jobject obj) {
        utils::jvm_stack<2> cstack;
        utils::local_vars<4> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
    
        L117009527: if (env->ExceptionCheck()) { return (void) 0; }
        // L 150:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[7]) { cfields[7] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 629LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 150); else cstack.push(env->GetIntField(cstack.popref(), (cfields[7]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        clocals.set(1, cstack.pop());
        L199640888: if (env->ExceptionCheck()) { return (void) 0; }
        // L 151:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 267LL)), ((char *)(string_pool + 277LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 151); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[2]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(1); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 339LL)), ((char *)(string_pool + 344LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 348LL)), 151); else cstack.push(env->CallIntMethod(cstack.fetchref(-1), (cmethods[7]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(1);
        cstack.set(1, cstack.fetch(1) - cstack.fetch(0)); cstack.popcnt(1);
        clocals.set(2, cstack.pop());
        L1000975683: if (env->ExceptionCheck()) { return (void) 0; }
        goto L1238959340;
        L76432244: if (env->ExceptionCheck()) { return (void) 0; }
        // L 152:
        refs.erase(clocals.refs[0]); 
        utils::clear_refs(env, refs);
        cstack.push(clocals.get(1));
        if (cstack.pop() != 0) goto L1030228826;
        L1264413185: if (env->ExceptionCheck()) { return (void) 0; }
        // L 153:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 267LL)), ((char *)(string_pool + 277LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 153); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[2]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(clocals.get(2));
        cstack.popcnt(2); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 370LL)), ((char *)(string_pool + 374LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 396LL)), 153); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[8]), (jint) cstack.fetch(-2))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack.fetchref(0) != nullptr && !env->IsInstanceOf(cstack.fetchref(0), (cclasses[3]))) { utils::throw_re(env, ((char *)(string_pool + 427LL)), (std::string(((char *)(string_pool + 456LL))) + std::string(((char *)(string_pool + 421LL)))).c_str(), 153); cstack.clear(); cstack.pushref(env->ExceptionOccurred()); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        clocals.setref(3, cstack.popref()); refs.insert(clocals.getref(3));
        L1243806178: if (env->ExceptionCheck()) { return (void) 0; }
        // L 154:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[8]) { cfields[8] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 753LL)), ((char *)(string_pool + 277LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 154); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[8]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(3)); refs.insert(cstack.fetchref(0));
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[4]) { cfields[4] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 515LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 154); else cstack.push(env->GetIntField(cstack.popref(), (cfields[4]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(2); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 370LL)), ((char *)(string_pool + 374LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 396LL)), 154); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[8]), (jint) cstack.fetch(-2))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack.fetchref(0) != nullptr && !env->IsInstanceOf(cstack.fetchref(0), (cclasses[2]))) { utils::throw_re(env, ((char *)(string_pool + 427LL)), (std::string(((char *)(string_pool + 456LL))) + std::string(((char *)(string_pool + 761LL)))).c_str(), 154); cstack.clear(); cstack.pushref(env->ExceptionOccurred()); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(3)); refs.insert(cstack.fetchref(0));
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[5]) { cfields[5] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 534LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 154); else cstack.push(env->GetIntField(cstack.popref(), (cfields[5]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(2); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 370LL)), ((char *)(string_pool + 374LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 396LL)), 154); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[8]), (jint) cstack.fetch(-2))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 781LL)))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack.fetchref(0) != nullptr && !env->IsInstanceOf(cstack.fetchref(0), (cclasses[6]))) { utils::throw_re(env, ((char *)(string_pool + 427LL)), (std::string(((char *)(string_pool + 456LL))) + std::string(((char *)(string_pool + 781LL)))).c_str(), 154); cstack.clear(); cstack.pushref(env->ExceptionOccurred()); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[6]  || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 781LL)))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[9]) { cfields[9] = env->GetFieldID((cclasses[6]), ((char *)(string_pool + 794LL)), ((char *)(string_pool + 801LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 154); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[9]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(2);
        cstack.popcnt(2); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { cclasses_mtx[7].lock(); if (!cclasses[7] || env->IsSameObject(cclasses[7], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 816LL)))) { cclasses[7] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[7].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[15]) { cmethods[15] = env->GetMethodID((cclasses[7]), ((char *)(string_pool + 829LL)), ((char *)(string_pool + 56LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 244LL)), 154); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[15]), (jint) cstack.fetch(-2)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1010931249: if (env->ExceptionCheck()) { return (void) 0; }
        // L 155:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[8]) { cfields[8] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 753LL)), ((char *)(string_pool + 277LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 155); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[8]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(3)); refs.insert(cstack.fetchref(0));
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[4]) { cfields[4] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 515LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 155); else cstack.push(env->GetIntField(cstack.popref(), (cfields[4]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(2); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 370LL)), ((char *)(string_pool + 374LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 396LL)), 155); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[8]), (jint) cstack.fetch(-2))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack.fetchref(0) != nullptr && !env->IsInstanceOf(cstack.fetchref(0), (cclasses[2]))) { utils::throw_re(env, ((char *)(string_pool + 427LL)), (std::string(((char *)(string_pool + 456LL))) + std::string(((char *)(string_pool + 761LL)))).c_str(), 155); cstack.clear(); cstack.pushref(env->ExceptionOccurred()); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pushref(clocals.getref(3)); refs.insert(cstack.fetchref(0));
        if (!cclasses[3]  || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 421LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[5]) { cfields[5] = env->GetFieldID((cclasses[3]), ((char *)(string_pool + 534LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 155); else cstack.push(env->GetIntField(cstack.popref(), (cfields[5]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(2); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[8]) { cmethods[8] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 370LL)), ((char *)(string_pool + 374LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 396LL)), 155); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[8]), (jint) cstack.fetch(-2))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 781LL)))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (cstack.fetchref(0) != nullptr && !env->IsInstanceOf(cstack.fetchref(0), (cclasses[6]))) { utils::throw_re(env, ((char *)(string_pool + 427LL)), (std::string(((char *)(string_pool + 456LL))) + std::string(((char *)(string_pool + 781LL)))).c_str(), 155); cstack.clear(); cstack.pushref(env->ExceptionOccurred()); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(1); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { cclasses_mtx[6].lock(); if (!cclasses[6] || env->IsSameObject(cclasses[6], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 781LL)))) { cclasses[6] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[6].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[23]) { cmethods[23] = env->GetMethodID((cclasses[6]), ((char *)(string_pool + 1109LL)), ((char *)(string_pool + 4LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 244LL)), 155); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[23])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1099855928: if (env->ExceptionCheck()) { return (void) 0; }
        // L 156:
        goto L1629687658;
        L1030228826: if (env->ExceptionCheck()) { return (void) 0; }
        // L 158:
        refs.erase(clocals.refs[0]); 
        utils::clear_refs(env, refs);
        clocals.set(1, clocals.get(1) + -1);
        L1629687658: if (env->ExceptionCheck()) { return (void) 0; }
        // L 151:
        refs.erase(clocals.refs[0]); 
        utils::clear_refs(env, refs);
        clocals.set(2, clocals.get(2) + -1);
        L1238959340: if (env->ExceptionCheck()) { return (void) 0; }
        refs.erase(clocals.refs[0]); 
        utils::clear_refs(env, refs);
        cstack.push(clocals.get(2));
        if (cstack.pop() >= 0) goto L76432244;
        L1007880005: if (env->ExceptionCheck()) { return (void) 0; }
        // L 161:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[7]) { cfields[7] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 629LL)), ((char *)(string_pool + 42LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 517LL)), 161); else cstack.push(env->GetIntField(cstack.popref(), (cfields[7]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        clocals.set(1, cstack.pop());
        L215219944: if (env->ExceptionCheck()) { return (void) 0; }
        // L 162:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 267LL)), ((char *)(string_pool + 277LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 162); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[2]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.popcnt(1); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[7]) { cmethods[7] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 339LL)), ((char *)(string_pool + 344LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 348LL)), 162); else cstack.push(env->CallIntMethod(cstack.fetchref(-1), (cmethods[7]))); 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(1);
        cstack.set(1, cstack.fetch(1) - cstack.fetch(0)); cstack.popcnt(1);
        clocals.set(2, cstack.pop());
        L1043208434: if (env->ExceptionCheck()) { return (void) 0; }
        goto L1192171522;
        L1661081225: if (env->ExceptionCheck()) { return (void) 0; }
        // L 163:
        refs.erase(clocals.refs[0]); 
        utils::clear_refs(env, refs);
        cstack.push(clocals.get(1));
        if (cstack.pop() != 0) goto L1882554559;
        L1049817027: if (env->ExceptionCheck()) { return (void) 0; }
        // L 164:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[0]  || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 8LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[0]), ((char *)(string_pool + 267LL)), ((char *)(string_pool + 277LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 164); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[2]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(clocals.get(2));
        cstack.popcnt(2); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 319LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[25]) { cmethods[25] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 1161LL)), ((char *)(string_pool + 374LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 396LL)), 164); else { cstack.pushref(env->CallObjectMethod(cstack.fetchref(-1), (cmethods[25]), (jint) cstack.fetch(-2))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.pop();
        L23211803: if (env->ExceptionCheck()) { return (void) 0; }
        // L 165:
        goto L1923598304;
        L1882554559: if (env->ExceptionCheck()) { return (void) 0; }
        // L 167:
        refs.erase(clocals.refs[0]); 
        utils::clear_refs(env, refs);
        clocals.set(1, clocals.get(1) + -1);
        L1923598304: if (env->ExceptionCheck()) { return (void) 0; }
        // L 162:
        refs.erase(clocals.refs[0]); 
        utils::clear_refs(env, refs);
        clocals.set(2, clocals.get(2) + -1);
        L1192171522: if (env->ExceptionCheck()) { return (void) 0; }
        refs.erase(clocals.refs[0]); 
        utils::clear_refs(env, refs);
        cstack.push(clocals.get(2));
        if (cstack.pop() >= 0) goto L1661081225;
        L776700275: if (env->ExceptionCheck()) { return (void) 0; }
        // L 170:
        return;
        L118394766: if (env->ExceptionCheck()) { return (void) 0; }
        return (void) 0;
    }
    
    // <clinit>()V
    void JNICALL __ngen_YumeCloudObfInit10(JNIEnv *env, jclass clazz) {
        std::unordered_set<jobject> refs;
    
    
        return (void) 0;
    }
    
    
    void __ngen_register_methods(JNIEnv *env, jclass clazz) {
        string_pool = string_pool::get_pool();

        if (jstring str = env->NewStringUTF(((char *)(string_pool + 1187LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[1] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }
        if (jstring str = env->NewStringUTF(((char *)(string_pool + 1199LL)))) { if (jstring int_str = utils::get_interned(env, str)) { cstrings[0] = (jstring) env->NewGlobalRef(int_str); env->DeleteLocalRef(str); env->DeleteLocalRef(int_str); } }

        JNINativeMethod __ngen_methods[] = {
            { (char *)((char *)(string_pool + 0LL)), (char *)((char *)(string_pool + 4LL)), (void *)&__ngen_native_run1 },
            { (char *)((char *)(string_pool + 153LL)), (char *)((char *)(string_pool + 4LL)), (void *)&__ngen_native_pauser2 },
            { (char *)((char *)(string_pool + 115LL)), (char *)((char *)(string_pool + 4LL)), (void *)&__ngen_native_checkCollision3 },
            { (char *)((char *)(string_pool + 482LL)), (char *)((char *)(string_pool + 4LL)), (void *)&__ngen_native_stopTheGame4 },
            { (char *)((char *)(string_pool + 732LL)), (char *)((char *)(string_pool + 742LL)), (void *)&__ngen_native_spawnFood5 },
            { (char *)((char *)(string_pool + 656LL)), (char *)((char *)(string_pool + 677LL)), (void *)&__ngen_native_getValAleaNotInSnake6 },
            { (char *)((char *)(string_pool + 44LL)), (char *)((char *)(string_pool + 56LL)), (void *)&__ngen_native_moveInterne7 },
            { (char *)((char *)(string_pool + 130LL)), (char *)((char *)(string_pool + 4LL)), (void *)&__ngen_native_moveExterne8 },
            { (char *)((char *)(string_pool + 142LL)), (char *)((char *)(string_pool + 4LL)), (void *)&__ngen_native_deleteTail9 },
            { (char *)((char *)(string_pool + 1168LL)), (char *)((char *)(string_pool + 4LL)), (void *)&__ngen_YumeCloudObfInit10 },
        };

        if (clazz) env->RegisterNatives(clazz, __ngen_methods, sizeof(__ngen_methods) / sizeof(__ngen_methods[0]));
        if (env->ExceptionCheck()) { fprintf(stderr, "Exception occured while registering native_jvm for %s\n", ((char *)(string_pool + 8LL))); fflush(stderr); env->ExceptionDescribe(); env->ExceptionClear(); }

    }
}