//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AKSRPContextHelper.h"

@class AKAppleIDAuthenticationContext, NSString;

@interface AKSRPAuthenticationContextHelper : AKSRPContextHelper
{
    NSString *_passwordResetBackupToken;	// 8 = 0x8
    _Bool __masterKeyAsSecondFactor;	// 16 = 0x10
    AKAppleIDAuthenticationContext *_authContext;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100016d44
@property(nonatomic, setter=_setMasterKeyAsSecondFactor:) _Bool _masterKeyAsSecondFactor; // @synthesize _masterKeyAsSecondFactor=__masterKeyAsSecondFactor;
@property(retain, nonatomic) AKAppleIDAuthenticationContext *authContext; // @synthesize authContext=_authContext;
- (id)_identityAuthorizationPayload;	// IMP=0x0000000100016b64
- (id)_passwordResetBackupToken;	// IMP=0x0000000100016a98
- (_Bool)canPresentRemoteUI;	// IMP=0x0000000100016a00
- (void)clientProvidedDataHelper:(id)arg1;	// IMP=0x00000001000165b0
- (void)_authenticationParameters:(CDUnknownBlockType)arg1;	// IMP=0x00000001000151bc
- (void)authenticationParametersWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100014e18
- (id)initWithContext:(id)arg1;	// IMP=0x0000000100014d94

@end
