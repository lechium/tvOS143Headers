//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVServices/TVTopShelfSectionedItem.h>

@interface TVTopShelfSectionedItem (HBTopShelf)
+ (long long)_hb_genericPlaceholderForSectionedImageShape:(unsigned long long)arg1;	// IMP=0x000000010005fd18
- (_Bool)_hb_hasPodcastsRelatedMediaTypeWithApplicationIdentifier:(id)arg1;	// IMP=0x000000010005fbe0
- (_Bool)_hb_hasMusicRelatedMediaTypeWithApplicationIdentifier:(id)arg1;	// IMP=0x000000010005fa88
- (_Bool)_hb_hasPhotoRelatedMediaTypeWithApplicationIdentifier:(id)arg1;	// IMP=0x000000010005fa6c
- (_Bool)_hb_hasTVRelatedMediaTypeWithApplicationIdentifier:(id)arg1;	// IMP=0x000000010005f928
- (_Bool)_hb_hasMovieRelatedMediaTypeWithApplicationIdentifier:(id)arg1;	// IMP=0x000000010005f888
- (long long)hb_placeholderAssetTypeWithApplicationIdentifier:(id)arg1;	// IMP=0x000000010005f74c
@property(readonly, nonatomic) struct CGSize hb_imageSize;
@property(readonly, nonatomic) unsigned long long hb_imageShape;
@end

