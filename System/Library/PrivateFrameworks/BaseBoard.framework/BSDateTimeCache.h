/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface BSDateTimeCache : NSObject {

	double _yesterday;
	double _today;
	double _tomorrow;
	double _2daysFromNow;
	double _6daysAgo;
	double _prevWeek;
	double _nextWeek;
	double _lastAttemptedResetTime;
	double _lastSuccessfulResetTime;
	BOOL _isResetting;

}
+(id)sharedInstance;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)_resetAndConfigure;
-(BOOL)isWithinPrevWeek:(double)arg1 includeToday:(BOOL)arg2 ;
-(double)today;
-(double)tomorrow;
-(double)yesterday;
-(double)prevWeek;
-(double)nextWeek;
-(BOOL)isToday:(double)arg1 ;
-(BOOL)isTomorrow:(double)arg1 ;
-(BOOL)isYesterday:(double)arg1 ;
-(BOOL)isWithinPrevWeek:(double)arg1 ;
-(BOOL)isWithinNextWeek:(double)arg1 ;
@end

