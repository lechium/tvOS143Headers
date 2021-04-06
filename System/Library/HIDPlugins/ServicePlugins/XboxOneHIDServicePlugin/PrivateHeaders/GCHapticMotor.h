//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface GCHapticMotor : NSObject <NSCopying, NSSecureCoding>
{
    int _index;	// 8 = 0x8
    float _frequency;	// 12 = 0xc
    float _amplitude;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    unsigned long long _features;	// 32 = 0x20
    NSMutableArray *_queuedTransients;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000005618
- (void).cxx_destruct;	// IMP=0x0000000000005b9c
@property(retain, nonatomic) NSMutableArray *queuedTransients; // @synthesize queuedTransients=_queuedTransients;
@property(nonatomic) float amplitude; // @synthesize amplitude=_amplitude;
@property(nonatomic) float frequency; // @synthesize frequency=_frequency;
@property(readonly, nonatomic) unsigned long long features; // @synthesize features=_features;
@property(readonly, nonatomic) int index; // @synthesize index=_index;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x0000000000005af4
- (void)drainQueuedTransients;	// IMP=0x0000000000005ae4
- (void)enqueueHapticTransientEvent:(id)arg1;	// IMP=0x0000000000005a78
- (void)applyValuesFrom:(id)arg1;	// IMP=0x00000000000059fc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000005914
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000057f8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005738
- (id)init;	// IMP=0x0000000000005728
- (id)initWithIndex:(int)arg1;	// IMP=0x0000000000005714
- (id)initWithIndex:(int)arg1 name:(id)arg2;	// IMP=0x0000000000005704
- (id)initWithIndex:(int)arg1 name:(id)arg2 features:(unsigned long long)arg3;	// IMP=0x00000000000056f0
- (id)initWithIndex:(int)arg1 name:(id)arg2 features:(unsigned long long)arg3 frequency:(float)arg4 amplitude:(float)arg5;	// IMP=0x0000000000005620

@end
