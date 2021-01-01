//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "_DASActivityPolicy-Protocol.h"

@class NSArray, NSDate, NSString;

@interface _DASBootTimePolicy : NSObject <_DASActivityPolicy>
{
    _Bool _didExceedMinDurationAfterBoot;	// 8 = 0x8
    _Bool _didExceedMinDurationAfterBootNetworkActivites;	// 9 = 0x9
    _Bool _didExceedMinDurationAfterBootNonRepeatingNonDiscretionary;	// 10 = 0xa
    NSString *_policyName;	// 16 = 0x10
    NSArray *_triggers;	// 24 = 0x18
    NSDate *_bootTime;	// 32 = 0x20
}

+ (id)getDeviceBootTime;	// IMP=0x00000001000202f4
+ (id)policyInstance;	// IMP=0x0000000100020240
- (void).cxx_destruct;	// IMP=0x0000000100020660
@property(nonatomic) _Bool didExceedMinDurationAfterBootNonRepeatingNonDiscretionary; // @synthesize didExceedMinDurationAfterBootNonRepeatingNonDiscretionary=_didExceedMinDurationAfterBootNonRepeatingNonDiscretionary;
@property(nonatomic) _Bool didExceedMinDurationAfterBootNetworkActivites; // @synthesize didExceedMinDurationAfterBootNetworkActivites=_didExceedMinDurationAfterBootNetworkActivites;
@property(nonatomic) _Bool didExceedMinDurationAfterBoot; // @synthesize didExceedMinDurationAfterBoot=_didExceedMinDurationAfterBoot;
@property(retain, nonatomic) NSDate *bootTime; // @synthesize bootTime=_bootTime;
@property(retain, nonatomic) NSArray *triggers; // @synthesize triggers=_triggers;
@property(retain, nonatomic) NSString *policyName; // @synthesize policyName=_policyName;
- (id)responseForActivity:(id)arg1 withState:(id)arg2;	// IMP=0x00000001000203a8
- (double)weightForActivity:(id)arg1;	// IMP=0x00000001000202e8
- (_Bool)appliesToActivity:(id)arg1;	// IMP=0x00000001000202b4
- (_Bool)shouldIgnoreTrigger:(id)arg1 withState:(id)arg2;	// IMP=0x00000001000202ac
- (id)init;	// IMP=0x00000001000201b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

