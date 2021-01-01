//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RPPrivateDiscoveryXPCDaemonInterface-Protocol.h"

@class NSXPCConnection, RPPrivateAdvertiser, RPPrivateDaemon, RPPrivateDiscovery;
@protocol OS_dispatch_queue;

@interface RPPrivateXPCConnection : NSObject <RPPrivateDiscoveryXPCDaemonInterface>
{
    _Bool _direct;	// 8 = 0x8
    _Bool _entitled;	// 9 = 0x9
    RPPrivateAdvertiser *_activatedAdvertiser;	// 16 = 0x10
    RPPrivateDiscovery *_activatedDiscovery;	// 24 = 0x18
    RPPrivateDaemon *_daemon;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    NSXPCConnection *_xpcCnx;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010004eb20
@property(retain, nonatomic) NSXPCConnection *xpcCnx; // @synthesize xpcCnx=_xpcCnx;
@property(nonatomic) _Bool entitled; // @synthesize entitled=_entitled;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) _Bool direct; // @synthesize direct=_direct;
@property(retain, nonatomic) RPPrivateDaemon *daemon; // @synthesize daemon=_daemon;
@property(readonly, nonatomic) RPPrivateDiscovery *activatedDiscovery; // @synthesize activatedDiscovery=_activatedDiscovery;
@property(readonly, nonatomic) RPPrivateAdvertiser *activatedAdvertiser; // @synthesize activatedAdvertiser=_activatedAdvertiser;
- (void)xpcPrivateDiscoveryUpdate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004e99c
- (void)xpcPrivateDiscoveryActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004e874
- (void)xpcPrivateAdvertiserUpdate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004e75c
- (void)xpcPrivateAdvertiserActivate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010004e634
- (void)xpcConnectionInvalidated;	// IMP=0x000000010004e4ac
- (_Bool)_entitledAndReturnError:(id *)arg1;	// IMP=0x000000010004e36c

@end

