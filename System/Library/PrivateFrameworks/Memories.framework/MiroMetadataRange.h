/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Memories/Memories-Structs.h>
@class NSDictionary, NSArray;

@interface MiroMetadataRange : NSObject {

	int _startTimeInFrames;
	int _durationInFrames;
	unsigned long long _type;
	unsigned long long _flags;
	NSDictionary* _analysisDict;
	double _score;
	unsigned long long _rating;
	NSArray* _childRanges;

}

@property (assign,nonatomic) unsigned long long flags;                 //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary; 
@property (assign,nonatomic) unsigned long long type;                  //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int startTimeInFrames;                    //@synthesize startTimeInFrames=_startTimeInFrames - In the implementation block
@property (assign,nonatomic) int durationInFrames;                     //@synthesize durationInFrames=_durationInFrames - In the implementation block
@property (nonatomic,retain) NSDictionary * analysisDict;              //@synthesize analysisDict=_analysisDict - In the implementation block
@property (assign,nonatomic) double score;                             //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) unsigned long long rating;                //@synthesize rating=_rating - In the implementation block
@property (nonatomic,retain) NSArray * childRanges;                    //@synthesize childRanges=_childRanges - In the implementation block
+(id)descriptionForType:(unsigned long long)arg1 ;
+(id)rangeWithRange:(id)arg1 ;
+(id)descriptionForFlags:(unsigned long long)arg1 ;
+(void)miro_computeAndSetStaticScoreWithFlags:(unsigned long long)arg1 forRanges:(id)arg2 ;
+(id)rangeWithType:(unsigned long long)arg1 ;
+(void)enumerateByAscendingTypes:(id)arg1 handler:(/*^block*/id)arg2 ;
+(id)mergeRanges:(id)arg1 withRanges:(id)arg2 ;
+(id)rangeWithVPMetadataRange:(id)arg1 ;
+(double)miro_computeStaticScoreWithFlags:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)flags;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(id)_description;
-(double)score;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)setScore:(double)arg1 ;
-(unsigned long long)rating;
-(void)setRating:(unsigned long long)arg1 ;
-(int)durationInFrames;
-(void)setDurationInFrames:(int)arg1 ;
-(NSDictionary *)analysisDict;
-(int)startTimeInFrames;
-(void)setStartTimeInFrames:(int)arg1 ;
-(void)setAnalysisDict:(NSDictionary *)arg1 ;
-(int)durationOfOverlapWithStart:(int)arg1 duration:(int)arg2 ;
-(id)_treeDescriptionWithDepthLevel:(unsigned long long)arg1 ;
-(NSArray *)childRanges;
-(void)setChildRanges:(NSArray *)arg1 ;
-(int)durationOfOverlapWithRange:(id)arg1 ;
@end

