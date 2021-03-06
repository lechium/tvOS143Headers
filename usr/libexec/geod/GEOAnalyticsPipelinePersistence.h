//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GEOKeyBagProtectedDataDidBecomeAvailableObserver-Protocol.h"

@class GEOSQLiteDB, NSString;

@interface GEOAnalyticsPipelinePersistence : NSObject <GEOKeyBagProtectedDataDidBecomeAvailableObserver>
{
    GEOSQLiteDB *_db;	// 8 = 0x8
    _Bool _shadowEnabled;	// 16 = 0x10
    NSString *_dbFilePath;	// 24 = 0x18
    _Bool _firstAuthComplete;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000010001c1e4
- (void).cxx_destruct;	// IMP=0x0000000100020d38
- (void)clearAllData;	// IMP=0x0000000100020c94
- (void)clearPendingLogMsgElemsForBatchUploadOfPolicyType:(int)arg1;	// IMP=0x0000000100020ab0
- (void)clearExpiredLogMsgsWithResultBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100020560
- (void)deleteCurCollSaved:(id)arg1;	// IMP=0x00000001000203d0
- (void)selectDailySettingsWithVisitorBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ff84
- (void)selectDailyCountsWithVisitorBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010001fa18
- (void)selectCurCollSavedWithVisitorBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010001f720
- (void)selectCurCollViewsWithVisitorBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010001f1fc
- (void)selectMapKitCountWithVisitorBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000010001ed20
- (void)selectLogMsgsForBatchUploadOfPolicyType:(int)arg1 visitorBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000010001e7a4
- (id)selectHandlingPoliciesForBatchUpload;	// IMP=0x000000010001e594
- (void)storeLogMsgElems:(id)arg1;	// IMP=0x000000010001e208
- (void)_writeDailySettingsElem:(id)arg1;	// IMP=0x000000010001e0a8
- (void)_writeCuratedCollectionElem:(id)arg1;	// IMP=0x000000010001dabc
- (void)_writeDailyCountElem:(id)arg1;	// IMP=0x000000010001d6bc
- (void)_writeMapKitCountElem:(id)arg1;	// IMP=0x000000010001d484
- (void)_writeLogMsgQueueElem:(id)arg1;	// IMP=0x000000010001d03c
- (long long)_analyticsCount;	// IMP=0x000000010001cf04
- (void)_tearDown;	// IMP=0x000000010001ce90
- (void)dealloc;	// IMP=0x000000010001ce44
- (void)_setupEvalStmtsOnDb:(id)arg1;	// IMP=0x000000010001cc24
- (void)_configureDatabase;	// IMP=0x000000010001c4a0
- (void)protectedDataDidBecomeAvailable:(id)arg1;	// IMP=0x000000010001c440
@property(nonatomic) _Bool firstAuthComplete;
- (id)initWithDBFilePath:(id)arg1;	// IMP=0x000000010001c2b0
- (id)init;	// IMP=0x000000010001c250
- (id)getEvalStatus;	// IMP=0x0000000100022a68
- (void)showEvalDataWithPredicate:(id)arg1 visitorBlock:(CDUnknownBlockType)arg2 summaryBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001000226c4
- (void)flushEvalData;	// IMP=0x000000010002260c
- (void)setEvalMode:(_Bool)arg1;	// IMP=0x000000010002255c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

