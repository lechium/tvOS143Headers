/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, AVInterstitialTimeRange, AVInterstitialDateRange;

@interface AVTimeRange : NSObject <NSCopying> {

	double _startTime;
	double _duration;
	NSDate* _startDate;

}

@property (readonly) AVInterstitialTimeRange * interstice; 
@property (readonly) AVInterstitialDateRange * dateBasedInterstice; 
@property (getter=isHidden,readonly) BOOL hidden; 
@property (getter=isSkipped,readonly) BOOL skipped; 
@property (getter=isCollapsedInTimeLine,readonly) BOOL collapsedInTimeLine; 
@property (readonly) SCD_Struct_AV1 startCMTime; 
@property (readonly) SCD_Struct_AV1 endCMTime; 
@property (nonatomic,retain) NSDate * startDate;                                         //@synthesize startDate=_startDate - In the implementation block
@property (readonly) double startTime;                                                   //@synthesize startTime=_startTime - In the implementation block
@property (readonly) double duration;                                                    //@synthesize duration=_duration - In the implementation block
@property (readonly) double endTime; 
+(id)timeRangeZero;
+(id)timeRangeWithInterstice:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(long long)compare:(id)arg1 ;
-(double)startTime;
-(id)endDate;
-(NSDate *)startDate;
-(double)duration;
-(BOOL)containsDate:(id)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(BOOL)isHidden;
-(double)endTime;
-(id)initWithStartTime:(double)arg1 endTime:(double)arg2 ;
-(id)initWithStartTime:(double)arg1 duration:(double)arg2 ;
-(id)initWithCMTimeRange:(SCD_Struct_AV8)arg1 ;
-(id)initWithAVTimedMetadataGroup:(id)arg1 ;
-(id)initWithUnionOfCMTimeRanges:(id)arg1 ;
-(void)setMapTime:(double)arg1 toDate:(id)arg2 ;
-(void)setMapDate:(id)arg1 toTime:(double)arg2 ;
-(id)dateForTime:(double)arg1 ;
-(double)timeForDate:(id)arg1 ;
-(SCD_Struct_AV1)startCMTime;
-(SCD_Struct_AV1)endCMTime;
-(SCD_Struct_AV8)cmTimeRange;
-(BOOL)containsTime:(double)arg1 ;
-(double)deltaTimeFromOutsideTime:(double)arg1 ;
-(double)pinnedTime:(double)arg1 ;
-(id)timeRangeIntersectingWithTimeRange:(id)arg1 ;
-(id)timeRangeExcludingTimeRange:(id)arg1 ;
-(id)timeRangeByAddingTimeInterval:(double)arg1 shiftingDates:(BOOL)arg2 ;
-(id)timeRangeByAddingTimeInterval:(double)arg1 ;
-(BOOL)isEqualToTimeRange:(id)arg1 ;
-(AVInterstitialTimeRange *)interstice;
-(BOOL)isSkipped;
-(BOOL)isCollapsedInTimeLine;
-(AVInterstitialDateRange *)dateBasedInterstice;
-(BOOL)requiresLinearPlaybackForTime:(double)arg1 ;
@end
