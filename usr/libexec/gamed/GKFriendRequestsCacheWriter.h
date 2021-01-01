//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GKDataWriter-Protocol.h"

@class GKDatabaseConnection, NSString;

@interface GKFriendRequestsCacheWriter : NSObject <GKDataWriter>
{
    GKDatabaseConnection *_connection;	// 8 = 0x8
}

+ (id)writerWithDatabaseConnection:(id)arg1;	// IMP=0x00000001000bacf4
@property(retain, nonatomic) GKDatabaseConnection *connection; // @synthesize connection=_connection;
- (void)writeResources:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000bb3ec
- (void)writeToDatabase:(struct sqlite3 *)arg1 statementStore:(id)arg2 withInsertSQL:(id)arg3 updateSQL:(id)arg4 bindOperation:(CDUnknownBlockType)arg5;	// IMP=0x00000001000bb1cc
- (void)bindParametersForRequestStatement:(struct sqlite3_stmt *)arg1 resource:(id)arg2 relativeToPlayer:(id)arg3;	// IMP=0x00000001000bb118
- (id)requestDetailsUpdateSQL;	// IMP=0x00000001000bb0bc
- (id)requestDetailsInsertSQL;	// IMP=0x00000001000bb060
- (void)bindParametersForRelationshipStatement:(struct sqlite3_stmt *)arg1 resource:(id)arg2 relativeToPlayer:(id)arg3;	// IMP=0x00000001000bafb8
- (id)requestRelationshipUpdateSQL;	// IMP=0x00000001000baf5c
- (id)requestRelationshipInsertSQL;	// IMP=0x00000001000baf00
- (void)bindParametersForRequestingPlayerStatement:(struct sqlite3_stmt *)arg1 player:(id)arg2;	// IMP=0x00000001000baeec
- (id)requestingPlayerInsertSQL;	// IMP=0x00000001000baeac
- (void)bindParametersForListStatement:(struct sqlite3_stmt *)arg1 relativeToPlayer:(id)arg2 ttl:(double)arg3;	// IMP=0x00000001000bae60
- (id)listExpirationDateUpdateSQL;	// IMP=0x00000001000bae18
- (id)listExpirationDateInsertSQL;	// IMP=0x00000001000badd0
- (void)dealloc;	// IMP=0x00000001000bad88
- (id)initWithDatabaseConnection:(id)arg1;	// IMP=0x00000001000bad28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

