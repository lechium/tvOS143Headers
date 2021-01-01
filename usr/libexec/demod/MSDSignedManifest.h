//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDDemoManifestCheck, NSArray, NSDictionary, NSString;

@interface MSDSignedManifest : NSObject
{
    _Bool _staggeredContentUpdateEnabled;	// 8 = 0x8
    NSString *_signingKey;	// 16 = 0x10
    NSArray *_installationOrder;	// 24 = 0x18
    NSArray *_criticalComponents;	// 32 = 0x20
    NSDictionary *_payload;	// 40 = 0x28
    MSDDemoManifestCheck *_manifestVerifier;	// 48 = 0x30
}

+ (id)getComponentFromPath:(id)arg1 forManifestVersion:(id)arg2;	// IMP=0x000000010006af14
+ (id)appsPrefixForManifestVersion:(id)arg1;	// IMP=0x000000010006aed4
+ (id)signedManifestFromManifestData:(id)arg1;	// IMP=0x0000000100069820
+ (void)setSignedManifest:(id)arg1;	// IMP=0x0000000100069810
+ (id)signedManifest;	// IMP=0x0000000100069804
- (void).cxx_destruct;	// IMP=0x000000010006d684
@property _Bool staggeredContentUpdateEnabled; // @synthesize staggeredContentUpdateEnabled=_staggeredContentUpdateEnabled;
@property(retain) MSDDemoManifestCheck *manifestVerifier; // @synthesize manifestVerifier=_manifestVerifier;
@property(retain) NSDictionary *payload; // @synthesize payload=_payload;
@property(retain) NSArray *criticalComponents; // @synthesize criticalComponents=_criticalComponents;
@property(retain) NSArray *installationOrder; // @synthesize installationOrder=_installationOrder;
@property(retain, nonatomic) NSString *signingKey; // @synthesize signingKey=_signingKey;
- (_Bool)validateInstallationOrder;	// IMP=0x000000010006d438
- (void)parseInstallationOrder;	// IMP=0x000000010006d254
- (_Bool)isManualSigning:(id)arg1;	// IMP=0x000000010006d038
- (_Bool)verifySignature:(id)arg1 forData:(id)arg2 withKey:(struct __SecKey *)arg3;	// IMP=0x000000010006cecc
- (struct __SecKey *)createPublicKey:(id)arg1 usingPolicy:(struct __SecPolicy *)arg2 anchors:(id)arg3;	// IMP=0x000000010006c9d0
- (struct __SecKey *)createPublicKeyForDevelopmentSigningStandard:(id)arg1;	// IMP=0x000000010006c8e4
- (struct __SecKey *)createPublicKeyAppleISTSigning:(id)arg1;	// IMP=0x000000010006c2fc
- (struct __SecKey *)createPublicKeyForDevelopmentSigning:(id)arg1;	// IMP=0x000000010006c260
- (struct __SecKey *)createPublicKeyForStrongSigning:(id)arg1;	// IMP=0x000000010006c128
- (id)verifyManifestSignature:(id)arg1;	// IMP=0x000000010006b344
- (id)getDataSectionKeys;	// IMP=0x000000010006b328
- (id)getStandAlonePackageVersion:(id)arg1;	// IMP=0x000000010006b284
- (id)getComponentVersion:(id)arg1;	// IMP=0x000000010006b124
- (id)standAlonePackageIdentifierFromOrderItem:(id)arg1;	// IMP=0x000000010006aecc
- (id)appIdentifierFromOrderItem:(id)arg1;	// IMP=0x000000010006ae44
- (_Bool)isItemStandAlonePackage:(id)arg1;	// IMP=0x000000010006ae3c
- (_Bool)isItemApp:(id)arg1;	// IMP=0x000000010006ae24
- (_Bool)isItemSystemAppData:(id)arg1;	// IMP=0x000000010006ae0c
- (_Bool)isItemConfigurationProfileBackup:(id)arg1;	// IMP=0x000000010006ae04
- (_Bool)isItemProvisioningProfileBackup:(id)arg1;	// IMP=0x000000010006adec
- (_Bool)isItemSystemContainerBackup:(id)arg1;	// IMP=0x000000010006add4
- (_Bool)isItemBaseBackup:(id)arg1;	// IMP=0x000000010006adbc
- (_Bool)isItemBackup:(id)arg1;	// IMP=0x000000010006ada4
- (id)originServerForApp:(id)arg1;	// IMP=0x000000010006acd4
- (id)originServerForBackupManifest:(struct _NSRange)arg1;	// IMP=0x000000010006abd8
- (_Bool)hasSystemContainerBackupInRange:(struct _NSRange)arg1;	// IMP=0x000000010006aaa4
- (id)mergedBackupManifest:(struct _NSRange)arg1;	// IMP=0x000000010006a6e4
- (struct _NSRange)rangeOfGroupedBackups:(long long)arg1;	// IMP=0x000000010006a6b4
- (id)itemAtIndexInManifest:(long long)arg1;	// IMP=0x000000010006a658
@property(readonly, getter=getBackupList) NSDictionary *backupList;
@property(readonly, getter=getBackup) NSDictionary *backup;
@property(readonly, getter=getSystemAppDataList) NSDictionary *systemAppDataList;
- (id)getDataForApp:(id)arg1 fromDataSection:(id)arg2;	// IMP=0x000000010006a4c8
- (id)getComponentDataList:(id)arg1;	// IMP=0x000000010006a4c0
@property(readonly, getter=getUserDataList) NSDictionary *userDataList;
@property(readonly, getter=getSharedDataList) NSDictionary *sharedDataList;
- (long long)getAppType:(id)arg1;	// IMP=0x000000010006a4a8
- (id)getSystemAppDependecies:(id)arg1;	// IMP=0x000000010006a4a0
- (id)getAppDependecies:(id)arg1;	// IMP=0x000000010006a498
@property(readonly, getter=getPlugInDataList) NSDictionary *plugInDataList;
@property(readonly, getter=getGroupDataList) NSDictionary *groupDataList;
@property(readonly, getter=getAppDataList) NSDictionary *appDataList;
@property(readonly, getter=getAppList) NSDictionary *appList;
@property(readonly, getter=getInfo) NSDictionary *info;
@property(readonly, getter=getVersion) int version;
@property(readonly, getter=getInstallationOrderSystemApps) NSString *installationOrderSystemApps;
@property(readonly, getter=getInstallationOrderAppsPrefix) NSString *installationOrderAppsPrefix;
- (void)dealloc;	// IMP=0x000000010006a1ec
- (id)initWithManifestData:(id)arg1;	// IMP=0x0000000100069874

@end
