#include "../native_jvm.hpp"
#include "../string_pool.hpp"
#include "ThreadSquare.hpp"

// ThreadSquare
namespace native_jvm::classes::__ngen_ThreadSquare {

    char *string_pool;

    std::mutex cclasses_mtx[4];
    jclass cclasses[4];
    jmethodID cmethods[4];
    jfieldID cfields[3];

    // run()V
    void JNICALL __ngen_native_run1(JNIEnv *env, jobject obj) {
        if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { cclasses_mtx[0].lock(); if (!cclasses[0] || env->IsSameObject(cclasses[0], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1604LL)))) { cclasses[0] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[0].unlock(); if (env->ExceptionCheck()) { return (void) 0; } }
        utils::jvm_stack<2> cstack;
        utils::local_vars<3> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
    
        L168366: if (env->ExceptionCheck()) { return (void) 0; }
        // L 12:
        refs.erase(clocals.refs[0]); 
        utils::clear_refs(env, refs);
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[1]  || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 781LL)))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[0]) { cfields[0] = env->GetFieldID((cclasses[1]), ((char *)(string_pool + 1624LL)), ((char *)(string_pool + 1651LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 12); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[0]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        memmove(&cstack.data[cstack.sptr - 0], &cstack.data[cstack.sptr - 1], 1 * sizeof(cstack.data[0])); memmove(&cstack.data[cstack.sptr - 1], &cstack.data[cstack.sptr], 1 * sizeof(cstack.data[0]));    
        memmove(&cstack.refs[cstack.sptr - 0], &cstack.refs[cstack.sptr - 1], 1 * sizeof(cstack.refs[0])); memmove(&cstack.refs[cstack.sptr - 1], &cstack.refs[cstack.sptr], 1 * sizeof(cstack.refs[0]));
        cstack.sptr++;
        clocals.setref(1, cstack.popref()); refs.insert(clocals.getref(1));
        if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 1670LL)), 12); else env->MonitorEnter(cstack.popref()); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1357563986: if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      goto L1642030774;      env->Throw(exception); return (void) 0; }
        // L 13:
        goto L384587033;
        L411506101: if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      if (env->IsInstanceOf(exception, (cclasses[0]))) { goto L49752459; }     goto L1642030774;      env->Throw(exception); return (void) 0; }
        // L 15:
        refs.erase(clocals.refs[0]); refs.erase(clocals.refs[1]); 
        utils::clear_refs(env, refs);
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[1]  || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 781LL)))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      if (env->IsInstanceOf(exception, (cclasses[0]))) { goto L49752459; }     goto L1642030774;      env->Throw(exception); return (void) 0; } } if (!cfields[0]) { cfields[0] = env->GetFieldID((cclasses[1]), ((char *)(string_pool + 1624LL)), ((char *)(string_pool + 1651LL))); if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      if (env->IsInstanceOf(exception, (cclasses[0]))) { goto L49752459; }     goto L1642030774;      env->Throw(exception); return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 15); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[0]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0)); 
        if (env->IsInstanceOf(exception, (cclasses[0]))) { goto L49752459; }
        goto L1642030774; 
        env->Throw(exception); return (void) 0; }
        cstack.popcnt(1); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1687LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      if (env->IsInstanceOf(exception, (cclasses[0]))) { goto L49752459; }     goto L1642030774;      env->Throw(exception); return (void) 0; } } if (!cmethods[0]) { cmethods[0] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 1704LL)), ((char *)(string_pool + 4LL))); if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      if (env->IsInstanceOf(exception, (cclasses[0]))) { goto L49752459; }     goto L1642030774;      env->Throw(exception); return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 244LL)), 15); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[0])); 
        if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0)); 
        if (env->IsInstanceOf(exception, (cclasses[0]))) { goto L49752459; }
        goto L1642030774; 
        env->Throw(exception); return (void) 0; }
        L514455215: if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      goto L1642030774;      env->Throw(exception); return (void) 0; }
        // L 16:
        goto L384587033;
        L49752459: if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      goto L1642030774;      env->Throw(exception); return (void) 0; }
        refs.erase(cstack.refs[0]); 
        refs.erase(clocals.refs[0]); refs.erase(clocals.refs[1]); 
        utils::clear_refs(env, refs);
        clocals.setref(2, cstack.popref()); refs.insert(clocals.getref(2));
        L384587033: if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      goto L1642030774;      env->Throw(exception); return (void) 0; }
        // L 13:
        refs.erase(clocals.refs[0]); refs.erase(clocals.refs[1]); 
        utils::clear_refs(env, refs);
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[1]  || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 781LL)))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      goto L1642030774;      env->Throw(exception); return (void) 0; } } if (!cfields[1]) { cfields[1] = env->GetFieldID((cclasses[1]), ((char *)(string_pool + 1709LL)), ((char *)(string_pool + 1725LL))); if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      goto L1642030774;      env->Throw(exception); return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 1727LL)), 13); else cstack.push(env->GetBooleanField(cstack.popref(), (cfields[1]))); 
        if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0)); 
        goto L1642030774; 
        env->Throw(exception); return (void) 0; }
        if (cstack.pop() != 0) goto L411506101;
        L1780034814: if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      goto L1642030774;      env->Throw(exception); return (void) 0; }
        // L 12:
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 1670LL)), 12); else env->MonitorExit(cstack.popref()); 
        if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0)); 
        goto L1642030774; 
        env->Throw(exception); return (void) 0; }
        L1360657223: if (env->ExceptionCheck()) { return (void) 0; }
        goto L1905485420;
        L1642030774: if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      goto L1642030774;      env->Throw(exception); return (void) 0; }
        refs.erase(cstack.refs[0]); 
        refs.erase(clocals.refs[0]); refs.erase(clocals.refs[1]); 
        utils::clear_refs(env, refs);
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 1670LL)), 12); else env->MonitorExit(cstack.popref()); 
        if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0)); 
        goto L1642030774; 
        env->Throw(exception); return (void) 0; }
        L551479935: if (env->ExceptionCheck()) { return (void) 0; }
        if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 1748LL)), 12); else { jthrowable exception = (jthrowable) cstack.popref(); env->Throw(exception); cstack.clear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1905485420: if (env->ExceptionCheck()) { return (void) 0; }
        // L 19:
        refs.erase(clocals.refs[0]); 
        utils::clear_refs(env, refs);
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[1]  || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 781LL)))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[2]) { cfields[2] = env->GetFieldID((cclasses[1]), ((char *)(string_pool + 794LL)), ((char *)(string_pool + 801LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 19); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[2]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        cstack.push(0);
        cstack.popcnt(2); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { cclasses_mtx[3].lock(); if (!cclasses[3] || env->IsSameObject(cclasses[3], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 816LL)))) { cclasses[3] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[3].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[1]) { cmethods[1] = env->GetMethodID((cclasses[3]), ((char *)(string_pool + 829LL)), ((char *)(string_pool + 56LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 244LL)), 19); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[1]), (jint) cstack.fetch(-2)); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L58940486: if (env->ExceptionCheck()) { return (void) 0; }
        // L 20:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.popcnt(1); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 781LL)))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cmethods[2]) { cmethods[2] = env->GetMethodID((cclasses[1]), ((char *)(string_pool + 1109LL)), ((char *)(string_pool + 4LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 244LL)), 20); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[2])); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L501107890: if (env->ExceptionCheck()) { return (void) 0; }
        // L 11:
        goto L168366;
        L1997859171: if (env->ExceptionCheck()) { return (void) 0; }
        return (void) 0;
    }
    
    // pauseThread()V
    void JNICALL __ngen_native_pauseThread2(JNIEnv *env, jobject obj) {
        utils::jvm_stack<2> cstack;
        utils::local_vars<1> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
    
        L550402284: if (env->ExceptionCheck()) { return (void) 0; }
        // L 24:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.push(1);
        if (!cclasses[1]  || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 781LL)))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[1]) { cfields[1] = env->GetFieldID((cclasses[1]), ((char *)(string_pool + 1709LL)), ((char *)(string_pool + 1725LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 1759LL)), 24); else env->SetBooleanField(cstack.fetchref(1), (cfields[1]), (jboolean) cstack.fetch(0)); cstack.popcnt(2); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L959869407: if (env->ExceptionCheck()) { return (void) 0; }
        // L 25:
        return;
        L1449263511: if (env->ExceptionCheck()) { return (void) 0; }
        return (void) 0;
    }
    
    // resumeThread()V
    void JNICALL __ngen_native_resumeThread3(JNIEnv *env, jobject obj) {
        utils::jvm_stack<2> cstack;
        utils::local_vars<2> clocals;
        std::unordered_set<jobject> refs;
    
        clocals.setref(0, obj); refs.insert(clocals.getref(0));
    
        L116237769: if (env->ExceptionCheck()) { return (void) 0; }
        // L 27:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[1]  || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 781LL)))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { return (void) 0; } } if (!cfields[0]) { cfields[0] = env->GetFieldID((cclasses[1]), ((char *)(string_pool + 1624LL)), ((char *)(string_pool + 1651LL))); if (env->ExceptionCheck()) { return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 27); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[0]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        memmove(&cstack.data[cstack.sptr - 0], &cstack.data[cstack.sptr - 1], 1 * sizeof(cstack.data[0])); memmove(&cstack.data[cstack.sptr - 1], &cstack.data[cstack.sptr], 1 * sizeof(cstack.data[0]));    
        memmove(&cstack.refs[cstack.sptr - 0], &cstack.refs[cstack.sptr - 1], 1 * sizeof(cstack.refs[0])); memmove(&cstack.refs[cstack.sptr - 1], &cstack.refs[cstack.sptr], 1 * sizeof(cstack.refs[0]));
        cstack.sptr++;
        clocals.setref(1, cstack.popref()); refs.insert(clocals.getref(1));
        if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 1670LL)), 27); else env->MonitorEnter(cstack.popref()); 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1594199808: if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      goto L1438098656;      env->Throw(exception); return (void) 0; }
        // L 28:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        cstack.push(0);
        if (!cclasses[1]  || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 781LL)))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      goto L1438098656;      env->Throw(exception); return (void) 0; } } if (!cfields[1]) { cfields[1] = env->GetFieldID((cclasses[1]), ((char *)(string_pool + 1709LL)), ((char *)(string_pool + 1725LL))); if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      goto L1438098656;      env->Throw(exception); return (void) 0; }  } if (cstack.fetchref(1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 1759LL)), 28); else env->SetBooleanField(cstack.fetchref(1), (cfields[1]), (jboolean) cstack.fetch(0)); cstack.popcnt(2); 
        if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0)); 
        goto L1438098656; 
        env->Throw(exception); return (void) 0; }
        L422396878: if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      goto L1438098656;      env->Throw(exception); return (void) 0; }
        // L 29:
        cstack.pushref(clocals.getref(0)); refs.insert(cstack.fetchref(0));
        if (!cclasses[1]  || env->IsSameObject(cclasses[1], NULL)) { cclasses_mtx[1].lock(); if (!cclasses[1] || env->IsSameObject(cclasses[1], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 781LL)))) { cclasses[1] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[1].unlock(); if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      goto L1438098656;      env->Throw(exception); return (void) 0; } } if (!cfields[0]) { cfields[0] = env->GetFieldID((cclasses[1]), ((char *)(string_pool + 1624LL)), ((char *)(string_pool + 1651LL))); if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      goto L1438098656;      env->Throw(exception); return (void) 0; }  } if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 299LL)), 29); else { cstack.pushref(env->GetObjectField(cstack.popref(), (cfields[0]))); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0)); 
        goto L1438098656; 
        env->Throw(exception); return (void) 0; }
        cstack.popcnt(1); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { cclasses_mtx[2].lock(); if (!cclasses[2] || env->IsSameObject(cclasses[2], NULL)) { if (jclass clazz = utils::find_class_wo_static(env, ((char *)(string_pool + 1687LL)))) { cclasses[2] = (jclass) env->NewWeakGlobalRef(clazz); env->DeleteLocalRef(clazz); } } cclasses_mtx[2].unlock(); if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      goto L1438098656;      env->Throw(exception); return (void) 0; } } if (!cmethods[3]) { cmethods[3] = env->GetMethodID((cclasses[2]), ((char *)(string_pool + 1793LL)), ((char *)(string_pool + 4LL))); if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      goto L1438098656;      env->Throw(exception); return (void) 0; }  } if (cstack.fetchref(-1) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 244LL)), 29); else env->CallVoidMethod(cstack.fetchref(-1), (cmethods[3])); 
        if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0)); 
        goto L1438098656; 
        env->Throw(exception); return (void) 0; }
        L1912962767: if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      goto L1438098656;      env->Throw(exception); return (void) 0; }
        // L 27:
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 1670LL)), 27); else env->MonitorExit(cstack.popref()); 
        if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0)); 
        goto L1438098656; 
        env->Throw(exception); return (void) 0; }
        L452805835: if (env->ExceptionCheck()) { return (void) 0; }
        goto L1769190683;
        L1438098656: if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0));      goto L1438098656;      env->Throw(exception); return (void) 0; }
        refs.erase(cstack.refs[0]); 
        refs.erase(clocals.refs[0]); refs.erase(clocals.refs[1]); 
        utils::clear_refs(env, refs);
        cstack.pushref(clocals.getref(1)); refs.insert(cstack.fetchref(0));
        if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 1670LL)), 27); else env->MonitorExit(cstack.popref()); 
        if (env->ExceptionCheck()) { cstack.clear(); jthrowable exception = env->ExceptionOccurred(); env->ExceptionClear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0)); 
        goto L1438098656; 
        env->Throw(exception); return (void) 0; }
        L447981768: if (env->ExceptionCheck()) { return (void) 0; }
        if (cstack.fetchref(0) == nullptr) utils::throw_re(env, ((char *)(string_pool + 61LL)), ((char *)(string_pool + 1748LL)), 27); else { jthrowable exception = (jthrowable) cstack.popref(); env->Throw(exception); cstack.clear(); cstack.pushref(exception); refs.insert(cstack.fetchref(0)); } 
        if (env->ExceptionCheck()) { return (void) 0; }
        L1769190683: if (env->ExceptionCheck()) { return (void) 0; }
        // L 31:
        refs.erase(clocals.refs[0]); 
        utils::clear_refs(env, refs);
        return;
        L1125736023: if (env->ExceptionCheck()) { return (void) 0; }
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
            { (char *)((char *)(string_pool + 0LL)), (char *)((char *)(string_pool + 4LL)), (void *)&__ngen_native_run1 },
            { (char *)((char *)(string_pool + 1109LL)), (char *)((char *)(string_pool + 4LL)), (void *)&__ngen_native_pauseThread2 },
            { (char *)((char *)(string_pool + 1780LL)), (char *)((char *)(string_pool + 4LL)), (void *)&__ngen_native_resumeThread3 },
            { (char *)((char *)(string_pool + 1410LL)), (char *)((char *)(string_pool + 4LL)), (void *)&__ngen_YumeCloudObfInit4 },
        };

        if (clazz) env->RegisterNatives(clazz, __ngen_methods, sizeof(__ngen_methods) / sizeof(__ngen_methods[0]));
        if (env->ExceptionCheck()) { fprintf(stderr, "Exception occured while registering native_jvm for %s\n", ((char *)(string_pool + 781LL))); fflush(stderr); env->ExceptionDescribe(); env->ExceptionClear(); }

    }
}