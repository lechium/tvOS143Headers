//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class GKPlayerInternal, NSString;

@interface GKLeaderboardScoreRequest : NSObject <NSSecureCoding>
{
    GKPlayerInternal *_playerInternal;	// 8 = 0x8
    NSString *_gameBundleID;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSString *_groupIdentifier;	// 32 = 0x20
    _Bool _friendsOnly;	// 40 = 0x28
    long long _timeScope;	// 48 = 0x30
    _Bool _prefetch;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000850f8
+ (id)requestForPlayerInternals:(id)arg1;	// IMP=0x0000000100085058
+ (id)requestForRankRange:(struct _NSRange)arg1;	// IMP=0x0000000100085008
@property(nonatomic, getter=isPrefetch) _Bool prefetch; // @synthesize prefetch=_prefetch;
@property(nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
@property(nonatomic) _Bool friendsOnly; // @synthesize friendsOnly=_friendsOnly;
@property(copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSString *gameBundleID; // @synthesize gameBundleID=_gameBundleID;
@property(copy, nonatomic) GKPlayerInternal *playerInternal; // @synthesize playerInternal=_playerInternal;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100085360
- (unsigned long long)hash;	// IMP=0x0000000100085314
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100085240
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100085100
- (void)dealloc;	// IMP=0x0000000100085098
- (void)loadScoresWithService:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100171134
- (void)generateScoresFromServerResponse:(id)arg1 service:(id)arg2 context:(id)arg3 timeToLive:(double)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x0000000100171060
- (void)updatePlayersForLeaderboard:(id)arg1 service:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100170d18
- (id)scoreForServerRepresentation:(id)arg1 leaderboard:(id)arg2;	// IMP=0x0000000100170b14
- (id)leaderboardForServerRepresentations:(id)arg1;	// IMP=0x00000001001708cc
- (id)serverRequestWithService:(id)arg1;	// IMP=0x00000001001707f4
- (id)bagKey;	// IMP=0x000000010017071c
- (id)serverPlayerScope;	// IMP=0x00000001001706e8
- (id)serverTimeScope;	// IMP=0x00000001001706a4

@end
