//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_NSDNXPCObject-Protocol.h"

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface _NSDNXPCServer : NSObject <_NSDNXPCObject>
{
    NSObject<OS_xpc_object> *_conn;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 16 = 0x10
    struct _opaque_pthread_mutex_t _lock;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dq;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_target;	// 96 = 0x60
    NSString *_serviceName;	// 104 = 0x68
    CDUnknownBlockType _makeNewClient;	// 112 = 0x70
    NSMutableArray *_clients;	// 120 = 0x78
    NSMutableArray *_invalidHandlers;	// 128 = 0x80
    int _started;	// 136 = 0x88
    int _invalid;	// 140 = 0x8c
    _Bool _priv;	// 144 = 0x90
}

- (id)createEndpoint;	// IMP=0x0000000100001c5c
- (id)allClients;	// IMP=0x0000000100001c14
- (void)start;	// IMP=0x0000000100001a04
- (void)addInvalidationHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100001988
- (void)invalidate;	// IMP=0x0000000100001840
- (id)__invalidate;	// IMP=0x0000000100001804
- (void)setPrivileged:(_Bool)arg1;	// IMP=0x00000001000017fc
- (id)dispatchQueue;	// IMP=0x00000001000017f4
@property(copy) CDUnknownBlockType makeNewClient; // @dynamic makeNewClient;
@property(copy) NSString *serviceName; // @dynamic serviceName;
- (void)dealloc;	// IMP=0x00000001000015dc
- (id)initWithConfiguration:(struct distnoted_configuration *)arg1;	// IMP=0x0000000100001520

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

