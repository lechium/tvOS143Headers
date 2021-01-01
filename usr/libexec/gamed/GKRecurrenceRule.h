//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@interface GKRecurrenceRule : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _interval;	// 8 = 0x8
    long long _frequency;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100122780
@property long long frequency; // @synthesize frequency=_frequency;
@property unsigned long long interval; // @synthesize interval=_interval;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100122818
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100122788
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001001226f4
- (id)initWithInterval:(unsigned long long)arg1 frequency:(long long)arg2;	// IMP=0x0000000100122674

@end

