//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (GKAdditions)
+ (id)stringForScoreAndPercentileWithRank:(float)arg1 totalScores:(float)arg2 formattedScore:(id)arg3;	// IMP=0x0000000100078734
+ (id)stringForRankAndPercentileWithRank:(float)arg1 totalScores:(float)arg2;	// IMP=0x0000000100078568
+ (id)stringForParanthenticalPercentileRankingWithRank:(float)arg1 totalScores:(float)arg2;	// IMP=0x000000010007840c
+ (id)stringForPercentileRankingWithRank:(float)arg1 totalScores:(float)arg2;	// IMP=0x0000000100078328
+ (id)stringForPercentileWithRank:(float)arg1 totalScores:(float)arg2 asPercentile:(_Bool)arg3 isTop:(_Bool *)arg4;	// IMP=0x0000000100078280
+ (id)_gkUUIDString;	// IMP=0x0000000100077ae0
- (id)_gkSHA256Hash;	// IMP=0x0000000100078bb8
- (id)_gkArrayByTokenizingString;	// IMP=0x0000000100078890
- (id)_gkStringByUnescapingFromURLQuery;	// IMP=0x000000010007882c
- (id)_gkLocaleSensitiveUppercaseString;	// IMP=0x0000000100078220
- (id)_gkTruncationSymbolWithFormat:(id)arg1;	// IMP=0x000000010007815c
- (_Bool)_gkSearchMatchesItem:(id)arg1 withSearchTerms:(id)arg2;	// IMP=0x0000000100077e90
- (_Bool)_gkIsMixedDirection;	// IMP=0x0000000100077d78
- (_Bool)_gkIsNaturallyRTL;	// IMP=0x0000000100077c64
- (void)processUTF16CharactersForBidi:(CDUnknownBlockType)arg1;	// IMP=0x0000000100077b34
- (id)cacheKeyRepresentation;	// IMP=0x0000000100083ed4
- (id)_gkMD5HashData;	// IMP=0x0000000100099fd0
- (id)_gkSHA1HashData;	// IMP=0x0000000100099f40
- (id)_gkMD5HashString;	// IMP=0x0000000100099ec0
- (id)_gkSHA1HashString;	// IMP=0x0000000100099e40
@end

