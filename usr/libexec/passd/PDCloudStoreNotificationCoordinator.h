//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PDCloudStoreContainerDelegate-Protocol.h"
#import "PDPushNotificationConsumer-Protocol.h"
#import "PDScheduledActivityClient-Protocol.h"
#import "PKCloudStoreCoordinatorDelegate-Protocol.h"
#import "PKSharingIDSManagerDelegate-Protocol.h"

@class NSHashTable, NSMutableArray, NSSet, NSString, PDApplePayCloudStoreContainer, PDPassCloudStoreContainer, PDPushNotificationManager, PKSharingIDSManager;

@interface PDCloudStoreNotificationCoordinator : NSObject <PDPushNotificationConsumer, PDCloudStoreContainerDelegate, PDScheduledActivityClient, PKSharingIDSManagerDelegate, PKCloudStoreCoordinatorDelegate>
{
    NSHashTable *_observers;	// 8 = 0x8
    PDPushNotificationManager *_pushNotificationManager;	// 16 = 0x10
    PKSharingIDSManager *_sharingIDSManger;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    PDPassCloudStoreContainer *_passContainer;	// 40 = 0x28
    PDApplePayCloudStoreContainer *_applePayContainer;	// 48 = 0x30
    NSSet *_pushTopics;	// 56 = 0x38
    NSMutableArray *_containers;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000100178648
- (void)_unregisterForPushNotifications;	// IMP=0x0000000100178484
- (void)_registerForPushNotifications;	// IMP=0x00000001001783e4
- (id)_containerForItemType:(unsigned long long)arg1;	// IMP=0x0000000100178378
- (id)_errorWithCode:(long long)arg1 description:(id)arg2;	// IMP=0x0000000100178268
- (id)_containerWithIdentifier:(id)arg1;	// IMP=0x00000001001780a0
- (id)_containerWithZoneName:(id)arg1 scope:(long long)arg2;	// IMP=0x0000000100177d58
- (void)applyPushNotificationToken:(id)arg1;	// IMP=0x0000000100177c94
- (void)_processCloudStorePushNotificationForContainer:(id)arg1 cloudStoreZone:(id)arg2 containerDatabse:(id)arg3;	// IMP=0x00000001001775f8
- (void)handlePushNotificationForTopic:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000100177010
- (id)pushNotificationTopics;	// IMP=0x0000000100177008
- (void)_unscheduleBackgroundContainerSetupActivities;	// IMP=0x0000000100176f58
- (_Bool)_shouldScheduleInitalCloudStoreContainerSetupBackgroundActivity;	// IMP=0x0000000100176ef8
- (void)_scheduleFirstCloudStoreContainerSetupBackgroundActivityIfNeccessary;	// IMP=0x0000000100176df4
- (void)_recordAggdCloudStoreBackgroundContainerSetupResult:(_Bool)arg1 forCurrentBackgroundInterval:(unsigned long long)arg2;	// IMP=0x0000000100176d90
- (id)_backgroundActivityNameForBackgroundInterval:(unsigned long long)arg1;	// IMP=0x0000000100176d5c
- (double)_nextTimeIntervalForBackgroundInterval:(unsigned long long)arg1;	// IMP=0x0000000100176ce4
- (void)_scheduleCloudStoreContainerSetupBackgroundActivityWithNextInterval:(unsigned long long)arg1;	// IMP=0x0000000100176af4
- (void)_performZoneShareIntegrityOperation;	// IMP=0x000000010017689c
- (void)_scheduleZoneShareIntegrityActivityForTimeInterval:(double)arg1;	// IMP=0x00000001001766c4
- (void)_syncTransactionsToCloudStoreOriginatedOnDevice:(unsigned long long)arg1;	// IMP=0x0000000100176438
- (void)scheduleTransactionDeviceDataSyncBackgroundActivityOriginatedOnDevice:(unsigned long long)arg1;	// IMP=0x0000000100176260
- (void)_performCloudStoreContainerInitalizationBackgroundActivityWithCurrentInterval:(unsigned long long)arg1 nextBackgroundInterval:(unsigned long long)arg2;	// IMP=0x0000000100176158
- (void)performScheduledActivityWithIdentifier:(id)arg1 activityCriteria:(id)arg2;	// IMP=0x0000000100175f50
- (void)noteAccountDeleted;	// IMP=0x0000000100175d80
- (void)noteCloudSyncPassesSwitchChanged;	// IMP=0x0000000100175a98
- (void)resetApplePayManateeViewWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001001757a0
- (void)checkTLKsMissingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100175504
- (void)didReceiveCloudStoreZoneInvitationStatus:(long long)arg1 forInvitation:(id)arg2 fromDestination:(id)arg3;	// IMP=0x0000000100174f88
- (void)removedFromCloudStoreZoneInvitation:(id)arg1 fromDestination:(id)arg2;	// IMP=0x0000000100174e98
- (void)didRequestCloudStoreZoneInvitationData:(id)arg1 fromDestination:(id)arg2;	// IMP=0x00000001001748a0
- (void)acceptShareInvitationAndSendReponse:(id)arg1 fromDestination:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010017448c
- (void)didReceiveCloudStoreZoneInvitation:(id)arg1 fromDestination:(id)arg2;	// IMP=0x0000000100174384
- (void)unregisterObserver:(id)arg1;	// IMP=0x0000000100174328
- (void)registerObserver:(id)arg1;	// IMP=0x00000001001742b0
- (void)_sendZoneShareInvitationMessage:(id)arg1 recipientHandle:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010017401c
- (void)cloudStoreContainer:(id)arg1 requestsSyncTransactionsToCloudStoreOriginatedOnDevice:(unsigned long long)arg2;	// IMP=0x0000000100173edc
- (void)cloudStoreContainer:(id)arg1 requestsZoneShareFromHandle:(id)arg2 zoneName:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100173ca4
- (void)cloudStoreContainer:(id)arg1 removeZoneShareInvitationForHandle:(id)arg2 zoneName:(id)arg3 qualitOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100173ba4
- (void)cloudStoreContainer:(id)arg1 sendZoneShareInvitation:(id)arg2 recipientHandle:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100173a04
- (void)cloudStoreContainer:(id)arg1 sendZoneShareInvitationForHandle:(id)arg2 zoneName:(id)arg3 qualitOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000010017388c
- (void)cloudStoreContainerShouldUnscheduleAllBackgroundActivities:(id)arg1;	// IMP=0x0000000100173800
- (void)cloudStoreContainer:(id)arg1 didChangeContainerState:(unsigned long long)arg2;	// IMP=0x00000001001737a4
- (void)cloudStoreContainer:(id)arg1 createdZoneWithName:(id)arg2 forContainerName:(id)arg3;	// IMP=0x0000000100173680
- (void)recreateZone:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100173174
- (void)sendShareInvitationForRecipientHandle:(id)arg1 zoneName:(id)arg2 containerName:(id)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100172d80
- (void)shareForZoneName:(id)arg1 containerName:(id)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100172ae0
- (void)declineInvitationForRecipientHandle:(id)arg1 zoneName:(id)arg2 containerName:(id)arg3 qualityOfService:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000100172568
- (void)acceptShareInvitation:(id)arg1 qualityOfService:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001722c4
- (void)itemOfItemType:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000010017205c
- (void)deleteZone:(id)arg1 containerName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100171df8
- (void)itemOfItemTypeFromAllZones:(unsigned long long)arg1 recordName:(id)arg2 qualityOfService:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100171b90
- (void)simulateCloudStorePushForContainerIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100171888
- (void)resetContainerWithIdentifier:(id)arg1 zoneNames:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001001716ac
- (void)allItemsOfItemType:(unsigned long long)arg1 storeLocally:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100171550
- (void)removeRecordWithRecordName:(id)arg1 zoneName:(id)arg2 containerName:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000001001712a4
- (void)removeItems:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010017100c
- (void)updateCloudStoreWithLocalItems:(id)arg1 recordSpecificKeys:(id)arg2 includeServerData:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100170cf0
- (void)cloudStoreStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100170bd4
- (void)cloudStoreStatusForContainer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001001709e8
@property(retain, nonatomic) PDApplePayCloudStoreContainer *applePayContainer;
@property(retain, nonatomic) PDPassCloudStoreContainer *passContainer;
- (void)_initialCloudDatabaseSetupForContainer:(id)arg1 operationGroupNameSuffix:(id)arg2 shouldScheduleBackgroundActivity:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000100170270
- (void)_initialCloudDatabaseSetupForContainer:(id)arg1 operationGroupNameSuffix:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100170200
- (void)setupCloudDatabaseForContainerName:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010017016c
- (id)initWithPushNotificationManager:(id)arg1 sharingIDSManger:(id)arg2;	// IMP=0x000000010016fff4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

