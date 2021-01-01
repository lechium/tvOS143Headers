//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class IDSService, NSDate, NSMapTable, NSMutableDictionary, NSNumber, NSSet, NSString;
@protocol OS_dispatch_queue, SDAutoUnlockTransportClient;

__attribute__((visibility("hidden")))
@interface SDAutoUnlockTransport : NSObject <IDSServiceDelegate>
{
    NSDate *_lastSeenWatchDate;	// 8 = 0x8
    NSNumber *_watchExistedInUnlockList;	// 16 = 0x10
    NSNumber *_watchCurrentlyInList;	// 24 = 0x18
    id <SDAutoUnlockTransportClient> _primaryClient;	// 32 = 0x20
    IDSService *_idsService;	// 40 = 0x28
    IDSService *_activityService;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_transportQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_clientQueue;	// 64 = 0x40
    NSMapTable *_clientMap;	// 72 = 0x48
    NSMutableDictionary *_completionHandlers;	// 80 = 0x50
    NSMutableDictionary *_sendIdentifierToSessionID;	// 88 = 0x58
    NSMutableDictionary *_sendDates;	// 96 = 0x60
    NSDate *_lastSendDate;	// 104 = 0x68
    NSMutableDictionary *_autoUnlockDeviceCache;	// 112 = 0x70
    NSMutableDictionary *_cloudPairRetryRecords;	// 120 = 0x78
    NSMutableDictionary *_cachedBluetoothIDToUniqueIDs;	// 128 = 0x80
    NSSet *_cachedApproveBluetoothIDs;	// 136 = 0x88
}

+ (id)sharedTransport;	// IMP=0x000000010013bbec
- (void).cxx_destruct;	// IMP=0x0000000100143720
@property(retain, nonatomic) NSSet *cachedApproveBluetoothIDs; // @synthesize cachedApproveBluetoothIDs=_cachedApproveBluetoothIDs;
@property(retain, nonatomic) NSMutableDictionary *cachedBluetoothIDToUniqueIDs; // @synthesize cachedBluetoothIDToUniqueIDs=_cachedBluetoothIDToUniqueIDs;
@property(retain, nonatomic) NSMutableDictionary *cloudPairRetryRecords; // @synthesize cloudPairRetryRecords=_cloudPairRetryRecords;
@property(retain, nonatomic) NSMutableDictionary *autoUnlockDeviceCache; // @synthesize autoUnlockDeviceCache=_autoUnlockDeviceCache;
@property(retain, nonatomic) NSDate *lastSendDate; // @synthesize lastSendDate=_lastSendDate;
@property(retain) NSMutableDictionary *sendDates; // @synthesize sendDates=_sendDates;
@property(retain, nonatomic) NSMutableDictionary *sendIdentifierToSessionID; // @synthesize sendIdentifierToSessionID=_sendIdentifierToSessionID;
@property(retain) NSMutableDictionary *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property(retain, nonatomic) NSMapTable *clientMap; // @synthesize clientMap=_clientMap;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *transportQueue; // @synthesize transportQueue=_transportQueue;
@property(retain, nonatomic) IDSService *activityService; // @synthesize activityService=_activityService;
@property(retain, nonatomic) IDSService *idsService; // @synthesize idsService=_idsService;
@property __weak id <SDAutoUnlockTransportClient> primaryClient; // @synthesize primaryClient=_primaryClient;
- (id)state;	// IMP=0x0000000100143230
- (_Bool)pairingRequestIsValidForDeviceID:(id)arg1 messageContext:(id)arg2;	// IMP=0x0000000100142fa8
- (_Bool)disableEncryption;	// IMP=0x0000000100142f80
- (_Bool)showOtherDevices;	// IMP=0x0000000100142f58
- (_Bool)showIDInName;	// IMP=0x0000000100142f30
@property(retain, nonatomic) NSNumber *watchCurrentlyInList; // @synthesize watchCurrentlyInList=_watchCurrentlyInList;
@property(retain, nonatomic) NSNumber *watchExistedInUnlockList; // @synthesize watchExistedInUnlockList=_watchExistedInUnlockList;
@property(retain, nonatomic) NSDate *lastSeenWatchDate; // @synthesize lastSeenWatchDate=_lastSeenWatchDate;
@property(readonly, nonatomic) _Bool watchSeenRecently;
- (void)resetAppleWatchExisted;	// IMP=0x0000000100142844
@property(readonly, nonatomic) _Bool appleWatchExisted;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x000000010014259c
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;	// IMP=0x0000000100142270
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000100141ba8
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x00000001001419e0
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x00000001001418ac
- (id)dataFromUUID:(id)arg1;	// IMP=0x0000000100141830
- (id)transferDataFromPayload:(id)arg1 sessionID:(id)arg2;	// IMP=0x000000010014173c
- (id)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 queueOneID:(id)arg5 wantsACK:(_Bool)arg6 timeout:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x000000010014101c
- (void)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 queueOneID:(id)arg5 timeout:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0000000100140f30
- (void)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 queueOneID:(id)arg5 timeout:(id)arg6 errorHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000100140dd0
- (void)sendPayload:(id)arg1 toDevice:(id)arg2 type:(unsigned short)arg3 sessionID:(id)arg4 timeout:(id)arg5 errorHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100140d08
- (void)loadCloudPairRetries;	// IMP=0x0000000100140c38
- (_Bool)canRetryCloudPairingForDeviceID:(id)arg1 useShortDate:(_Bool)arg2;	// IMP=0x00000001001409ec
- (void)updateRetryDatesForDeviceIDs:(id)arg1;	// IMP=0x000000010014068c
- (void)triggerCloudPairRetryWithShortRetryDeviceIDs:(id)arg1;	// IMP=0x0000000100140688
- (id)connectionCacheDevices;	// IMP=0x0000000100140528
- (_Bool)localDeviceIDSRegistered;	// IMP=0x0000000100140328
- (_Bool)activityServiceHasWatch;	// IMP=0x0000000100140128
- (id)placeholderDevice;	// IMP=0x000000010013ffc8
- (void)updateBluetoothIDCache;	// IMP=0x000000010013fcf8
- (void)logBluetoothIDCache;	// IMP=0x000000010013fc2c
- (id)cachedIDSDeviceIDsForBluetoothID:(id)arg1;	// IMP=0x000000010013fbac
- (id)idsDeviceIDsForBluetoothID:(id)arg1;	// IMP=0x000000010013f9bc
- (id)idsDeviceForBluetoothID:(id)arg1;	// IMP=0x000000010013f804
- (id)idsDeviceForUniqueID:(id)arg1;	// IMP=0x000000010013f64c
- (id)proxyBluetoothDeviceIDForDeviceID:(id)arg1;	// IMP=0x000000010013f560
- (id)nameForDevice:(id)arg1;	// IMP=0x000000010013f464
- (_Bool)macVersionEligibleForDeviceID:(id)arg1;	// IMP=0x000000010013f248
- (_Bool)watchVersionEligibleForDevice:(id)arg1;	// IMP=0x000000010013f130
- (id)modelNameForDevice:(id)arg1;	// IMP=0x000000010013f0b8
- (void)updateApproveBluetoothIDs;	// IMP=0x000000010013eda8
- (id)approveBluetoothIDs;	// IMP=0x000000010013ed00
- (id)autoUnlockDeviceForIDSDevice:(id)arg1 cloudPaired:(_Bool)arg2 cached:(_Bool)arg3;	// IMP=0x000000010013e61c
- (id)autoUnlockDeviceForIDSDevice:(id)arg1;	// IMP=0x000000010013e608
- (id)onqueue_enabledAutoUnlockDevicesUsingCache:(_Bool)arg1;	// IMP=0x000000010013e29c
- (id)enabledAutoUnlockDevicesUsingCache:(_Bool)arg1;	// IMP=0x000000010013e158
- (id)enabledAutoUnlockDevices;	// IMP=0x000000010013e148
- (id)onqueue_autoUnlockEligibleDevices:(_Bool)arg1;	// IMP=0x000000010013d9e8
- (id)autoUnlockEligibleDevicesWithCloudPairing:(_Bool)arg1;	// IMP=0x000000010013d8a4
- (id)autoUnlockEligibleDevices;	// IMP=0x000000010013d894
- (id)onqueue_devicesWithLTKs;	// IMP=0x000000010013d690
- (id)devicesWithLTKs;	// IMP=0x000000010013d544
- (id)autoUnlockDeviceForBluetoothID:(id)arg1 cached:(_Bool)arg2;	// IMP=0x000000010013d4c4
- (id)autoUnlockDeviceForBluetoothID:(id)arg1;	// IMP=0x000000010013d4b4
- (id)autoUnlockDeviceForDeviceID:(id)arg1;	// IMP=0x000000010013d448
- (id)modelIdentifierForDeviceID:(id)arg1;	// IMP=0x000000010013d3f4
- (long long)deviceTypeForDevice:(id)arg1;	// IMP=0x000000010013d284
- (long long)deviceTypeForDeviceID:(id)arg1;	// IMP=0x000000010013d22c
- (id)deviceNameForDeviceID:(id)arg1;	// IMP=0x000000010013d1d8
- (id)idsMacDeviceIDs;	// IMP=0x000000010013cfd0
- (id)idsDevicesIDs;	// IMP=0x000000010013ce40
- (_Bool)deviceNearby;	// IMP=0x000000010013cdf4
- (_Bool)isDeviceSatellitePaired;	// IMP=0x000000010013ccfc
- (id)activeDevice;	// IMP=0x000000010013cb94
- (id)pairedDeviceID;	// IMP=0x000000010013cb40
- (id)onqueue_bluetoothDeviceIdentifiers;	// IMP=0x000000010013c98c
- (id)bluetoothDeviceIdentifiers;	// IMP=0x000000010013c848
- (id)onqueue_bluetoothIDForIDSID:(id)arg1;	// IMP=0x000000010013c678
- (id)bluetoothIDForIDSID:(id)arg1;	// IMP=0x000000010013c47c
- (void)clearAutoUnlockDeviceCache;	// IMP=0x000000010013c3dc
- (void)refreshAutoUnlockDeviceCache;	// IMP=0x000000010013c39c
- (void)logDevices;	// IMP=0x000000010013c2a8
- (void)removeClientForIdentifier:(id)arg1;	// IMP=0x000000010013bf74
- (void)addClient:(id)arg1 forIdentifer:(id)arg2;	// IMP=0x000000010013be44
- (id)init;	// IMP=0x000000010013bc58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
