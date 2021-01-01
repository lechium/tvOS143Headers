/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HMIPersonManager.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMIExternalPersonManagerDataSource;
@class HMIExternalPersonManagerSettings, NSOperationQueue, HMFTimer, HMFUnfairLock, NSString;

@interface HMIExternalPersonManager : HMIPersonManager <HMFTimerDelegate, HMFLogging> {

	id<HMIExternalPersonManagerDataSource> _dataSource;
	HMIExternalPersonManagerSettings* _settings;
	NSOperationQueue* _operationQueue;
	HMFTimer* _watchdogTimer;
	HMFUnfairLock* _lock;

}

@property (readonly) NSOperationQueue * operationQueue;                                             //@synthesize operationQueue=_operationQueue - In the implementation block
@property (readonly) HMFTimer * watchdogTimer;                                                      //@synthesize watchdogTimer=_watchdogTimer - In the implementation block
@property (nonatomic,readonly) HMFUnfairLock * lock;                                                //@synthesize lock=_lock - In the implementation block
@property (readonly) HMIExternalPersonManagerSettings * settings;                                   //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic,__weak) id<HMIExternalPersonManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMFUnfairLock *)lock;
-(NSOperationQueue *)operationQueue;
-(HMIExternalPersonManagerSettings *)settings;
-(id<HMIExternalPersonManagerDataSource>)dataSource;
-(void)setDataSource:(id<HMIExternalPersonManagerDataSource>)arg1 ;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(void)handleUpdatedPerson:(id)arg1 ;
-(void)handleUpdatedPersonFaceCrop:(id)arg1 ;
-(void)handleUpdatedFaceprint:(id)arg1 ;
-(void)handleRemovedPersonWithUUID:(id)arg1 ;
-(void)handleRemovedFaceCropWithUUID:(id)arg1 ;
-(void)handleRemovedFaceprintWithUUID:(id)arg1 ;
-(void)handleUpdatedSettings:(id)arg1 ;
-(id)initWithUUID:(id)arg1 homeUUID:(id)arg2 ;
-(void)_updateSettings:(id)arg1 ;
-(HMFTimer *)watchdogTimer;
@end

