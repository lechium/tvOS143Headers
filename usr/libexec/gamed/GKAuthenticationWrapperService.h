//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKService.h"

#import "GKAccountService-Protocol.h"
#import "GKAccountServicePrivate-Protocol.h"

@class NSDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface GKAuthenticationWrapperService : GKService <GKAccountService, GKAccountServicePrivate>
{
    GKService *_service;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_authQueue;	// 16 = 0x10
    NSDictionary *_signatureLookup;	// 24 = 0x18
}

+ (id)serviceForBundleID:(id)arg1 player:(id)arg2;	// IMP=0x0000000100093cd0
+ (id)serviceForClient:(id)arg1 player:(id)arg2;	// IMP=0x0000000100093bf8
+ (id)authenticationWrapperForService:(id)arg1;	// IMP=0x0000000100093b68
- (void)forwardInvocation:(id)arg1;	// IMP=0x0000000100097f00
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x0000000100097e04
- (oneway void)setLoginStatus:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100097b84
- (oneway void)accountEdited:(id)arg1 alias:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 handler:(CDUnknownBlockType)arg5;	// IMP=0x00000001000978cc
- (oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 altDSID:(id)arg5 finished:(_Bool)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x00000001000971a0
- (oneway void)accountCreated:(id)arg1 playerID:(id)arg2 authenticationToken:(id)arg3 alias:(id)arg4 finished:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100096c6c
- (oneway void)getLastProfilePrivacyVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100096b40
- (oneway void)setLastProfilePrivacyVersionDisplayedForSignedInPlayer:(id)arg1;	// IMP=0x0000000100096a14
- (oneway void)getLastPersonalizationVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000968e8
- (oneway void)setLastPersonalizationVersionDisplayedForSignedInPlayer:(id)arg1;	// IMP=0x00000001000967bc
- (oneway void)getLastPrivacyNoticeVersionDisplayedForSignedInPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100096690
- (oneway void)setLastPrivacyNoticeVersionDisplayedForSignedInPlayer:(unsigned long long)arg1;	// IMP=0x0000000100096564
- (oneway void)resetCredentialsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100096438
- (oneway void)authenticationCancelled;	// IMP=0x0000000100096328
- (oneway void)isICloudAvailableWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100096208
- (oneway void)getAccountAuthTokenWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000960e8
- (oneway void)validateAccountWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100095f68
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100095e2c
- (oneway void)switchLocalPlayerWithAltDSID:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100095d04
- (oneway void)authenticateNonActivePlayerWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 usingFastPath:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100095ba0
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 altDSID:(id)arg4 usingFastPath:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x0000000100095a3c
- (oneway void)authenticatePlayerWithUsername:(id)arg1 password:(id)arg2 rawPassword:(id)arg3 usingFastPath:(_Bool)arg4 displayAuthUI:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x00000001000958d4
- (void)authenticateWithService:(id)arg1 username:(id)arg2 password:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x00000001000958a0
- (void)authenticateWithService:(id)arg1 username:(id)arg2 password:(id)arg3 rawPassword:(id)arg4 altDSID:(id)arg5 usingFastPath:(_Bool)arg6 displayAuthUI:(_Bool)arg7 handler:(CDUnknownBlockType)arg8;	// IMP=0x0000000100094dc8
- (void)authenticateWithService:(id)arg1 username:(id)arg2 password:(id)arg3 rawPassword:(id)arg4 altDSID:(id)arg5 usingFastPath:(_Bool)arg6 handler:(CDUnknownBlockType)arg7;	// IMP=0x0000000100094d98
- (oneway void)setupAccountForParameters:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100094b18
- (oneway void)signOutPlayerWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000946bc
- (oneway void)authenticationWasCancelled;	// IMP=0x00000001000945ac
- (oneway void)fetchItemsForIdentityVerificationSignature:(CDUnknownBlockType)arg1;	// IMP=0x0000000100094264
- (oneway void)generateIdentityVerificationSignatureWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100093f1c
- (oneway void)authenticatePlayerWithExistingCredentialsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000100093da8
- (void)dealloc;	// IMP=0x0000000100093af8
- (id)initWithService:(id)arg1 queue:(id)arg2;	// IMP=0x00000001000939dc
- (void)_buildSignatureLookupForProtocol:(id)arg1;	// IMP=0x0000000100093868
- (id)initWithClient:(id)arg1;	// IMP=0x0000000100093790

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

