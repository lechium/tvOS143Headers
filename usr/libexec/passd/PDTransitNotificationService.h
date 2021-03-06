//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"
#import "PDNotificationStreamConsumer-Protocol.h"
#import "PDScheduledActivityClient-Protocol.h"

@class CLLocationManager, NSArray, NSDate, NSHashTable, NSString, PDDatabaseManager, PDExpressPassManager, PDExpressTransitUpgradeController, PDNotificationStreamManager, PDPaymentWebServiceCoordinator, PDUserNotificationManager;
@protocol OS_dispatch_source, OS_os_transaction;

@interface PDTransitNotificationService : NSObject <CLLocationManagerDelegate, PDNotificationStreamConsumer, PDScheduledActivityClient>
{
    NSArray *_notificationConfiguration;	// 8 = 0x8
    PDPaymentWebServiceCoordinator *_paymentWebServiceCoordinator;	// 16 = 0x10
    PDNotificationStreamManager *_notificationManager;	// 24 = 0x18
    PDUserNotificationManager *_userNotificationManager;	// 32 = 0x20
    PDDatabaseManager *_databaseManager;	// 40 = 0x28
    PDExpressPassManager *_expressPassManager;	// 48 = 0x30
    PDExpressTransitUpgradeController *_upgradeController;	// 56 = 0x38
    struct os_unfair_lock_s _observersLock;	// 64 = 0x40
    NSHashTable *_observers;	// 72 = 0x48
    CLLocationManager *_locationManager;	// 80 = 0x50
    _Bool _monitoringLocation;	// 88 = 0x58
    NSObject<OS_os_transaction> *_locationMonitorTransaction;	// 96 = 0x60
    NSObject<OS_dispatch_source> *_locationTimer;	// 104 = 0x68
    NSDate *_lastCheckDate;	// 112 = 0x70
    _Atomic _Bool _upgradePending;	// 120 = 0x78
    _Atomic _Bool _registeredForImmediateTriggerEvents;	// 121 = 0x79
}

+ (void)clearSentTransitNotificationsState;	// IMP=0x00000001001d4c1c
- (void).cxx_destruct;	// IMP=0x00000001001d9228
@property(retain, nonatomic) PDUserNotificationManager *userNotificationManager; // @synthesize userNotificationManager=_userNotificationManager;
- (id)_defaultPassUniqueIdentifier;	// IMP=0x00000001001d9210
- (void)_expressRenotifiableOpenLoopPassesForMarkets:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d8ca4
- (id)_expressUpgradeableOpenLoopPassesForMarket:(id)arg1;	// IMP=0x00000001001d86a4
- (id)_transitProducts:(id)arg1 forMarket:(id)arg2;	// IMP=0x00000001001d8194
- (void)_availableProductsForMarkets:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d7edc
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x00000001001d7090
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x00000001001d6c84
- (id)_startTime;	// IMP=0x00000001001d6b00
- (void)_unscheduleCheckIn;	// IMP=0x00000001001d6ad4
- (void)_schedulePromotedExpressModeNotificationDemotion:(id)arg1;	// IMP=0x00000001001d670c
- (void)_scheduleCheckIn;	// IMP=0x00000001001d6398
- (void)_connect;	// IMP=0x00000001001d62e8
- (void)_accessObserversWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d60e0
- (void)unregisterObserver:(id)arg1;	// IMP=0x00000001001d607c
- (void)registerObserver:(id)arg1;	// IMP=0x00000001001d6018
- (id)_existingTransitPassesForMarket:(id)arg1;	// IMP=0x00000001001d5d14
- (void)_recordNotificationType:(unsigned long long)arg1 sentForMarkets:(id)arg2;	// IMP=0x00000001001d5684
- (void)_recordNotificationType:(unsigned long long)arg1 sentForMarket:(id)arg2;	// IMP=0x00000001001d55fc
- (id)_sentRenotifyNotificationsForRenotifiyIdentifier:(id)arg1;	// IMP=0x00000001001d5430
- (id)_hasSentRenotifyNotificationFromMarket:(id)arg1;	// IMP=0x00000001001d52d0
- (unsigned long long)_hasSentNotificationForMarket:(id)arg1;	// IMP=0x00000001001d5144
- (void)_upgradeFromNotificationCountToNotificationTypes;	// IMP=0x00000001001d4e9c
- (void)sentTransitNotificationStateWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d4c6c
- (void)_expressNotificationForMarket:(id)arg1 pass:(id)arg2 expressUpgrade:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001001d4130
- (void)_productNotificationMessageForMarket:(id)arg1 product:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001d39f4
- (void)_multipleProductsNotificationForMarket:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001d3454
- (void)_postNotificationForMarkets:(id)arg1 transitProducts:(id)arg2 upgradeableOpenLoopPasses:(id)arg3 renotifiablePasses:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000001001d2bdc
- (void)_cleanupLocationMonitoring;	// IMP=0x00000001001d2b80
- (void)_startLocationMonitoring;	// IMP=0x00000001001d2810
- (_Bool)_shouldSendRenotifyNotificationForTransitMarket:(id)arg1;	// IMP=0x00000001001d25f8
- (_Bool)_shouldSendPromotedNotificationForTransitMarket:(id)arg1;	// IMP=0x00000001001d23b8
- (_Bool)_shouldSendNotificationsPassingBaseRequirementsForTransitMarket:(id)arg1;	// IMP=0x00000001001d1ed0
- (void)_shouldScheduleNotificationActivity:(CDUnknownBlockType)arg1;	// IMP=0x00000001001d1534
- (_Bool)_canUpgradeDefaultPaymentCard;	// IMP=0x00000001001d145c
- (_Bool)_shouldTrigger;	// IMP=0x00000001001d1438
- (void)updateRegistrationForTriggerEvents;	// IMP=0x00000001001d12f0
- (void)handleNotificationWithName:(id)arg1 event:(id)arg2 forStream:(long long)arg3;	// IMP=0x00000001001d12ec
- (id)createCurrentNotificationRegistrationState;	// IMP=0x00000001001d12e4
- (void)postUpgradedPassNotificationForMarket:(id)arg1 pass:(id)arg2;	// IMP=0x00000001001d0ffc
- (void)_checkForNotification;	// IMP=0x00000001001d0e6c
- (void)checkForNotification;	// IMP=0x00000001001d0de0
- (void)start;	// IMP=0x00000001001d0dd4
- (id)initWithPaymentWebServiceCoordinator:(id)arg1 notificationManager:(id)arg2 userNotificationManager:(id)arg3 databaseManager:(id)arg4 expressPassManager:(id)arg5 upgradeController:(id)arg6;	// IMP=0x00000001001d0c40

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

