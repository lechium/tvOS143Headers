/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface VCIDRSchedulerPeriodGroup : NSObject {

	unsigned _basePeriodCount;
	unsigned _framesPerBasePeriod;
	NSMutableArray* _streams;
	NSMutableArray* _schedulerItems;

}

@property (nonatomic,readonly) unsigned basePeriodCount;              //@synthesize basePeriodCount=_basePeriodCount - In the implementation block
-(id)description;
-(void)dealloc;
-(void)addStream:(id)arg1 ;
-(void)computeStreamsIDRPosition;
-(id)initWithPeriodCount:(unsigned)arg1 framesPerBasePeriod:(unsigned)arg2 ;
-(id)computeScheduleItemList;
-(unsigned)basePeriodCount;
@end

