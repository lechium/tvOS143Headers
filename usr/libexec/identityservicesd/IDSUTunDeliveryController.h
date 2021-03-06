//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSNRDeviceBridgeDelegate-Protocol.h"
#import "IDSPairingManagerDelegate-Protocol.h"
#import "IDSRapportClientDelegate-Protocol.h"
#import "IDSUTunPeerDelegate-Protocol.h"
#import "IMSystemMonitorListener-Protocol.h"

@class IDSConnectivityMonitor, IDSNRDeviceBridge, IDSNRDevicePreferencesHandler, IMTimer, NSDictionary, NSHashTable, NSMutableDictionary, NSSet, NSString;
@protocol IDSUTunDeliveryControllerDelegate, OS_dispatch_queue;

@interface IDSUTunDeliveryController : NSObject <IDSNRDeviceBridgeDelegate, IDSUTunPeerDelegate, IMSystemMonitorListener, IDSPairingManagerDelegate, IDSRapportClientDelegate>
{
    struct _opaque_pthread_mutex_t _deviceIDToPeerLock;	// 8 = 0x8
    NSMutableDictionary *_deviceIDToPeer;	// 72 = 0x48
    NSMutableDictionary *_btuuidToSessionID;	// 80 = 0x50
    struct _opaque_pthread_mutex_t _streamIDToTopicLock;	// 88 = 0x58
    NSMutableDictionary *_streamIDToTopic;	// 152 = 0x98
    unsigned int _messageID;	// 160 = 0xa0
    double _lastConnectedTime;	// 168 = 0xa8
    double _lastIsNearbyBecameTrue;	// 176 = 0xb0
    id <IDSUTunDeliveryControllerDelegate> _delegate;	// 184 = 0xb8
    _Bool _isLinkForDefaultPeerConnected;	// 192 = 0xc0
    NSHashTable *_connectivityDelegates;	// 200 = 0xc8
    struct _opaque_pthread_mutex_t _trafficClassLock;	// 208 = 0xd0
    NSSet *_allowedTrafficClasses;	// 272 = 0x110
    _Bool _enableOTR;	// 280 = 0x118
    IMTimer *_otrTimer;	// 288 = 0x120
    _Bool _otrInitialized;	// 296 = 0x128
    _Bool _localAccountSetupCompleted;	// 297 = 0x129
    _Bool _defaultPeerConnectedDeferred;	// 298 = 0x12a
    struct _opaque_pthread_mutex_t _continuityPeerLock;	// 304 = 0x130
    NSMutableDictionary *_lockedPeerMap;	// 368 = 0x170
    NSMutableDictionary *_peerListMap;	// 376 = 0x178
    NSMutableDictionary *_pendingPeerMap;	// 384 = 0x180
    NSMutableDictionary *_peerConnectBlocksMap;	// 392 = 0x188
    NSMutableDictionary *_peerFailureBlocksMap;	// 400 = 0x190
    double _lastCloudConnectedTime;	// 408 = 0x198
    NSObject<OS_dispatch_queue> *_broadcastQueue;	// 416 = 0x1a0
    _Bool _isConnected;	// 424 = 0x1a8
    _Bool _isCloudConnected;	// 425 = 0x1a9
    _Bool _isClassCConnected;	// 426 = 0x1aa
    _Bool _shouldUseIPsecLinkForDefaultPairedDevice;	// 427 = 0x1ab
    _Bool _isLocalSetUpInProgress;	// 428 = 0x1ac
    IDSNRDeviceBridge *_idsNRDeviceBridge;	// 432 = 0x1b0
    IDSNRDevicePreferencesHandler *_nrDevicePreferencesHandler;	// 440 = 0x1b8
    IDSConnectivityMonitor *_connectivityMonitor;	// 448 = 0x1c0
    double _notificationDelayInSeconds;	// 456 = 0x1c8
}

+ (id)sharedInstance;	// IMP=0x0000000100285dc4
- (void).cxx_destruct;	// IMP=0x000000010029ded4
@property(nonatomic) _Bool isLocalSetUpInProgress; // @synthesize isLocalSetUpInProgress=_isLocalSetUpInProgress;
@property(nonatomic) double notificationDelayInSeconds; // @synthesize notificationDelayInSeconds=_notificationDelayInSeconds;
@property(retain, nonatomic) IDSConnectivityMonitor *connectivityMonitor; // @synthesize connectivityMonitor=_connectivityMonitor;
@property(retain, nonatomic) IDSNRDevicePreferencesHandler *nrDevicePreferencesHandler; // @synthesize nrDevicePreferencesHandler=_nrDevicePreferencesHandler;
@property(retain, nonatomic) IDSNRDeviceBridge *idsNRDeviceBridge; // @synthesize idsNRDeviceBridge=_idsNRDeviceBridge;
@property(nonatomic) _Bool shouldUseIPsecLinkForDefaultPairedDevice; // @synthesize shouldUseIPsecLinkForDefaultPairedDevice=_shouldUseIPsecLinkForDefaultPairedDevice;
@property(nonatomic) double lastCloudConnectedTime; // @synthesize lastCloudConnectedTime=_lastCloudConnectedTime;
@property(nonatomic) _Bool isClassCConnected; // @synthesize isClassCConnected=_isClassCConnected;
@property(nonatomic) _Bool isCloudConnected; // @synthesize isCloudConnected=_isCloudConnected;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(readonly, nonatomic) _Bool enableOTR; // @synthesize enableOTR=_enableOTR;
@property(nonatomic) __weak id <IDSUTunDeliveryControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)rapportClient:(id)arg1 didLoseDevice:(id)arg2;	// IMP=0x000000010029d884
- (void)rapportClient:(id)arg1 didDiscoverDevice:(id)arg2;	// IMP=0x000000010029d524
- (void)enableOTRForDefaultPairedDevice;	// IMP=0x000000010029d23c
- (id)_currentOTRTimer;	// IMP=0x000000010029d220
- (id)pairingManager;	// IMP=0x000000010029d1e4
- (id)sessionIDforPeer:(id)arg1;	// IMP=0x000000010029d100
- (_Bool)isPeerForPhoneContinuityLocalMessage:(id)arg1;	// IMP=0x000000010029cc00
- (void)tryNextContinuityPeer:(id)arg1;	// IMP=0x000000010029bd08
- (void)addContinuityPeer:(id)arg1 btUUID:(id)arg2 connectBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000010029b0c0
- (id)pendingContinuityPeerID:(id)arg1;	// IMP=0x000000010029afdc
- (id)lockedContinuityPeerID:(id)arg1;	// IMP=0x000000010029aef8
- (void)unlockAllContinuityPeers;	// IMP=0x000000010029ad1c
- (void)unlockContinuityPeer:(id)arg1;	// IMP=0x000000010029aa9c
- (void)lockContinuityPeer:(id)arg1 btUUID:(id)arg2;	// IMP=0x000000010029a610
- (void)_cleanupContinuityPeerMaps:(id)arg1;	// IMP=0x000000010029a36c
- (void)admissionPolicyChangedForTopic:(id)arg1 allowed:(_Bool)arg2;	// IMP=0x000000010029a18c
- (void)findDefaultPeerToForceOTRNegotiation:(id)arg1 priority:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010029a07c
- (void)didUpdatePairedDevice:(id)arg1;	// IMP=0x0000000100299d1c
- (void)didRemovePairedDevice:(id)arg1;	// IMP=0x0000000100299a20
- (void)didAddPairedDevice:(id)arg1;	// IMP=0x0000000100299788
- (void)_disableOTRForDefaultPairedPeer:(id)arg1;	// IMP=0x0000000100299554
- (void)_enableOTRForDefaultPairedDevice;	// IMP=0x00000001002992c0
- (void)_setOTREnableTimer;	// IMP=0x00000001002990c0
- (void)nrDeviceBridge:(id)arg1 defaultPeerClassCConnectivityDidChange:(_Bool)arg2;	// IMP=0x0000000100299040
- (void)nrDeviceBridge:(id)arg1 linkType:(unsigned char)arg2;	// IMP=0x0000000100298d98
- (void)nrDeviceBridge:(id)arg1 deviceMagnetIndicationOfAwakeStateDidChange:(_Bool)arg2;	// IMP=0x0000000100298d18
- (void)nrDeviceBridge:(id)arg1 defaultPeerCloudConnectivityDidChange:(_Bool)arg2;	// IMP=0x0000000100298c98
- (void)nrDeviceBridge:(id)arg1 defaultPeerNearbyDidChange:(_Bool)arg2;	// IMP=0x0000000100298780
- (void)nrDeviceBridge:(id)arg1 defaultPeerConnectivityDidChange:(_Bool)arg2;	// IMP=0x0000000100298700
@property(readonly, nonatomic) _Bool isTerminusConnectedOverBluetooth;
@property(readonly, nonatomic) _Bool isTerminusRegistered;
@property(readonly, nonatomic) _Bool isTerminusNearby;
@property(readonly, nonatomic) _Bool isTerminusConnected;
- (void)_setCloudConnectionConnected:(_Bool)arg1 forPeer:(id)arg2;	// IMP=0x0000000100298050
- (void)peerCloudConnectivityChanged:(id)arg1 isCloudConnected:(_Bool)arg2;	// IMP=0x0000000100297c1c
- (void)defaultPeerDropDisallowedMessages;	// IMP=0x00000001002979fc
- (void)defaultPeerUnpairStart;	// IMP=0x00000001002977c0
- (void)defaultPeerSetWantsQuickRelayRequest:(_Bool)arg1;	// IMP=0x0000000100297438
- (void)defaultPeerSetLinkPreferences:(id)arg1;	// IMP=0x00000001002969c4
- (void)defaultPeerSetPreferInfraWiFi:(_Bool)arg1 services:(id)arg2;	// IMP=0x00000001002964b0
- (void)defaultPeerClassCConnectivityDidChange:(_Bool)arg1;	// IMP=0x0000000100296204
- (void)defaultPeerMagnetIndicationOfAwakeStateChanged:(_Bool)arg1;	// IMP=0x0000000100295f8c
- (void)legacyUTunBTLinkManagerDefaultPeerCloudConnectivityChanged:(_Bool)arg1;	// IMP=0x0000000100295e04
- (void)defaultPeerCloudConnectivityChanged:(_Bool)arg1;	// IMP=0x0000000100295b40
- (void)legacyUTunBTLinkManagerDefaultPeerNearbyChanged:(_Bool)arg1;	// IMP=0x00000001002959b8
- (void)defaultPeerNearbyChanged:(_Bool)arg1;	// IMP=0x0000000100295668
- (void)legacyUTunBTLinkManagerDefaultPeerConnectivityChanged:(_Bool)arg1;	// IMP=0x00000001002954e0
- (void)defaultPeerConnectivityChanged:(_Bool)arg1;	// IMP=0x0000000100294e80
- (void)peerHasSpaceForUrgentMessages:(id)arg1 dataProtectionClass:(unsigned int)arg2 withTypes:(id)arg3;	// IMP=0x0000000100294a54
- (void)peerHasSpaceForNonUrgentMessages:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3;	// IMP=0x00000001002945cc
- (void)peerHasSpaceForNonUrgentMessages:(id)arg1 priority:(long long)arg2 dataProtectionClass:(unsigned int)arg3 withTypes:(id)arg4;	// IMP=0x0000000100294118
- (void)peerCloudConnectivityChanged:(id)arg1;	// IMP=0x0000000100293ae4
- (void)peerConnectivityChanged:(id)arg1;	// IMP=0x0000000100292de4
- (void)peerNearbyStateChanged:(id)arg1 forceNotify:(_Bool)arg2;	// IMP=0x0000000100292478
- (void)peer:(id)arg1 receivedAppLevelAckWithTopic:(id)arg2 fromID:(id)arg3 messageID:(id)arg4 peerResponseIdentifier:(id)arg5 priority:(long long)arg6 connectionType:(long long)arg7;	// IMP=0x0000000100292260
- (void)peer:(id)arg1 messageReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 priority:(long long)arg11 isCompressed:(_Bool)arg12 connectionType:(long long)arg13 didWakeHint:(_Bool)arg14;	// IMP=0x0000000100291e20
- (void)peer:(id)arg1 dataReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 priority:(long long)arg11 isCompressed:(_Bool)arg12 connectionType:(long long)arg13 didWakeHint:(_Bool)arg14;	// IMP=0x0000000100291ad0
- (void)peer:(id)arg1 protobufReceived:(id)arg2 topic:(id)arg3 command:(id)arg4 fromID:(id)arg5 messageID:(id)arg6 wantsAppAck:(_Bool)arg7 expectsPeerResponse:(_Bool)arg8 peerResponseIdentifier:(id)arg9 messageUUID:(id)arg10 priority:(long long)arg11 isCompressed:(_Bool)arg12 connectionType:(long long)arg13 didWakeHint:(_Bool)arg14;	// IMP=0x0000000100291780
- (id)_deviceIDForPeer:(id)arg1;	// IMP=0x00000001002914a0
- (void)removeConnectivityDelegate:(id)arg1;	// IMP=0x0000000100291428
- (void)addConnectivityDelegate:(id)arg1;	// IMP=0x000000010029136c
- (void)addUTunPeerWithDeviceUniqueID:(id)arg1 btuuid:(id)arg2;	// IMP=0x0000000100290ce8
- (void)removeUTunPeerWithDeviceUniqueID:(id)arg1 btuuid:(id)arg2 reason:(long long)arg3 shouldWait:(_Bool)arg4;	// IMP=0x0000000100290b68
- (void)removeUTunPeerWithSessionID:(id)arg1 reason:(long long)arg2 shouldWait:(_Bool)arg3;	// IMP=0x00000001002907d8
- (void)systemScreenDidPowerDown;	// IMP=0x0000000100290500
@property(retain, nonatomic) NSSet *allowedTrafficClasses; // @synthesize allowedTrafficClasses=_allowedTrafficClasses;
@property(readonly) NSDictionary *queuedIncomingMessageDictionary;
@property(readonly) NSDictionary *sendingMessageStatistics;
@property(readonly) NSDictionary *urgentCloudPriorityMessageStatistics;
@property(readonly) NSDictionary *urgentPriorityMessageStatistics;
@property(readonly) NSDictionary *defaultPriorityMessageStatistics;
@property(readonly) NSDictionary *syncPriorityMessageStatistics;
- (void)setTopics:(id)arg1;	// IMP=0x000000010028f6e4
- (_Bool)hasSpaceForCloudMessagesWithPriority:(long long)arg1 dataProtectionClass:(unsigned int)arg2;	// IMP=0x000000010028f5f4
- (_Bool)hasSpaceForMessagesWithPriority:(long long)arg1 dataProtectionClass:(unsigned int)arg2;	// IMP=0x000000010028f504
- (void)enableCloudConnectionForDefaultPairedDevice:(_Bool)arg1;	// IMP=0x000000010028f0f4
- (void)enableConnectionForDefaultPairedDevice:(_Bool)arg1;	// IMP=0x000000010028ecdc
- (void)localAccountSetupCompleted;	// IMP=0x000000010028e914
@property(readonly, nonatomic) _Bool defaultPeerIsCloudConnected;
@property(readonly, nonatomic) _Bool defaultPeerIsNearby;
@property(readonly, nonatomic) _Bool defaultPeerIsConnected;
@property(readonly, nonatomic) _Bool isPresent;
- (id)topicForStreamID:(unsigned short)arg1;	// IMP=0x000000010028e628
- (void)kickProgressBlockForMessageID:(id)arg1;	// IMP=0x000000010028e40c
- (void)cancelMessageID:(id)arg1;	// IMP=0x000000010028e044
- (void)sendData:(id)arg1 service:(id)arg2 protobuf:(id)arg3 resourcePath:(id)arg4 resourceMetadata:(id)arg5 priority:(long long)arg6 dataProtectionClass:(unsigned int)arg7 nonWaking:(_Bool)arg8 nonCloudWaking:(_Bool)arg9 requireBluetooth:(_Bool)arg10 requireLocalWiFi:(_Bool)arg11 queueOneIdentifier:(id)arg12 expirationDate:(id)arg13 enforceRemoteTimeouts:(_Bool)arg14 expectsPeerResponse:(_Bool)arg15 wantsAppAck:(_Bool)arg16 compressPayload:(_Bool)arg17 compressed:(_Bool)arg18 peerResponseIdentifier:(id)arg19 messageID:(id)arg20 topic:(id)arg21 awdTopic:(id)arg22 command:(id)arg23 fromID:(id)arg24 uriToDeviceID:(id)arg25 localDeviceDestinationDeviceUUID:(id)arg26 bypassDuet:(_Bool)arg27 duetIdentifiersOverride:(id)arg28 messageType:(long long)arg29 fallbackBlock:(CDUnknownBlockType)arg30 progressBlock:(CDUnknownBlockType)arg31 completionBlock:(CDUnknownBlockType)arg32;	// IMP=0x000000010028a8b8
- (id)_createPeerFromDeviceInfo:(id)arg1;	// IMP=0x0000000100289e80
- (id)_createPeerFromDeviceID:(id)arg1;	// IMP=0x0000000100289da8
- (void)_removePeerFromDeviceID:(id)arg1;	// IMP=0x0000000100289d1c
- (void)setPendingCloudFlagOnDefaultPeer;	// IMP=0x0000000100289ca4
- (void)ensureLocalSetupInProgressConsistencyAfterQWS;	// IMP=0x0000000100289af0
- (void)updatecloudDeliveryStateOnDefaultPeer;	// IMP=0x00000001002898bc
- (void)prepareForQuickSwitch;	// IMP=0x0000000100289684
- (_Bool)localSetupInProgress;	// IMP=0x00000001002895ec
- (void)localSetupCompleted;	// IMP=0x00000001002893a4
- (void)localSetupStarted;	// IMP=0x0000000100289168
- (void)_updateLocalSetupInProgressState:(_Bool)arg1;	// IMP=0x0000000100289014
- (void)deviceWithUniqueID:(id)arg1 updatedUUID:(id)arg2;	// IMP=0x000000010028885c
- (void)setDeviceUniqueIDToCBUUID:(id)arg1;	// IMP=0x0000000100288518
- (id)hashForString:(id)arg1;	// IMP=0x0000000100288378
- (id)_copyPairedDevice;	// IMP=0x0000000100288338
- (id)_copyPeerWithID:(id)arg1;	// IMP=0x0000000100288274
- (id)copyPeerWithID:(id)arg1;	// IMP=0x0000000100288204
- (unsigned int)_nextMessageID;	// IMP=0x00000001002881c4
- (void)_refreshIPsecStatus;	// IMP=0x00000001002880f0
- (void)_removeDevicePreferencesHandler;	// IMP=0x0000000100288050
- (void)stopIdsNRDeviceBridgeAndPreferenceHandler;	// IMP=0x0000000100288000
- (void)startIdsNRDeviceBridgeAndPreferenceHandlerWithIdentifier:(id)arg1;	// IMP=0x0000000100287c18
- (id)_pairedDeviceUUID;	// IMP=0x00000001002877a4
- (void)dealloc;	// IMP=0x00000001002875b0
- (id)init;	// IMP=0x0000000100287510
- (id)initWithBroadcastQueue:(id)arg1;	// IMP=0x0000000100285f70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

