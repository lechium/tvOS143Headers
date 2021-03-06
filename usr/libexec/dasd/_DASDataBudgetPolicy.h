//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_DASActivityPolicy-Protocol.h"

@class NSArray, NSString;

@interface _DASDataBudgetPolicy : NSObject <_DASActivityPolicy>
{
    NSString *_policyName;	// 8 = 0x8
    NSArray *_triggers;	// 16 = 0x10
}

+ (_Bool)budget:(id)arg1 isPositive:(id)arg2;	// IMP=0x0000000100022534
+ (_Bool)budgetIsPositive:(id)arg1;	// IMP=0x00000001000224ac
+ (_Bool)isBudgetAvailable:(id)arg1;	// IMP=0x0000000100022400
+ (id)policyInstance;	// IMP=0x0000000100022394
- (void).cxx_destruct;	// IMP=0x0000000100022b90
@property(retain, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;
@property(retain, nonatomic) NSString *policyName; // @synthesize policyName=_policyName;
- (id)responseForActivity:(id)arg1 withState:(id)arg2;	// IMP=0x000000010002292c
- (_Bool)shouldIgnoreBudgetForActivity:(id)arg1 withState:(id)arg2 rationale:(id)arg3;	// IMP=0x00000001000227d0
- (double)weightForActivity:(id)arg1;	// IMP=0x00000001000227c8
- (_Bool)appliesToActivity:(id)arg1;	// IMP=0x00000001000226fc
- (_Bool)shouldIgnoreTrigger:(id)arg1 withState:(id)arg2;	// IMP=0x0000000100022650
- (void)updateSystemConstraintsWithContext:(id)arg1;	// IMP=0x00000001000225b0
- (id)init;	// IMP=0x0000000100022310
- (id)initializeTriggers;	// IMP=0x00000001000221b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

