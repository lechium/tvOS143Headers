//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CDRecentServiceInfo : NSObject <NSSecureCoding, NSCopying>
{
    struct {
        struct {
            double timestamp;
            unsigned long long amount;
        } urgencies[4];
        unsigned long long non_purgeable_amount;
        unsigned char data[0];
    } recentinfo;	// 8 = 0x8
    NSDictionary *_itemizedNonPurgeable;	// 80 = 0x50
}

+ (id)CDRecentServiceInfo:(id)arg1 atUrgency:(int)arg2 withTimestamp:(double)arg3 nonPurgeableAmount:(id)arg4;	// IMP=0x000000010002cb48
+ (_Bool)supportsSecureCoding;	// IMP=0x000000010002c978
- (void).cxx_destruct;	// IMP=0x000000010002d4e4
@property(retain, nonatomic) NSDictionary *itemizedNonPurgeable; // @synthesize itemizedNonPurgeable=_itemizedNonPurgeable;
- (id)description;	// IMP=0x000000010002d37c
- (void)log;	// IMP=0x000000010002d244
- (void)invalidate;	// IMP=0x000000010002d224
- (_Bool)isEmpty;	// IMP=0x000000010002d1f4
- (_Bool)updateAmount:(id)arg1 atUrgency:(int)arg2 withTimestamp:(double)arg3 nonPurgeableAmount:(id)arg4;	// IMP=0x000000010002d094
- (id)nonPurgeableAmount;	// IMP=0x000000010002d078
- (id)amountAtUrgency:(int)arg1;	// IMP=0x000000010002d014
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010002cfc4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010002cf4c
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010002cda8
- (id)serialize;	// IMP=0x000000010002cc50
- (_Bool)validate:(double)arg1 atUrgency:(int)arg2;	// IMP=0x000000010002cbd8
- (id)initWithAmount:(id)arg1 atUrgency:(int)arg2 withTimestamp:(double)arg3 nonPurgeableAmount:(id)arg4;	// IMP=0x000000010002c980

@end

