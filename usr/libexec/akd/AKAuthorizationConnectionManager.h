//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface AKAuthorizationConnectionManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_connectionsByBundleID;	// 16 = 0x10
}

+ (id)sharedManager;	// IMP=0x000000010005dc7c
- (void).cxx_destruct;	// IMP=0x000000010005e698
- (id)_connectionWithProtocol:(id)arg1 forBundleID:(id)arg2;	// IMP=0x000000010005e530
- (void)_removeConnectionWithProtocol:(id)arg1 forBundleID:(id)arg2;	// IMP=0x000000010005e3c4
- (void)_setConnection:(id)arg1 forBundleID:(id)arg2;	// IMP=0x000000010005e04c
- (id)synchronousRemoteObjectProxyWithProtocol:(id)arg1 forBundleID:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010005df88
- (id)remoteObjectProxyWithProtocol:(id)arg1 forBundleID:(id)arg2 errorHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010005dec4
- (id)remoteObjectProxyWithProtocol:(id)arg1 forBundleID:(id)arg2;	// IMP=0x000000010005de3c
- (void)addConnection:(id)arg1 forBundleID:(id)arg2;	// IMP=0x000000010005dddc
- (void)addConnectionForClient:(id)arg1;	// IMP=0x000000010005dd28
- (id)bundleIDs;	// IMP=0x000000010005dd18
- (id)init;	// IMP=0x000000010005dc04

@end

