//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSMutableSet, NSString;

@interface AMSDDaemonRunLoop : NSObject <NSXPCListenerDelegate>
{
    NSMutableSet *_connections;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010000b540
@property(retain, nonatomic) NSMutableSet *connections; // @synthesize connections=_connections;
- (void)_startXPC;	// IMP=0x000000010000b490
- (void)_setupNotifications;	// IMP=0x000000010000ac80
- (void)_setupMultiUser;	// IMP=0x000000010000a6fc
- (void)_handleNFCAccessoryNotification:(id)arg1;	// IMP=0x000000010000a6f8
- (void)_syncSandboxAccounts;	// IMP=0x000000010000a6f4
- (_Bool)_performStartup;	// IMP=0x000000010000a4c4
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000100009ec4
- (void)runUntilIdleExit;	// IMP=0x0000000100009ce8
- (id)init;	// IMP=0x0000000100009c84

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

