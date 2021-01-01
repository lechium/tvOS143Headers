/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/CADPredicate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/EKDefaultPropertiesLoading.h>

@class CADPredicate, NSDate, NSString;

@interface CADEventTimeWindowPredicate : CADPredicate <NSSecureCoding, EKDefaultPropertiesLoading> {

	BOOL _mustStartInInterval;
	CADPredicate* _wrappedPredicate;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) CADPredicate * wrappedPredicate;              //@synthesize wrappedPredicate=_wrappedPredicate - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                             //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) BOOL mustStartInInterval;                     //@synthesize mustStartInInterval=_mustStartInInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)predicateFormat;
-(NSDate *)endDate;
-(NSDate *)startDate;
-(BOOL)shouldLoadDefaultProperties;
-(id)defaultPropertiesToLoad;
-(id)copyMatchingItemsWithDatabase:(CalDatabase*)arg1 ;
-(BOOL)mustStartInInterval;
-(id)initWithPredicate:(id)arg1 limitWithStartDate:(id)arg2 endDate:(id)arg3 mustStartInInterval:(BOOL)arg4 ;
-(CADPredicate *)wrappedPredicate;
@end
