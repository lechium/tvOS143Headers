//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, TVHKMediaServerIdentifier;

@interface TVHURLBuilder : NSObject
{
    TVHKMediaServerIdentifier *_mediaServerIdentifier;	// 8 = 0x8
    NSString *_mediaServerIdentifierString;	// 16 = 0x10
}

+ (void)_appendFieldName:(id)arg1 fieldValue:(id)arg2 toURLQueryString:(id)arg3;	// IMP=0x00000001000b9a20
+ (id)_mediaEntityIdentifierStringForIdentifier:(id)arg1;	// IMP=0x00000001000b9328
+ (id)_mediaItemTypeStringForMediaItem:(id)arg1;	// IMP=0x00000001000b9250
+ (id)_mediaCategoryTypeStringForMediaItem:(id)arg1;	// IMP=0x00000001000b9178
- (void).cxx_destruct;	// IMP=0x00000001000b9b40
@property(retain, nonatomic) NSString *mediaServerIdentifierString; // @synthesize mediaServerIdentifierString=_mediaServerIdentifierString;
@property(readonly, nonatomic) TVHKMediaServerIdentifier *mediaServerIdentifier; // @synthesize mediaServerIdentifier=_mediaServerIdentifier;
- (id)_URLQueryStringForMediaItem:(id)arg1 displayType:(id)arg2;	// IMP=0x00000001000b94fc
- (id)_URLForMediaItem:(id)arg1 action:(id)arg2 displayType:(id)arg3;	// IMP=0x00000001000b9408
- (id)_displayMusicURLForMediaItem:(id)arg1 displayType:(id)arg2;	// IMP=0x00000001000b9338
- (id)playURLForMediaItem:(id)arg1;	// IMP=0x00000001000b9000
- (id)displayURLForMediaItem:(id)arg1;	// IMP=0x00000001000b8f0c
- (id)displayAlbumURLForMediaItem:(id)arg1;	// IMP=0x00000001000b8ef4
- (id)displayAlbumArtistURLForMediaItem:(id)arg1;	// IMP=0x00000001000b8edc
- (id)initWithMediaServerIdentifier:(id)arg1;	// IMP=0x00000001000b8e64
- (id)init;	// IMP=0x00000001000b8ddc

@end

