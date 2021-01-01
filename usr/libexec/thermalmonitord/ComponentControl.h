//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PidComponent.h"

#import "powerlogDataSource-Protocol.h"
#import "tGraphDataSource-Protocol.h"

@interface ComponentControl : PidComponent <tGraphDataSource, powerlogDataSource>
{
    _Bool allowLIOverride;	// 68 = 0x44
    unsigned int currentLoadingIndex;	// 72 = 0x48
    unsigned int maxLoadingIndex;	// 76 = 0x4c
    unsigned int previousValue;	// 80 = 0x50
    unsigned int releaseMaxLI;	// 84 = 0x54
    unsigned int releaseRate;	// 88 = 0x58
    unsigned int _nominalPowerTarget;	// 92 = 0x5c
    unsigned int _maxPower;	// 96 = 0x60
    unsigned int _minPower;	// 100 = 0x64
    _Bool _usesCustomPowerRange;	// 104 = 0x68
    struct __CFString *_powerlogKeyMaxLI;	// 112 = 0x70
    unsigned long long mitigationDetails;	// 120 = 0x78
    _Bool isCPMSControlEnabled;	// 128 = 0x80
    _Bool isCPMSControlActive;	// 129 = 0x81
    unsigned int powerTarget;	// 132 = 0x84
    unsigned int currentPower;	// 136 = 0x88
}

@property(nonatomic) unsigned long long mitigationDetails; // @synthesize mitigationDetails;
@property(nonatomic) unsigned int currentPower; // @synthesize currentPower;
@property(nonatomic) unsigned int powerTarget; // @synthesize powerTarget;
@property(nonatomic) _Bool isCPMSControlActive; // @synthesize isCPMSControlActive;
@property(nonatomic) _Bool isCPMSControlEnabled; // @synthesize isCPMSControlEnabled;
@property(nonatomic) unsigned int releaseRate; // @synthesize releaseRate;
@property(nonatomic) unsigned int releaseMaxLI; // @synthesize releaseMaxLI;
@property(nonatomic) unsigned int currentLoadingIndex; // @synthesize currentLoadingIndex;
@property(nonatomic) unsigned int maxLoadingIndex; // @synthesize maxLoadingIndex;
@property(nonatomic) _Bool allowLIOverride; // @synthesize allowLIOverride;
- (int)getPowerlogFieldCurrentValue;	// IMP=0x00000001000192cc
- (struct __CFString *)getPowerlogKey;	// IMP=0x00000001000192bc
- (struct __CFString *)copyFieldCurrentValueForIndex:(int)arg1;	// IMP=0x00000001000191cc
- (struct __CFString *)copyHeaderForIndex:(int)arg1;	// IMP=0x0000000100019118
- (int)numberOfFields;	// IMP=0x0000000100019110
- (int)getReleaseMaxLI;	// IMP=0x0000000100019100
- (int)getReleaseRate;	// IMP=0x00000001000190f0
- (void)resetCPMSMitigationState;	// IMP=0x00000001000190b8
- (void)updatePowerParameters:(struct __CFDictionary *)arg1;	// IMP=0x0000000100018f28
- (void)setCPMSMitigationState:(_Bool)arg1;	// IMP=0x0000000100018c48
- (_Bool)shouldDoCPMSActions;	// IMP=0x0000000100018c04
- (void)testLoadingIndexLevel;	// IMP=0x0000000100018b64
- (void)setMaxLoadingIndex:(unsigned int)arg1 releaseIndex:(unsigned int)arg2;	// IMP=0x0000000100018b34
- (void)refreshFunctionalTelemetry;	// IMP=0x0000000100018b30
- (void)refreshCPMSTGraphTelemetry;	// IMP=0x0000000100018ac0
- (void)refreshTGraphTelemetry;	// IMP=0x0000000100018abc
- (_Bool)isEqualMType:(int)arg1;	// IMP=0x0000000100018a8c
- (unsigned int)computePowerTarget;	// IMP=0x0000000100018a28
- (void)defaultCPMSAction;	// IMP=0x0000000100018848
- (void)defaultAction;	// IMP=0x0000000100018808
- (id)initWithCC:(int)arg1:(struct __CFDictionary *)arg2;	// IMP=0x00000001000186a4

@end

