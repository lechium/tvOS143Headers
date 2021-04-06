//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GCGamepadHIDServicePlugin.h"

#import "HIDServicePlugin-Protocol.h"

@class NSString;

@interface XboxOneHIDServicePlugin : GCGamepadHIDServicePlugin <HIDServicePlugin>
{
    CDStruct_b8f12d32 _batteryStats;	// 8 = 0x8
    _Bool _haveReportedBatteryOnce;	// 9 = 0x9
    _Bool _isAndroidProfile;	// 10 = 0xa
    _Bool _buttonHomeSeparateReport;	// 11 = 0xb
    _Bool _viewInDigitalButtonsField;	// 12 = 0xc
    _Bool _shareButtonPresent;	// 13 = 0xd
    long long _type;	// 16 = 0x10
    unsigned char _profile;	// 24 = 0x18
}

+ (_Bool)matchService:(unsigned int)arg1 options:(id)arg2 score:(long long *)arg3;	// IMP=0x0000000000005bd8
- (float)defaultRightThumbstickNoiseBuffer;	// IMP=0x0000000000007150
- (float)defaultLeftThumbstickNoiseBuffer;	// IMP=0x0000000000007144
- (float)defaultRightThumbstickDeadzoneRadius;	// IMP=0x0000000000007138
- (float)defaultLeftThumbstickDeadzoneRadius;	// IMP=0x000000000000712c
- (float)defaultHapticDispatchFrequency;	// IMP=0x0000000000007120
- (id)defaultHapticMotors;	// IMP=0x0000000000006fbc
- (void)dispatchHapticEvent;	// IMP=0x0000000000006d48
- (unsigned int)numberOfTimesToSendZeroHapticReport;	// IMP=0x0000000000006d40
@property(readonly, copy) NSString *description;
- (_Bool)shouldCreateBatteryDevice;	// IMP=0x0000000000006d14
- (void)updateBatteryStats:(CDStruct_b8f12d32)arg1;	// IMP=0x0000000000006bb0
- (void)setupRawReportHandling;	// IMP=0x0000000000006450
- (void)dispatchAlternateHomeButtonEventWithValue:(_Bool)arg1;	// IMP=0x0000000000006354
- (id)initWithService:(unsigned int)arg1;	// IMP=0x0000000000005d28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
