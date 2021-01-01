/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_source, PKPaymentTransactionProcessorDataSource;
@class NSMutableSet, NSMutableArray, CLLocationManager, CLGeocoder, NSObject, PKMerchantCategoryCodeMap, NSHashTable, PKUsageNotificationServer, NSString;

@interface PKPaymentTransactionProcessor : NSObject <CLLocationManagerDelegate> {

	os_unfair_lock_s _itemsLock;
	NSMutableSet* _locationUpdateItems;
	NSMutableSet* _backgroundLocationUpdateItems;
	NSMutableArray* _reverseGeocodeItems;
	NSMutableSet* _stationsUpdateItems;
	NSMutableArray* _merchantCleanupItems;
	CLLocationManager* _locationManager;
	CLLocationManager* _backgroundMerchantLocationManager;
	CLGeocoder* _geocoder;
	NSObject*<OS_dispatch_source> _locationUpdateTimeoutTimer;
	NSObject*<OS_dispatch_source> _backgroundLocationUpdateTimer;
	BOOL _active;
	BOOL _processingMerchantCleanupItems;
	PKMerchantCategoryCodeMap* _categoryCodeMap;
	os_unfair_lock_s _observersLock;
	NSHashTable* _observers;
	id<PKPaymentTransactionProcessorDataSource> _dataSource;
	PKUsageNotificationServer* _usageNotificationServer;

}

@property (getter=isActive,nonatomic,readonly) BOOL active;                                              //@synthesize active=_active - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentTransactionProcessorDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) PKUsageNotificationServer * usageNotificationServer;                 //@synthesize usageNotificationServer=_usageNotificationServer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isActive;
-(id)initWithQueue:(id)arg1 ;
-(id<PKPaymentTransactionProcessorDataSource>)dataSource;
-(void)setDataSource:(id<PKPaymentTransactionProcessorDataSource>)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)_updateActiveState;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)_accessObserversWithHandler:(/*^block*/id)arg1 ;
-(void)_processPaymentTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2 ;
-(void)_processPaymentTransactionForDemoMode:(id)arg1 forTransactionSourceIdentifier:(id)arg2 ;
-(void)_updateLocation:(id)arg1 forLocationUpdateItem:(id)arg2 andMarkAsProcessed:(BOOL)arg3 ;
-(void)_abortUpdatingLocationForLocationUpdateItem:(id)arg1 ;
-(void)_stopUpdatingLocationIfPossible;
-(void)_abortUpdatingLocationForAllLocationUpdateItems;
-(void)_abortUpdatingLocationForAllBackgroundLocationUpdateItems;
-(void)_processPaymentTransactionForLocationUpdate:(id)arg1 forTransactionSourceIdentifier:(id)arg2 ;
-(id)_pendingReverseGeocodeUpdateItemForTransaction:(id)arg1 ;
-(void)_processPaymentTransactionForStationsUpdate:(id)arg1 forTransactionSourceIdentifier:(id)arg2 ;
-(void)_processPaymentTransactionForMerchantCleanup:(id)arg1 forTransactionSourceIdentifier:(id)arg2 clearingAttempt:(BOOL)arg3 ;
-(void)_markTransactionAsFullyProcessedAndNotifyDelegate:(id)arg1 forTransactionSourceIdentifier:(id)arg2 ;
-(void)_beginProcessingPaymentTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2 skipLocation:(BOOL)arg3 ;
-(id)_pendingLocationUpdateItemForTransaction:(id)arg1 ;
-(void)_continueUpdatingLocationForTransactionUpdateItem:(id)arg1 ;
-(void)_startUpdatingBackgroundLocationIfPossible;
-(void)_startUpdatingLocationIfPossible;
-(void)_beginReverseGeocodingIfPossible;
-(void)_processItemForStationsCleanup:(id)arg1 ;
-(void)_reportTransactionWithFinalLocation:(id)arg1 ;
-(id)_pendingStationsUpdateItemForTransaction:(id)arg1 ;
-(void)_processItemForMerchantCleanup:(id)arg1 clearingAttempt:(BOOL)arg2 ;
-(id)_pendingMerchantCleanupItemForTransaction:(id)arg1 ;
-(void)_beginMerchantCleanupIfPossible;
-(void)_processForLocalMCCLookup:(id)arg1 ;
-(void)processPaymentTransaction:(id)arg1 forTransactionSourceIdentifier:(id)arg2 ;
-(PKUsageNotificationServer *)usageNotificationServer;
-(void)setUsageNotificationServer:(PKUsageNotificationServer *)arg1 ;
@end

