//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface BLML3TrackImporter : NSObject
{
}

- (id)_extendedContentRatingStringForLibraryItem:(id)arg1;	// IMP=0x0000000100072a98
- (id)_currentTrackChapterDataForTrackPid:(long long)arg1 libraryItem:(id)arg2 usingLibrary:(id)arg3;	// IMP=0x00000001000729a0
- (id)_storeArtworkTokenFromLibraryItem:(id)arg1 metadata:(id)arg2;	// IMP=0x0000000100072824
- (id)_currentTrackMovieInfoFromMetadata:(id)arg1;	// IMP=0x0000000100072738
- (id)_stringValueForURLValue:(id)arg1;	// IMP=0x0000000100072710
- (id)_absoluteTimeValueForDateValue:(id)arg1;	// IMP=0x0000000100072698
- (id)_importPropertiesFromLibraryItem:(id)arg1 fromAccount:(id)arg2 usingLibrary:(id)arg3;	// IMP=0x00000001000701c0
- (_Bool)importLibraryItems:(id)arg1 toMusicLibrary:(id)arg2 importedItemPids:(id)arg3;	// IMP=0x000000010006f63c

@end
