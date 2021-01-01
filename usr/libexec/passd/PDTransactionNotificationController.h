//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PDAccountManager, PDDatabaseManager, PDFamilyCircleManager, PDPeerPaymentWebServiceCoordinator, PDUserNotificationManager;
@protocol OS_dispatch_queue;

@interface PDTransactionNotificationController : NSObject
{
    PDUserNotificationManager *_userNotificationManager;	// 8 = 0x8
    PDDatabaseManager *_databaseManager;	// 16 = 0x10
    PDAccountManager *_accountManager;	// 24 = 0x18
    PDPeerPaymentWebServiceCoordinator *_peerPaymentWebServiceCoordinator;	// 32 = 0x20
    PDFamilyCircleManager *_familyCircleManager;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000010016ff94
- (_Bool)_shouldCreateNotificationForTransactionUpdateReasons:(id)arg1 notificationTypeDescription:(id)arg2;	// IMP=0x000000010016fca8
- (_Bool)_shouldDeleteNotificationForTransaction:(id)arg1;	// IMP=0x000000010016fad4
- (_Bool)_shouldCreateMerchantTransactionNotificationForTransaction:(id)arg1 config:(id)arg2;	// IMP=0x000000010016f5a4
- (void)_scheduleOrCancelReminderNotificationsForPendingTransaction:(id)arg1 config:(id)arg2;	// IMP=0x000000010016f29c
- (void)_scheduleOrCancelBalanceReminderNotificationIfNecessaryForPassUniqueIdentifier:(id)arg1 balance:(id)arg2 transaction:(id)arg3;	// IMP=0x000000010016ef30
- (_Bool)_isValidTimeBetweenCreationAndAcceptForPeerPaymentTransaction:(id)arg1 config:(id)arg2;	// IMP=0x000000010016ee68
- (_Bool)_shouldDisplayNotificationForReceivedPeerPaymentTransactionOnAssociatedAccount:(id)arg1 config:(id)arg2;	// IMP=0x000000010016eacc
- (_Bool)_shouldDisplayNotificationForManuallyAcceptedPeerPaymentTransaction:(id)arg1 config:(id)arg2;	// IMP=0x000000010016e744
- (void)_updatePeerPaymentNotificationIfNecessaryForTransaction:(id)arg1 existingTransaction:(id)arg2 config:(id)arg3;	// IMP=0x000000010016d4c8
- (void)_updateFraudNotificationIfNecessaryForTransaction:(id)arg1 config:(id)arg2;	// IMP=0x000000010016d0d8
- (void)_updateTransactionNotificationIfNecessaryForTransaction:(id)arg1 existingTransaction:(id)arg2 config:(id)arg3;	// IMP=0x000000010016c7dc
- (void)_fetchFamilyMemberIfNeccessaryForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010016c4ac
- (void)transitPropertiesUpdated:(id)arg1 forPassUniqueIdentifier:(id)arg2;	// IMP=0x000000010016c174
- (void)paymentTransactionUpdated:(id)arg1 existingPaymentTransaction:(id)arg2 transactionSourceIdentifier:(id)arg3;	// IMP=0x000000010016b7b8
- (id)initWithUserNotificationManager:(id)arg1 databaseManager:(id)arg2 accountManager:(id)arg3 peerPaymentWebServiceCoordinator:(id)arg4 familyCircleManager:(id)arg5;	// IMP=0x000000010016b658

@end

