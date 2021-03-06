//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_transaction;

@interface FLSQLiteExecutor : NSObject
{
    struct sqlite3 *_database;	// 8 = 0x8
    NSString *_databasePath;	// 16 = 0x10
    NSObject<OS_os_transaction> *_transaction;	// 24 = 0x18
    _Bool _shouldAutomaticallyMigrate;	// 32 = 0x20
}

+ (id)_databaseQueue;	// IMP=0x000000010000489c
+ (void)performBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x00000001000047a4
+ (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004650
- (void).cxx_destruct;	// IMP=0x000000010000611c
@property(nonatomic) _Bool shouldAutomaticallyMigrate; // @synthesize shouldAutomaticallyMigrate=_shouldAutomaticallyMigrate;
- (void)_unsafe_closeDatabase;	// IMP=0x0000000100005fc4
- (void)closeDatabase;	// IMP=0x0000000100005f50
- (void)_unsafe_wipeDatabase;	// IMP=0x0000000100005e0c
- (void)wipeDatabase;	// IMP=0x0000000100005d00
- (int)_unsafe_createDataBase;	// IMP=0x0000000100005a70
- (_Bool)_unsafe_openDatabase:(id *)arg1;	// IMP=0x0000000100005858
- (_Bool)openDatabase:(id *)arg1;	// IMP=0x0000000100005638
- (id)_currentDataBaseError;	// IMP=0x00000001000054c0
- (_Bool)_handleDatabaseFailureError:(id *)arg1;	// IMP=0x00000001000052ac
- (_Bool)_finalizeStatement:(struct sqlite3_stmt *)arg1 error:(id *)arg2;	// IMP=0x00000001000051cc
- (struct sqlite3_stmt *)_prepareStatementForQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100005124
- (void)_stepThroughRowsWithQuery:(id)arg1 statement:(struct sqlite3_stmt *)arg2;	// IMP=0x0000000100005060
- (void)_printStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x0000000100004fa4
- (long long)performInsertQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100004e78
- (_Bool)performQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100004d28
- (_Bool)performQuery:(id)arg1 rowHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004bfc
- (_Bool)performQuery:(id)arg1;	// IMP=0x0000000100004bec
- (long long)performInsertQuery:(id)arg1;	// IMP=0x0000000100004b88
- (int)_executeQuery:(id)arg1;	// IMP=0x0000000100004a0c
- (void)rollbackTransaction;	// IMP=0x00000001000049f8
- (void)commitTransaction;	// IMP=0x00000001000049ac
- (void)openTransaction;	// IMP=0x0000000100004998
- (void)performTransactionBlockAndWait:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004934
@property(readonly, nonatomic) NSString *databasePath;
@property(readonly, nonatomic) struct sqlite3 *database;
- (id)initWithDatabasePath:(id)arg1;	// IMP=0x00000001000045d4

@end

