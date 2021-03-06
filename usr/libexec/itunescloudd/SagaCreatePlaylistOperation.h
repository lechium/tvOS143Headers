//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CloudLibraryOperation.h"

@class ICCloudItemIDList, NSDictionary;

@interface SagaCreatePlaylistOperation : CloudLibraryOperation
{
    long long _playlistPersistentID;	// 8 = 0x8
    NSDictionary *_properties;	// 16 = 0x10
    ICCloudItemIDList *_trackList;	// 24 = 0x18
    unsigned long long _playlistSagaID;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010001bebc
- (void).cxx_destruct;	// IMP=0x000000010001cae0
@property(readonly, nonatomic) unsigned long long playlistSagaID; // @synthesize playlistSagaID=_playlistSagaID;
- (void)main;	// IMP=0x000000010001c100
- (_Bool)isPersistent;	// IMP=0x000000010001c0f8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010001c028
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010001bec4
- (id)requestWithDatabaseID:(unsigned int)arg1 databaseRevision:(unsigned int)arg2 playlistProperties:(id)arg3 trackList:(id)arg4;	// IMP=0x000000010001be48
- (id)initWithConfiguration:(id)arg1 playlistPersistentID:(long long)arg2 properties:(id)arg3 trackList:(id)arg4;	// IMP=0x000000010001bd64
- (id)initWithPlaylistPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3;	// IMP=0x000000010001bcc4

@end

