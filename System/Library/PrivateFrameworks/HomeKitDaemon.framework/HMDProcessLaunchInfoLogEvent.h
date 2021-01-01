/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreAnalyticsLogging.h>

@class NSString;

@interface HMDProcessLaunchInfoLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging> {

	NSString* _dataSyncState;
	double _timeSincePreviousProcessLaunch;
	double _timeSinceLaunchToDataSyncStateGood;

}

@property (nonatomic,copy,readonly) NSString * dataSyncState;                //@synthesize dataSyncState=_dataSyncState - In the implementation block
@property (readonly) double timeSincePreviousProcessLaunch;                  //@synthesize timeSincePreviousProcessLaunch=_timeSincePreviousProcessLaunch - In the implementation block
@property (readonly) double timeSinceLaunchToDataSyncStateGood;              //@synthesize timeSinceLaunchToDataSyncStateGood=_timeSinceLaunchToDataSyncStateGood - In the implementation block
+(id)uuid;
-(id)eventName;
-(NSString *)dataSyncState;
-(id)serializedEvent;
-(double)timeSincePreviousProcessLaunch;
-(double)timeSinceLaunchToDataSyncStateGood;
-(id)initWithDataSyncState:(id)arg1 timeSincePreviousProcessLaunch:(double)arg2 timeSinceLaunchToDataSyncStateGood:(double)arg3 ;
@end

