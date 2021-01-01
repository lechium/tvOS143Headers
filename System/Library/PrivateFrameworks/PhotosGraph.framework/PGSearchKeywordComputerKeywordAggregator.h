/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSDictionary;

@interface PGSearchKeywordComputerKeywordAggregator : NSObject {

	NSMutableDictionary* _keywordsByCategoryMaskByDateIntervalByMomentUUID;

}

@property (readonly) NSDictionary * aggregatedKeywords; 
-(id)init;
-(NSDictionary *)aggregatedKeywords;
-(void)aggregateKeywordsByCategoryMask:(id)arg1 forMomentUUID:(id)arg2 duringDateInterval:(id)arg3 ;
-(void)aggregateKeywordsByCategoryMask:(id)arg1 forMomentNode:(id)arg2 ;
-(void)aggregateKeywordArraysByCategoryMask:(id)arg1 forMomentUUID:(id)arg2 fromUniversalStartDate:(id)arg3 toEndDate:(id)arg4 ;
@end

