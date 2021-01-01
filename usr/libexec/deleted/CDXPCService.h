//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CDService.h"

@class NSObject, NSXPCConnection;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CDXPCService : CDService
{
    _Bool _isConnected;	// 8 = 0x8
    _Bool _isInterrupted;	// 9 = 0x9
    _Bool _isInvalidated;	// 10 = 0xa
    NSXPCConnection *_xpcConnection;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_watchdog_timer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100044fc4
@property(retain, nonatomic) NSObject<OS_dispatch_source> *watchdog_timer; // @synthesize watchdog_timer=_watchdog_timer;
@property(nonatomic) _Bool isInvalidated; // @synthesize isInvalidated=_isInvalidated;
@property(nonatomic) _Bool isInterrupted; // @synthesize isInterrupted=_isInterrupted;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)connectionWasInvalidated;	// IMP=0x0000000100044dc4
- (void)resumeConnection;	// IMP=0x0000000100044d84
- (void)invalidateConnection;	// IMP=0x0000000100044b50
- (void)obtainXPCConnection:(CDUnknownBlockType)arg1;	// IMP=0x0000000100044a98
- (void)doWithProxy:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;	// IMP=0x00000001000439e0
- (void)_serviceCallback:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000435c4
- (void)_serviceNotify:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100043224
- (void)_serviceCancelPurge:(CDUnknownBlockType)arg1;	// IMP=0x0000000100042e84
- (void)_servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100042a3c
- (void)_servicePurge:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000425f4
- (void)_servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100042128
- (void)dealloc;	// IMP=0x000000010004208c
- (id)initWithInfo:(id)arg1;	// IMP=0x0000000100042058

@end

