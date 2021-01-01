//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDatabaseWriter-Protocol.h"

@class GKDatabaseConnection, NSString;

@interface GKDelayedSetPhotoCacheWriter : NSObject <GKDatabaseWriter>
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
}

+ (id)writerWithDatabaseConnection:(id)arg1;	// IMP=0x00000001000b0f3c
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b1448
- (void)writeToDatabase:(struct sqlite3 *)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(CDUnknownBlockType)arg5;	// IMP=0x00000001000b1228
- (void)bindParametersForGetOldPhotosStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2;	// IMP=0x00000001000b1214
- (id)getOldPhotosSQL;	// IMP=0x00000001000b11d4
- (void)bindParametersForDeleteOldPhotosStatement:(struct sqlite3_stmt *)arg1 requestsRowID:(long long)arg2;	// IMP=0x00000001000b11c0
- (id)deleteOldPhotosSQL;	// IMP=0x00000001000b1180
- (void)bindParametersForPhotoStatement:(struct sqlite3_stmt *)arg1 photo:(id)arg2 avatarType:(id)arg3 requestsRowID:(long long)arg4;	// IMP=0x00000001000b111c
- (id)photosInsertSQL;	// IMP=0x00000001000b10c8
- (void)bindParametersForRequestsStatement:(struct sqlite3_stmt *)arg1 playerID:(id)arg2;	// IMP=0x00000001000b1074
- (id)requestsInsertSQL;	// IMP=0x00000001000b102c
@property(readonly, nonatomic) GKDatabaseConnection *databaseConnection;
- (void)dealloc;	// IMP=0x00000001000b0fcc
- (id)initWithDatabaseConnection:(id)arg1;	// IMP=0x00000001000b0f6c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

