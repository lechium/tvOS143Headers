//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TCCDEventPublisher, TCCDPlatform;
@protocol OS_dispatch_source, OS_os_log;

@interface TCCDServer : NSObject
{
    NSString *_userHomeDirectory;	// 8 = 0x8
    NSString *_stateDirectory;	// 16 = 0x10
    NSString *_temporaryDirectory;	// 24 = 0x18
    NSString *_cacheDirectory;	// 32 = 0x20
    _Bool _macos_isSystemServer;	// 40 = 0x28
    _Bool _allowsInternalSecurityPolicies;	// 41 = 0x29
    _Bool _testDoComposition;	// 42 = 0x2a
    _Bool _generateBacktraceOnPrompt;	// 43 = 0x2b
    TCCDPlatform *_platform;	// 48 = 0x30
    NSObject<OS_os_log> *_logHandle;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_macos_compatibilityFileVnodeSource;	// 64 = 0x40
    TCCDEventPublisher *_eventPublisher;	// 72 = 0x48
}

+ (id)newErrorWithCode:(long long)arg1 format:(id)arg2 arguments:(char *)arg3;	// IMP=0x000000010001aa20
+ (id)newErrorWithCode:(long long)arg1 format:(id)arg2;	// IMP=0x000000010001a9f0
- (void).cxx_destruct;	// IMP=0x0000000100021464
@property(retain) TCCDEventPublisher *eventPublisher; // @synthesize eventPublisher=_eventPublisher;
@property _Bool generateBacktraceOnPrompt; // @synthesize generateBacktraceOnPrompt=_generateBacktraceOnPrompt;
@property _Bool testDoComposition; // @synthesize testDoComposition=_testDoComposition;
@property(retain) NSObject<OS_dispatch_source> *macos_compatibilityFileVnodeSource; // @synthesize macos_compatibilityFileVnodeSource=_macos_compatibilityFileVnodeSource;
@property _Bool allowsInternalSecurityPolicies; // @synthesize allowsInternalSecurityPolicies=_allowsInternalSecurityPolicies;
@property(readonly) NSString *cacheDirectory; // @synthesize cacheDirectory=_cacheDirectory;
@property(readonly) NSString *temporaryDirectory; // @synthesize temporaryDirectory=_temporaryDirectory;
@property _Bool macos_isSystemServer; // @synthesize macos_isSystemServer=_macos_isSystemServer;
@property(retain, nonatomic) NSObject<OS_os_log> *logHandle; // @synthesize logHandle=_logHandle;
@property(retain, nonatomic) TCCDPlatform *platform; // @synthesize platform=_platform;
- (_Bool)updateAuthorizationRecordFromContext:(id)arg1 forResult:(id)arg2 syncedUpdate:(_Bool *)arg3;	// IMP=0x0000000100020e7c
- (void)createStateHandler;	// IMP=0x0000000100020bf4
- (id)stateDumpDictionary;	// IMP=0x000000010002093c
- (id)fetchAllActivePolicies;	// IMP=0x0000000100020704
- (id)fetchAllPolicies;	// IMP=0x000000010002042c
- (id)fetchAllOverridenServiceNames;	// IMP=0x00000001000202b4
- (id)descriptionDictionariesForAllAccessRecords;	// IMP=0x0000000100020170
- (id)fetchAllAccessRecords;	// IMP=0x0000000100020020
- (id)accessRecordFromStep:(struct sqlite3_stmt *)arg1;	// IMP=0x000000010001fb58
- (unsigned long long)numberOfRecordsForService:(id)arg1;	// IMP=0x000000010001fb48
- (unsigned long long)numberOfRecordsForService:(id)arg1 withAuthorizationValue:(unsigned long long)arg2;	// IMP=0x000000010001f938
- (_Bool)evaluateComposedAuthoriationToService:(id)arg1 andAccessSubject:(id)arg2 withRelation:(long long)arg3 authorizationResult:(unsigned long long *)arg4 authorizationReason:(unsigned long long *)arg5 subjectCodeIdentityDataResult:(id *)arg6;	// IMP=0x000000010001f530
- (_Bool)updateAccessRecord:(id)arg1 replaceOnly:(_Bool)arg2 doCompositionWithChildService:(_Bool)arg3;	// IMP=0x000000010001e31c
- (_Bool)evaluateAccessToService:(id)arg1 defaultAccessAllowed:(_Bool)arg2 by:(id)arg3 checkCodeRequirements:(_Bool)arg4 authorizationResult:(unsigned long long *)arg5 authorizationReason:(unsigned long long *)arg6 subjectCodeIdentityDataResult:(id *)arg7;	// IMP=0x000000010001dd48
- (id)evaluateUserIndependentEntitlementsForAccessByAttributionChain:(id)arg1 forFunction:(id)arg2 toService:(id)arg3 error:(id *)arg4;	// IMP=0x000000010001d550
- (id)_evaluateForProcess:(id)arg1 entitlementName:(id)arg2 containsService:(id)arg3 options:(unsigned long long)arg4;	// IMP=0x000000010001d428
- (_Bool)isAccessEntryWithAge:(int)arg1 authorizationValue:(unsigned long long)arg2 expiredForService:(id)arg3;	// IMP=0x000000010001d180
- (void)scheduleAccessEntryExpiryCheckForService:(id)arg1;	// IMP=0x000000010001cfc8
- (void)purgeAllExpiredAccessEntries;	// IMP=0x000000010001ce94
- (void)purgeExpiredAccessEntriesForService:(id)arg1;	// IMP=0x000000010001c6c0
- (id)recordFromMessage:(id)arg1 accessIdentity:(id)arg2 error:(id *)arg3;	// IMP=0x000000010001c1d8
- (id)serviceFromMessage:(id)arg1 error:(id *)arg2;	// IMP=0x000000010001c09c
- (_Bool)isProcessServiceCompositionManager:(id)arg1;	// IMP=0x000000010001bfcc
- (_Bool)canProcess:(id)arg1 callFunction:(id)arg2 forService:(id)arg3;	// IMP=0x000000010001bc8c
- (_Bool)targetAuditToken:(CDStruct_4c969caf *)arg1 fromMessage:(id)arg2 error:(id *)arg3;	// IMP=0x000000010001bbe0
- (id)descriptionForMessage:(id)arg1;	// IMP=0x000000010001bbd0
- (id)_descriptionForXPCObject:(id)arg1 depth:(int)arg2;	// IMP=0x000000010001b844
- (id)_descriptionForXPCDictionary:(id)arg1 depth:(int)arg2;	// IMP=0x000000010001b4d4
- (id)_indentForDepth:(int)arg1;	// IMP=0x000000010001b450
- (void)buildErrorString:(id)arg1 forError:(id)arg2 contextString:(id)arg3;	// IMP=0x000000010001b328
- (void)makeError:(id *)arg1 withCode:(long long)arg2 infoText:(id)arg3;	// IMP=0x000000010001b230
- (id)stringFromErrorCode:(long long)arg1;	// IMP=0x000000010001b158
- (_Bool)getInternalBoolPreference:(id)arg1;	// IMP=0x000000010001af7c
@property(readonly) NSString *stateDirectory;
@property(readonly) NSString *userHomeDirectory;
- (id)init;	// IMP=0x000000010001ac84
- (void)setupTemporaryDirectories;	// IMP=0x000000010001ac2c
- (id)setupTemporaryDirectoryForName:(int)arg1;	// IMP=0x000000010001ab48

@end

