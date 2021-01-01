//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDCrossfireServiceProtocol-Protocol.h"

@class NSString;

@interface CrossfireService : NSObject <ASDCrossfireServiceProtocol>
{
}

+ (id)defaultService;	// IMP=0x00000001001a1d74
- (id)_currentClient;	// IMP=0x00000001001a28a8
- (void)sendMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a2724
- (void)resetMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a25a0
- (void)reportAppEvent:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001001a23f8
- (void)recordMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a2274
- (void)recordLaunchesWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a20f0
- (void)getAppEventsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a1f6c
- (void)flushMetricsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001001a1de0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
