//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKPlayerProfileCacheReader.h"

@interface GKPlayerProfileRecommendationCacheReader : GKPlayerProfileCacheReader
{
}

- (id)processAvailableResource:(id)arg1 retrievedWithStatement:(struct sqlite3_stmt *)arg2 fromDatabase:(struct sqlite3 *)arg3 statementStore:(id)arg4;	// IMP=0x00000001000af794
- (_Bool)recommendationWasDisplayedForStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000af770
- (double)recommendationTTLForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000af764
- (double)TTLForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000af758
- (int)availablePiecesForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000af74c
- (id)playerForProfileStatementResult:(struct sqlite3_stmt *)arg1;	// IMP=0x00000001000af1c0
- (void)bindParametersForProfileStatement:(struct sqlite3_stmt *)arg1 playerGCID:(id)arg2;	// IMP=0x00000001000af150
- (id)playerProfileSQLString;	// IMP=0x00000001000af000
- (id)initWithFamiliarity:(int)arg1 toPlayer:(id)arg2 language:(id)arg3 databaseConnection:(id)arg4;	// IMP=0x00000001000aefc0

@end

