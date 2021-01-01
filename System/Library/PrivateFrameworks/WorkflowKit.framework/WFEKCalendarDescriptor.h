/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:22:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface WFEKCalendarDescriptor : NSObject <NSCopying, NSSecureCoding> {

	BOOL _allCalendars;
	NSString* _calendarTitle;
	NSString* _calendarIdentifier;
	NSNumber* _calendarRGBAValue;

}

@property (nonatomic,readonly) BOOL allCalendars;                               //@synthesize allCalendars=_allCalendars - In the implementation block
@property (nonatomic,copy,readonly) NSString * calendarTitle;                   //@synthesize calendarTitle=_calendarTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * calendarIdentifier;              //@synthesize calendarIdentifier=_calendarIdentifier - In the implementation block
@property (nonatomic,readonly) NSNumber * calendarRGBAValue;                    //@synthesize calendarRGBAValue=_calendarRGBAValue - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)calendarIdentifier;
-(BOOL)allCalendars;
-(id)matchingCalendarsFromArray:(id)arg1 ;
-(id)initWithAllCalendars;
-(id)initWithCalendarTitle:(id)arg1 identifier:(id)arg2 RGBAValue:(id)arg3 ;
-(NSString *)calendarTitle;
-(NSNumber *)calendarRGBAValue;
@end

