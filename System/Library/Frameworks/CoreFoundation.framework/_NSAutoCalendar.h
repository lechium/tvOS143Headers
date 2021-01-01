/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCalendar.h>

@class NSCalendar, NSLocale, NSTimeZone, NSDate;

@interface _NSAutoCalendar : NSCalendar {

	NSCalendar* cal;
	NSLocale* changedLocale;
	NSTimeZone* changedTimeZone;
	unsigned long long changedFirstWeekday;
	unsigned long long changedMinimumDaysinFirstWeek;
	NSDate* changedGregorianStartDate;
	unsigned long long combinedNoteCount;
	os_unfair_lock_s _lock;

}
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(Class)classForCoder;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCalendarIdentifier:(id)arg1 ;
-(void)setTimeZone:(id)arg1 ;
-(id)dateFromComponents:(id)arg1 ;
-(id)timeZone;
-(id)_init;
-(id)calendarIdentifier;
-(void)setLocale:(id)arg1 ;
-(id)locale;
-(void)setFirstWeekday:(unsigned long long)arg1 ;
-(unsigned long long)firstWeekday;
-(void)setMinimumDaysInFirstWeek:(unsigned long long)arg1 ;
-(unsigned long long)minimumDaysInFirstWeek;
-(id)gregorianStartDate;
-(void)setGregorianStartDate:(id)arg1 ;
-(NSRange)minimumRangeOfUnit:(unsigned long long)arg1 ;
-(NSRange)maximumRangeOfUnit:(unsigned long long)arg1 ;
-(NSRange)rangeOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
-(unsigned long long)ordinalityOfUnit:(unsigned long long)arg1 inUnit:(unsigned long long)arg2 forDate:(id)arg3 ;
-(BOOL)rangeOfUnit:(unsigned long long)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4 ;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 ;
-(id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned long long)arg3 ;
-(id)components:(unsigned long long)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned long long)arg4 ;
-(BOOL)nextWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned long long)arg3 afterDate:(id)arg4 ;
-(BOOL)isDateInWeekend:(id)arg1 ;
-(void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned long long)arg3 usingBlock:(/*^block*/id)arg4 ;
-(void)_update;
@end

