/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CDPStateUIProviderInternal, CDPDSecureBackupDelegate, CDPDSecureBackupProxy, CDPDOctagonTrustProxy;
@class CDPContext, NSDictionary, CDPDSecureBackupConfiguration;

@interface CDPDSecureBackupController : NSObject {

	BOOL _fakeNearlyDepletedRecords;
	CDPContext* _context;
	id<CDPStateUIProviderInternal> _uiProvider;
	id<CDPDSecureBackupDelegate> _delegate;
	NSDictionary* _cachedAccountInfo;
	id<CDPDSecureBackupProxy> _secureBackupProxy;
	id<CDPDOctagonTrustProxy> _octagonTrustProxy;
	CDPDSecureBackupConfiguration* _configuration;

}

@property (nonatomic,retain) NSDictionary * cachedAccountInfo;                           //@synthesize cachedAccountInfo=_cachedAccountInfo - In the implementation block
@property (assign,nonatomic) BOOL fakeNearlyDepletedRecords;                             //@synthesize fakeNearlyDepletedRecords=_fakeNearlyDepletedRecords - In the implementation block
@property (nonatomic,retain) id<CDPDSecureBackupProxy> secureBackupProxy;                //@synthesize secureBackupProxy=_secureBackupProxy - In the implementation block
@property (nonatomic,retain) id<CDPDOctagonTrustProxy> octagonTrustProxy;                //@synthesize octagonTrustProxy=_octagonTrustProxy - In the implementation block
@property (assign,nonatomic,__weak) id<CDPDSecureBackupDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CDPDSecureBackupConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) CDPContext * context;                                     //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id<CDPStateUIProviderInternal> uiProvider;                //@synthesize uiProvider=_uiProvider - In the implementation block
+(id)_dateWithSecureBackupDateString:(id)arg1 ;
+(id)_sanitizedInfoDictionary:(id)arg1 ;
+(id)_printableAccountInfo:(id)arg1 ;
-(id<CDPDSecureBackupDelegate>)delegate;
-(void)setDelegate:(id<CDPDSecureBackupDelegate>)arg1 ;
-(CDPDSecureBackupConfiguration *)configuration;
-(void)setConfiguration:(CDPDSecureBackupConfiguration *)arg1 ;
-(CDPContext *)context;
-(id<CDPStateUIProviderInternal>)uiProvider;
-(void)clearAccountInfoCache;
-(void)getBackupRecordDevicesWithOptionForceFetch:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)recoverSecureBackupWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)supportsRecoveryKey;
-(void)performEscrowRecoveryWithRecoveryContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithContext:(id)arg1 uiProvider:(id)arg2 delegate:(id)arg3 ;
-(void)checkAndRemoveExistingThenEnableSecureBackupRecordWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)backupRecordsArePresentWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithContext:(id)arg1 secureBackupProxy:(id)arg2 octagonTrustProxy:(id)arg3 ;
-(void)disableRecoveryKeyWithCompletion:(/*^block*/id)arg1 ;
-(void)enableSecureBackupWithRecoveryKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)accountInfoWithCompletion:(/*^block*/id)arg1 ;
-(id)_accountInfo:(id*)arg1 ;
-(void)_getBackupRecordDevicesIncludingUnrecoverableRecords:(/*^block*/id)arg1 ;
-(void)_getOctagonEscrowBackupRecordDevicesWithOptionForceFetch:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)fakeNearlyDepletedRecords;
-(id)handleCDPDevices:(id)arg1 ;
-(void)fetchAllEscrowRecordsWithOptionForceFetch:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchEscrowRecordsWithOptionForceFetch:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_enableSecureBackupWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteSingleICSCBackupWithCompletion:(/*^block*/id)arg1 ;
-(void)checkForExistingRecord:(/*^block*/id)arg1 ;
-(void)checkForExistingRecordWithPeerId:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)checkForExistingRecordMatchingPredicate:(id)arg1 forceFetch:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_authenticatedEnableSecureBackupWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)authenticatedEnableSecureBackupWithRecoveryKey:(id)arg1 error:(id*)arg2 ;
-(id)_clientMetadataWithSecretType:(unsigned long long)arg1 length:(unsigned long long)arg2 ;
-(id)_currentAnisetteData;
-(BOOL)_disableThenEnableWithInfo:(id)arg1 error:(id*)arg2 ;
-(BOOL)_disableSecureBackup:(id*)arg1 ;
-(id)performEscrowRecoveryWithData:(id)arg1 error:(id*)arg2 ;
-(id)_recoveryInfoDictionaryFromContext:(id)arg1 ;
-(id)performSilentEscrowRecoveryWithCDPContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)recordIsEmpty:(id)arg1 ;
-(id)performEscrowRecoveryWithRecoveryContext:(id)arg1 error:(id*)arg2 ;
-(id)_recoverBackupDictionaryWithContext:(id)arg1 error:(id*)arg2 ;
-(void)_deleteAllBackupRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)_deleteSingleICSCBackupWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)_disableRecoveryKey:(id*)arg1 ;
-(void)synchronizeKeyValueStoreWithCompletion:(/*^block*/id)arg1 ;
-(void)isEligibleForCDPWithCompletion:(/*^block*/id)arg1 ;
-(void)enableSecureBackupWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)upgradeICSCRecordsThenEnableSecureBackupWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)deleteAllBackupRecordsWithCompletion:(/*^block*/id)arg1 ;
-(void)disableSecureBackupWithCompletion:(/*^block*/id)arg1 ;
-(NSDictionary *)cachedAccountInfo;
-(void)setCachedAccountInfo:(NSDictionary *)arg1 ;
-(void)setFakeNearlyDepletedRecords:(BOOL)arg1 ;
-(id<CDPDSecureBackupProxy>)secureBackupProxy;
-(void)setSecureBackupProxy:(id<CDPDSecureBackupProxy>)arg1 ;
-(id<CDPDOctagonTrustProxy>)octagonTrustProxy;
-(void)setOctagonTrustProxy:(id<CDPDOctagonTrustProxy>)arg1 ;
@end

