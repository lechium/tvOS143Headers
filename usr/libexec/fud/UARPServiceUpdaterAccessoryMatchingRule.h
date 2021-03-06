//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface UARPServiceUpdaterAccessoryMatchingRule : NSObject <NSSecureCoding>
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_xpcEventStream;	// 16 = 0x10
    long long _transport;	// 24 = 0x18
    NSDictionary *_matchingDictionary;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010001fff0
@property(readonly) NSDictionary *matchingDictionary; // @synthesize matchingDictionary=_matchingDictionary;
@property(readonly) long long transport; // @synthesize transport=_transport;
@property(readonly) NSString *xpcEventStream; // @synthesize xpcEventStream=_xpcEventStream;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;	// IMP=0x000000010002044c
- (id)description;	// IMP=0x00000001000203d0
- (const char *)transportDescription;	// IMP=0x00000001000203b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000202fc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010002026c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000200f0
- (void)dealloc;	// IMP=0x0000000100020098
- (id)initWithIdentifier:(id)arg1 xpcEventStream:(id)arg2 transport:(long long)arg3 matchingDictionary:(id)arg4;	// IMP=0x000000010001fff8

@end

