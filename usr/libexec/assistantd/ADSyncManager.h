//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ADServiceDelegate-Protocol.h"

@class ADService, ADServiceManager, NSMutableArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSUUID, SASyncAnchor, SASyncGetAnchors;
@protocol ADSyncManagerDelegate, OS_dispatch_queue;

@interface ADSyncManager : NSObject <ADServiceDelegate>
{
    ADServiceManager *_serviceManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableArray *_anchorsToSync;	// 24 = 0x18
    NSSet *_currentSyncReasons;	// 32 = 0x20
    NSMutableDictionary *_queuedAnchorsByNormalizedKey;	// 40 = 0x28
    NSMutableSet *_queuedReasons;	// 48 = 0x30
    NSMutableArray *_syncedAnchors;	// 56 = 0x38
    SASyncAnchor *_currentAnchor;	// 64 = 0x40
    ADService *_currentSyncService;	// 72 = 0x48
    NSUUID *_currentSyncID;	// 80 = 0x50
    id <ADSyncManagerDelegate> _delegate;	// 88 = 0x58
    CDUnknownBlockType _continueBlock;	// 96 = 0x60
    _Bool _currentSyncShouldCancel;	// 104 = 0x68
    NSMutableSet *_timedoutServices;	// 112 = 0x70
    _Bool _forceResetOnNextSync;	// 120 = 0x78
    _Bool _isVerifying;	// 121 = 0x79
    SASyncGetAnchors *_getAnchorsRequest;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000001001ba7f0
@property(nonatomic) _Bool isVerifying; // @synthesize isVerifying=_isVerifying;
@property(retain, nonatomic) SASyncGetAnchors *getAnchorsRequest; // @synthesize getAnchorsRequest=_getAnchorsRequest;
@property(copy, nonatomic, setter=_setContinueBlock:) CDUnknownBlockType _continueBlock; // @synthesize _continueBlock;
@property(nonatomic, setter=_setForceResetOnNextSync:) _Bool _forceResetOnNextSync; // @synthesize _forceResetOnNextSync;
@property(retain, nonatomic, setter=_setCurrentAnchor:) SASyncAnchor *_currentAnchor; // @synthesize _currentAnchor;
- (void)serviceTimedoutForSync:(id)arg1;	// IMP=0x00000001001ba680
- (void)reset;	// IMP=0x00000001001ba4c0
- (void)_invokeContinueBlockWithKeepGoingArgument:(_Bool)arg1;	// IMP=0x00000001001ba458
- (void)cancelSyncForAnchor:(id)arg1;	// IMP=0x00000001001ba1e0
- (void)continueSync;	// IMP=0x00000001001ba0bc
- (_Bool)isSyncing;	// IMP=0x00000001001ba0ac
- (void)_waitUntilSafeToContinue;	// IMP=0x00000001001b9fc4
- (id)queuedReasons;	// IMP=0x00000001001b9fbc
- (id)queuedAnchors;	// IMP=0x00000001001b9f74
- (void)clearQueuedAnchorsAndReasons;	// IMP=0x00000001001b9f44
- (void)addQueuedAnchors:(id)arg1 forReasons:(id)arg2;	// IMP=0x00000001001b9bf8
- (void)prepareSyncWithAnchors:(id)arg1 forReasons:(id)arg2 delegate:(id)arg3;	// IMP=0x00000001001b9960
- (id)_sortedAnchorsFromAnchors:(id)arg1;	// IMP=0x00000001001b95d0
- (void)_postSyncFinishedNotification;	// IMP=0x00000001001b95c0
- (void)_continueSync;	// IMP=0x00000001001b8ed0
- (void)_syncFinishedForService:(id)arg1 error:(id)arg2;	// IMP=0x00000001001b8cdc
- (void)_syncingService:(id)arg1 withSyncInfo:(id)arg2 receivedChunk:(id)arg3 continueBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000001001b8af4
- (void)_setCurrentAnchorToNext;	// IMP=0x00000001001b8a90
- (void)_finishSync;	// IMP=0x00000001001b881c
- (void)_setAnchorsToSync:(id)arg1;	// IMP=0x00000001001b87cc
- (id)_serviceManager;	// IMP=0x00000001001b87c4
- (id)initWithServiceManager:(id)arg1 queue:(id)arg2;	// IMP=0x00000001001b8720
- (_Bool)shouldSyncIntentPolicyForSyncKeys:(id)arg1;	// IMP=0x00000001001baa28
- (_Bool)shouldSyncThirdPartyUserVocabularyForSyncKeys:(id)arg1;	// IMP=0x00000001001baa0c
- (_Bool)shouldIncludeAllKnownSiriKitAnchorsForReason:(id)arg1;	// IMP=0x00000001001ba9f4
- (_Bool)shouldSyncEverythingForReason:(id)arg1;	// IMP=0x00000001001ba944
- (id)syncKeysForReason:(id)arg1;	// IMP=0x00000001001ba8b0
- (id)_preferredSyncKeyOrder;	// IMP=0x00000001001baa9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

