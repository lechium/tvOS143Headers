//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "PurchaseHistoryDatabaseSession.h"

#import "SQLiteDatabaseTransaction-Protocol.h"

@class NSString, SQLiteConnection;

@interface PurchaseHistoryDatabaseTransaction : PurchaseHistoryDatabaseSession <SQLiteDatabaseTransaction>
{
}

- (_Bool)_setValue:(id)arg1 forDatabaseProperty:(id)arg2 withError:(id *)arg3;	// IMP=0x00000001002425e0
- (_Bool)setLastUpdatedTimestamp:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;	// IMP=0x00000001002424e4
- (_Bool)setRevision:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;	// IMP=0x00000001002423e0
- (_Bool)showAllWithError:(id *)arg1;	// IMP=0x00000001002423d8
- (_Bool)setHidden:(_Bool)arg1 forStoreItemID:(long long)arg2 withError:(id *)arg3;	// IMP=0x00000001002423d0
- (_Bool)removeAllAppsForAccountID:(id)arg1 withError:(id *)arg2;	// IMP=0x00000001002422dc
- (_Bool)insertApps:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;	// IMP=0x00000001002412ec
- (_Bool)deleteAppsForLockerItemIDs:(id)arg1 forAccountID:(id)arg2 withError:(id *)arg3;	// IMP=0x00000001002410b8

// Remaining properties
@property(readonly) SQLiteConnection *connection;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

