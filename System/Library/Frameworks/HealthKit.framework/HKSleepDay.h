/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSArray, NSDateInterval;

@interface HKSleepDay : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _sleepPeriods;
	NSDateInterval* _dateInterval;
	double _inBedDuration;
	double _asleepDuration;

}

@property (nonatomic,copy,readonly) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * endDate;                           //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sleepPeriods;                     //@synthesize sleepPeriods=_sleepPeriods - In the implementation block
@property (nonatomic,copy,readonly) NSDateInterval * dateInterval;              //@synthesize dateInterval=_dateInterval - In the implementation block
@property (nonatomic,readonly) double inBedDuration;                            //@synthesize inBedDuration=_inBedDuration - In the implementation block
@property (nonatomic,readonly) double asleepDuration;                           //@synthesize asleepDuration=_asleepDuration - In the implementation block
-(id)description;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSDateInterval *)dateInterval;
-(double)inBedDuration;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 sleepPeriods:(id)arg3 ;
-(double)asleepDuration;
-(NSArray *)sleepPeriods;
-(id)primarySleepPeriod;
@end

