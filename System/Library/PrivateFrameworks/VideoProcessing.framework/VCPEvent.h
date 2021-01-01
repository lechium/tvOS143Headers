/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSTimeZone, NSString, NSURL;

@interface VCPEvent : NSObject <NSSecureCoding> {

	BOOL _allDay;
	NSDate* _startDate;
	NSDate* _endDate;
	NSTimeZone* _timeZone;
	NSString* _title;
	NSString* _location;
	NSURL* _url;
	NSString* _notes;

}

@property (nonatomic,retain) NSDate * startDate;                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                   //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;              //@synthesize timeZone=_timeZone - In the implementation block
@property (assign,nonatomic) BOOL allDay;                        //@synthesize allDay=_allDay - In the implementation block
@property (nonatomic,retain) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * location;                //@synthesize location=_location - In the implementation block
@property (nonatomic,retain) NSURL * url;                        //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * notes;                   //@synthesize notes=_notes - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSTimeZone *)timeZone;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(void)setAllDay:(BOOL)arg1 ;
-(BOOL)allDay;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
@end

