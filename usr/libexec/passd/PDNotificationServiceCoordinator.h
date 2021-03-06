//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDDatabaseManagerNotificationServicesDelegate-Protocol.h"
#import "PDNetworkTaskDelegate-Protocol.h"
#import "PDPushNotificationConsumer-Protocol.h"

@class NSMutableDictionary, NSSet, NSString, PDDatabaseManager, PDNetworkTaskManager, PDPushNotificationManager, PDUserNotificationManager, PKPaymentTransactionProcessor, PKSecureElement;

@interface PDNotificationServiceCoordinator : NSObject <PDNetworkTaskDelegate, PDPushNotificationConsumer, PDDatabaseManagerNotificationServicesDelegate>
{
    NSSet *_pushTopics;	// 8 = 0x8
    PDDatabaseManager *_databaseManager;	// 16 = 0x10
    PDUserNotificationManager *_userNotificationManager;	// 24 = 0x18
    PKPaymentTransactionProcessor *_paymentTransactionProcessor;	// 32 = 0x20
    PDPushNotificationManager *_pushNotificationManager;	// 40 = 0x28
    PKSecureElement *_secureElement;	// 48 = 0x30
    PDNetworkTaskManager *_taskManager;	// 56 = 0x38
    NSMutableDictionary *_taskToHandlerMap;	// 64 = 0x40
    NSMutableDictionary *_taskToResponseMap;	// 72 = 0x48
    NSMutableDictionary *_taskToErrorMap;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000100051ab0
- (id)_dictionaryKeyForTask:(id)arg1;	// IMP=0x0000000100051a9c
- (void)_invokeAndClearHandlerForTask:(id)arg1 withResult:(_Bool)arg2;	// IMP=0x00000001000519e4
- (void)_recalculatePushTopics;	// IMP=0x00000001000519b0
- (void)_cancelAllTasksForPaymentApplication:(id)arg1 notificationService:(id)arg2;	// IMP=0x000000010005168c
- (_Bool)_processMessageDictionary:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 performTruncation:(_Bool)arg4;	// IMP=0x000000010005159c
- (_Bool)_processTransactionDictionary:(id)arg1 forPassUniqueIdentifier:(id)arg2 paymentApplication:(id)arg3 performTruncation:(_Bool)arg4 isInitialUpdate:(_Bool)arg5;	// IMP=0x0000000100051374
- (_Bool)_validateBalanceResult:(id)arg1;	// IMP=0x0000000100051190
- (void)removeLowBalanceNotificationForBalance:(id)arg1 withPassUniqueIdentifier:(id)arg2;	// IMP=0x0000000100050f38
- (void)updateLowBalanceNotificationForBalance:(id)arg1 withPassUniqueIdentifier:(id)arg2;	// IMP=0x0000000100050c68
- (void)sendLowBalanceNotificationForBalance:(id)arg1 withReminder:(id)arg2 passUniqueIdentifier:(id)arg3;	// IMP=0x0000000100050b08
- (void)sendLowBalanceNotificationIfNecessaryForUpdatedBalances:(id)arg1 startingBalances:(id)arg2 passUniqueIdentifier:(id)arg3;	// IMP=0x0000000100050698
- (void)_transactionAuthenticationTaskSucceeded:(id)arg1 withResponse:(id)arg2;	// IMP=0x00000001000505f8
- (void)_notificationUpdatesTaskSucceeded:(id)arg1 withResult:(id)arg2;	// IMP=0x000000010004f940
- (void)_registrationTaskSucceeded:(id)arg1 withAuthenticationToken:(id)arg2;	// IMP=0x000000010004f5fc
- (void)_clearStoredDataForPassUniqueIdentifier:(id)arg1 notificationService:(id)arg2;	// IMP=0x000000010004f3b0
- (void)_performDeregistrationForPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 notificationService:(id)arg3;	// IMP=0x000000010004f1ac
- (void)_performRegistrationTaskForPaymentApplication:(id)arg1 notificationService:(id)arg2 completionTask:(id)arg3;	// IMP=0x000000010004e5c0
- (void)_performRegistrationForPassUniqueIdentifier:(id)arg1 paymentApplication:(id)arg2 notificationService:(id)arg3 isInitialRegistration:(_Bool)arg4;	// IMP=0x000000010004e364
- (void)_updateRegistrationStatusForPass:(id)arg1 notificationService:(id)arg2 requestedRegistrationStatus:(unsigned long long)arg3 refreshRegistrationIfPossible:(_Bool)arg4 requestUpdateWhenAlreadyRegistered:(_Bool)arg5;	// IMP=0x000000010004df04
- (void)_updateRegistrationStatusForPass:(id)arg1 notificationService:(id)arg2 requestedRegistrationStatus:(unsigned long long)arg3 refreshRegistrationIfPossible:(_Bool)arg4;	// IMP=0x000000010004de98
- (void)submitTransactionAuthenticationResultsData:(id)arg1 signature:(id)arg2 forPass:(id)arg3 transactionServiceIdentifier:(id)arg4 notificationService:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000010004d8e4
- (void)requestUpdatesFromNotificationService:(id)arg1 passUniqueIdenitifer:(id)arg2 forceUpdate:(_Bool)arg3;	// IMP=0x000000010004d528
- (void)requestUpdatesFromNotificationService:(id)arg1 passUniqueIdenitifer:(id)arg2;	// IMP=0x000000010004d4d4
- (void)taskRequestedReauthentication:(id)arg1;	// IMP=0x000000010004d300
- (void)task:(id)arg1 encounteredWarnings:(id)arg2;	// IMP=0x000000010004d200
- (void)task:(id)arg1 encounteredError:(id)arg2;	// IMP=0x000000010004d0ac
- (void)taskFailed:(id)arg1;	// IMP=0x000000010004d09c
- (void)taskSucceeded:(id)arg1;	// IMP=0x000000010004d08c
- (void)task:(id)arg1 willRetryAfterMinimumDelay:(double)arg2;	// IMP=0x000000010004cf8c
- (void)task:(id)arg1 gotResult:(id)arg2;	// IMP=0x000000010004cea4
- (void)handleUpdateOfPass:(id)arg1 toPass:(id)arg2 oldNotificationService:(id)arg3 newNotificationService:(id)arg4;	// IMP=0x000000010004ccb8
- (void)handleDeletionOfPass:(id)arg1 withNotificationService:(id)arg2;	// IMP=0x000000010004cc60
- (void)handleInsertionOfPass:(id)arg1 withNotificationService:(id)arg2;	// IMP=0x000000010004cc08
- (void)handlePushDisabledForPass:(id)arg1 withNotificationService:(id)arg2;	// IMP=0x000000010004cbb0
- (void)handlePushEnabledForPass:(id)arg1 withNotificationService:(id)arg2;	// IMP=0x000000010004cb54
- (id)pushNotificationTopics;	// IMP=0x000000010004c938
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000010004c798
- (void)applyPushNotificationToken:(id)arg1;	// IMP=0x000000010004c598
- (void)nukeTasks;	// IMP=0x000000010004c50c
- (void)connect;	// IMP=0x000000010004c498
- (void)dealloc;	// IMP=0x000000010004c430
- (id)initWithPushNotificationManager:(id)arg1 databaseManager:(id)arg2 userNotificationManager:(id)arg3 paymentTransactionProcessor:(id)arg4;	// IMP=0x000000010004c2b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

