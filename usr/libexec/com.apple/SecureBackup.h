//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class EscrowPrerecord, NSData, NSDate, NSDictionary, NSError, NSString, SESWrapper;
@protocol OS_dispatch_queue;

@interface SecureBackup : NSObject <NSSecureCoding>
{
    _Bool _deleteAll;	// 8 = 0x8
    _Bool _emcsMode;	// 9 = 0x9
    _Bool _excludeiCDPRecords;	// 10 = 0xa
    _Bool _fmipRecovery;	// 11 = 0xb
    _Bool _icdp;	// 12 = 0xc
    _Bool _idmsRecovery;	// 13 = 0xd
    _Bool _silent;	// 14 = 0xe
    _Bool _stingray;	// 15 = 0xf
    _Bool _synchronize;	// 16 = 0x10
    _Bool _useCachedPassphrase;	// 17 = 0x11
    _Bool _useRecoveryPET;	// 18 = 0x12
    _Bool _usesMultipleiCSC;	// 19 = 0x13
    _Bool _usesRandomPassphrase;	// 20 = 0x14
    _Bool _usesRecoveryKey;	// 21 = 0x15
    _Bool _suppressServerFiltering;	// 22 = 0x16
    _Bool _silentDoubleRecovery;	// 23 = 0x17
    NSString *_appleID;	// 24 = 0x18
    NSString *_authToken;	// 32 = 0x20
    NSDate *_backOffDate;	// 40 = 0x28
    NSData *_certData;	// 48 = 0x30
    NSString *_countryDialCode;	// 56 = 0x38
    NSString *_countryCode;	// 64 = 0x40
    NSString *_dsid;	// 72 = 0x48
    NSString *_emcsCred;	// 80 = 0x50
    NSDictionary *_emcsDict;	// 88 = 0x58
    NSString *_encodedMetadata;	// 96 = 0x60
    NSString *_duplicateEncodedMetadata;	// 104 = 0x68
    NSDictionary *_escrowRecord;	// 112 = 0x70
    NSString *_escrowProxyURL;	// 120 = 0x78
    NSString *_fmipUUID;	// 128 = 0x80
    NSString *_iCloudEnv;	// 136 = 0x88
    NSData *_iCloudIdentityData;	// 144 = 0x90
    NSString *_iCloudPassword;	// 152 = 0x98
    NSData *_idmsData;	// 160 = 0xa0
    NSDictionary *_metadata;	// 168 = 0xa8
    NSDictionary *_metadataHash;	// 176 = 0xb0
    NSString *_oldEMCSCred;	// 184 = 0xb8
    NSString *_passphrase;	// 192 = 0xc0
    NSString *_recordID;	// 200 = 0xc8
    NSString *_recoveryKey;	// 208 = 0xd0
    NSString *_smsTarget;	// 216 = 0xd8
    NSString *_verificationToken;	// 224 = 0xe0
    NSObject<OS_dispatch_queue> *_queue;	// 232 = 0xe8
    NSError *_error;	// 240 = 0xf0
    NSString *_activityLabel;	// 248 = 0xf8
    NSString *_activityUUID;	// 256 = 0x100
    NSString *_hsa2CachedPrerecordUUID;	// 264 = 0x108
    EscrowPrerecord *_prerecord;	// 272 = 0x110
    SESWrapper *_ses;	// 280 = 0x118
}

+ (id)getAcceptedTermsForAltDSID:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010000f0c0
+ (id)getAllAcceptedTermsWithError:(id *)arg1;	// IMP=0x000000010000f0ac
+ (id)_getAcceptedTermsForAltDSID:(id)arg1 withError:(id *)arg2;	// IMP=0x000000010000ec5c
+ (void)getAcceptedTermsForAltDSID:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000e850
+ (void)saveTermsAcceptance:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000e4c4
+ (unsigned int)daemonPasscodeRequestOpinion:(id *)arg1;	// IMP=0x000000010000d734
+ (unsigned int)needPasscodeForHSA2EscrowRecordUpdate:(id *)arg1;	// IMP=0x000000010000d1e8
+ (void)asyncRequestEscrowRecordUpdate;	// IMP=0x000000010000d058
+ (_Bool)supportsSecureCoding;	// IMP=0x00000001000020bc
+ (id)_ClassCreateSecureBackupConcurrentConnection;	// IMP=0x0000000100001f18
- (void).cxx_destruct;	// IMP=0x000000010000f4cc
@property(retain, nonatomic) SESWrapper *ses; // @synthesize ses=_ses;
@property(retain, nonatomic) EscrowPrerecord *prerecord; // @synthesize prerecord=_prerecord;
@property(copy, nonatomic) NSString *hsa2CachedPrerecordUUID; // @synthesize hsa2CachedPrerecordUUID=_hsa2CachedPrerecordUUID;
@property(nonatomic) _Bool silentDoubleRecovery; // @synthesize silentDoubleRecovery=_silentDoubleRecovery;
@property(nonatomic) _Bool suppressServerFiltering; // @synthesize suppressServerFiltering=_suppressServerFiltering;
@property(copy, nonatomic) NSString *activityUUID; // @synthesize activityUUID=_activityUUID;
@property(copy, nonatomic) NSString *activityLabel; // @synthesize activityLabel=_activityLabel;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(copy, nonatomic) NSString *verificationToken; // @synthesize verificationToken=_verificationToken;
@property(nonatomic) _Bool usesRecoveryKey; // @synthesize usesRecoveryKey=_usesRecoveryKey;
@property(nonatomic) _Bool usesRandomPassphrase; // @synthesize usesRandomPassphrase=_usesRandomPassphrase;
@property(nonatomic) _Bool usesMultipleiCSC; // @synthesize usesMultipleiCSC=_usesMultipleiCSC;
@property(nonatomic) _Bool useRecoveryPET; // @synthesize useRecoveryPET=_useRecoveryPET;
@property(nonatomic) _Bool useCachedPassphrase; // @synthesize useCachedPassphrase=_useCachedPassphrase;
@property(nonatomic) _Bool synchronize; // @synthesize synchronize=_synchronize;
@property(nonatomic) _Bool stingray; // @synthesize stingray=_stingray;
@property(nonatomic) _Bool silent; // @synthesize silent=_silent;
@property(copy, nonatomic) NSString *smsTarget; // @synthesize smsTarget=_smsTarget;
@property(copy, nonatomic) NSString *recoveryKey; // @synthesize recoveryKey=_recoveryKey;
@property(copy, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(copy, nonatomic) NSString *passphrase; // @synthesize passphrase=_passphrase;
@property(copy, nonatomic) NSString *oldEMCSCred; // @synthesize oldEMCSCred=_oldEMCSCred;
@property(retain, nonatomic) NSDictionary *metadataHash; // @synthesize metadataHash=_metadataHash;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) _Bool idmsRecovery; // @synthesize idmsRecovery=_idmsRecovery;
@property(retain, nonatomic) NSData *idmsData; // @synthesize idmsData=_idmsData;
@property(copy, nonatomic) NSString *iCloudPassword; // @synthesize iCloudPassword=_iCloudPassword;
@property(retain, nonatomic) NSData *iCloudIdentityData; // @synthesize iCloudIdentityData=_iCloudIdentityData;
@property(copy, nonatomic) NSString *iCloudEnv; // @synthesize iCloudEnv=_iCloudEnv;
@property(nonatomic) _Bool icdp; // @synthesize icdp=_icdp;
@property(copy, nonatomic) NSString *fmipUUID; // @synthesize fmipUUID=_fmipUUID;
@property(nonatomic) _Bool fmipRecovery; // @synthesize fmipRecovery=_fmipRecovery;
@property(nonatomic) _Bool excludeiCDPRecords; // @synthesize excludeiCDPRecords=_excludeiCDPRecords;
@property(copy, nonatomic) NSString *escrowProxyURL; // @synthesize escrowProxyURL=_escrowProxyURL;
@property(retain, nonatomic) NSDictionary *escrowRecord; // @synthesize escrowRecord=_escrowRecord;
@property(copy, nonatomic) NSString *duplicateEncodedMetadata; // @synthesize duplicateEncodedMetadata=_duplicateEncodedMetadata;
@property(copy, nonatomic) NSString *encodedMetadata; // @synthesize encodedMetadata=_encodedMetadata;
@property(nonatomic) _Bool emcsMode; // @synthesize emcsMode=_emcsMode;
@property(retain, nonatomic) NSDictionary *emcsDict; // @synthesize emcsDict=_emcsDict;
@property(copy, nonatomic) NSString *emcsCred; // @synthesize emcsCred=_emcsCred;
@property(copy, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
@property(nonatomic) _Bool deleteAll; // @synthesize deleteAll=_deleteAll;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *countryDialCode; // @synthesize countryDialCode=_countryDialCode;
@property(retain, nonatomic) NSData *certData; // @synthesize certData=_certData;
@property(retain, nonatomic) NSDate *backOffDate; // @synthesize backOffDate=_backOffDate;
@property(copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
- (_Bool)requiresDoubleEnrollment;	// IMP=0x000000010000e45c
- (void)getCertificates:(CDUnknownBlockType)arg1;	// IMP=0x000000010000e14c
- (id)beginHSA2PasscodeRequest:(_Bool)arg1 uuid:(id)arg2 error:(id *)arg3;	// IMP=0x000000010000dc8c
- (id)beginHSA2PasscodeRequest:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000010000dbe4
- (void)prepareHSA2EscrowRecordContents:(_Bool)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000cc9c
- (id)srpRecoveryBlobFromSRPInitResponse:(id)arg1;	// IMP=0x000000010000cbe4
- (void)srpRecoveryUpdateDSID:(id)arg1 recoveryPassphrase:(id)arg2;	// IMP=0x000000010000cb5c
- (id)srpInitNonce;	// IMP=0x000000010000ca94
- (void)setBackOffDateWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000ca1c
- (void)backOffDateWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000c9a4
- (id)backupWithInfo:(id)arg1;	// IMP=0x000000010000c5ac
- (void)changeSMSTargetWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000c534
- (id)changeSMSTargetWithInfo:(id)arg1;	// IMP=0x000000010000c4b4
- (_Bool)changeSMSTargetWithError:(id *)arg1;	// IMP=0x000000010000c0d8
- (void)getCountrySMSCodesWithInfo:(id)arg1 completionBlockWithResults:(CDUnknownBlockType)arg2;	// IMP=0x000000010000c060
- (void)startSMSChallengeWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000bfa0
- (void)startSMSChallengeWithInfo:(id)arg1 completionBlockWithResults:(CDUnknownBlockType)arg2;	// IMP=0x000000010000bf28
- (id)startSMSChallengeWithInfo:(id)arg1 results:(id *)arg2;	// IMP=0x000000010000bea0
- (id)startSMSChallengeWithError:(id *)arg1;	// IMP=0x000000010000ba4c
- (void)uncachePassphraseWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000b9d4
- (id)uncachePassphraseWithInfo:(id)arg1;	// IMP=0x000000010000b998
- (void)cachePassphraseWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000b920
- (id)cachePassphraseWithInfo:(id)arg1;	// IMP=0x000000010000b8e4
- (void)stashRecoveryDataWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000b7a8
- (void)disableWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000b730
- (id)disableWithInfo:(id)arg1;	// IMP=0x000000010000b6b0
- (_Bool)disableWithError:(id *)arg1;	// IMP=0x000000010000b2d4
- (void)recoverWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000b284
- (void)recoverWithInfo:(id)arg1 completionBlockWithResults:(CDUnknownBlockType)arg2;	// IMP=0x000000010000b124
- (id)recoverWithInfo:(id)arg1 results:(id *)arg2;	// IMP=0x000000010000b09c
- (void)restoreKeychainAsyncWithPassword:(id)arg1 keybagDigest:(id)arg2 haveBottledPeer:(_Bool)arg3 viewsNotToBeRestored:(id)arg4 error:(id *)arg5;	// IMP=0x000000010000ab0c
- (id)recoverSilentWithCDPContext:(id)arg1 allRecords:(id)arg2 error:(id *)arg3;	// IMP=0x000000010000a5b8
- (id)recoverWithCDPContext:(id)arg1 escrowRecord:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100009fb8
- (id)recoverWithError:(id *)arg1;	// IMP=0x0000000100009b64
- (void)enableWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009aec
- (id)enableWithInfo:(id)arg1;	// IMP=0x0000000100009a6c
- (_Bool)enableWithError:(id *)arg1;	// IMP=0x0000000100009690
- (void)updateMetadataWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009618
- (id)updateMetadataWithInfo:(id)arg1;	// IMP=0x0000000100009598
- (_Bool)updateMetadataWithError:(id *)arg1;	// IMP=0x00000001000090dc
- (void)getAccountInfoWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010000908c
- (void)getAccountInfoWithInfo:(id)arg1 completionBlockWithResults:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009014
- (id)getAccountInfoWithInfo:(id)arg1 results:(id *)arg2;	// IMP=0x0000000100008f8c
- (id)getAccountInfoWithError:(id *)arg1;	// IMP=0x00000001000089ec
- (void)stateCaptureWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008634
- (void)notificationInfo:(CDUnknownBlockType)arg1;	// IMP=0x0000000100008210
- (void)setBackOffDateWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007eb4
- (void)backOffDateWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007b38
- (void)backupWithInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000077ac
- (void)changeSMSTargetWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007450
- (void)getCountrySMSCodesWithResults:(CDUnknownBlockType)arg1;	// IMP=0x00000001000070d4
- (void)startSMSChallengeWithResults:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006d58
- (void)uncachePassphrase;	// IMP=0x0000000100006ba0
- (void)uncacheRecoveryKeyWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006904
- (void)cacheRecoveryKeyWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006668
- (void)uncachePassphraseWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000063cc
- (void)cachePassphraseWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006130
- (void)cachePassphrase;	// IMP=0x0000000100005f48
- (void)updateMetadataWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005bec
- (void)stashRecoveryDataWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005890
- (void)disableWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100005534
- (void)createICDPRecordWithContents:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005110
- (void)recoverRecordContents:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004d94
- (void)recoverWithResults:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004a18
- (void)enableWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004478
- (void)getAccountInfoWithResults:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004010
- (void)populateWithInfo:(id)arg1;	// IMP=0x00000001000034d0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100002bec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000001000022a8
- (id)init;	// IMP=0x0000000100002294
- (id)initWithUserActivityLabel:(id)arg1;	// IMP=0x00000001000020c4
- (id)_CreateSecureBackupConnection;	// IMP=0x0000000100001d74

@end

