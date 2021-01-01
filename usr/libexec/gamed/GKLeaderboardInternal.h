//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKInternalRepresentation.h"

@class GKPlayerInternal, GKScoreInternal, NSArray, NSDate, NSDictionary, NSString;

@interface GKLeaderboardInternal : GKInternalRepresentation
{
    unsigned short _friendRank;	// 8 = 0x8
    unsigned short _friendRankCount;	// 10 = 0xa
    unsigned int _overallRank;	// 12 = 0xc
    unsigned int _overallRankCount;	// 16 = 0x10
    unsigned int _maxRank;	// 20 = 0x14
    NSString *_recordID;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    NSString *_baseLeaderboardID;	// 40 = 0x28
    NSString *_groupIdentifier;	// 48 = 0x30
    NSString *_leaderboardSetIdentifier;	// 56 = 0x38
    NSString *_title;	// 64 = 0x40
    NSDate *_lastSubmittedDate;	// 72 = 0x48
    NSDictionary *_icons;	// 80 = 0x50
    NSArray *_scores;	// 88 = 0x58
    GKScoreInternal *_playerScore;	// 96 = 0x60
    long long _type;	// 104 = 0x68
    NSDate *_startDate;	// 112 = 0x70
    NSDate *_nextStartDate;	// 120 = 0x78
    double _duration;	// 128 = 0x80
    GKPlayerInternal *_creator;	// 136 = 0x88
    NSString *_context;	// 144 = 0x90
}

+ (id)secureCodedPropertyKeys;	// IMP=0x0000000100133d2c
- (void).cxx_destruct;	// IMP=0x00000001001344d4
@property(retain, nonatomic) NSString *context; // @synthesize context=_context;
@property(retain, nonatomic) GKPlayerInternal *creator; // @synthesize creator=_creator;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSDate *nextStartDate; // @synthesize nextStartDate=_nextStartDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) GKScoreInternal *playerScore; // @synthesize playerScore=_playerScore;
@property(retain, nonatomic) NSArray *scores; // @synthesize scores=_scores;
@property(nonatomic) unsigned int maxRank; // @synthesize maxRank=_maxRank;
@property(nonatomic) unsigned short friendRankCount; // @synthesize friendRankCount=_friendRankCount;
@property(nonatomic) unsigned short friendRank; // @synthesize friendRank=_friendRank;
@property(nonatomic) unsigned int overallRankCount; // @synthesize overallRankCount=_overallRankCount;
@property(nonatomic) unsigned int overallRank; // @synthesize overallRank=_overallRank;
@property(retain, nonatomic) NSDictionary *icons; // @synthesize icons=_icons;
@property(retain, nonatomic) NSDate *lastSubmittedDate; // @synthesize lastSubmittedDate=_lastSubmittedDate;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *leaderboardSetIdentifier; // @synthesize leaderboardSetIdentifier=_leaderboardSetIdentifier;
@property(retain, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(retain, nonatomic) NSString *baseLeaderboardID; // @synthesize baseLeaderboardID=_baseLeaderboardID;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
- (unsigned long long)hash;	// IMP=0x00000001001341b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001001340c8
@property(readonly, nonatomic) unsigned long long maxRange;
@property(retain, nonatomic) NSString *localizedTitle;
@property(retain, nonatomic) NSString *category;

@end

