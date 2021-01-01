/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray, _DKHistogram;

@interface _DKPredictionTimeline : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _startDate;
	NSArray* _transitionDates;
	_DKHistogram* _startHistogram;
	_DKHistogram* _endHistogram;
	NSArray* _values;

}

@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) NSArray * transitionDates; 
@property (nonatomic,retain) _DKHistogram * startHistogram;              //@synthesize startHistogram=_startHistogram - In the implementation block
@property (nonatomic,retain) _DKHistogram * endHistogram;                //@synthesize endHistogram=_endHistogram - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)timelineWithValues:(id)arg1 eachWithDuration:(double)arg2 startingAt:(id)arg3 ;
+(id)predictionUnavailable;
+(id)timelineWithValues:(id)arg1 forDurations:(id)arg2 startingAt:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(void)setStartHistogram:(_DKHistogram *)arg1 ;
-(void)setEndHistogram:(_DKHistogram *)arg1 ;
-(BOOL)isUnavailable;
-(NSArray *)transitionDates;
-(id)valueAtDate:(id)arg1 ;
-(id)largestDateRangeWithValuesBetween:(double)arg1 and:(double)arg2 ofMinimumDuration:(double)arg3 ;
-(id)nextDateRangeWithValuesBetween:(double)arg1 and:(double)arg2 ofMinimumDuration:(double)arg3 ;
-(_DKHistogram *)startHistogram;
-(_DKHistogram *)endHistogram;
@end

