//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source, OS_os_transaction, OS_xpc_object;

@interface OSAXPCServices : NSObject
{
    NSObject<OS_xpc_object> *_listenerConnection;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_txnTimer;	// 16 = 0x10
    NSObject<OS_os_transaction> *_txn;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100006264
- (void)dealloc;	// IMP=0x0000000100006218
- (_Bool)generateSystemMemoryResetWithParams:(id)arg1;	// IMP=0x0000000100006110
- (_Bool)generateStackShotWithParams:(id)arg1;	// IMP=0x00000001000055a0
- (_Bool)generateSimulatedCrashWithParams:(id)arg1 fromPID:(int)arg2;	// IMP=0x0000000100004f34
- (_Bool)generateJetsamWithParams:(id)arg1;	// IMP=0x0000000100004c04
- (void)restartTransactionTimer;	// IMP=0x0000000100004960
- (_Bool)serviceRequest:(id)arg1 fromPID:(int)arg2 forReply:(id)arg3;	// IMP=0x0000000100004834
- (id)init;	// IMP=0x000000010000442c

@end
