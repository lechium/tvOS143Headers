//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"

@class NSMutableDictionary, NSString, NSURLSession;
@protocol OS_os_transaction;

__attribute__((visibility("hidden")))
@interface SecMetrics : NSObject <NSURLSessionDelegate>
{
    NSMutableDictionary *_taskMap;	// 8 = 0x8
    NSURLSession *_URLSession;	// 16 = 0x10
    NSObject<OS_os_transaction> *_transaction;	// 24 = 0x18
    long long _lostEvents;	// 32 = 0x20
}

+ (id)managerObject;	// IMP=0x0000000100122930
+ (id)c2MetricsEndpoint;	// IMP=0x000000010012279c
- (void).cxx_destruct;	// IMP=0x0000000100122760
@property long long lostEvents; // @synthesize lostEvents=_lostEvents;
@property(retain) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;
@property(retain) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
@property(retain) NSMutableDictionary *taskMap; // @synthesize taskMap=_taskMap;
- (id)generateDeviceInfo;	// IMP=0x0000000100122554
- (id)gzipEncode:(id)arg1;	// IMP=0x0000000100122390
- (id)requestForGenericEvent:(id)arg1;	// IMP=0x000000010012211c
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x0000000100121cc4
- (id)getEvent:(id)arg1;	// IMP=0x0000000100121bc4
- (void)sendEvent:(id)arg1 pushTopic:(id)arg2;	// IMP=0x000000010012184c
- (void)submitEvent:(id)arg1;	// IMP=0x0000000100121838
- (id)init;	// IMP=0x000000010012172c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

