//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "UITimingCurveProvider-Protocol.h"

@class UICubicTimingParameters, UISpringTimingParameters;

@interface TVSWirelessAudioSyncTimingCurveProvider : NSObject <UITimingCurveProvider, NSCopying, NSCoding>
{
    long long timingCurveType;	// 8 = 0x8
    UICubicTimingParameters *cubicTimingParameters;	// 16 = 0x10
    UISpringTimingParameters *springTimingParameters;	// 24 = 0x18
    unsigned long long _type;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000e8d8c
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, nonatomic) UISpringTimingParameters *springTimingParameters; // @synthesize springTimingParameters;
@property(readonly, nonatomic) UICubicTimingParameters *cubicTimingParameters; // @synthesize cubicTimingParameters;
@property(readonly, nonatomic) long long timingCurveType; // @synthesize timingCurveType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000e8d18
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000e8c88
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000e8bf4
- (id)initWithTimingCurveProviderType:(unsigned long long)arg1;	// IMP=0x00000001000e8b04

@end
