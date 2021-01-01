//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSClientDataRegistrationKeyManager-Protocol.h"
#import "IMSystemMonitorListener-Protocol.h"

@class IDSKeychainWrapper, IDSNGMKeyLoadingErrorContainer, IDSRateLimiter, IDSRegistrationKeyConfig, IDSRegistrationKeyManagerIdentityDataSource, IMSystemMonitor, IMTimer, NSRecursiveLock;
@protocol IDSRegistrationKeyManagerKeyPairProvider;

@interface IDSRegistrationKeyManager : NSObject <IDSClientDataRegistrationKeyManager, IMSystemMonitorListener>
{
    NSRecursiveLock *_lock;	// 8 = 0x8
    _Bool _forceRoll;	// 16 = 0x10
    _Bool _loaded;	// 17 = 0x11
    _Bool _identityLoaded;	// 18 = 0x12
    _Bool _detectedMigrationNeeded;	// 19 = 0x13
    _Bool _needsReRegister;	// 20 = 0x14
    _Bool _pendingIdentityRegeneration;	// 21 = 0x15
    _Bool _hasCheckedMigrationThisLaunch;	// 22 = 0x16
    _Bool _failedToGeneratedPublicDataForNGMIdentity;	// 23 = 0x17
    IDSNGMKeyLoadingErrorContainer *_recentKeyLoadingErrors;	// 24 = 0x18
    IDSRegistrationKeyConfig *_config;	// 32 = 0x20
    IMTimer *_purgePreviousIdentityTimer;	// 40 = 0x28
    IMTimer *_regenerateIdentityTimer;	// 48 = 0x30
    IMSystemMonitor *_systemMonitor;	// 56 = 0x38
    IDSKeychainWrapper *_keychainWrapper;	// 64 = 0x40
    IDSRegistrationKeyManagerIdentityDataSource *_identityDataSource;	// 72 = 0x48
    IDSRateLimiter *_loadingRateLimiter;	// 80 = 0x50
    id <IDSRegistrationKeyManagerKeyPairProvider> _keyPairProvider;	// 88 = 0x58
    _Bool _allowPairingIdentities;	// 96 = 0x60
    _Bool _allowRegenerateRegisteredIdentity;	// 97 = 0x61
}

+ (_Bool)setupKeys;	// IMP=0x000000010002d7e4
+ (id)sharedInstance;	// IMP=0x000000010002d638
- (void).cxx_destruct;	// IMP=0x00000001000432a0
@property(retain, nonatomic) id <IDSRegistrationKeyManagerKeyPairProvider> keyPairProvider; // @synthesize keyPairProvider=_keyPairProvider;
@property(nonatomic) _Bool forceRoll; // @synthesize forceRoll=_forceRoll;
@property(retain, nonatomic) IDSRegistrationKeyConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool allowRegenerateRegisteredIdentity; // @synthesize allowRegenerateRegisteredIdentity=_allowRegenerateRegisteredIdentity;
@property(nonatomic) _Bool allowPairingIdentities; // @synthesize allowPairingIdentities=_allowPairingIdentities;
@property(retain, nonatomic) IDSRegistrationKeyManagerIdentityDataSource *identityDataSource; // @synthesize identityDataSource=_identityDataSource;
@property(retain, nonatomic) IDSRateLimiter *loadingRateLimiter; // @synthesize loadingRateLimiter=_loadingRateLimiter;
@property(retain, nonatomic) IDSKeychainWrapper *keychainWrapper; // @synthesize keychainWrapper=_keychainWrapper;
@property(retain, nonatomic) IMSystemMonitor *systemMonitor; // @synthesize systemMonitor=_systemMonitor;
- (id)errorContainerToReport;	// IMP=0x0000000100042fd8
- (double)_identityRegenerationDelay;	// IMP=0x0000000100042dd4
- (double)_purgePreviousIdentityDelay;	// IMP=0x0000000100042c18
- (double)_notifyRegenerateDelay;	// IMP=0x0000000100042bfc
- (void)_regenerateIdentityTimerFired;	// IMP=0x000000010004298c
- (void)_scheduleRegenerationOfRegisteredIdentityAfterDelay:(double)arg1;	// IMP=0x00000001000426d4
- (void)_purgePreviousIdentityTimerFired;	// IMP=0x0000000100042514
- (void)_schedulePurgeOfPreviousIdentityAfterDelay:(double)arg1;	// IMP=0x000000010004225c
- (double)_randomizedIdentityRegenerationInterval;	// IMP=0x0000000100042100
- (_Bool)_shouldRegenerateRegisteredIdentity;	// IMP=0x0000000100041f58
- (void)regenerateRegisteredIdentity;	// IMP=0x0000000100041cc8
- (_Bool)_migrateIdentity:(id)arg1 toProtectionClass:(long long)arg2;	// IMP=0x0000000100041a48
- (_Bool)migrateToSecureStorageForClassC;	// IMP=0x000000010004192c
- (_Bool)migrateToSecureStorageForClassA;	// IMP=0x0000000100041814
- (_Bool)_isSecurelyStoringIdentity:(id)arg1 withExpectedProtectionClass:(long long)arg2;	// IMP=0x0000000100041564
- (_Bool)isUsingSecureStorageForClassC;	// IMP=0x0000000100041448
- (_Bool)isUsingSecureStorageForClassA;	// IMP=0x0000000100041330
- (_Bool)requiresKeychainMigration;	// IMP=0x000000010004130c
- (_Bool)isMigratedKeyPairSignature;	// IMP=0x0000000100041278
- (_Bool)needsPublicDataUpdated;	// IMP=0x00000001000402d0
- (id)keyPairSignature;	// IMP=0x0000000100040248
- (struct __SecKey *)identityPublicKey;	// IMP=0x00000001000401c8
- (struct __SecKey *)identityPrivateKey;	// IMP=0x0000000100040148
- (void)regeneratePairingIdentitiesIncludingClassD:(_Bool)arg1;	// IMP=0x000000010003f79c
- (void)loadPairingIdentities:(_Bool)arg1;	// IMP=0x000000010003e838
- (void)_purgePreviousIdentityFromMemoryAndKeychain;	// IMP=0x000000010003e07c
- (void)purgeMessageProtectionIdentity;	// IMP=0x000000010003d948
- (void)notePublicIdentityDidRegisterLegacyData:(id)arg1 ngmIdentityData:(id)arg2 ngmPrekeyData:(id)arg3;	// IMP=0x000000010003b800
- (id)accountSigningKeyReference;	// IMP=0x000000010003b700
- (id)fullMessageProtectionIdentityForDataProtectionClass:(unsigned int)arg1;	// IMP=0x000000010003b638
- (id)previousFullMessageProtectionIdentity;	// IMP=0x000000010003b514
- (id)fullMessageProtectionIdentity;	// IMP=0x000000010003b3f0
- (void)_notifyUnregisteredIdentityRegenerated;	// IMP=0x000000010003afcc
- (_Bool)_migrateRegisteredIdentityFromClassDtoClassCIfNeeded;	// IMP=0x000000010003ac58
- (_Bool)_generateUnregisteredIdentityWithExistingLegacyIdentity:(id)arg1 existingNGMIdentity:(id)arg2;	// IMP=0x0000000100039f6c
- (void)_ensureIdentity:(id *)arg1 savedIndentity:(id *)arg2 protectionClass:(long long)arg3 didSaveIdentity:(_Bool *)arg4;	// IMP=0x0000000100039e8c
- (id)publicMessageProtectionData;	// IMP=0x0000000100039da4
- (id)publicMessageProtectionDataToRegisterForClassD;	// IMP=0x0000000100039cac
- (id)publicMessageProtectionDataToRegisterForClassC;	// IMP=0x0000000100039bb0
- (id)publicMessageProtectionDataToRegisterForClassA;	// IMP=0x0000000100039ab8
- (id)latestMessageProtectionFullIdentityForDataProtectionClass:(unsigned int)arg1;	// IMP=0x00000001000396dc
- (struct _SecMPFullIdentity *)copyPreviousMessageProtectionIdentity;	// IMP=0x0000000100039514
- (struct _SecMPFullIdentity *)latestCopyMessageProtectionIdentityForDataProtectionClass:(unsigned int)arg1;	// IMP=0x0000000100039398
- (struct _SecMPFullIdentity *)copyMessageProtectionIdentity;	// IMP=0x00000001000391c0
- (id)_getPublicMessageProtectionDataForIdentity:(id)arg1;	// IMP=0x0000000100038d54
- (id)_generateIdentityWithExistingIdentity:(id)arg1 identifier:(long long)arg2 dataProtectionClass:(long long)arg3;	// IMP=0x00000001000389c8
- (id)publicMessageProtectionDeviceIdentityContainerToRegister:(id *)arg1;	// IMP=0x00000001000382fc
- (id)keyTransparencyVersionNumberToRegisterForServiceType:(id)arg1;	// IMP=0x0000000100038278
- (id)publicMessageProtectionIdentityDataToRegisterWithError:(id *)arg1;	// IMP=0x0000000100036e90
- (id)previousFullDeviceIdentityContainer;	// IMP=0x0000000100036ca0
- (id)fullDeviceIdentityContainerUsableForKeyType:(unsigned long long)arg1;	// IMP=0x0000000100036730
- (id)fullDeviceIdentityContainer;	// IMP=0x00000001000366f4
- (id)generateCSRForUserID:(id)arg1;	// IMP=0x000000010003614c
- (void)dealloc;	// IMP=0x0000000100035ef8
- (id)init;	// IMP=0x0000000100035ccc
- (id)initWithSystemMonitor:(id)arg1 keychainWrapper:(id)arg2 loadingRateLimiter:(id)arg3 identityDataSource:(id)arg4 allowPairingIdentities:(_Bool)arg5 allowRegenerateRegisteredIdentity:(_Bool)arg6 keyPairProvider:(id)arg7;	// IMP=0x0000000100035850
- (void)_loadIfNeeded:(_Bool)arg1;	// IMP=0x0000000100030ad4
- (_Bool)_loadClassDIdentityIfNeeded:(id *)arg1;	// IMP=0x00000001000305a8
- (_Bool)_loadClassCIdentityIfNeeded:(id *)arg1;	// IMP=0x000000010003007c
- (_Bool)_loadClassAIdentityIfNeeded:(id *)arg1;	// IMP=0x000000010002faf8
- (id)_loadAndDeserializeBuildOfIdentityGenerationForItemName:(id)arg1;	// IMP=0x000000010002f7d0
- (void)_serializeAndPersistBuildOfIdentityGeneration:(id)arg1 itemName:(id)arg2;	// IMP=0x000000010002f3b0
- (_Bool)_serializeAndPersistIdentityContainer:(id)arg1 identityIdentifier:(long long)arg2 deleteIfNull:(_Bool)arg3;	// IMP=0x000000010002ea64
- (_Bool)_save;	// IMP=0x000000010002e1d4
- (void)_saveClassXIdentity:(id *)arg1 savedIdentity:(id *)arg2 protectionClass:(long long)arg3 savedUnsavedIdentity:(_Bool *)arg4;	// IMP=0x000000010002daa8
- (void)systemDidLeaveDataProtectionLock;	// IMP=0x000000010002d9f0
- (void)systemDidLeaveFirstDataProtectionLock;	// IMP=0x000000010002d914
- (_Bool)_isUnderFirstDataProtectionLock;	// IMP=0x000000010002d8a8

@end
