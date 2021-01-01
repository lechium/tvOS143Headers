/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CommonUtilities/CUTCheckpointSignpost.h>

@class NSDate;

@interface CUTCheckpointRange : CUTCheckpointSignpost {

	BOOL _ordered;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,retain) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                           //@synthesize endDate=_endDate - In the implementation block
@property (assign,getter=isOrdered,nonatomic) BOOL ordered;              //@synthesize ordered=_ordered - In the implementation block
-(id)description;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)initWithName:(id)arg1 uniqueIdentifier:(id)arg2 ;
-(id)_reportStartDate;
-(id)_reportEndDate;
-(void)mergeWithCheckpoint:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 name:(id)arg3 uniqueIdentifier:(id)arg4 ;
-(void)_touchStartDate;
-(void)_touchEndDate;
-(BOOL)isOrdered;
-(void)setOrdered:(BOOL)arg1 ;
@end

