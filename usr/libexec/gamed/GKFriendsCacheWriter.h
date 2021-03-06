//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDataWriter-Protocol.h"

@class GKDatabaseConnection, NSString;

@interface GKFriendsCacheWriter : NSObject <GKDataWriter>
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
}

+ (id)writerWithDatabaseConnection:(id)arg1;	// IMP=0x000000010013a754
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000010013af88
- (void)writeToDatabase:(struct sqlite3 *)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(CDUnknownBlockType)arg5;	// IMP=0x000000010013ad68
- (void)bindParametersForRelationshipStatement:(struct sqlite3_stmt *)arg1 resource:(id)arg2 relativeToPlayer:(id)arg3;	// IMP=0x000000010013acc0
- (id)friendRelationshipUpdateSQL;	// IMP=0x000000010013ac64
- (id)friendRelationshipInsertSQL;	// IMP=0x000000010013ac08
- (void)bindParametersForFriendPlayerStatement:(struct sqlite3_stmt *)arg1 resource:(id)arg2;	// IMP=0x000000010013aa54
- (id)friendPlayerUpdateSQL;	// IMP=0x000000010013a9b0
- (id)friendPlayerInsertSQL;	// IMP=0x000000010013a90c
- (void)bindParametersForListStatement:(struct sqlite3_stmt *)arg1 relativeToPlayer:(id)arg2 ttl:(double)arg3;	// IMP=0x000000010013a8c0
- (id)listExpirationDateUpdateSQL;	// IMP=0x000000010013a878
- (id)listExpirationDateInsertSQL;	// IMP=0x000000010013a830
- (void)dealloc;	// IMP=0x000000010013a7e8
- (id)initWithDatabaseConnection:(id)arg1;	// IMP=0x000000010013a788

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

