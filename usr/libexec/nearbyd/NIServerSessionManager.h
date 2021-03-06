//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PRAppStateMonitorObserver-Protocol.h"
#import "PRSessionActivationGuard-Protocol.h"

@class NSMutableDictionary, NSString, PRAuthorizationManager;
@protocol OS_dispatch_queue;

@interface NIServerSessionManager : NSObject <PRAppStateMonitorObserver, PRSessionActivationGuard>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    PRAuthorizationManager *_authManager;	// 16 = 0x10
    NSMutableDictionary *_processMonitors;	// 24 = 0x18
    NSMutableDictionary *_sessions;	// 32 = 0x20
    struct os_unfair_lock_s _sessionsLock;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000100159e00
- (_Bool)isSessionAllowedToActivate:(id)arg1;	// IMP=0x0000000100159bcc
- (id)updatesQueue;	// IMP=0x0000000100159bc4
- (void)monitoredApp:(int)arg1 didChangeState:(int)arg2;	// IMP=0x0000000100159970
- (void)handleXPCDisconnection:(id)arg1;	// IMP=0x0000000100159720
- (_Bool)registerSessionWithConnection:(id)arg1;	// IMP=0x0000000100158b74
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000100158a78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

