/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_HKXPCExportable.h>
#import <libobjc.A.dylib/HKProfileStoreClient.h>

@protocol HKProfileStoreObserver;
@class HKProxyProvider, HKObserverSet, NSString;

@interface HKProfileStore : NSObject <_HKXPCExportable, HKProfileStoreClient> {

	HKProxyProvider* _proxyProvider;
	HKObserverSet*<HKProfileStoreObserver> _observers;
	BOOL _startedObserving;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)taskIdentifier;
-(void)removeObserver:(id)arg1 ;
-(id)exportedInterface;
-(void)connectionInvalidated;
-(id)remoteInterface;
-(id)initWithHealthStore:(id)arg1 ;
-(id)synchronouslyFetchFirstName;
-(void)fetchProfileIdentifierForNRDeviceUUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_getSynchronousProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)_fetchProxyWithHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(void)dispatchProfileListDidUpdate;
-(void)startObservingOnlyIfSuccessful:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)client_remoteDidUpdateProfileList;
-(void)createProfileOfType:(long long)arg1 displayName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deleteProfile:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchAllProfilesWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchProfileIdentifierForNRDeviceUUID:(id)arg1 ownerAppleID:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchDisplayName:(/*^block*/id)arg1 ;
-(void)setDisplayFirstName:(id)arg1 lastName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchDisplayImageData:(/*^block*/id)arg1 ;
-(void)setDisplayImageData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addObserver:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
