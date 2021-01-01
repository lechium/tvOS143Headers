/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSLocale, NSCalendar;

@interface NSRelativeDateTimeFormatter : NSFormatter {

	CFRelativeDateTimeFormatterRef _formatter;
	NSLocale* _locale;
	NSCalendar* _calendar;
	long long _dateTimeStyle;
	long long _unitsStyle;
	long long _formattingContext;

}

@property (assign) long long dateTimeStyle;                  //@synthesize dateTimeStyle=_dateTimeStyle - In the implementation block
@property (assign) long long unitsStyle;                     //@synthesize unitsStyle=_unitsStyle - In the implementation block
@property (assign) long long formattingContext;              //@synthesize formattingContext=_formattingContext - In the implementation block
@property (copy) NSCalendar * calendar;                      //@synthesize calendar=_calendar - In the implementation block
@property (copy) NSLocale * locale;                          //@synthesize locale=_locale - In the implementation block
-(void)dealloc;
-(NSCalendar *)calendar;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(void)_clearFormatter;
-(id)stringForObjectValue:(id)arg1 ;
-(void)setFormattingContext:(long long)arg1 ;
-(long long)formattingContext;
-(id)_stringFromDateComponents:(id)arg1 ;
-(id)localizedStringForDate:(id)arg1 relativeToDate:(id)arg2 ;
-(id)_stringForCalendarUnit:(unsigned long long)arg1 value:(long long)arg2 ;
-(void)setUnitsStyle:(long long)arg1 ;
-(long long)unitsStyle;
-(void)setDateTimeStyle:(long long)arg1 ;
-(long long)dateTimeStyle;
-(id)localizedStringFromDateComponents:(id)arg1 ;
-(id)localizedStringFromTimeInterval:(double)arg1 ;
@end

