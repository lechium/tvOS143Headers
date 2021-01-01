//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSStallDetector, IDSUTunControlChannelIdentityPair, NSDictionary, NSMutableArray, NSMutableData, NSString;
@protocol OS_dispatch_queue, OS_nw_connection;

@interface IDSUTunControlChannel : NSObject
{
    NSString *_deviceUniqueID;	// 8 = 0x8
    NSString *_cbuuid;	// 16 = 0x10
    int _sd;	// 24 = 0x18
    CDUnknownBlockType _receiveHandler;	// 32 = 0x20
    _Bool _receiveHandlerBeingCalled;	// 40 = 0x28
    NSMutableData *_pendingDataReceive;	// 48 = 0x30
    NSMutableData *_pendingDataSend;	// 56 = 0x38
    NSMutableArray *_outgoingMessages;	// 64 = 0x40
    NSMutableArray *_outgoingPriorityMessages;	// 72 = 0x48
    _Bool _sendingPriorityMessage;	// 80 = 0x50
    _Bool _sendSuspended;	// 81 = 0x51
    _Bool _newSocket;	// 82 = 0x52
    int _fairplayAuthState;	// 84 = 0x54
    unsigned int _grappaHostSessionID;	// 88 = 0x58
    unsigned int _grappaDeviceSessionID;	// 92 = 0x5c
    _Bool _isDefaultPairedDevice;	// 96 = 0x60
    _Bool _isReadyForEncrypting;	// 97 = 0x61
    _Bool _isDefaultPairedDevicePairedLocally;	// 98 = 0x62
    _Bool _isDefaultPairedDevicePairedRemotely;	// 99 = 0x63
    IDSUTunControlChannelIdentityPair *_identityPair;	// 104 = 0x68
    _Bool _disableEncryption;	// 112 = 0x70
    _Bool _didReceiveReestablishmentRequest;	// 113 = 0x71
    double _reestablishmentRequestReceiveTime;	// 120 = 0x78
    int _dataReceivedWithoutMessageCount;	// 128 = 0x80
    NSObject<OS_nw_connection> *_serviceConnection;	// 136 = 0x88
    NSObject<OS_nw_connection> *_connection;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 152 = 0x98
    IDSStallDetector *_outgoingStallDetector;	// 160 = 0xa0
    _Bool _shouldCallbackOnCancel;	// 168 = 0xa8
    NSObject<OS_nw_connection> *_canceledConnection;	// 176 = 0xb0
    _Bool _callbackResetDataConnections;	// 184 = 0xb8
    _Bool _callbackShouldObliterate;	// 185 = 0xb9
    _Bool _callbackEncryptionFailed;	// 186 = 0xba
    _Bool _callbackShouldTriggerCorruptionRecovery;	// 187 = 0xbb
    _Bool _checksumEnabled;	// 188 = 0xbc
    _Bool _avoidMainQueueOverrideToNO;	// 189 = 0xbd
    _Bool _connecting;	// 190 = 0xbe
    NSDictionary *_remoteDeviceEncryptionInfo;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x00000001001bb91c
@property(nonatomic) _Bool connecting; // @synthesize connecting=_connecting;
@property(retain, nonatomic) IDSStallDetector *outgoingStallDetector; // @synthesize outgoingStallDetector=_outgoingStallDetector;
@property(retain, nonatomic) IDSUTunControlChannelIdentityPair *identityPair; // @synthesize identityPair=_identityPair;
@property(nonatomic) _Bool avoidMainQueueOverrideToNO; // @synthesize avoidMainQueueOverrideToNO=_avoidMainQueueOverrideToNO;
@property(nonatomic) _Bool checksumEnabled; // @synthesize checksumEnabled=_checksumEnabled;
@property(nonatomic) double reestablishmentRequestReceiveTime; // @synthesize reestablishmentRequestReceiveTime=_reestablishmentRequestReceiveTime;
@property(nonatomic) _Bool didReceiveReestablishmentRequest; // @synthesize didReceiveReestablishmentRequest=_didReceiveReestablishmentRequest;
@property(copy, nonatomic) NSDictionary *remoteDeviceEncryptionInfo; // @synthesize remoteDeviceEncryptionInfo=_remoteDeviceEncryptionInfo;
@property(copy, nonatomic) NSString *deviceUniqueID; // @synthesize deviceUniqueID=_deviceUniqueID;
@property(nonatomic) _Bool disableEncryption; // @synthesize disableEncryption=_disableEncryption;
@property(nonatomic) _Bool isDefaultPairedDevicePairedRemotely; // @synthesize isDefaultPairedDevicePairedRemotely=_isDefaultPairedDevicePairedRemotely;
@property(nonatomic) _Bool isDefaultPairedDevicePairedLocally; // @synthesize isDefaultPairedDevicePairedLocally=_isDefaultPairedDevicePairedLocally;
@property(nonatomic) _Bool isReadyForEncrypting; // @synthesize isReadyForEncrypting=_isReadyForEncrypting;
- (void)resumeOTRNegotiation;	// IMP=0x00000001001bb47c
- (void)suspendOTRNegotiation:(id)arg1;	// IMP=0x00000001001bb3e0
- (_Bool)processSuspendOTRNegotiationMessage:(id)arg1;	// IMP=0x00000001001bae1c
- (void)sendSuspendOTRNegotiationMessage:(id)arg1;	// IMP=0x00000001001bab14
- (_Bool)processOTRNegotiationMessage:(id)arg1;	// IMP=0x00000001001ba15c
- (void)sendOTRNegotiationMessage:(id)arg1 negotiationCount:(unsigned int)arg2 negotiationData:(id)arg3;	// IMP=0x00000001001b9c64
- (void)_destroyFairplayDeviceSession;	// IMP=0x00000001001b9c50
- (void)_destroyFairplayHostSession;	// IMP=0x00000001001b9b48
- (void)_handleFairplayAuthenticationFailure;	// IMP=0x00000001001b9a6c
- (_Bool)processFairplayDeviceSessionInfo:(id)arg1;	// IMP=0x00000001001b9420
- (_Bool)processFairplayDeviceInfo:(id)arg1;	// IMP=0x00000001001b8f48
- (_Bool)processFairplayHostSessionInfo:(id)arg1;	// IMP=0x00000001001b8eec
- (id)_utunControlMessageFairplayDeviceSessionInfo:(char *)arg1 grappaDeviceSessionInfoSize:(unsigned int)arg2;	// IMP=0x00000001001b8ec8
- (id)_utunControlMessageFairplayHostSessionInfo:(unsigned char)arg1 deviceType:(unsigned char)arg2 protocolVersion:(unsigned int)arg3;	// IMP=0x00000001001b8b24
- (id)_utunControlMessageFairplayDeviceInfo;	// IMP=0x00000001001b8b08
- (void)dealloc;	// IMP=0x00000001001b8aa4
- (void)invalidate;	// IMP=0x00000001001b8a28
- (void)sendPriorityMessage:(id)arg1;	// IMP=0x00000001001b8970
- (void)sendMessage:(id)arg1;	// IMP=0x00000001001b88b8
- (void)_checkSendNewMessage;	// IMP=0x00000001001b6d08
- (void)_clearChannel;	// IMP=0x00000001001b6b34
@property(readonly, nonatomic) _Bool connected;
- (void)cancelConnection;	// IMP=0x00000001001b6abc
- (void)_cancelConnectionAndResetDataConnections:(_Bool)arg1 shouldObliterate:(_Bool)arg2 encryptionFailure:(_Bool)arg3 shouldTriggerCorruptionRecovery:(_Bool)arg4;	// IMP=0x00000001001b6878
- (void)_callHandlerWithMessage:(id)arg1 resetDataConnections:(_Bool)arg2 shouldObliterate:(_Bool)arg3 decryptionFailed:(_Bool)arg4 shouldTriggerCorruptionRecovery:(_Bool)arg5;	// IMP=0x00000001001b67ac
- (void)useConnection:(id)arg1 withFirstMessage:(id)arg2;	// IMP=0x00000001001b54e0
- (void)writeToConnection;	// IMP=0x00000001001b4af0
- (void)readFromConnection;	// IMP=0x00000001001b274c
@property(readonly, nonatomic) _Bool isDefaultPairedDeviceStartingToEncrypt;
- (void)encryptControlChannelForStoredIdentities;	// IMP=0x00000001001b2370
- (void)simulateDecryptionFailure;	// IMP=0x00000001001b2294
- (void)_cleanupConnection;	// IMP=0x00000001001b21dc
- (id)initWithDeviceUniqueID:(id)arg1 cbuuid:(id)arg2 receiveHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001001b1eac
- (id)description;	// IMP=0x00000001001b1d58

@end

