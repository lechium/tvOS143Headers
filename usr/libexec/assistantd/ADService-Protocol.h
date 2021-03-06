//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ADCommandExecutionContext, AFSyncInfo, NSArray, NSDictionary, NSString, SABaseClientBoundCommand, SABaseCommand;

@protocol ADService <NSObject>
- (void)reload;
- (void)runMaintenanceWorkWithCompletion:(void (^)(void))arg1;
- (void)resetExternalResources;
- (void)cancelOperationsForRequestID:(NSString *)arg1;
- (void)fetchSyncSnapshotForInfo:(AFSyncInfo *)arg1 handler:(void (^)(AFSyncSnapshot *))arg2;
- (void)beginSyncForInfo:(AFSyncInfo *)arg1 chunkHandler:(void (^)(ADSyncChunkInfo *, NSError *, void (^)(_Bool)))arg2;
- (void)clearDomainObjects;
- (void)handleResponse:(SABaseCommand *)arg1 toCommand:(SABaseClientBoundCommand *)arg2 completion:(void (^)(void))arg3;
- (void)handleCommand:(SABaseClientBoundCommand *)arg1 forDomain:(NSString *)arg2 executionContext:(ADCommandExecutionContext *)arg3 reply:(void (^)(id <SAAceCommand>, NSError *))arg4;
- (void)preheatDomain:(NSString *)arg1;
- (NSDictionary *)customVocabSyncInfo;
- (NSArray *)syncKeys;
- (NSArray *)controlCenterLockRestrictedCommands;
- (NSArray *)lockRestrictedCommands;
- (NSArray *)firstUnlockRestrictedCommands;
- (_Bool)usesManagedStorageForDomain:(NSString *)arg1;
- (_Bool)implementsCommand:(NSString *)arg1 forDomain:(NSString *)arg2;
- (NSArray *)commandsForDomain:(NSString *)arg1;
- (NSArray *)domains;
- (id)handle;
- (NSString *)identifier;
@end

