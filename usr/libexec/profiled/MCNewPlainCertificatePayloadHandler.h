//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewCertificatePayloadHandler.h"

@interface MCNewPlainCertificatePayloadHandler : MCNewCertificatePayloadHandler
{
    struct __SecIdentity *_identity;	// 40 = 0x28
}

- (struct __SecIdentity *)copyIdentityImmediatelyWithInteractionClient:(id)arg1 outError:(id *)arg2;	// IMP=0x000000010002c74c
- (id)_malformedCertificateError;	// IMP=0x000000010002c66c
- (id)_cannotStoreRootCertificateError;	// IMP=0x000000010002c58c
- (id)_cannotStoreCertificateError;	// IMP=0x000000010002c4ac
- (id)_tooManyCertificatesError;	// IMP=0x000000010002c3cc
- (id)_invalidPasscodeError;	// IMP=0x000000010002c2ec
- (int)_grantPartialNonSSLTrustPolicyForCertificate:(struct __SecCertificate *)arg1;	// IMP=0x000000010002c098
- (void)_revertFullSSLTrustIfNeeded;	// IMP=0x000000010002ba0c
- (void)remove;	// IMP=0x000000010002b980
- (void)unsetAside;	// IMP=0x000000010002b784
- (void)setAside;	// IMP=0x000000010002b738
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;	// IMP=0x000000010002b290
- (id)_storeCertificate:(struct __SecCertificate *)arg1 allowSSLTrust:(_Bool)arg2 outError:(id *)arg3;	// IMP=0x000000010002aa9c
- (_Bool)preflightUserInputResponses:(id)arg1 outError:(id *)arg2;	// IMP=0x000000010002a944
- (struct __SecIdentity *)_copyContentsOfPKCS12DataWithPasscode:(id)arg1 outError:(id *)arg2;	// IMP=0x000000010002a774
- (void)dealloc;	// IMP=0x000000010002a720
- (id)userInputFields;	// IMP=0x000000010002a534

@end

