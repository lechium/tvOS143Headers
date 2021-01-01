//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSEngramKeyStoreListener-Protocol.h"

@class CUTDeferredTaskQueue, IDSGetDependentRegistrationsCenter, IDSKeyTransparencyVerifier, IDSPushHandler, IDSValidationSession, NSDate, NSMutableArray, NSMutableDictionary, NSNumber, NSString;
@protocol IDSRegistrationCenterMessageDelivery;

@interface IDSRegistrationCenter : NSObject <IDSEngramKeyStoreListener>
{
    NSMutableArray *_queuedRegistrations;	// 8 = 0x8
    NSMutableArray *_queuedAuthentications;	// 16 = 0x10
    NSMutableArray *_currentAuthentications;	// 24 = 0x18
    NSMutableArray *_currentRegistrations;	// 32 = 0x20
    NSMutableArray *_handlers;	// 40 = 0x28
    _Bool _pendingDequeue;	// 48 = 0x30
    _Bool _pendingDeregistration;	// 49 = 0x31
    NSMutableDictionary *_currentGetHandlesBlocks;	// 56 = 0x38
    NSMutableDictionary *_currentGetHandlesRegistrations;	// 64 = 0x40
    NSMutableArray *_successfulRegistrations;	// 72 = 0x48
    _Bool _shouldUseAbsinthe;	// 80 = 0x50
    _Bool _isBuildingContext;	// 81 = 0x51
    struct NACContextOpaque_ *_validationContext;	// 88 = 0x58
    _Bool _validationContextDisabled;	// 96 = 0x60
    NSDate *_validateContextDate;	// 104 = 0x68
    NSNumber *_validateContextTTL;	// 112 = 0x70
    IDSValidationSession *_validationSession;	// 120 = 0x78
    NSMutableArray *_validationContextQueue;	// 128 = 0x80
    NSDate *_dateSentLastHTTPMessage;	// 136 = 0x88
    NSDate *_dateLastRegistered;	// 144 = 0x90
    NSDate *_accountingHour;	// 152 = 0x98
    unsigned long long _registrations;	// 160 = 0xa0
    id <IDSRegistrationCenterMessageDelivery> _httpMessageDelivery;	// 168 = 0xa8
    IDSPushHandler *_pushHandler;	// 176 = 0xb0
    IDSGetDependentRegistrationsCenter *_gdrCenter;	// 184 = 0xb8
    IDSKeyTransparencyVerifier *_keyTransparencyVerifier;	// 192 = 0xc0
    CUTDeferredTaskQueue *_sendAuthenticateRegistrationTask;	// 200 = 0xc8
    CUTDeferredTaskQueue *_sendRegistrationTask;	// 208 = 0xd0
    CUTDeferredTaskQueue *_sendDeregistrationTask;	// 216 = 0xd8
    CUTDeferredTaskQueue *_cleanupAbsintheTask;	// 224 = 0xe0
}

+ (id)sharedInstance;	// IMP=0x000000010030e3d0
- (void).cxx_destruct;	// IMP=0x000000010033647c
@property(readonly, nonatomic) CUTDeferredTaskQueue *cleanupAbsintheTask; // @synthesize cleanupAbsintheTask=_cleanupAbsintheTask;
@property(readonly, nonatomic) CUTDeferredTaskQueue *sendDeregistrationTask; // @synthesize sendDeregistrationTask=_sendDeregistrationTask;
@property(readonly, nonatomic) CUTDeferredTaskQueue *sendRegistrationTask; // @synthesize sendRegistrationTask=_sendRegistrationTask;
@property(readonly, nonatomic) CUTDeferredTaskQueue *sendAuthenticateRegistrationTask; // @synthesize sendAuthenticateRegistrationTask=_sendAuthenticateRegistrationTask;
- (void)sendValidateCredential:(id)arg1 withDeliveryCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100335fe8
- (id)dateLastRegistered;	// IMP=0x0000000100335fcc
- (void)_noteRegistration;	// IMP=0x0000000100335d3c
- (_Bool)_checkOverRegistrations;	// IMP=0x0000000100335b7c
- (void)handler:(id)arg1 pushTokenChanged:(id)arg2;	// IMP=0x0000000100335a30
- (void)removeListener:(id)arg1;	// IMP=0x00000001003359a0
- (void)addListener:(id)arg1;	// IMP=0x00000001003358dc
- (id)activeRegistrations;	// IMP=0x00000001003357c8
- (void)cancelActionsForRegistrationInfo:(id)arg1;	// IMP=0x00000001003353c4
- (void)cancelRegisterActionsForRegistrationInfo:(id)arg1;	// IMP=0x0000000100334e14
- (_Bool)sendDeregistration:(id)arg1;	// IMP=0x0000000100334b10
- (_Bool)sendRegistration:(id)arg1;	// IMP=0x0000000100334458
- (void)__reallySendRegistration;	// IMP=0x0000000100334374
- (_Bool)authenticateRegistration:(id)arg1;	// IMP=0x0000000100333758
- (void)__reallySendAuthenticateRegistration;	// IMP=0x0000000100333634
- (_Bool)queryValidatedEmailsForRegistration:(id)arg1 allowPasswordPrompt:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100333364
- (_Bool)_queryValidatedEmailsForRegistration:(id)arg1 allowPasswordPrompt:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000100332094
- (void)_processGetHandlesMessage:(id)arg1 registrations:(id)arg2 deliveredWithError:(id)arg3 resultCode:(long long)arg4 resultDictionary:(id)arg5 allowPasswordPrompt:(_Bool)arg6;	// IMP=0x0000000100330f8c
- (_Bool)isRegistering:(id)arg1;	// IMP=0x0000000100330ee4
- (id)_geoRegion;	// IMP=0x0000000100330e0c
- (void)reportiMessageSpamCheckUnknown:(id)arg1 count:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001003308f8
- (void)reportiMessageUnknownSender:(id)arg1 messageID:(id)arg2 isBlackholed:(_Bool)arg3 messageServerTimestamp:(id)arg4 selfURI:(id)arg5 registration:(id)arg6;	// IMP=0x00000001003303a8
- (void)reportSpamWithMessages:(id)arg1 selfURI:(id)arg2 registration:(id)arg3;	// IMP=0x000000010032ff30
- (void)_sendAuthenticateRegistration:(id)arg1;	// IMP=0x000000010032f66c
- (id)_authMessageForRegistration:(id)arg1;	// IMP=0x000000010032af80
- (CDUnknownBlockType)_authMessageCompletionWithRegistration:(id)arg1 withOverallSuccessBlock:(CDUnknownBlockType)arg2 overallFailure:(CDUnknownBlockType)arg3;	// IMP=0x000000010032a324
- (void)sendHardDeregisterCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001003292cc
- (void)_sendDeregistration:(id)arg1;	// IMP=0x0000000100329060
- (void)__reallySendDeregistration;	// IMP=0x0000000100328f70
- (void)_sendRegistrationAsDeregister:(_Bool)arg1;	// IMP=0x000000010032299c
- (id)_trustedDeviceForRegistrations:(id)arg1 transparencyLoggableDatasByServiceType:(id)arg2;	// IMP=0x0000000100322164
- (id)_URIsToRegisterForRegistration:(id)arg1;	// IMP=0x0000000100321dd0
- (void)_processRegistrationMessage:(id)arg1 sentRegistrations:(id)arg2 descriptionString:(id)arg3 actionID:(id)arg4 actionString:(id)arg5 isDeregister:(_Bool)arg6 deliveredWithError:(id)arg7 resultCode:(long long)arg8 resultDictionary:(id)arg9;	// IMP=0x000000010031a90c
- (id)_keyTransparencyLoggableDataFromRegistrationMessage:(id)arg1 service:(id)arg2 URI:(id)arg3;	// IMP=0x000000010031a378
- (_Bool)_hasRegistration:(id)arg1 inQueue:(id)arg2;	// IMP=0x0000000100319c44
- (void)_notifyRegistrationIdentitiesUpdated;	// IMP=0x00000001003198f4
- (void)_notifyEmailQuerySuccess:(id)arg1 emailInfo:(id)arg2;	// IMP=0x000000010031943c
- (void)_notifyEmailQueryFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5;	// IMP=0x0000000100318b9c
- (void)_notifyAllSuccessfulRegistrations:(id)arg1;	// IMP=0x00000001003187fc
- (void)_notifyRegistrationSuccess:(id)arg1;	// IMP=0x0000000100317e08
- (void)_notifyRegistrationFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 info:(id)arg5;	// IMP=0x0000000100316e9c
- (void)_notifyIDSAuthenticationSuccess:(id)arg1;	// IMP=0x0000000100316478
- (void)_notifyProvisionFailure:(id)arg1 responseCode:(long long)arg2 registrationError:(long long)arg3 error:(id)arg4 fatal:(_Bool)arg5 info:(id)arg6;	// IMP=0x0000000100315544
- (void)buildValidationCredentialsIfNeeded;	// IMP=0x000000010031543c
- (void)_queueBuildingValidationDataIfNecessaryForMessage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100314648
- (void)_sendAbsintheValidationCertRequestIfNeeded;	// IMP=0x0000000100311f28
- (void)__cleanupValidationInfo;	// IMP=0x0000000100311df8
- (void)__flushValidationQueue;	// IMP=0x00000001003117d8
- (void)__failValidationQueueWithErrorResponseCode:(long long)arg1;	// IMP=0x0000000100311498
- (void)__failValidationQueue;	// IMP=0x0000000100311460
- (void)__queueValidationMessage:(id)arg1;	// IMP=0x00000001003112d4
- (void)_dequeuePendingRequestsIfNecessary;	// IMP=0x00000001003105d4
- (_Bool)_hasCurrentAuthenticationsOrRegistrations;	// IMP=0x0000000100310558
- (_Bool)_hasOngoingAuthentications;	// IMP=0x00000001003104dc
- (void)__sendMessage:(id)arg1;	// IMP=0x000000010031035c
- (void)logState;	// IMP=0x0000000100310164
- (void)__dumpState;	// IMP=0x000000010030f6a8
- (void)engramKeyStoreDidUpdateIdentities:(id)arg1;	// IMP=0x000000010030f32c
- (id)keyTransparencyVerifier;	// IMP=0x000000010030f310
- (id)gdrCenter;	// IMP=0x000000010030f2f4
- (void)dealloc;	// IMP=0x000000010030f1f8
- (id)init;	// IMP=0x000000010030f074
- (id)initWithMessageDelivery:(id)arg1 pushHandler:(id)arg2 keyTransparencyVerifier:(id)arg3;	// IMP=0x000000010030e57c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
