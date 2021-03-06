//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData;

@protocol IDSAccountSigningKeyKeychainAdapter <NSObject>
- (int)syncCircleStatusWithError:(id *)arg1;
- (NSData *)externalRepresentation:(struct __SecKey *)arg1 error:(struct __CFError **)arg2;
- (struct __SecKey *)copyPublicKey:(struct __SecKey *)arg1;
- (_Bool)verifySignature:(const struct __CFData *)arg1 overData:(const struct __CFData *)arg2 withKey:(struct __SecKey *)arg3 algorithm:(const struct __CFString *)arg4 error:(struct __CFError **)arg5;
- (NSData *)createSignatureWithKey:(struct __SecKey *)arg1 algorithm:(const struct __CFString *)arg2 overData:(const struct __CFData *)arg3 error:(struct __CFError **)arg4;
- (int)copyMatchingWithQuery:(const struct __CFDictionary *)arg1 outData:(const void **)arg2;
- (int)deleteWithQuery:(const struct __CFDictionary *)arg1;
- (struct __SecKey *)createRandomKeyWithQuery:(const struct __CFDictionary *)arg1 error:(struct __CFError **)arg2;
@end

