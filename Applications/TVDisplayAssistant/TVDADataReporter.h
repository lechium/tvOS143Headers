//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TVDADataReporter : NSObject
{
    long long _aggKind;	// 8 = 0x8
    _Bool _advertisingHDMI2;	// 16 = 0x10
}

- (void)_reportResult:(id)arg1 reason:(id)arg2 dynamicRange:(id)arg3 HDMIVersion:(id)arg4;	// IMP=0x00000001000051c4
- (void)recordNetworkInterferenceWarning;	// IMP=0x0000000100005098
- (void)recordInsufficientNetworkBandwidthWarning;	// IMP=0x0000000100004f6c
- (void)recordReset;	// IMP=0x0000000100004e40
- (void)recordConfirmUpgradedMode;	// IMP=0x0000000100004c1c
- (void)recordRevert;	// IMP=0x0000000100004abc
- (id)initWithPresentationRequest:(id)arg1;	// IMP=0x00000001000049e4

@end

