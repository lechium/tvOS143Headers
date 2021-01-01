/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate;

@interface MTIDSpan : NSObject {

	unsigned long long _serialNumber;
	NSDate* _startDate;
	NSDate* _endDate;
	NSDate* _referenceDate;

}

@property (nonatomic,retain) NSDate * referenceDate;                       //@synthesize referenceDate=_referenceDate - In the implementation block
@property (assign,nonatomic) unsigned long long serialNumber;              //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                             //@synthesize endDate=_endDate - In the implementation block
+(id)localCalendar;
+(id)spanForScheme:(id)arg1 date:(id)arg2 referenceDate:(id)arg3 ;
-(NSDate *)referenceDate;
-(void)setReferenceDate:(NSDate *)arg1 ;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(unsigned long long)serialNumber;
-(void)setSerialNumber:(unsigned long long)arg1 ;
-(id)initWithScheme:(id)arg1 date:(id)arg2 referenceDate:(id)arg3 ;
@end

