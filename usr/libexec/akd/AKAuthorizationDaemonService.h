//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AKAuthorizationDaemonProtocol-Protocol.h"

@class AKAuthorizationEndorserRapportDiscovery, AKAuthorizationRapportClient, AKAuthorizationTrafficController, AKClient, AKCredentialRequestContext, NSArray, NSString;
@protocol AKAuthorizationClientProtocol, AKAuthorizationDaemonServiceDelegate;

@interface AKAuthorizationDaemonService : NSObject <AKAuthorizationDaemonProtocol>
{
    struct os_unfair_lock_s _authorizationRealUserLock;	// 8 = 0x8
    id <AKAuthorizationClientProtocol> _clientProxy;	// 16 = 0x10
    AKAuthorizationTrafficController *_authTrafficController;	// 24 = 0x18
    NSString *_realUserVerificationResults;	// 32 = 0x20
    AKClient *_client;	// 40 = 0x28
    id <AKAuthorizationDaemonServiceDelegate> _delegate;	// 48 = 0x30
    AKAuthorizationRapportClient *_rapportClient;	// 56 = 0x38
    AKAuthorizationEndorserRapportDiscovery *_endorserRapportDiscovery;	// 64 = 0x40
    NSArray *_credentials;	// 72 = 0x48
    AKCredentialRequestContext *_originalRequestContext;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000100066abc
@property(retain, nonatomic) AKCredentialRequestContext *originalRequestContext; // @synthesize originalRequestContext=_originalRequestContext;
@property(retain) NSArray *credentials; // @synthesize credentials=_credentials;
@property(retain, nonatomic) AKAuthorizationEndorserRapportDiscovery *endorserRapportDiscovery; // @synthesize endorserRapportDiscovery=_endorserRapportDiscovery;
@property(retain, nonatomic) AKAuthorizationRapportClient *rapportClient; // @synthesize rapportClient=_rapportClient;
@property(nonatomic) __weak id <AKAuthorizationDaemonServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) AKClient *client; // @synthesize client=_client;
- (void)_processUserResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100066534
- (void)_validateAndProcessUserResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100066244
- (void)performAuthorizationWithContext:(id)arg1 withUserProvidedInformation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100066018
- (void)presentAuthorizationUIForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100065e58
- (id)authorizationContextWithRequest:(id)arg1;	// IMP=0x0000000100065aac
- (id)authorizationContextHelperWithContext:(id)arg1;	// IMP=0x0000000100065a38
- (void)_completeAuthorizationWithServerResponse:(id)arg1 userResponse:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010006549c
- (void)_performSRPAuthorizationForUserResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100065220
- (void)_safePerformSRPWithUserResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010006506c
- (void)_requestUserAuthorizationForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100064de4
- (void)_fetchCredentialsForAssociatedDomains:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100064c84
- (void)_fetchSafariCredentialsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100064af8
- (void)_setupLoginChoicesForPresentationContext:(id)arg1;	// IMP=0x00000001000646a8
- (long long)_credentialStateForRequestContext:(id)arg1;	// IMP=0x000000010006462c
- (void)_checkCredentialForRequestContext:(id)arg1;	// IMP=0x0000000100064324
- (void)_getPresentationContextForRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100063b24
- (_Bool)_shouldStartSatoriVerificationForRequestContext:(id)arg1;	// IMP=0x0000000100063aa4
- (void)_initiateRapportAuthorizationWithRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000638d4
- (void)_initiateAuthorizationWithRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100063728
- (_Bool)_verifyEntitlementsForRequest:(id)arg1;	// IMP=0x0000000100063354
- (void)_performSilentRequest:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100063110
- (void)_performRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100063010
- (void)_determineUIAndPerformRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100062f34
- (void)_createAndPerformRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000625a4
- (void)getPresentationContextForRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100062258
- (void)establishConnectionWithStateBroadcastHandlerEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100061fc0
- (void)establishConnectionWithNotificationHandlerEndpoint:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100061cdc
- (void)continueFetchingIconForRequestContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100061bc8
- (void)fetchPrimaryApplicationInformationForWebServiceWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000619f0
- (void)fetchAppleIDAuthorizeHTMLResponseTemplateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000615d4
- (void)revokeUpgradeWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000612f4
- (void)fetchAppleOwnedDomainSetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100061258
- (void)fetchAppleIDAuthorizationURLSetWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000611bc
- (void)startDiscoveryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100061044
- (void)getCredentialStateForClientID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100060fb8
- (void)getCredentialStateForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100060d94
- (void)performAuthorization:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010006044c
- (void)dealloc;	// IMP=0x00000001000603d8
- (id)initWithClient:(id)arg1;	// IMP=0x00000001000602f0
- (id)init;	// IMP=0x00000001000602b8

@end
