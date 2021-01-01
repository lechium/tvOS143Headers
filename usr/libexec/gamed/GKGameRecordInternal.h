//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKGameInternal.h"

@class GKScoreInternal, NSDate;

@interface GKGameRecordInternal : GKGameInternal
{
    GKScoreInternal *_score;	// 112 = 0x70
    NSDate *_lastPlayedDate;	// 120 = 0x78
    NSDate *_purchaseDate;	// 128 = 0x80
    unsigned short _achievements;	// 136 = 0x88
    short _achievementPoints;	// 138 = 0x8a
    unsigned short _friendRank;	// 140 = 0x8c
    unsigned short _maxFriendRank;	// 142 = 0x8e
    unsigned int _rank;	// 144 = 0x90
    unsigned int _maxRank;	// 148 = 0x94
}

+ (id)secureCodedPropertyKeys;	// IMP=0x000000010012ab48
+ (id)gameRecordForGame:(id)arg1;	// IMP=0x000000010012a9b4
+ (id)_gameProperties;	// IMP=0x0000000100141460
+ (id)propertiesToFetch;	// IMP=0x0000000100141180
@property(nonatomic) unsigned int maxRank; // @synthesize maxRank=_maxRank;
@property(nonatomic) unsigned int rank; // @synthesize rank=_rank;
@property(nonatomic) unsigned short maxFriendRank; // @synthesize maxFriendRank=_maxFriendRank;
@property(nonatomic) unsigned short friendRank; // @synthesize friendRank=_friendRank;
@property(nonatomic) short achievementPoints; // @synthesize achievementPoints=_achievementPoints;
@property(nonatomic) unsigned short achievements; // @synthesize achievements=_achievements;
@property(retain, nonatomic) NSDate *purchaseDate; // @synthesize purchaseDate=_purchaseDate;
@property(retain, nonatomic) NSDate *lastPlayedDate; // @synthesize lastPlayedDate=_lastPlayedDate;
@property(retain, nonatomic) GKScoreInternal *score; // @synthesize score=_score;
- (void)updateWithGame:(id)arg1;	// IMP=0x000000010012a9fc
- (void)dealloc;	// IMP=0x000000010012a944
- (void)updateWithProperties:(id)arg1;	// IMP=0x0000000100141544
- (void)updateWithCacheObject:(id)arg1;	// IMP=0x0000000100140f2c

@end
