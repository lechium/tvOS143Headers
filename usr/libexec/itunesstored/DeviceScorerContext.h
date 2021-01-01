//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData, NSString;

@interface DeviceScorerContext : NSObject <NSCopying>
{
    NSData *_challengeResponse;	// 8 = 0x8
    NSData *_hostChallenge;	// 16 = 0x10
    NSString *_secureElementID;	// 24 = 0x18
    long long _serverEndpoint;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000343d0
@property long long serverEndpoint; // @synthesize serverEndpoint=_serverEndpoint;
@property(copy) NSString *secureElementID; // @synthesize secureElementID=_secureElementID;
@property(copy) NSData *hostChallenge; // @synthesize hostChallenge=_hostChallenge;
@property(copy) NSData *challengeResponse; // @synthesize challengeResponse=_challengeResponse;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000342d8

@end

