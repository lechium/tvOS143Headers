/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXForYouRankable;
@class NSDate;

@interface PXGadgetPriorityEntry : NSObject {

	id<PXForYouRankable> _rankable;
	NSDate* _cachedPriorityDate;
	long long _currentRank;

}

@property (nonatomic,retain) id<PXForYouRankable> rankable;              //@synthesize rankable=_rankable - In the implementation block
@property (nonatomic,retain) NSDate * cachedPriorityDate;                //@synthesize cachedPriorityDate=_cachedPriorityDate - In the implementation block
@property (assign,nonatomic) long long currentRank;                      //@synthesize currentRank=_currentRank - In the implementation block
-(NSDate *)cachedPriorityDate;
-(void)setCachedPriorityDate:(NSDate *)arg1 ;
-(id<PXForYouRankable>)rankable;
-(void)setRankable:(id<PXForYouRankable>)arg1 ;
-(long long)currentRank;
-(void)setCurrentRank:(long long)arg1 ;
@end

