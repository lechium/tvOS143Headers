/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate;

@interface CDDHistoryWindow : NSObject {

	NSDate* _start;
	double _duration;
	double _recurrenceDelta;
	double _recurrenceWidth;

}

@property (readonly) NSDate * start;                      //@synthesize start=_start - In the implementation block
@property (readonly) double duration;                     //@synthesize duration=_duration - In the implementation block
@property (readonly) double recurrenceDelta;              //@synthesize recurrenceDelta=_recurrenceDelta - In the implementation block
@property (readonly) double recurrenceWidth;              //@synthesize recurrenceWidth=_recurrenceWidth - In the implementation block
+(id)allTimeHistoryWindow;
+(id)dailyHistoryWindowWithWidth:(double)arg1 endingOnDate:(id)arg2 historyLengthInDays:(int)arg3 ;
+(id)singleDayHistoryWindowWithWidth:(double)arg1 forDate:(id)arg2 ;
-(id)description;
-(NSDate *)start;
-(double)duration;
-(double)recurrenceDelta;
-(double)recurrenceWidth;
-(id)initWithStart:(id)arg1 duration:(double)arg2 recurrenceDelta:(double)arg3 recurrenceWidth:(double)arg4 error:(id*)arg5 ;
@end

