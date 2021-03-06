//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSDate, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKKSRateLimiter : NSObject <NSSecureCoding>
{
    NSDictionary *_config;	// 8 = 0x8
    NSMutableDictionary *_buckets;	// 16 = 0x10
    NSDate *_overloadUntil;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100031d74
- (void).cxx_destruct;	// IMP=0x0000000100031c64
@property(retain) NSDate *overloadUntil; // @synthesize overloadUntil=_overloadUntil;
@property(retain) NSMutableDictionary *buckets; // @synthesize buckets=_buckets;
@property(retain) NSDictionary *config; // @synthesize config=_config;
- (id)topOffendingAccessGroups:(unsigned long long)arg1;	// IMP=0x0000000100031958
- (id)diagnostics;	// IMP=0x0000000100031640
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000315c8
- (void)trim:(id)arg1;	// IMP=0x000000010003127c
- (void)reset;	// IMP=0x0000000100031224
- (unsigned long long)stateSize;	// IMP=0x00000001000311d8
- (int)judge:(id)arg1 at:(id)arg2 limitTime:(id *)arg3;	// IMP=0x0000000100030c34
- (id)consumeTokenFromBucket:(id)arg1 type:(int)arg2 at:(id)arg3;	// IMP=0x0000000100030a2c
- (int)capacity:(int)arg1;	// IMP=0x0000000100030948
- (int)rate:(int)arg1;	// IMP=0x0000000100030864
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000010003063c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100030284
- (id)init;	// IMP=0x0000000100030274

@end

