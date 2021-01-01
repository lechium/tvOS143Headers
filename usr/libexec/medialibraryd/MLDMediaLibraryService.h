//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ML3MediaLibraryWriterDelegate-Protocol.h"
#import "ML3MusicLibraryDelegate-Protocol.h"
#import "MLDDiagnosticCollection-Protocol.h"
#import "MLMediaLibraryServiceProtocol-Protocol.h"
#import "NSXPCConnectionDelegate-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class ML3DatabaseImportManager, ML3MediaLibraryWriter, MLDCacheDeleteController, MLDDatabaseValidationController, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, NSTimer;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MLDMediaLibraryService : NSObject <NSXPCConnectionDelegate, NSXPCListenerDelegate, ML3MediaLibraryWriterDelegate, ML3MusicLibraryDelegate, MLMediaLibraryServiceProtocol, MLDDiagnosticCollection>
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_spotlightIndexQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_writerBeginTransactionQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_writerUpdateQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 40 = 0x28
    NSMutableDictionary *_xpcListeners;	// 48 = 0x30
    NSMutableDictionary *_xpcClients;	// 56 = 0x38
    ML3MediaLibraryWriter *_writer;	// 64 = 0x40
    ML3DatabaseImportManager *_importManager;	// 72 = 0x48
    MLDCacheDeleteController *_cacheDeleteController;	// 80 = 0x50
    MLDDatabaseValidationController *_validationController;	// 88 = 0x58
    NSOperationQueue *_maintenanceTasksOperationQueue;	// 96 = 0x60
    NSOperationQueue *_databaseRecoveryOperationQueue;	// 104 = 0x68
    NSMutableArray *_databaseRecoveryCompletionHandlers;	// 112 = 0x70
    NSObject<OS_dispatch_source> *_signalDispatchSource;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_spotlightIndexCoalescingTimer;	// 128 = 0x80
    NSTimer *_idleTimer;	// 136 = 0x88
    NSMutableDictionary *_mediaLibraries;	// 144 = 0x90
    NSString *_deviceSharedLibraryPath;	// 152 = 0x98
    NSMutableDictionary *_transactionInfoForID;	// 160 = 0xa0
    unsigned long long _stateHandle;	// 168 = 0xa8
    _Bool _databaseLocked;	// 176 = 0xb0
    long long _currentLockReason;	// 184 = 0xb8
}

+ (id)sharedInstance;	// IMP=0x0000000100008394
- (void).cxx_destruct;	// IMP=0x0000000100012c60
- (void)faultForQuery:(id)arg1 fromClientBundleID:(id)arg2 onTrustError:(id)arg3;	// IMP=0x0000000100012700
- (_Bool)_isMediaPath:(id)arg1 selector:(SEL)arg2 resolvedPath:(id *)arg3;	// IMP=0x00000001000122a4
- (_Bool)_platformSupportsSpotlightIndexing;	// IMP=0x000000010001229c
- (void)_unregisterServiceOriginatedTransactionWithConnection:(id)arg1;	// IMP=0x00000001000121f4
- (void)_validateDatabaseAtPath:(id)arg1 byTruncatingFirst:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100011f70
- (_Bool)_validateTransactionIdentifier:(id)arg1 forClient:(id)arg2;	// IMP=0x0000000100011bfc
- (void)_unregisterTransactionInfoForIdentifier:(id)arg1;	// IMP=0x0000000100011a64
- (void)_registerTransactionInfo:(id)arg1 forIdentitifer:(id)arg2;	// IMP=0x00000001000118d0
- (void)_performMaintenanceOnDatabaseAtPath:(id)arg1 withActivity:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000001000116f0
- (void)_stopIdleTimer;	// IMP=0x000000010001165c
- (void)_resetIdleTimer;	// IMP=0x00000001000115a0
- (void)_idleTimerFired:(id)arg1;	// IMP=0x0000000100011488
- (void)_startIdleTimer;	// IMP=0x0000000100011330
- (void)_tearDownLibraryDidChangeNotifications;	// IMP=0x0000000100011258
- (void)_handleLibraryDidChangeNotification:(id)arg1;	// IMP=0x0000000100010c60
- (void)_registerForLibraryDidChangeNotifications;	// IMP=0x0000000100010b78
- (void)_writeDiagnosticToDisk:(id)arg1;	// IMP=0x0000000100010960
- (void)_performDiagnosticWithReason:(id)arg1;	// IMP=0x00000001000107dc
- (void)_handleDebugSignal;	// IMP=0x0000000100010754
- (void)_tearDownSignalHandler;	// IMP=0x000000010001074c
- (void)_setupSignalHandler;	// IMP=0x00000001000105e0
- (id)_clientForConnection:(id)arg1;	// IMP=0x00000001000103c4
- (id)_currentXPCClient;	// IMP=0x0000000100010340
- (void)_handleXPCDisconnect:(id)arg1;	// IMP=0x0000000100010160
- (id)_deviceSharedLibraryPath;	// IMP=0x0000000100010100
- (id)_allMediaLibraries;	// IMP=0x000000010000ffe8
- (id)_mediaLibraryForPath:(id)arg1;	// IMP=0x000000010000fd4c
- (long long)_MLDSupportedServiceForXPCListener:(id)arg1;	// IMP=0x000000010000fba0
- (id)_XPCListenerForService:(long long)arg1;	// IMP=0x000000010000f7a0
- (void)_setupCacheDeleteController;	// IMP=0x000000010000f724
- (void)_setupActivityHandlers;	// IMP=0x000000010000f618
- (void)_setupNotifyEventHandlers;	// IMP=0x000000010000f564
- (void)_reconnectLibraries:(id)arg1;	// IMP=0x000000010000f320
- (void)_disconnectLibraries:(id)arg1;	// IMP=0x000000010000f0bc
@property(nonatomic) long long currentLockReason; // @synthesize currentLockReason=_currentLockReason;
@property(nonatomic, getter=isDatabaseLocked) _Bool databaseLocked; // @synthesize databaseLocked=_databaseLocked;
- (void)start;	// IMP=0x000000010000eda4
- (void)collectDiagnostic:(id)arg1;	// IMP=0x000000010000e9c8
- (void)mediaLibraryWriter:(id)arg1 terminatedTransaction:(id)arg2 withError:(id)arg3;	// IMP=0x000000010000e8bc
- (void)library:(id)arg1 didRollbackDatabaseTransactionWithConnection:(id)arg2;	// IMP=0x000000010000e8ac
- (void)library:(id)arg1 didCommitDatabaseTransactionWithConnection:(id)arg2;	// IMP=0x000000010000e89c
- (void)library:(id)arg1 didBeginDatabaseTransactionWithConnection:(id)arg2;	// IMP=0x000000010000e7a0
- (_Bool)_shouldAcceptConnectionForMediaLibraryService:(id)arg1;	// IMP=0x000000010000e0e4
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010000dea8
- (void)getClientImportServiceListenerEndpointWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000dd38
- (void)getMediaLibraryResourcesServiceListenerEndpointWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000dbc8
- (void)performMaintenanceTasksForDatabaseAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000da9c
- (void)updateSpotlightIndexMetadataForItemsWithIdentifiers:(id)arg1 bundleID:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000010000d5ac
- (void)updateSpotlightIndexForBundleID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000d558
- (void)getLanguageResourcesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000d374
- (void)unlockDatabaseWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010000cf7c
- (void)lockDatabaseForReason:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000010000c9a0
- (void)cancelImportOperation:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000c850
- (void)performImport:(id)arg1 fromSource:(unsigned long long)arg2 withUUID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010000c184
- (void)setOptions:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010000bedc
- (void)performDatabaseOperation:(unsigned long long)arg1 withAttributes:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010000b514
- (_Bool)endTransaction:(id)arg1 shouldCommit:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000010000b3d8
- (void)endTransaction:(id)arg1 shouldCommit:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010000b264
- (void)executeQuery:(id)arg1 withParameters:(id)arg2 options:(id)arg3 onTransaction:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000010000ad10
- (void)executeUpdate:(id)arg1 withParameters:(id)arg2 onTransaction:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000010000a8e8
- (id)beginTransactionForDatabaseAtPath:(id)arg1 withPriorityLevel:(unsigned long long)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000010000a610
- (void)beginTransactionForDatabaseAtPath:(id)arg1 withPriorityLevel:(unsigned long long)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000100009bb4
- (void)recreateDatabaseAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009978
- (void)performDiagnosticWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000097b4
- (void)checkIntegrityOfDatabaseAtPath:(id)arg1 repairFaults:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100009304
- (void)attemptDatabaseFileRecoveryAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100008ba8
- (void)validateDatabaseAtPath:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000089c4
- (void)dealloc;	// IMP=0x0000000100008874
- (id)_init;	// IMP=0x000000010000845c
- (id)init;	// IMP=0x000000010000840c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

