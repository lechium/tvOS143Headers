//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_DASActivityPolicy-Protocol.h"

@class NSArray, NSString, _CDContextualKeyPath;

@interface _DASThermalPolicy : NSObject <_DASActivityPolicy>
{
    NSString *_policyName;	// 8 = 0x8
    _CDContextualKeyPath *_thermalPressureLevelKeyPath;	// 16 = 0x10
    _CDContextualKeyPath *_watchThermalPressureLevelKeyPath;	// 24 = 0x18
    _CDContextualKeyPath *_peakPowerPressureKeyPath;	// 32 = 0x20
    _CDContextualKeyPath *_restoreInProgressKeyPath;	// 40 = 0x28
    NSArray *_triggers;	// 48 = 0x30
}

+ (id)policyInstance;	// IMP=0x000000010002cb48
- (void).cxx_destruct;	// IMP=0x000000010002d5ac
@property(retain, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;
@property(retain, nonatomic) _CDContextualKeyPath *restoreInProgressKeyPath; // @synthesize restoreInProgressKeyPath=_restoreInProgressKeyPath;
@property(retain, nonatomic) _CDContextualKeyPath *peakPowerPressureKeyPath; // @synthesize peakPowerPressureKeyPath=_peakPowerPressureKeyPath;
@property(retain, nonatomic) _CDContextualKeyPath *watchThermalPressureLevelKeyPath; // @synthesize watchThermalPressureLevelKeyPath=_watchThermalPressureLevelKeyPath;
@property(retain, nonatomic) _CDContextualKeyPath *thermalPressureLevelKeyPath; // @synthesize thermalPressureLevelKeyPath=_thermalPressureLevelKeyPath;
@property(retain, nonatomic) NSString *policyName; // @synthesize policyName=_policyName;
- (id)responseForActivity:(id)arg1 withState:(id)arg2;	// IMP=0x000000010002d0b0
- (_Bool)isRestoreInProgressWithContext:(id)arg1;	// IMP=0x000000010002d058
- (_Bool)isUnderPeakPowerPressureWithContext:(id)arg1;	// IMP=0x000000010002d050
- (int)maxAllowableThermalPressureForActivity:(id)arg1 restoreInProgress:(_Bool)arg2;	// IMP=0x000000010002cf9c
- (double)getScoreForThermalLevel:(int)arg1;	// IMP=0x000000010002cf3c
- (double)weightForActivity:(id)arg1;	// IMP=0x000000010002cf34
- (_Bool)appliesToActivity:(id)arg1;	// IMP=0x000000010002ce70
- (_Bool)shouldIgnoreTrigger:(id)arg1 withState:(id)arg2;	// IMP=0x000000010002cd14
- (void)updateSystemConstraintsWithContext:(id)arg1;	// IMP=0x000000010002cbb4
- (id)init;	// IMP=0x000000010002ca04
- (id)initializeTriggers;	// IMP=0x000000010002c8d4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
