//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSData, NSDictionary, NSError, NSObject, NSString, NSURL;

@protocol MobileInstallerProtocol
- (void)getTestModeWithCompletion:(void (^)(_Bool, NSError *))arg1;
- (void)endTestModeWithCompletion:(void (^)(NSError *))arg1;
- (void)setTestModeWithCompletion:(void (^)(NSError *))arg1;
- (void)dieForTesting;
- (void)getPidForTestingWithCompletion:(void (^)(int))arg1;
- (void)systemAppMigratorHasCompleted:(void (^)(_Bool, NSError *))arg1;
- (void)waitForSystemAppMigratorToComplete:(void (^)(NSError *))arg1;
- (void)setSystemAppMigrationComplete:(void (^)(NSError *))arg1;
- (void)getAppMetadataForApp:(NSString *)arg1 completion:(void (^)(MIBundleMetadata *, NSError *))arg2;
- (void)updatePlaceholderMetadataForApp:(NSString *)arg1 installType:(unsigned long long)arg2 failureReason:(unsigned long long)arg3 underlyingError:(NSError *)arg4 failureSource:(unsigned long long)arg5 completion:(void (^)(NSError *))arg6;
- (void)updateiTunesMetadataForLSWithIdentifier:(NSString *)arg1 options:(NSDictionary *)arg2 plistData:(NSData *)arg3 completion:(void (^)(NSError *))arg4;
- (void)updateSinfForLSWithIdentifier:(NSString *)arg1 withOptions:(NSDictionary *)arg2 sinfData:(NSData *)arg3 completion:(void (^)(NSDictionary *, NSError *))arg4;
- (void)fetchInfoForContainerizedAppWithBundleID:(NSString *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)fetchInfoForFrameworkAtURL:(NSURL *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(NSArray *, NSError *))arg3;
- (void)checkCapabilities:(NSObject *)arg1 withOptions:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)listSafeHarborsOfType:(long long)arg1 withOptions:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)removeSafeHarborForIdentifier:(NSString *)arg1 ofType:(long long)arg2 withOptions:(NSDictionary *)arg3 completion:(void (^)(NSError *))arg4;
- (void)registerSafeHarborAtPath:(NSString *)arg1 forIdentifier:(NSString *)arg2 ofType:(long long)arg3 withOptions:(NSDictionary *)arg4 completion:(void (^)(NSError *))arg5;
- (void)processRestoredContainerWithIdentifier:(NSString *)arg1 ofType:(long long)arg2 options:(NSDictionary *)arg3 completion:(void (^)(NSError *))arg4;
- (void)fetchDiskUsageForIdentifiers:(NSArray *)arg1 withOptions:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)enumerateInstalledAppsWithOptions:(NSDictionary *)arg1 completion:(void (^)(NSError *))arg2;
- (void)fetchInstalledDeveloperAppsWithMountPath:(NSString *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)updateSystemAppStateForIdentifier:(NSString *)arg1 appState:(int)arg2 completion:(void (^)(NSError *))arg3;
- (void)lookupSystemAppStateWithOptions:(NSDictionary *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)clearUninstalledIdentifiers:(NSArray *)arg1 withOptions:(NSDictionary *)arg2 completion:(void (^)(NSError *))arg3;
- (void)lookupUninstalledWithOptions:(NSDictionary *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)uninstallIdentifiers:(NSArray *)arg1 withOptions:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
- (void)installURL:(NSURL *)arg1 withOptions:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSError *))arg3;
@end

