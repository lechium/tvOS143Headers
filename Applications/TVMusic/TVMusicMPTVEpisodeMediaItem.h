//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVMusicMPObjectMediaItem.h"

@class MPModelTVEpisode;

@interface TVMusicMPTVEpisodeMediaItem : TVMusicMPObjectMediaItem
{
}

- (id)description;	// IMP=0x00000001000a1b5c
- (id)mediaItemMetadataForProperty:(id)arg1;	// IMP=0x00000001000a161c
- (_Bool)useBookmarks;	// IMP=0x00000001000a1614
@property(readonly, nonatomic) MPModelTVEpisode *tvEpisode;
- (id)initWithTVEpisode:(id)arg1;	// IMP=0x00000001000a15f8
- (id)initWithTVEpisode:(id)arg1 mediaItemMetadata:(id)arg2;	// IMP=0x00000001000a1588

@end

