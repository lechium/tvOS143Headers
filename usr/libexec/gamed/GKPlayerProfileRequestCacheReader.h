//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKPlayerProfileCacheReader.h"

@interface GKPlayerProfileRequestCacheReader : GKPlayerProfileCacheReader
{
}

- (id)processAvailableResource:(id)arg1 retrievedWithStatement:(struct sqlite3_stmt *)arg2 fromDatabase:(struct sqlite3 *)arg3 statementStore:(id)arg4;	// IMP=0x00000001001aecc0
- (double)requestDetailsTTLProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001001aecb4
- (double)TTLForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001001aeca8
- (int)availablePiecesForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001001aec9c
- (id)playerForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001001ae748
- (void)bindParametersForProfileStatement:(struct sqlite3_stmt *)arg1 playerGCID:(id)arg2;	// IMP=0x00000001001ae6f8
- (id)playerProfileSQLString;	// IMP=0x00000001001ae5b4

@end

