/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSCalendar, NSMutableDictionary;

@interface _UIDatePickerCalendarDaySet : NSObject {

	NSCalendar* _calendar;
	NSMutableDictionary* _loadedDays;

}
-(id)initWithCalendar:(id)arg1 ;
-(void)cleanupDaysKeepingDaysForMonths:(id)arg1 ;
-(id)daysForMonth:(id)arg1 includingOverlapDays:(BOOL)arg2 ;
-(id)loadedDays;
-(id)_createDaysForMonth:(id)arg1 ;
-(id)_partialDaysForMonth:(id)arg1 atBeginningOfMonth:(BOOL)arg2 count:(unsigned long long)arg3 ;
@end

