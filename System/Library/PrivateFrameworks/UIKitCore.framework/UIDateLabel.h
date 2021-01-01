/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UILabel.h>

@class NSDate, NSCalendar, NSString, UIFont;

@interface UIDateLabel : UILabel {

	BOOL _forceTimeOnly;
	NSDate* _date;
	BOOL _boldForAllLocales;
	NSDate* _yesterday;
	NSDate* _today;
	NSDate* _noon;
	NSDate* _tomorrow;
	NSDate* _previousWeek;
	NSCalendar* _calendar;
	BOOL _shouldRecomputeText;
	double _paddingFromTimeToDesignator;

}

@property (nonatomic,readonly) BOOL use24HourTime; 
@property (nonatomic,readonly) BOOL timeDesignatorAppearsBeforeTime; 
@property (nonatomic,readonly) CGSize timeDesignatorSize; 
@property (getter=_dateString,nonatomic,readonly) NSString * dateString; 
@property (assign,nonatomic) BOOL shouldRecomputeText;                                //@synthesize shouldRecomputeText=_shouldRecomputeText - In the implementation block
@property (nonatomic,retain) NSDate * date; 
@property (assign,nonatomic) double timeInterval; 
@property (nonatomic,readonly) UIFont * timeDesignatorFont; 
@property (nonatomic,readonly) NSString * timeDesignator; 
@property (assign,nonatomic) BOOL forceTimeOnly;                                      //@synthesize forceTimeOnly=_forceTimeOnly - In the implementation block
@property (assign,nonatomic) BOOL boldForAllLocales;                                  //@synthesize boldForAllLocales=_boldForAllLocales - In the implementation block
@property (assign,nonatomic) double paddingFromTimeToDesignator;                      //@synthesize paddingFromTimeToDesignator=_paddingFromTimeToDesignator - In the implementation block
+(id)_dateFormatter;
+(id)_relativeDateFormatter;
+(id)defaultFont;
+(id)amString;
+(id)pmString;
+(id)_timeOnlyDateFormatter;
+(id)_weekdayDateFormatter;
-(void)dealloc;
-(void)invalidate;
-(double)timeInterval;
-(NSDate *)date;
-(id)_calendar;
-(void)setDate:(NSDate *)arg1 ;
-(double)_yesterday;
-(double)_today;
-(double)_tomorrow;
-(id)text;
-(id)font;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setTimeInterval:(double)arg1 ;
-(void)drawTextInRect:(CGRect)arg1 ;
-(id)_stringDrawingContext;
-(id)_dateString;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(void)setShouldRecomputeText:(BOOL)arg1 ;
-(void)_recomputeTextIfNecessary;
-(CGSize)timeDesignatorSize;
-(NSString *)timeDesignator;
-(BOOL)timeDesignatorAppearsBeforeTime;
-(UIFont *)timeDesignatorFont;
-(id)_todayDate;
-(id)_dateWithDayDiffFromToday:(long long)arg1 ;
-(BOOL)shouldRecomputeText;
-(BOOL)boldForAllLocales;
-(void)_didUpdateDate;
-(double)_lastWeek;
-(BOOL)use24HourTime;
-(double)_noon;
-(void)setForceTimeOnly:(BOOL)arg1 ;
-(void)setBoldForAllLocales:(BOOL)arg1 ;
-(BOOL)forceTimeOnly;
-(double)paddingFromTimeToDesignator;
-(void)setPaddingFromTimeToDesignator:(double)arg1 ;
@end

