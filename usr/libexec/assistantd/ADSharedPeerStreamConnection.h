//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSServiceDelegate-Protocol.h"

@class ADPeerStreamConnection, IDSDeviceConnection, IDSService, NSDictionary, NSHashTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface ADSharedPeerStreamConnection : NSObject <IDSServiceDelegate>
{
    _Bool _listener;	// 8 = 0x8
    NSHashTable *_delegates;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    IDSService *_idsService;	// 40 = 0x28
    ADPeerStreamConnection *_currentPeerStreamConnection;	// 48 = 0x30
    NSMutableDictionary *_metricsResponses;	// 56 = 0x38
    NSString *_wakeupMessageIdentifier;	// 64 = 0x40
    NSString *_currentStreamIdentifier;	// 72 = 0x48
    _Bool _gettingDeviceSocket;	// 80 = 0x50
    _Bool _socketForConnectionHasBeenVended;	// 81 = 0x51
    IDSDeviceConnection *_deviceConnection;	// 88 = 0x58
    int _sockfd;	// 96 = 0x60
    CDUnknownBlockType _socketCompletion;	// 104 = 0x68
    _Bool _prefersBTClassic;	// 112 = 0x70
    NSString *_productType;	// 120 = 0x78
    NSString *_buildVersion;	// 128 = 0x80
    _Bool _peerSupportsNamedStreams;	// 136 = 0x88
    NSMutableSet *_nearbyDeviceIdentifiers;	// 144 = 0x90
    double _lastSharedDataUpdateTimestamp;	// 152 = 0x98
    _Bool _optimisticRetriesAreBlocked;	// 160 = 0xa0
    _Bool _peerSupportsExtendedHeader;	// 161 = 0xa1
    double _lastNearbyDevicesChangedTimestamp;	// 168 = 0xa8
    double _lastIDSMessageSentTimestamp;	// 176 = 0xb0
    double _lastIDSMessageStartSendTimestamp;	// 184 = 0xb8
    double _lastWakeUpMessageDuration;	// 192 = 0xc0
    double _lastStreamEstablishmentDuration;	// 200 = 0xc8
    unsigned long long _lastOpenErrorCode;	// 208 = 0xd0
    NSDictionary *_lastIDSMetricsContext;	// 216 = 0xd8
    _Bool _lastIDSMessageSuccess;	// 224 = 0xe0
}

+ (id)sharedPeerStreamConnectionWithServiceIdentifier:(id)arg1 listener:(_Bool)arg2;	// IMP=0x0000000100056bb8
+ (id)_streamPairInterruptedError;	// IMP=0x0000000100056750
+ (id)_deviceConnectionClosedErrorWithUnderlyingError:(id)arg1;	// IMP=0x000000010005673c
+ (id)_noDeviceError;	// IMP=0x0000000100056728
+ (id)_noNearbyPeerError;	// IMP=0x0000000100056714
+ (id)_errorWithCode:(long long)arg1 underylingError:(id)arg2;	// IMP=0x000000010005660c
- (void).cxx_destruct;	// IMP=0x000000010005b1cc
- (_Bool)deviceIsNearby;	// IMP=0x000000010005b180
- (void)preheat;	// IMP=0x000000010005b118
- (void)_preheat;	// IMP=0x000000010005b0a4
- (_Bool)peerSupportsExtendedHeader;	// IMP=0x000000010005b09c
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x000000010005afac
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x000000010005ab68
- (void)_establishEagerStreamPair;	// IMP=0x000000010005aa88
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x000000010005a7bc
- (void)_handleResponseProtobuf:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x000000010005a634
- (void)_handleReestablishMessage:(id)arg1 context:(id)arg2;	// IMP=0x000000010005a4a8
- (void)_handleGetMetricsMessage:(id)arg1 context:(id)arg2;	// IMP=0x000000010005a0c0
- (void)_handleWakeUpMessage:(id)arg1 context:(id)arg2;	// IMP=0x0000000100059dec
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000100059bd0
- (void)_updatePairedDeviceInfo;	// IMP=0x000000010005999c
- (void)getMetricsContext:(CDUnknownBlockType)arg1;	// IMP=0x00000001000598ac
- (id)_failureMetricsContextDictionary;	// IMP=0x0000000100059458
- (void)_setPreferBTClassic:(_Bool)arg1;	// IMP=0x00000001000592b4
- (void)setPreferBTClassic:(_Bool)arg1;	// IMP=0x0000000100059240
- (_Bool)hasNearbyPeer;	// IMP=0x000000010005915c
- (void)_requestStreamEstablishment;	// IMP=0x0000000100058e70
- (void)_invokeMetricsCompletionWithMetrics:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x0000000100058dd4
- (void)getAWDMetrics:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100058cd4
- (void)getRemoteMetrics:(CDUnknownBlockType)arg1;	// IMP=0x000000010005878c
- (void)_close;	// IMP=0x00000001000586a4
- (void)closeForConnection:(id)arg1;	// IMP=0x0000000100058440
- (void)_invokeSocketCompletionWithCurrentSocketOrError:(id)arg1;	// IMP=0x0000000100058308
- (void)_getSocketFromDeviceForStreamIdentifier:(id)arg1;	// IMP=0x0000000100057ab0
- (void)_getSocketFromDevice;	// IMP=0x0000000100057a34
- (void)getSocketForConnection:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005772c
- (void)_initiateOptimisticEagerStreamFetchRetry;	// IMP=0x0000000100057544
- (void)_wakeUpMessageFailedWithError:(id)arg1;	// IMP=0x00000001000572f0
- (_Bool)_wakeUpRemoteForStreamIdentifier:(id)arg1;	// IMP=0x0000000100056fec
- (void)removeDelegate:(id)arg1;	// IMP=0x0000000100056f54
- (void)addDelegate:(id)arg1;	// IMP=0x0000000100056e64
- (id)_destination;	// IMP=0x0000000100056b58
- (id)_account;	// IMP=0x0000000100056b00
- (id)_pairedDevice;	// IMP=0x0000000100056998
- (id)_service;	// IMP=0x0000000100056990
- (id)_initWithServiceIdentifier:(id)arg1 listener:(_Bool)arg2;	// IMP=0x0000000100056764

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
