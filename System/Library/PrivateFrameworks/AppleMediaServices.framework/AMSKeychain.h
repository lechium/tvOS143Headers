/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AppleMediaServices/AppleMediaServices-Structs.h>
@interface AMSKeychain : NSObject
+(BOOL)deleteCertificateChainWithOptions:(id)arg1 error:(id*)arg2 ;
+(BOOL)deleteKeyPairWithOptions:(id)arg1 error:(id*)arg2 ;
+(id)certificateChainStringsForOptions:(id)arg1 error:(id*)arg2 ;
+(id)legacyAttestationForOptions:(id)arg1 error:(id*)arg2 ;
+(_SecKey*)copyPublicKeyForOptions:(id)arg1 error:(id*)arg2 ;
+(SecAccessControlRef)createAccessControlRefWithOptions:(id)arg1 error:(id*)arg2 ;
+(_SecKey*)copyPrivateKeyWithContext:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(SecAccessControlRef)copyAccessControlRefWithAccount:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(BOOL)storePrimaryCert:(SecCertificateRef)arg1 intermediateCert:(SecCertificateRef)arg2 privateKey:(_SecKey*)arg3 options:(id)arg4 error:(id*)arg5 ;
+(void)stashResumptionHeaders:(id)arg1 ;
+(id)certificateKeychainLabelsForOptions:(id)arg1 ;
+(id)_certificatePrivateKeyLabelForOptions:(id)arg1 ;
+(id)keychainLabelForOptions:(id)arg1 ;
+(_SecKey*)_copyLegacyPublicKeyForOptions:(id)arg1 error:(id*)arg2 ;
+(BOOL)_generateLegacyKeypairForOptions:(id)arg1 error:(id*)arg2 ;
+(_SecKey*)_copyLegacyPrivateKeyForOptions:(id)arg1 error:(id*)arg2 ;
+(id)_resumptionHeadersQuery;
+(void)_deleteResumptionHeaders;
+(id)_legacyAttestationForOptions:(id)arg1 error:(id*)arg2 ;
+(_SecKey*)copyCertificatePrivateKeyWithContext:(id)arg1 account:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(_SecKey*)copyPrivateKeyWithContext:(id)arg1 account:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
+(id)_primaryConstraintsWithOptions:(id)arg1 ;
+(id)_extendedConstraintsWithOptions:(id)arg1 ;
+(id)_primaryConstraints;
+(id)_primaryConstraintsForMac;
+(id)_primaryConstraintsForWatch;
+(_SecKey*)copyPublicKeyForAccount:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(BOOL)performForwardKeyMigrationForDSID:(id)arg1 forceMigration:(BOOL)arg2 ;
+(id)resumptionHeaders;
@end

