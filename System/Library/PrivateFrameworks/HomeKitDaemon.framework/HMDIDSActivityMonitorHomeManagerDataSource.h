/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDIDSActivityMonitorDataSource.h>

@protocol HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate;
@class HMDHomeManager, NSString;

@interface HMDIDSActivityMonitorHomeManagerDataSource : NSObject <HMFLogging, HMDIDSActivityMonitorDataSource> {

	id<HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate> delegate;
	HMDHomeManager* _homeManager;

}

@property (readonly) HMDHomeManager * homeManager;                                                        //@synthesize homeManager=_homeManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (__weak) id<HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate> delegate; 
+(id)logCategory;
-(id<HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate>)delegate;
-(void)setDelegate:(id<HMDIDSActivityMonitorBroadcasterPushTokenDataSourceDelegate>)arg1 ;
-(void)start;
-(id)currentDevice;
-(HMDHomeManager *)homeManager;
-(id)initWithHomeManager:(id)arg1 ;
-(id)pushTokensForDevicesObservingSubjectDevice:(id)arg1 subActivity:(id)arg2 ;
-(void)startObservingDevice:(id)arg1 subActivity:(id)arg2 ;
-(void)stopObservingDevice:(id)arg1 subActivity:(id)arg2 ;
-(void)startWithNotificationCenter:(id)arg1 ;
-(void)handleDeviceAdded:(id)arg1 ;
-(void)handleDeviceRemoved:(id)arg1 ;
-(void)handleRegistrationUpdated:(id)arg1 ;
-(BOOL)homeHasCamera:(id)arg1 ;
@end

