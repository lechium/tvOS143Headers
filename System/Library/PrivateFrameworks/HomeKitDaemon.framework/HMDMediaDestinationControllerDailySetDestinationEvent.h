/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString;

@interface HMDMediaDestinationControllerDailySetDestinationEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	NSString* _existingDestinationType;

}

@property (copy,readonly) NSString * existingDestinationType;              //@synthesize existingDestinationType=_existingDestinationType - In the implementation block
+(id)identifier;
-(id)eventName;
-(id)serializedEvent;
-(id)initWithExistingDestinationType:(id)arg1 ;
-(NSString *)existingDestinationType;
@end

