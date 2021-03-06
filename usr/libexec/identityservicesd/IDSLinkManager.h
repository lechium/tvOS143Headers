//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSBTLinkManagerDelegate-Protocol.h"
#import "IDSCellularLinkDelegate-Protocol.h"
#import "IDSLinkDelegate-Protocol.h"
#import "IDSWPLinkManagerDelegate-Protocol.h"
#import "IMSystemMonitorListener-Protocol.h"

@class IDSBTLinkManager, IDSSockAddrWrapper, IDSWPLinkManager, NSDictionary, NSMutableDictionary, NSString;
@protocol IDSLinkDelegate, OS_dispatch_source;

@interface IDSLinkManager : NSObject <IDSLinkDelegate, IDSBTLinkManagerDelegate, IDSWPLinkManagerDelegate, IMSystemMonitorListener, IDSCellularLinkDelegate>
{
    NSMutableDictionary *_cbuuidToLinks;	// 8 = 0x8
    NSMutableDictionary *_deviceIDToCurrentLink;	// 16 = 0x10
    NSDictionary *_deviceIDToUDPDestinations;	// 24 = 0x18
    IDSBTLinkManager *_btLinkManager;	// 32 = 0x20
    IDSWPLinkManager *_wpLinkManager;	// 40 = 0x28
    _Bool _isCentral;	// 48 = 0x30
    _Bool _mayBringUpWiFi;	// 49 = 0x31
    _Bool _isWiFiBroughtUp;	// 50 = 0x32
    _Bool _shouldBringWiFiDown;	// 51 = 0x33
    _Bool _shouldKeepWiFiUp;	// 52 = 0x34
    unsigned int _handshakeCounter;	// 56 = 0x38
    unsigned int _WiFiBringUpCounter;	// 60 = 0x3c
    double _addressRetransmissionInterval;	// 64 = 0x40
    _Bool _requireBT;	// 72 = 0x48
    _Bool _shouldStartBTLinkManager;	// 73 = 0x49
    NSMutableDictionary *_deviceIDToAllocRequests;	// 80 = 0x50
    NSMutableDictionary *_deviceIDToGlobalLinkUp;	// 88 = 0x58
    _Bool _delayedDefaultDeviceAllocateRequest;	// 96 = 0x60
    void *_wifiManager;	// 104 = 0x68
    void *_wifiDevice;	// 112 = 0x70
    _Bool _isWiFiAssociated;	// 120 = 0x78
    unsigned int _WiFiAssociationCounter;	// 124 = 0x7c
    double _rejectedPreferInfraWiFi;	// 128 = 0x80
    CDUnknownBlockType _WiFiAssociationFailureHandler;	// 136 = 0x88
    long long _currentWiFiAutoJoinStatus;	// 144 = 0x90
    NSString *_currentWiFiSSID;	// 152 = 0x98
    id _WiFiPowerAssertion;	// 160 = 0xa0
    double _WiFiAssociationStartTime;	// 168 = 0xa8
    double _preferInfraWiFiConnectionTimeout;	// 176 = 0xb0
    unsigned long long _totalBytesSent;	// 184 = 0xb8
    unsigned long long _totalPacketsSent;	// 192 = 0xc0
    unsigned long long _totalBytesReceived;	// 200 = 0xc8
    unsigned long long _totalPacketsReceived;	// 208 = 0xd0
    unsigned long long _totalPacketsDropped;	// 216 = 0xd8
    unsigned long long _previousBytesSent;	// 224 = 0xe0
    unsigned long long _previousPacketsSent;	// 232 = 0xe8
    unsigned long long _previousBytesReceived;	// 240 = 0xf0
    unsigned long long _previousPacketsReceived;	// 248 = 0xf8
    unsigned long long _previousPacketsDropped;	// 256 = 0x100
    double _previousReportTime;	// 264 = 0x108
    double _previousReportFileOpenTime;	// 272 = 0x110
    double _minReportFileOpenTimeInterval;	// 280 = 0x118
    char _reporterFile[1025];	// 288 = 0x120
    int _reporterFd;	// 1316 = 0x524
    _Bool _isInternalInstall;	// 1320 = 0x528
    _Bool _demoMode;	// 1321 = 0x529
    NSString *_fixedInterface;	// 1328 = 0x530
    NSString *_fixedInterfaceDestination;	// 1336 = 0x538
    _Bool _hasFixedDestination;	// 1344 = 0x540
    NSObject<OS_dispatch_source> *_reporterTimer;	// 1352 = 0x548
    struct __SCDynamicStore *_dynamicStore;	// 1360 = 0x550
    _Bool _cellularDataStatusListenerStarted;	// 1368 = 0x558
    id <IDSLinkDelegate> _delegate;	// 1376 = 0x560
    NSString *_defaultDeviceCbuuid;	// 1384 = 0x568
    _Bool _doesDefaultDevicePreferInfraWiFi;	// 1392 = 0x570
    _Bool _isDefaultDeviceUsingBTLink;	// 1393 = 0x571
    _Bool _isDefaultDeviceNearby;	// 1394 = 0x572
    _Bool _lastSentDefaultDeviceNearby;	// 1395 = 0x573
    _Bool _lastSentDefaultDeviceConnectivity;	// 1396 = 0x574
    _Bool _lastSentDefaultDeviceCloudConnectivity;	// 1397 = 0x575
    _Bool _lastSentDefaultPeerConnectivity;	// 1398 = 0x576
    _Bool _isDefaultDeviceOnPhoneCall;	// 1399 = 0x577
    _Bool _hasDelayedNoConnectivityNotification;	// 1400 = 0x578
    IDSSockAddrWrapper *_localWiFiAddressUsedForDefaultDevice;	// 1408 = 0x580
    unsigned long long _currentDefaultDeviceLinkType;	// 1416 = 0x588
}

- (void).cxx_destruct;	// IMP=0x0000000100362d28
@property(readonly, nonatomic) unsigned long long currentDefaultDeviceLinkType; // @synthesize currentDefaultDeviceLinkType=_currentDefaultDeviceLinkType;
- (void)cellularSoMaskDidChange:(unsigned int)arg1;	// IMP=0x0000000100362778
- (void)cellularRadioAccessTechnologyDidChange:(_Bool)arg1;	// IMP=0x000000010036210c
- (void)_unsubscribeFromWRMForLinkRecommendation;	// IMP=0x00000001003620ac
- (void)_subscribeToWRMForLinkRecommendation:(unsigned long long)arg1;	// IMP=0x0000000100361e78
- (void)_handleWRMLinkRecommendation:(unsigned long long)arg1;	// IMP=0x0000000100361cd4
- (unsigned long long)_getWRMLinkTypeFromIDSLinkType:(unsigned long long)arg1;	// IMP=0x0000000100361c58
- (unsigned long long)_getIDSLinkTypeFromWRMLinkType:(unsigned long long)arg1;	// IMP=0x0000000100361be0
- (id)_getIDSLinkTypeString:(unsigned long long)arg1;	// IMP=0x0000000100361ae8
- (unsigned long long)currentLinkType:(id)arg1;	// IMP=0x000000010036173c
- (id)linkForCBUUID:(id)arg1;	// IMP=0x0000000100361680
- (void)currentLinkType:(unsigned long long *)arg1 andRATType:(unsigned int *)arg2 forDeviceID:(id)arg3;	// IMP=0x0000000100361248
- (void)_handleNetworkChanges:(id)arg1;	// IMP=0x000000010036013c
- (void)manager:(id)arg1 didPairedDeviceChange:(_Bool)arg2;	// IMP=0x000000010035f998
- (void)manager:(id)arg1 linkDidDisconnect:(id)arg2;	// IMP=0x000000010035f5f8
- (void)manager:(id)arg1 linkDidConnect:(id)arg2;	// IMP=0x000000010035f19c
- (void)manager:(id)arg1 didPowerStateChange:(_Bool)arg2;	// IMP=0x000000010035ead0
- (void)link:(id)arg1 didAddQREvent:(id)arg2;	// IMP=0x000000010035e9dc
- (void)link:(id)arg1 didReceiveReportEvent:(id)arg2;	// IMP=0x000000010035e724
- (void)link:(id)arg1 didReceiveSessionInfo:(id)arg2 relayGroupID:(id)arg3 relaySessionID:(id)arg4 success:(_Bool)arg5;	// IMP=0x000000010035e3a0
- (void)link:(id)arg1 didGetLinkProbingStatus:(id)arg2;	// IMP=0x000000010035e0e8
- (void)link:(id)arg1 didCellularMTUChange:(unsigned short)arg2;	// IMP=0x000000010035de44
- (void)link:(id)arg1 didRATChange:(unsigned char)arg2;	// IMP=0x000000010035db64
- (void)link:(id)arg1 didCellularNWPathFlagsChanged:(unsigned short)arg2;	// IMP=0x000000010035d8c0
- (void)link:(id)arg1 didWiFiNWPathFlagsChanged:(unsigned short)arg2;	// IMP=0x000000010035d61c
- (void)link:(id)arg1 didDefaultUnderlyingLinkChangeSucceeded:(_Bool)arg2 currentDefaultLinkID:(BOOL)arg3;	// IMP=0x000000010035d360
- (void)link:(id)arg1 didDisconnectUnderlyingLinkID:(BOOL)arg2 linkUUID:(id)arg3 reason:(unsigned char)arg4;	// IMP=0x000000010035cfc8
- (void)link:(id)arg1 didConnectUnderlyingLink:(BOOL)arg2 linkUUID:(id)arg3 localAttributes:(id)arg4 remoteAttributes:(id)arg5;	// IMP=0x000000010035cc8c
- (void)link:(id)arg1 didDisconnectOverCloud:(id)arg2 cbuuid:(id)arg3;	// IMP=0x000000010035c6e4
- (void)link:(id)arg1 didFailToConnectOverCloud:(id)arg2 cbuuid:(id)arg3;	// IMP=0x000000010035c2f0
- (void)link:(id)arg1 didConnectOverCloud:(id)arg2 cbuuid:(id)arg3;	// IMP=0x000000010035bdac
- (void)link:(id)arg1 didReceiveSKEData:(id)arg2;	// IMP=0x000000010035ba84
- (void)link:(id)arg1 hasSpaceAvailable:(_Bool)arg2 deviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x000000010035b7fc
- (void)link:(id)arg1 hostAwakeDidChange:(_Bool)arg2 deviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x000000010035b624
- (_Bool)link:(id)arg1 didReceivePacket:(CDStruct_78c9ccae *)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x000000010035b3d4
- (void)link:(id)arg1 didDisconnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x000000010035b0d4
- (void)link:(id)arg1 didConnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x000000010035aa64
- (void)setIsOnPhoneCall:(_Bool)arg1 forDeviceID:(id)arg2;	// IMP=0x000000010035a768
- (void)updateSessionParticipants:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 participants:(id)arg4;	// IMP=0x000000010035a3e4
- (void)getSessionInfo:(id)arg1 relayGroupID:(id)arg2 relaySessionID:(id)arg3 options:(id)arg4;	// IMP=0x0000000100359c9c
- (void)setRemoteDeviceVersion:(id)arg1 version:(unsigned int)arg2;	// IMP=0x0000000100359968
- (void)flushLinkProbingStatus:(id)arg1 options:(id)arg2;	// IMP=0x0000000100359634
- (void)queryLinkProbingStatus:(id)arg1 options:(id)arg2;	// IMP=0x0000000100359300
- (void)stopLinkProbing:(id)arg1 options:(id)arg2;	// IMP=0x0000000100358fcc
- (void)startLinkProbing:(id)arg1 options:(id)arg2;	// IMP=0x0000000100358c98
- (void)currentCellularSignalStrength:(id)arg1 signalRaw:(int *)arg2 signalStrength:(int *)arg3 signalGrade:(int *)arg4;	// IMP=0x0000000100358978
- (void)setWiFiAssistState:(id)arg1 isWiFiAssistEnabled:(_Bool)arg2;	// IMP=0x0000000100358630
- (void)stopKeepAlive:(id)arg1 linkIDs:(id)arg2;	// IMP=0x00000001003582fc
- (void)updateProtocolQualityOfService:(id)arg1 linkID:(BOOL)arg2 isGood:(_Bool)arg3;	// IMP=0x0000000100357f68
- (void)dropIPPackets:(id)arg1 linkID:(BOOL)arg2 payloadArray:(id)arg3;	// IMP=0x0000000100357c08
- (void)setPacketNotificationFilter:(id)arg1 linkID:(BOOL)arg2 uniqueTag:(unsigned int)arg3 isEnabled:(_Bool)arg4;	// IMP=0x0000000100357864
- (void)setDefaultUnderlyingLink:(id)arg1 linkID:(BOOL)arg2;	// IMP=0x000000010035754c
- (void)sendSKEData:(id)arg1 skeData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100356f48
- (void)setHasPendingAllocation:(_Bool)arg1 forIDSSession:(id)arg2;	// IMP=0x0000000100356bc8
- (void)setAcceptedRelaySession:(id)arg1 relaySessionID:(id)arg2 options:(id)arg3;	// IMP=0x000000010035686c
- (void)handleAllocateRequestFailureForDevice:(id)arg1 requestID:(id)arg2 errorCode:(int)arg3;	// IMP=0x0000000100356508
- (void)_removeAllocateRequestForDevice:(id)arg1 requestID:(id)arg2;	// IMP=0x0000000100356418
- (void)_addAllocateRequestForDevice:(id)arg1 requestID:(id)arg2;	// IMP=0x000000010035607c
- (void)disconnectGlobalLinkForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100355c30
- (void)connectGlobalLinkForDevice:(id)arg1 sessionInfo:(id)arg2 connectReadyHandler:(CDUnknownBlockType)arg3 withLocalInterfacePreference:(int)arg4;	// IMP=0x0000000100354f88
- (void)stopGlobalLinkForDevice:(id)arg1;	// IMP=0x0000000100354628
- (void)startGlobalLinkForDevice:(id)arg1;	// IMP=0x0000000100353d54
- (void)_startAllocateRequestForDevice:(id)arg1;	// IMP=0x0000000100352c90
- (void)stopBTDatagramLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;	// IMP=0x0000000100352a34
- (void)startBTDatagramLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;	// IMP=0x00000001003527d8
- (void)startConnectionForDevice:(id)arg1 isInitiator:(_Bool)arg2 remotePartyID:(id)arg3 useStunMICheck:(_Bool)arg4;	// IMP=0x00000001003523f4
- (void)processRemoteConnectionDataForDevice:(id)arg1 remoteConnectionData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100351d6c
- (void)createConnectionDataForDevice:(id)arg1 localPartyID:(id)arg2 dataReadyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001003516c4
- (void)stopUDPGlobalLinkForDevice:(id)arg1;	// IMP=0x0000000100351258
- (void)startUDPGlobalLinkForDevice:(id)arg1;	// IMP=0x000000010035105c
- (void)stopLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 disconnectWP:(_Bool)arg3;	// IMP=0x0000000100350d58
- (void)startLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;	// IMP=0x000000010035085c
- (void)setShouldStartBTLinkManager:(_Bool)arg1;	// IMP=0x0000000100350584
- (void)setRequireBT:(_Bool)arg1;	// IMP=0x0000000100350330
- (void)triggerBTCorruptionRecoveryForCBUUID:(id)arg1;	// IMP=0x0000000100350190
- (_Bool)isConnectedToDeviceID:(id)arg1;	// IMP=0x00000001003500b0
- (void)setLinkPreferences:(id)arg1;	// IMP=0x0000000100350044
- (void)setPreferInfraWiFi:(_Bool)arg1;	// IMP=0x000000010034f858
- (void)deletePairedDevice:(id)arg1;	// IMP=0x000000010034f070
- (void)connectPairedDevice:(id)arg1;	// IMP=0x000000010034ed8c
- (void)addPairedDevice:(id)arg1;	// IMP=0x000000010034e79c
- (void)obliterateConnectionInfo;	// IMP=0x000000010034df78
- (void)startLocalSetup;	// IMP=0x000000010034dd84
- (void)flushBuffer:(unsigned long long)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x000000010034dc00
- (unsigned long long)sendPacketBufferArray:(struct **)arg1 arraySize:(int)arg2 toDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x000000010034d954
- (unsigned long long)_sendPacketBuffer:(CDStruct_78c9ccae *)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3 link:(id)arg4;	// IMP=0x000000010034d524
- (unsigned long long)sendPacketBuffer:(CDStruct_78c9ccae *)arg1 toDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x000000010034bd50
- (void)_startCellularDataStatusListener:(_Bool)arg1;	// IMP=0x000000010034b910
- (void)_startNetworkInterfaceListener:(_Bool)arg1;	// IMP=0x000000010034b394
- (_Bool)_hasGlobalLinkConnectingOrConnected;	// IMP=0x000000010034adc0
- (void)_removeAllLinksForDeviceID:(id)arg1;	// IMP=0x000000010034ac0c
- (void)_removeLinkForDeviceID:(id)arg1 linkKey:(id)arg2 verifyWithLink:(id)arg3;	// IMP=0x000000010034a7f8
- (void)_bringUpWiFi:(_Bool)arg1;	// IMP=0x0000000100349a0c
- (id)_newGlobalLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 options:(id)arg3;	// IMP=0x0000000100348c3c
- (id)_newUDPGlobalLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2;	// IMP=0x00000001003486f8
- (id)_newUDPLinkForDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 IPVersion:(unsigned long long)arg3 port:(unsigned short)arg4;	// IMP=0x0000000100347f7c
- (void)_setBestLinkToCurrent:(id)arg1;	// IMP=0x00000001003473f4
- (id)_selectBestLink:(id)arg1;	// IMP=0x0000000100347178
- (void)_processLinkChangeForDefaultDeviceFrom:(id)arg1 to:(id)arg2;	// IMP=0x0000000100346544
- (_Bool)_startUDPLinkHandshakeForDefaultDevice:(_Bool)arg1 immediately:(_Bool)arg2;	// IMP=0x0000000100343b00
- (void)_handleWiFiAutoJoinStatusChange:(long long)arg1 WiFiSSID:(id)arg2;	// IMP=0x0000000100343800
- (void)_clearWiFiAssociationPowerAssertion;	// IMP=0x00000001003435f0
- (void)_createWiFiAssociationPowerAssertion:(double)arg1;	// IMP=0x0000000100343390
- (void)_sendUDPLinkInterfaceAddresses:(id)arg1 toDeviceID:(id)arg2 isRetransmission:(_Bool)arg3 isReply:(_Bool)arg4;	// IMP=0x0000000100342008
- (void)_processLMCommandPacket:(CDStruct_78c9ccae *)arg1 fromLink:(id)arg2 deviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x0000000100340590
- (void)_nearbyChangedForDefaultDevice;	// IMP=0x0000000100340244
- (void)_connectivityChangedForDefaultDevice:(_Bool)arg1 isCloudConnected:(_Bool)arg2;	// IMP=0x000000010033f2ec
- (void)injectFakePacketInBTLink:(CDStruct_78c9ccae *)arg1 cbuuid:(id)arg2;	// IMP=0x000000010033f1a0
- (void)_suspendBTLink:(_Bool)arg1 cbuuid:(id)arg2;	// IMP=0x000000010033ecf8
- (id)_linkKeyForLink:(id)arg1;	// IMP=0x000000010033eaa0
- (void)_createWiFiManagerClient;	// IMP=0x000000010033da14
- (void)_startReporter;	// IMP=0x000000010033d090
- (id)generateLinkReport:(double)arg1 forceReport:(_Bool)arg2;	// IMP=0x000000010033a798
- (id)copyLinkStatsDict;	// IMP=0x000000010033a298
- (void)triggerFixedInterfaceLinksDidConnect;	// IMP=0x0000000100339f40
- (void)start;	// IMP=0x0000000100339adc
- (void)dealloc;	// IMP=0x000000010033968c
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000100338cd4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

