//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CloudLibraryOperation.h"

@class NSArray;

@interface SagaUpdateSubscribedPlaylistsOperation : CloudLibraryOperation
{
    NSArray *_playlistSagaIDs;	// 8 = 0x8
    _Bool _ignoreMinRefreshInterval;	// 16 = 0x10
    long long _requestReason;	// 24 = 0x18
    _Bool _pinnedOnly;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000001000652ec
- (void)main;	// IMP=0x0000000100065028
- (id)initWithConfiguration:(id)arg1 subscribedPlaylistSagaIDs:(id)arg2 ignoreMinRefreshInterval:(_Bool)arg3 requestReason:(long long)arg4 pinnedOnly:(_Bool)arg5;	// IMP=0x0000000100064f44
- (id)initWithConfiguration:(id)arg1 subscribedPlaylistSagaIDs:(id)arg2 ignoreMinRefreshInterval:(_Bool)arg3 requestReason:(long long)arg4;	// IMP=0x0000000100064ecc
- (id)initWithSubscribedPlaylistSagaIDs:(id)arg1 ignoreMinRefreshInterval:(_Bool)arg2 requestReason:(long long)arg3;	// IMP=0x0000000100064e3c

@end

