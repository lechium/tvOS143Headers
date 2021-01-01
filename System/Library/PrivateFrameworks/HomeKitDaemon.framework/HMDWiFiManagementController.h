/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class HMDHAPAccessory, HMDService, NSObject, HMFTimer, HMDWiFiReconfigurationLogEvent, NSNotificationCenter, NSString;

@interface HMDWiFiManagementController : HMFObject <HMFTimerDelegate, HMFLogging> {

	unsigned short _reconfigurationCookie;
	HMDHAPAccessory* _accessory;
	HMDService* _service;
	NSObject*<OS_dispatch_queue> _workQueue;
	long long _reconfigurationState;
	HMFTimer* _reconfigurationTimeoutTimer;
	/*^block*/id _reconfigurationVerificationCallback;
	/*^block*/id _reconfigurationCompletion;
	HMDWiFiReconfigurationLogEvent* _reconfigurationLogEvent;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                        //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) NSNotificationCenter * notificationCenter; 
@property (assign,nonatomic) long long reconfigurationState;                                        //@synthesize reconfigurationState=_reconfigurationState - In the implementation block
@property (assign,nonatomic) unsigned short reconfigurationCookie;                                  //@synthesize reconfigurationCookie=_reconfigurationCookie - In the implementation block
@property (nonatomic,retain) HMFTimer * reconfigurationTimeoutTimer;                                //@synthesize reconfigurationTimeoutTimer=_reconfigurationTimeoutTimer - In the implementation block
@property (nonatomic,copy) id reconfigurationVerificationCallback;                                  //@synthesize reconfigurationVerificationCallback=_reconfigurationVerificationCallback - In the implementation block
@property (nonatomic,copy) id reconfigurationCompletion;                                            //@synthesize reconfigurationCompletion=_reconfigurationCompletion - In the implementation block
@property (nonatomic,retain) HMDWiFiReconfigurationLogEvent * reconfigurationLogEvent;              //@synthesize reconfigurationLogEvent=_reconfigurationLogEvent - In the implementation block
@property (__weak,readonly) HMDHAPAccessory * accessory;                                            //@synthesize accessory=_accessory - In the implementation block
@property (readonly) HMDService * service;                                                          //@synthesize service=_service - In the implementation block
@property (readonly) BOOL supportsStationConfiguration; 
@property (readonly) long long capabilities; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(id)sharedPSKForNetworkWithSSID:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(HMDService *)service;
-(long long)capabilities;
-(HMDHAPAccessory *)accessory;
-(NSNotificationCenter *)notificationCenter;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(id)initWithAccessory:(id)arg1 wiFiTransportService:(id)arg2 workQueue:(id)arg3 ;
-(BOOL)supportsStationConfiguration;
-(long long)reconfigurationState;
-(void)setReconfigurationState:(long long)arg1 ;
-(void)_performWiFiConfigurationControlRequest:(id)arg1 withDescription:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setReconfigurationVerificationCallback:(id)arg1 ;
-(void)setReconfigurationCompletion:(id)arg1 ;
-(void)setReconfigurationLogEvent:(HMDWiFiReconfigurationLogEvent *)arg1 ;
-(void)_reconfigurationCompletedWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)setReconfigurationCookie:(unsigned short)arg1 ;
-(unsigned short)reconfigurationCookie;
-(void)_accessoryDidBecomeReachable:(id)arg1 ;
-(void)setReconfigurationTimeoutTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)reconfigurationTimeoutTimer;
-(id)reconfigurationVerificationCallback;
-(void)_commitConfigurationUpdate;
-(HMDWiFiReconfigurationLogEvent *)reconfigurationLogEvent;
-(id)reconfigurationCompletion;
-(void)reconfigureWithSSID:(id)arg1 PSK:(id)arg2 logEvent:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)safelyReconfigureWithSSID:(id)arg1 PSK:(id)arg2 verificationCallback:(/*^block*/id)arg3 logEvent:(id)arg4 completion:(/*^block*/id)arg5 ;
@end

