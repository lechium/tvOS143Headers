//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSBaseSocketPairConnectionDelegate-Protocol.h"
#import "IDSDSession-Protocol.h"
#import "IDSDSessionAWDMetrics-Protocol.h"
#import "IDSRealTimeEncryptionDelegate-Protocol.h"
#import "IDSSocketPairConnectionDelegate-Protocol.h"
#import "_IDSSessionConnectionDelegate-Protocol.h"

@class IDSBaseSocketPairConnection, IDSClientChannel, IDSConnectionContext, IDSDSessionInvitationManager, IDSDSessionMessenger, IDSDSessionSharedState, IDSGroupStatusNotificationParameters, IDSMultiplexerGroupSessionTransport, NSData, NSDate, NSMutableArray, NSMutableData, NSMutableDictionary, NSNumber, NSString;
@protocol IDSDSessionAvailabilityCheck;

@interface IDSDSession : NSObject <IDSDSessionAWDMetrics, _IDSSessionConnectionDelegate, IDSSocketPairConnectionDelegate, IDSBaseSocketPairConnectionDelegate, IDSRealTimeEncryptionDelegate, IDSDSession>
{
    _Bool _assertedRealTimeMode;	// 8 = 0x8
    id <IDSDSessionAvailabilityCheck> _availabilityCheck;	// 16 = 0x10
    NSDate *_awdStartTimestamp;	// 24 = 0x18
    NSString *_awdUniqueId;	// 32 = 0x20
    IDSBaseSocketPairConnection *_baseSocketPairConnection;	// 40 = 0x28
    _Bool _bypassUTun;	// 48 = 0x30
    NSMutableArray *_cachedClientData;	// 56 = 0x38
    long long _cachedNumberOfActiveParticipants;	// 64 = 0x40
    IDSClientChannel *_clientChannel;	// 72 = 0x48
    unsigned long long _connectionClaimed;	// 80 = 0x50
    IDSConnectionContext *_connectionContext;	// 88 = 0x58
    unsigned int _currentGenerationCounter;	// 96 = 0x60
    _Bool _disallowCellularInterface;	// 100 = 0x64
    _Bool _disallowWifiInterface;	// 101 = 0x65
    NSDate *_endDate;	// 104 = 0x68
    NSMutableDictionary *_extraConnections;	// 112 = 0x70
    unsigned long long _extraConnectionCount;	// 120 = 0x78
    unsigned int _groupSessionState;	// 128 = 0x80
    IDSGroupStatusNotificationParameters *_groupStatusNotificationParams;	// 136 = 0x88
    int _idsDataChannelClientPID;	// 144 = 0x90
    unsigned long long _initialLinkType;	// 152 = 0x98
    NSString *_instanceID;	// 160 = 0xa0
    double _inviteRecvTime;	// 168 = 0xa8
    _Bool _joinGroupSessionPending;	// 176 = 0xb0
    CDUnknownBlockType _joinNotificationDeliveryTimeoutBlock;	// 184 = 0xb8
    unsigned char _keyMaterial[60];	// 192 = 0xc0
    long long _linkProtocol;	// 256 = 0x100
    double _membershipChangeEventTime;	// 264 = 0x108
    double _newKeyEventTime;	// 272 = 0x110
    struct *_packetBufferArray[8];	// 280 = 0x118
    unsigned long long _preferredAddressFamily;	// 344 = 0x158
    _Bool _preferCellularForCallSetup;	// 352 = 0x160
    NSNumber *_qrError;	// 360 = 0x168
    NSMutableArray *_qrEventsForRTCReports;	// 368 = 0x170
    NSNumber *_qrReason;	// 376 = 0x178
    unsigned int _reason;	// 384 = 0x180
    unsigned short _relayPort;	// 388 = 0x184
    _Bool _sessionStartedCalled;	// 390 = 0x186
    NSMutableData *_sessionInfoMetaData;	// 392 = 0x188
    _Bool _shouldAssertRealTimeMode;	// 400 = 0x190
    _Bool _shouldConnectToQRServer;	// 401 = 0x191
    NSData *_skeData;	// 408 = 0x198
    int _socketDescriptor;	// 416 = 0x1a0
    NSDate *_startDate;	// 424 = 0x1a8
    _Bool _supressClientNotifications;	// 432 = 0x1b0
    _Bool _verboseFunctionalLogging;	// 433 = 0x1b1
    _Bool _verbosePerformanceLogging;	// 434 = 0x1b2
    _Bool _multiplexerEnabled;	// 435 = 0x1b3
    IDSMultiplexerGroupSessionTransport *_multiplexerTransport;	// 440 = 0x1b8
    double _channelDataCachedTime;	// 448 = 0x1c0
    NSString *_clientID;	// 456 = 0x1c8
    IDSDSessionInvitationManager *_invitationManager;	// 464 = 0x1d0
    IDSDSessionMessenger *_messenger;	// 472 = 0x1d8
    IDSDSessionSharedState *_sharedState;	// 480 = 0x1e0
}

- (void).cxx_destruct;	// IMP=0x0000000100106dfc
@property(retain, nonatomic) IDSDSessionSharedState *sharedState; // @synthesize sharedState=_sharedState;
@property(nonatomic) _Bool shouldConnectToQRServer; // @synthesize shouldConnectToQRServer=_shouldConnectToQRServer;
@property(retain, nonatomic) NSNumber *qrReason; // @synthesize qrReason=_qrReason;
@property(retain, nonatomic) NSNumber *qrError; // @synthesize qrError=_qrError;
@property(retain, nonatomic) IDSDSessionMessenger *messenger; // @synthesize messenger=_messenger;
@property(retain, nonatomic) IDSDSessionInvitationManager *invitationManager; // @synthesize invitationManager=_invitationManager;
@property(readonly, nonatomic) NSString *instanceID; // @synthesize instanceID=_instanceID;
@property(readonly, nonatomic) unsigned int groupSessionState; // @synthesize groupSessionState=_groupSessionState;
@property(readonly, nonatomic) _Bool disallowWifiInterface; // @synthesize disallowWifiInterface=_disallowWifiInterface;
@property(readonly, nonatomic) _Bool disallowCellularInterface; // @synthesize disallowCellularInterface=_disallowCellularInterface;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
- (unsigned long long)connectionCountHint;	// IMP=0x0000000100106ae4
- (_Bool)_useBTDatagramPipe;	// IMP=0x0000000100106a78
- (void)_setClientType:(long long)arg1;	// IMP=0x0000000100106a18
- (_Bool)isScreenSharingSession;	// IMP=0x00000001001069ac
- (unsigned int)state;	// IMP=0x0000000100106948
- (id)fromID;	// IMP=0x00000001001068dc
- (id)groupID;	// IMP=0x0000000100106870
- (id)accountID;	// IMP=0x0000000100106804
- (id)participantID;	// IMP=0x0000000100106798
- (long long)clientType;	// IMP=0x0000000100106734
- (_Bool)enableQuickRelay;	// IMP=0x00000001001066c8
- (_Bool)isInitiator;	// IMP=0x000000010010665c
- (id)uniqueID;	// IMP=0x00000001001065f0
- (id)destinations;	// IMP=0x0000000100106584
- (void)setSeqRecvStart:(unsigned int)arg1;	// IMP=0x000000010010651c
- (void)setSSRCRecv:(unsigned int)arg1;	// IMP=0x00000001001064b4
- (void)setRemoteUsePhoneContinuityLocalMessage:(id)arg1;	// IMP=0x0000000100106420
- (void)setRemoteUseCloudPairedControlChannel:(id)arg1;	// IMP=0x000000010010638c
- (void)setQuickRelaySessionToken:(id)arg1;	// IMP=0x00000001001062f8
- (void)setInviteTimeout:(long long)arg1;	// IMP=0x000000010010628c
- (void)setRemoteBlob:(id)arg1;	// IMP=0x00000001001061f8
- (void)receivedEndMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x0000000100106138
- (void)receivedSessionMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x0000000100106078
- (void)receivedCancelMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x0000000100105fb8
- (void)receivedDeclineMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x0000000100105ef8
- (void)receivedAcceptMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x0000000100105e38
- (void)sendSessionMessage:(id)arg1 toDestinations:(id)arg2;	// IMP=0x0000000100105d78
- (void)declineInvitationWithData:(id)arg1 forceFromID:(id)arg2 additionalMessageAttributes:(id)arg3;	// IMP=0x0000000100105c88
- (void)declineInvitationWithData:(id)arg1;	// IMP=0x0000000100105bfc
- (void)declineInvitation;	// IMP=0x0000000100105ba4
- (void)acceptInvitationWithData:(id)arg1;	// IMP=0x0000000100105b18
- (void)acceptInvitation;	// IMP=0x0000000100105ac0
- (void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned int)arg1;	// IMP=0x0000000100105a60
- (void)cancelInvitationWithData:(id)arg1;	// IMP=0x00000001001059d4
- (void)cancelInvitation;	// IMP=0x000000010010597c
- (void)sendInvitationWithData:(id)arg1 declineOnError:(_Bool)arg2;	// IMP=0x00000001001058d4
- (void)sendInvitationWithOptions:(id)arg1 declineOnError:(_Bool)arg2;	// IMP=0x000000010010582c
- (void)sendCancelInvitationMessage;	// IMP=0x00000001001057c0
- (void)invitationDeclined;	// IMP=0x0000000100105758
- (_Bool)isWithDefaultPairedDevice;	// IMP=0x0000000100105638
- (void)didSessionReinitiated;	// IMP=0x00000001001050fc
- (void)_receivedReinitiateBringupAckMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x000000010010437c
- (void)_receivedReinitiateBringupMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x0000000100103910
- (void)_receivedReinitiateTeardownAckMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x0000000100102b58
- (void)_receivedReinitiateTeardownMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x0000000100101a48
- (void)_receivedReinitiateRequestMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x00000001001016e0
- (void)receivedReinitiateMessage:(id)arg1 fromID:(id)arg2;	// IMP=0x0000000100101198
- (void)reinitiate;	// IMP=0x00000001000ff63c
- (void)registerMultiplexerTransport;	// IMP=0x00000001000ff36c
- (void)getActiveParticipants:(id)arg1 pushTokenForParticipants:(id)arg2;	// IMP=0x00000001000fecc4
- (void)_updateActiveParticipants:(id)arg1;	// IMP=0x00000001000fe554
- (void)processAllocationErrorStatus:(int)arg1 errorCode:(int)arg2;	// IMP=0x00000001000fe1e4
- (void)onParticipantID2PushTokenMappingChange:(id)arg1;	// IMP=0x00000001000fd544
- (void)sendAllocationRequest:(id)arg1;	// IMP=0x00000001000fcc8c
- (void)recvMembershipChangeEventWithReason:(unsigned char)arg1;	// IMP=0x00000001000fcba0
- (void)recvKeyMaterial:(id)arg1;	// IMP=0x00000001000fc684
- (void)sendKeyMaterialMessage:(id)arg1 toDestination:(id)arg2;	// IMP=0x00000001000fb918
- (void)leaveGroupSession:(id)arg1;	// IMP=0x00000001000faac8
- (void)joinWithOptions:(id)arg1;	// IMP=0x00000001000f8cb8
- (id)_checkIfPushMessageSizeGreaterThanMaxLimit:(id)arg1 maxLimit:(unsigned long long)arg2;	// IMP=0x00000001000f87e0
- (void)setGroupStreamInfo:(id)arg1 sessionInfo:(id)arg2;	// IMP=0x00000001000f7b38
- (void)updateParticipantData:(id)arg1 withContext:(id)arg2;	// IMP=0x00000001000f76f0
- (void)updateMembers:(id)arg1 withContext:(id)arg2 triggeredLocally:(_Bool)arg3;	// IMP=0x00000001000f60a8
- (_Bool)destinationsContainFromID:(id)arg1;	// IMP=0x00000001000f5aec
- (void)link:(id)arg1 didReceiveSessionStats:(id)arg2 relayGroupID:(id)arg3 relaySessionID:(id)arg4 success:(_Bool)arg5;	// IMP=0x00000001000f57b0
- (void)link:(id)arg1 didReceiveSessionInfo:(id)arg2 relayGroupID:(id)arg3 relaySessionID:(id)arg4 success:(_Bool)arg5;	// IMP=0x00000001000f3a3c
- (void)link:(id)arg1 didReceiveDebugDataForClient:(id)arg2 dataType:(unsigned char)arg3;	// IMP=0x00000001000f355c
- (void)link:(id)arg1 didReceiveMembershipChangedInformation:(unsigned char)arg2;	// IMP=0x00000001000f30fc
- (void)link:(id)arg1 didReceiveEncryptionInformation:(id)arg2;	// IMP=0x00000001000f2b2c
- (void)link:(id)arg1 didAddQREvent:(id)arg2;	// IMP=0x00000001000f267c
- (void)link:(id)arg1 didDefaultUnderlyingLinkChangeSucceeded:(_Bool)arg2 currentDefaultLinkID:(BOOL)arg3;	// IMP=0x00000001000f202c
- (void)link:(id)arg1 didDisconnectUnderlyingLinkID:(BOOL)arg2 linkUUID:(id)arg3 reason:(unsigned char)arg4;	// IMP=0x00000001000f1980
- (void)link:(id)arg1 didGetLinkProbingStatus:(id)arg2;	// IMP=0x00000001000ef65c
- (void)link:(id)arg1 didSoMaskChange:(unsigned int)arg2;	// IMP=0x00000001000ef05c
- (void)link:(id)arg1 didCellularMTUChange:(unsigned short)arg2;	// IMP=0x00000001000eea8c
- (void)link:(id)arg1 didRATChange:(unsigned char)arg2;	// IMP=0x00000001000ee514
- (void)link:(id)arg1 didCellularNWPathFlagsChanged:(unsigned short)arg2;	// IMP=0x00000001000edf44
- (void)link:(id)arg1 didWiFiNWPathFlagsChanged:(unsigned short)arg2;	// IMP=0x00000001000ed974
- (void)link:(id)arg1 didConnectUnderlyingLink:(BOOL)arg2 linkUUID:(id)arg3 localAttributes:(id)arg4 remoteAttributes:(id)arg5;	// IMP=0x00000001000ec860
- (_Bool)link:(id)arg1 didReceivePacket:(CDStruct_78c9ccae *)arg2 fromDeviceUniqueID:(id)arg3 cbuuid:(id)arg4;	// IMP=0x00000001000eb334
- (void)link:(id)arg1 didReceiveReportEvent:(id)arg2;	// IMP=0x00000001000ea6c0
- (void)link:(id)arg1 didConnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x00000001000ea2e8
- (void)link:(id)arg1 didReceiveSKEData:(id)arg2;	// IMP=0x00000001000e9bc8
- (void)link:(id)arg1 didDisconnectForDeviceUniqueID:(id)arg2 cbuuid:(id)arg3;	// IMP=0x00000001000e9984
- (void)addQREventForRTCReport:(id)arg1;	// IMP=0x00000001000e96fc
- (void)_setLinkProtocol:(id)arg1;	// IMP=0x00000001000e8fd8
- (void)connection:(id)arg1 didReceiveData:(id)arg2;	// IMP=0x00000001000e853c
- (void)connection:(id)arg1 receivedData:(id)arg2;	// IMP=0x00000001000e788c
- (void)handleAVConferenceError:(id)arg1;	// IMP=0x00000001000e783c
- (void)connectionDidStop:(id)arg1 error:(id)arg2;	// IMP=0x00000001000e749c
- (void)connection:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000001000e6e8c
- (void)setPreferences:(id)arg1;	// IMP=0x00000001000e69b8
- (void)setMuted:(_Bool)arg1;	// IMP=0x00000001000e64ec
- (void)setAudioEnabled:(_Bool)arg1;	// IMP=0x00000001000e6020
- (id)connectDuration;	// IMP=0x00000001000e5e4c
- (id)sessionDuration;	// IMP=0x00000001000e5d24
- (void)endSessionWithReason:(unsigned int)arg1;	// IMP=0x00000001000e5c20
- (void)_notifyClientsSessionStopped;	// IMP=0x00000001000e52a8
- (void)_cleanupSocketPairConnection;	// IMP=0x00000001000e525c
- (void)_checkAndUnassertRealTimeMode;	// IMP=0x00000001000e51d0
- (id)_acceptedDeviceToken;	// IMP=0x00000001000e4d80
- (id)_acceptedDeviceUniqueID;	// IMP=0x00000001000e47f4
- (id)_socketOptionsForDevice:(id)arg1 uniqueID:(id)arg2 pushToken:(id)arg3 connectionSuffix:(id)arg4;	// IMP=0x00000001000e378c
- (void)_closeSocketToDevice:(id)arg1;	// IMP=0x00000001000e2cc4
- (void)_resetPreferences:(id)arg1;	// IMP=0x00000001000e2850
- (void)_endSession;	// IMP=0x00000001000e0d18
- (void)endSessionWithData:(id)arg1;	// IMP=0x00000001000e0a48
- (void)_sendSessionEndWithData:(id)arg1;	// IMP=0x00000001000e0348
- (void)endSession;	// IMP=0x00000001000e02b4
- (void)reconnectSession;	// IMP=0x00000001000e0038
- (void)_cleanupQuickRelaySession;	// IMP=0x00000001000dfc68
- (void)cleanupSession;	// IMP=0x00000001000dec80
- (void)startListeningOnClientSocket:(int)arg1 isRawSocket:(_Bool)arg2;	// IMP=0x00000001000de728
- (void)runConnectivityCheckWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000de55c
- (void)networkingIsAvailable:(CDUnknownBlockType)arg1;	// IMP=0x00000001000de4ec
- (unsigned int)globalLinkErrorToSessionEndReason:(long long)arg1;	// IMP=0x00000001000de3f8
- (id)getAppID;	// IMP=0x00000001000de38c
- (id)getFromService;	// IMP=0x00000001000de274
- (id)getCallerCert;	// IMP=0x00000001000de124
- (void)setHasPendingAllocation:(_Bool)arg1 forIDSSession:(id)arg2;	// IMP=0x00000001000ddeb0
- (void)setAcceptedRelaySession:(id)arg1;	// IMP=0x00000001000dd6a4
- (void)_setInitialLinkType:(unsigned long long)arg1;	// IMP=0x00000001000dd078
- (void)checkAndCallSessionStart;	// IMP=0x00000001000dcf3c
- (void)_sessionStartWithSocketDescriptor:(int)arg1;	// IMP=0x00000001000dc72c
- (_Bool)_shouldUseIPsecLink;	// IMP=0x00000001000dc668
- (void)_broadcastSessionStartWithSocket:(int)arg1;	// IMP=0x00000001000dc32c
- (void)startQRSession;	// IMP=0x00000001000dc2f4
- (void)openSocketToDevice:(id)arg1;	// IMP=0x00000001000da644
- (double)_serverSpecifiedJoinNotificationDeliveryTimeout;	// IMP=0x00000001000da540
- (void)_noteJoinNotificationDidDeliverWithSuccess:(_Bool)arg1;	// IMP=0x00000001000d9ed0
- (void)_startJoinNotificationDeliveryTimeout;	// IMP=0x00000001000d9118
- (void)connectQRServer:(id)arg1 withPreferredLocalInterface:(int)arg2;	// IMP=0x00000001000d3f9c
- (void)didReceiveCurrentCellularSignalRaw:(int)arg1 signalStrength:(int)arg2 signalGrade:(int)arg3;	// IMP=0x00000001000d379c
- (id)_getNewLinkOptionsForActiveParticipantInfoRequest;	// IMP=0x00000001000d3374
- (void)_sendingOfflineActiveParticipantInfoRequest:(id)arg1;	// IMP=0x00000001000d2a1c
- (void)requestSessionInfoWithOptions:(id)arg1;	// IMP=0x00000001000d0784
- (void)_connectQRDirectlyToClientChannel:(id)arg1;	// IMP=0x00000001000c2c58
- (void)_connectSocketDescriptor:(int)arg1 toClientChannel:(id)arg2;	// IMP=0x00000001000c0588
- (void)_checkAndRunClientChannelTests:(id)arg1;	// IMP=0x00000001000bf7c0
- (_Bool)_checkAndSendCachedDataForClient:(id)arg1;	// IMP=0x00000001000befa0
- (void)writeToClientChannel:(id)arg1 packetBuffer:(CDStruct_78c9ccae *)arg2 metaData:(const char *)arg3 metadataSize:(unsigned int)arg4;	// IMP=0x00000001000bd470
- (void)_invalidateClientChannel:(id)arg1;	// IMP=0x00000001000bcd54
- (void)registerClientChannel;	// IMP=0x00000001000bbda4
- (void)reportFirstMKMReceived:(double)arg1;	// IMP=0x00000001000bb8b8
- (void)_cleanupSessionConnection;	// IMP=0x00000001000bb350
- (void)_reportRTC;	// IMP=0x00000001000bad1c
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) char *keyMaterial;
- (void)dealloc;	// IMP=0x00000001000ba150
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 availabilityCheck:(id)arg4;	// IMP=0x00000001000b6a34
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3;	// IMP=0x00000001000b6900
- (long long)_loggingFlags;	// IMP=0x00000001000b687c
- (void)_selectDefaultMic;	// IMP=0x00000001000b6868
- (void)submitAWDMetricsForIDSSessionWithEndReason:(unsigned int)arg1;	// IMP=0x00000001003d38e0
- (void)submitAWDMetricsForIDSSessionCompleted;	// IMP=0x00000001003d2dc0
- (void)submitAWDMetricsForIDSSessionReinitiateConnected;	// IMP=0x00000001003d2c88
- (void)submitAWDMetricsForIDSSessionReinitiateStarted;	// IMP=0x00000001003d2b50
- (void)submitAWDMetricsForIDSSessionReinitiateRequested;	// IMP=0x00000001003d2a18
- (void)submitAWDMetricsForIDSSessionConnected;	// IMP=0x00000001003d28e0
- (void)submitAWDMetricsForIDSSessionAcceptReceived;	// IMP=0x00000001003d27a8
- (void)submitAWDMetricsForIDSSessionAcceptSent;	// IMP=0x00000001003d2670
- (void)submitAWDMetricsForIDSSessionDeclineReceived;	// IMP=0x00000001003d2538
- (void)submitAWDMetricsForIDSSessionDeclineSent;	// IMP=0x00000001003d2400
- (void)submitAWDMetricsForIDSSessionCancelReceived;	// IMP=0x00000001003d22c8
- (void)submitAWDMetricsForIDSSessionCancelSentWithRemoteEndReason:(unsigned int)arg1 numberOfRecipients:(id)arg2;	// IMP=0x00000001003d214c
- (void)submitAWDMetricsForIDSSessionInvitationReceived;	// IMP=0x00000001003d2014
- (void)submitAWDMetricsForIDSSessionInvitationSentWithNumberOfRecipients:(id)arg1;	// IMP=0x00000001003d1ea4
- (void)submitAWDMetricsForIDSSessionStarted;	// IMP=0x00000001003d1b14
- (_Bool)_shouldSubmitMetricsBasedOnDate:(id)arg1 isInitiator:(_Bool)arg2;	// IMP=0x00000001003d18c4
- (_Bool)_shouldSubmitMetricsForThisSession;	// IMP=0x00000001003d179c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

