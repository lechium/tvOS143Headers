//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AccountEventCoordinator : NSObject
{
    NSMutableDictionary *_accountsForWeekCache;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    double _lastCacheReset;	// 24 = 0x18
}

+ (void)testDates;	// IMP=0x00000001001b46f0
+ (id)nextPayoutWeekStartDateForDate:(id)arg1;	// IMP=0x00000001001b2764
+ (id)nextPayoutWeekEndDateForDate:(id)arg1;	// IMP=0x00000001001b2538
+ (id)sharedCoordinator;	// IMP=0x00000001001b249c
- (void).cxx_destruct;	// IMP=0x00000001001b4ae8
- (id)diagnosticDescription;	// IMP=0x00000001001b4524
- (id)description;	// IMP=0x00000001001b4480
- (void)_resetCache;	// IMP=0x00000001001b4414
- (id)_loadEvents;	// IMP=0x00000001001b3734
- (void)_handleAppleIDDidChangeNotification:(id)arg1;	// IMP=0x00000001001b2f80
- (void)resetCache;	// IMP=0x00000001001b2f18
- (id)allEvents;	// IMP=0x00000001001b2e1c
- (id)activeAccountsInWeekWithDate:(id)arg1;	// IMP=0x00000001001b2888
- (id)init;	// IMP=0x00000001001b22f4

@end
