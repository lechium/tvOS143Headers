//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SQLiteConnectionDelegate-Protocol.h"

@class NSHashTable, NSString, SQLiteConnection;
@protocol OS_dispatch_queue;

@interface SQLiteDatabase : NSObject <SQLiteConnectionDelegate>
{
    SQLiteConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_transactionQueue;	// 16 = 0x10
    NSHashTable *_migratedStores;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001002b3c34
- (void)_reentrantSafePerformBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001002b3be4
- (void)_readUsingSession:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001002b3aec
- (void)_performMigrationIfNeededForStore:(id)arg1;	// IMP=0x00000001002b38e8
- (void)_modifyUsingTransactionClass:(Class)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001002b37f4
- (void)verifyDatabaseIntegrity;	// IMP=0x00000001002b3630
- (_Bool)connectionNeedsResetForCorruption:(id)arg1;	// IMP=0x00000001002b344c
- (_Bool)connectionNeedsResetForReopen:(id)arg1;	// IMP=0x00000001002b33b0
- (void)readStore:(id)arg1 usingSession:(CDUnknownBlockType)arg2;	// IMP=0x00000001002b3240
- (void)modifyStore:(id)arg1 usingTransactionClass:(Class)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000001002b312c
- (void)modifyStore:(id)arg1 usingTransaction:(CDUnknownBlockType)arg2;	// IMP=0x00000001002b2fdc
- (id)initWithConnectionOptions:(id)arg1;	// IMP=0x00000001002b2f5c
- (id)initWithConnection:(id)arg1;	// IMP=0x00000001002b2e48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
