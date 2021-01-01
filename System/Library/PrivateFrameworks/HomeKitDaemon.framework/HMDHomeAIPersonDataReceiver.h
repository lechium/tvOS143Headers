/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIPersonManagerDataSource.h>
#import <libobjc.A.dylib/HMDPersonDataReceiver.h>

@protocol OS_dispatch_queue, HMDPersonDataSource;
@class HMIHomePersonManager, HMIExternalPersonManager, HMIPersonManager, NSObject, NSString;

@interface HMDHomeAIPersonDataReceiver : HMFObject <HMIPersonManagerDataSource, HMDPersonDataReceiver> {

	HMIPersonManager* _personManager;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<HMDPersonDataSource> _dataSource;

}

@property (readonly) HMIPersonManager * personManager;                            //@synthesize personManager=_personManager - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                      //@synthesize workQueue=_workQueue - In the implementation block
@property (__weak) id<HMDPersonDataSource> dataSource;                            //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) HMIHomePersonManager * homePersonManager; 
@property (readonly) HMIExternalPersonManager * photosPersonManager; 
-(NSObject*<OS_dispatch_queue>)workQueue;
-(id<HMDPersonDataSource>)dataSource;
-(void)setDataSource:(id<HMDPersonDataSource>)arg1 ;
-(void)performCloudPullWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchPersonsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllPersonsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchFaceCropsForPersonsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllPersonFaceCropsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchFaceprintsForFaceCropsWithUUIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllFaceprintsWithCompletion:(/*^block*/id)arg1 ;
-(HMIPersonManager *)personManager;
-(void)configureWithDataSource:(id)arg1 home:(id)arg2 ;
-(void)handleUpdatedPerson:(id)arg1 mirrorOutputFuture:(id)arg2 ;
-(void)handleUpdatedPersonFaceCrop:(id)arg1 mirrorOutputFuture:(id)arg2 ;
-(void)handleUpdatedFaceprint:(id)arg1 mirrorOutputFuture:(id)arg2 ;
-(void)handleRemovedPersonWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2 ;
-(void)handleRemovedFaceCropWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2 ;
-(void)handleRemovedFaceprintWithUUID:(id)arg1 mirrorOutputFuture:(id)arg2 ;
-(void)handleUpdatedIsCurrentDeviceAvailableResident:(BOOL)arg1 ;
-(void)handleUpdatedIsDataSyncInProgress:(BOOL)arg1 ;
-(id)initWithPersonManager:(id)arg1 workQueue:(id)arg2 ;
@end

