/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class HMDAnalyticsEventTriggerUserConfirmationReceiverSessionData, NSDate, NSString;

@interface HomeKitEventTriggerUserConfirmationReceiverSessionLogEvent : HMDLogEvent <HMDAWDLogEvent> {

	HMDAnalyticsEventTriggerUserConfirmationReceiverSessionData* _analyticsData;
	NSDate* _startTime;

}

@property (nonatomic,readonly) HMDAnalyticsEventTriggerUserConfirmationReceiverSessionData * analyticsData;              //@synthesize analyticsData=_analyticsData - In the implementation block
@property (nonatomic,readonly) NSDate * startTime;                                                                       //@synthesize startTime=_startTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)uuid;
-(NSDate *)startTime;
-(id)initWithSessionID:(id)arg1 ;
-(HMDAnalyticsEventTriggerUserConfirmationReceiverSessionData *)analyticsData;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
@end
