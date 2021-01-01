/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSString, NSDateFormatter;

@interface TVPlaybackDateController : NSObject {

	unsigned long long _dateStyle;
	NSDate* _date;
	NSString* _localizedString;
	NSDateFormatter* _dateFormatter;
	id _localeDidChangeObserver;
	id _timeZoneDidChangeObserver;

}

@property (nonatomic,copy) NSString * localizedString;                         //@synthesize localizedString=_localizedString - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                  //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (assign,nonatomic,__weak) id localeDidChangeObserver;                //@synthesize localeDidChangeObserver=_localeDidChangeObserver - In the implementation block
@property (assign,nonatomic,__weak) id timeZoneDidChangeObserver;              //@synthesize timeZoneDidChangeObserver=_timeZoneDidChangeObserver - In the implementation block
@property (assign,nonatomic) unsigned long long dateStyle;                     //@synthesize dateStyle=_dateStyle - In the implementation block
@property (nonatomic,copy) NSDate * date;                                      //@synthesize date=_date - In the implementation block
-(id)init;
-(void)dealloc;
-(NSDate *)date;
-(void)setDateStyle:(unsigned long long)arg1 ;
-(unsigned long long)dateStyle;
-(NSDateFormatter *)dateFormatter;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)localizedString;
-(void)_removeObservers;
-(void)_updateLocalizedString;
-(void)_configureDateFormatter:(id)arg1 forDateStyle:(unsigned long long)arg2 ;
-(void)_addObserversWithDateFormatter:(id)arg1 ;
-(void)setLocaleDidChangeObserver:(id)arg1 ;
-(void)setTimeZoneDidChangeObserver:(id)arg1 ;
-(id)localeDidChangeObserver;
-(id)timeZoneDidChangeObserver;
-(void)setLocalizedString:(NSString *)arg1 ;
@end

