//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SDUnlockSessionManager.h"

#import "SDUnlockIDSControllerDelegate-Protocol.h"

@class NSDate, NSObject, NSString, NSTimer, SDUnlockSessionRecord;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface SDUnlockKeyManager : SDUnlockSessionManager <SDUnlockIDSControllerDelegate>
{
    _Bool _useEscrowRecord;	// 8 = 0x8
    _Bool _remoteDeviceLocked;	// 9 = 0x9
    _Bool _ltkWaitingForUnlock;	// 10 = 0xa
    _Bool _outstandingStartLTK;	// 11 = 0xb
    _Bool _unlockingForKeybagUnlock;	// 12 = 0xc
    long long _unlockingState;	// 16 = 0x10
    NSTimer *_stashTimer;	// 24 = 0x18
    NSDate *_deviceSwitchUnlockRetryDate;	// 32 = 0x20
    NSObject<OS_dispatch_source> *_stateTimer;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_longTermKeyTimer;	// 48 = 0x30
    SDUnlockSessionRecord *_sessionRecord;	// 56 = 0x38
    CDUnknownBlockType _stashHandler;	// 64 = 0x40
    CDUnknownBlockType _stateHandler;	// 72 = 0x48
    id _keybagAssertion;	// 80 = 0x50
}

+ (id)sharedKeyManager;	// IMP=0x0000000100195250
- (void).cxx_destruct;	// IMP=0x000000010019c460
@property(retain) id keybagAssertion; // @synthesize keybagAssertion=_keybagAssertion;
@property(copy) CDUnknownBlockType stateHandler; // @synthesize stateHandler=_stateHandler;
@property(copy) CDUnknownBlockType stashHandler; // @synthesize stashHandler=_stashHandler;
@property(retain) SDUnlockSessionRecord *sessionRecord; // @synthesize sessionRecord=_sessionRecord;
@property(retain) NSObject<OS_dispatch_source> *longTermKeyTimer; // @synthesize longTermKeyTimer=_longTermKeyTimer;
@property(retain) NSObject<OS_dispatch_source> *stateTimer; // @synthesize stateTimer=_stateTimer;
@property(retain) NSDate *deviceSwitchUnlockRetryDate; // @synthesize deviceSwitchUnlockRetryDate=_deviceSwitchUnlockRetryDate;
@property _Bool unlockingForKeybagUnlock; // @synthesize unlockingForKeybagUnlock=_unlockingForKeybagUnlock;
@property _Bool outstandingStartLTK; // @synthesize outstandingStartLTK=_outstandingStartLTK;
@property _Bool ltkWaitingForUnlock; // @synthesize ltkWaitingForUnlock=_ltkWaitingForUnlock;
@property _Bool remoteDeviceLocked; // @synthesize remoteDeviceLocked=_remoteDeviceLocked;
@property(retain) NSTimer *stashTimer; // @synthesize stashTimer=_stashTimer;
@property _Bool useEscrowRecord; // @synthesize useEscrowRecord=_useEscrowRecord;
- (_Bool)initiateStashBagCreationWithManifest:(id)arg1;	// IMP=0x000000010019c0e8
- (void)initiateRemoteUnlock;	// IMP=0x000000010019b920
- (void)sendStateRequest;	// IMP=0x000000010019b67c
- (void)sendStashToken:(id)arg1 sessionID:(unsigned int)arg2;	// IMP=0x000000010019b3ec
- (void)sendStashKeyRequest:(id)arg1 sessionID:(unsigned int)arg2;	// IMP=0x000000010019b15c
- (void)sendSessionAuthenticationToken:(id)arg1 sessionID:(unsigned int)arg2;	// IMP=0x000000010019af8c
- (void)sendSessionKeyExchangeRequest:(id)arg1 usedEscrow:(_Bool)arg2 sessionID:(unsigned int)arg3;	// IMP=0x000000010019adcc
- (void)sendSetupCreateEscrowRecordWithSessionID:(unsigned int)arg1 stepData:(id)arg2 errorCode:(long long)arg3;	// IMP=0x000000010019ac1c
- (void)sendSetupSessionCreatedWithLocalKey:(id)arg1 stepData:(id)arg2 sessionID:(unsigned int)arg3 errorCode:(long long)arg4;	// IMP=0x000000010019aa34
- (void)sendClassALongTermKeyResponse:(id)arg1 sessionID:(unsigned int)arg2 errorCode:(unsigned int)arg3;	// IMP=0x000000010019a878
- (void)sendLongTermKeyResponse:(id)arg1 requestID:(id)arg2;	// IMP=0x000000010019a65c
- (void)sendStartLTKTransfer;	// IMP=0x000000010019a434
- (void)handleUnlockStateResponse:(id)arg1;	// IMP=0x000000010019a188
- (void)handleStashConfirmation:(id)arg1;	// IMP=0x0000000100199ff0
- (void)handleStashKeyExchangeResponse:(id)arg1;	// IMP=0x0000000100199c98
- (void)handleResetState:(id)arg1;	// IMP=0x0000000100199bdc
- (void)handleUnlockConfirmation:(id)arg1;	// IMP=0x00000001001998e8
- (void)handleSessionKeyExchangeResponse:(id)arg1;	// IMP=0x000000010019945c
- (void)handleCreateEscrowSecret:(id)arg1;	// IMP=0x0000000100199008
- (void)handleEscrowSessionRequest:(unsigned int)arg1 withUpdatedLongTermKey:(_Bool)arg2;	// IMP=0x0000000100198cf4
- (void)handleSetupRequest:(id)arg1;	// IMP=0x0000000100198a90
- (_Bool)updateLongTermKey:(id)arg1;	// IMP=0x0000000100198954
- (void)handleClassALongTermKeyRequest:(id)arg1;	// IMP=0x00000001001986d8
- (void)handleLongTermKeyRequest:(id)arg1;	// IMP=0x0000000100198448
- (void)handleRemoteLockStateChanged:(id)arg1;	// IMP=0x0000000100198158
- (void)idsControllerNearbyStateChanged:(id)arg1;	// IMP=0x00000001001980e0
- (void)idsController:(id)arg1 didReceiveProtoData:(id)arg2 forType:(unsigned short)arg3;	// IMP=0x0000000100197f24
- (id)stringForState:(long long)arg1;	// IMP=0x0000000100197ee8
@property long long unlockingState; // @synthesize unlockingState=_unlockingState;
- (void)resetState;	// IMP=0x0000000100197d14
- (void)resetAndClearState;	// IMP=0x0000000100197cd0
- (void)resetSetupState;	// IMP=0x0000000100197c8c
- (void)notifyStashStateWithError:(id)arg1;	// IMP=0x0000000100197b78
- (void)establishStashBagWithManifest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100197880
- (void)establishStashBagWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001001975f4
- (void)invalidateStashTimer;	// IMP=0x00000001001975a8
- (void)stashTimerFired:(id)arg1;	// IMP=0x0000000100197498
- (void)restartStashTimer;	// IMP=0x0000000100197420
- (void)invalidateStateTimer;	// IMP=0x0000000100197390
- (void)restartStateTimer;	// IMP=0x0000000100197128
- (void)notifyUnlockStateWithState:(id)arg1 error:(id)arg2;	// IMP=0x00000001001970b4
- (void)unlockStateForDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100196f50
- (void)syncUnlockEnabled:(_Bool)arg1;	// IMP=0x0000000100196e5c
- (_Bool)unlockEnabled;	// IMP=0x0000000100196dd8
- (void)disableUnlockPairingForSecurityManager:(id)arg1;	// IMP=0x0000000100196d14
- (void)disableUnlockPairing;	// IMP=0x0000000100196d04
- (void)checkDevicePairingState;	// IMP=0x0000000100196bcc
- (void)handleActiveDeviceUpdated;	// IMP=0x0000000100196a94
- (void)releaseKeyBagAssertion;	// IMP=0x0000000100196a10
- (void)takeMobileKeybagAssertion;	// IMP=0x00000001001968ac
- (void)invalidateLongTermKeyTimer;	// IMP=0x000000010019681c
- (void)restartLongTermKeyTimer:(unsigned long long)arg1;	// IMP=0x0000000100196678
- (void)newDeviceBecameActive:(id)arg1;	// IMP=0x0000000100196594
- (void)devicesDidFailToPair:(id)arg1;	// IMP=0x00000001001962d8
- (void)devicesDidUnpair:(id)arg1;	// IMP=0x000000010019601c
- (_Bool)startUnlockIfNeeded;	// IMP=0x0000000100195f34
- (void)handleUILockStateChange;	// IMP=0x0000000100195d90
- (void)keyBagLockStateChange:(id)arg1;	// IMP=0x0000000100195be4
- (void)startLTKExchange;	// IMP=0x0000000100195ba0
- (void)handleConfigState;	// IMP=0x0000000100195ac8
- (void)deviceDidEnterConfigurationState:(id)arg1;	// IMP=0x00000001001959e8
- (id)generateDebugInfo;	// IMP=0x000000010019575c
- (void)debugInfoRequested:(id)arg1;	// IMP=0x00000001001956f8
- (void)addObservers;	// IMP=0x0000000100195540
- (id)init;	// IMP=0x00000001001952bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

