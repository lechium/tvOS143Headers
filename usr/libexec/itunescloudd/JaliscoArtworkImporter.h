//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CloudArtworkImporter.h"

@interface JaliscoArtworkImporter : CloudArtworkImporter
{
}

- (_Bool)_cellularDataAllowedForMediaType:(unsigned int)arg1;	// IMP=0x0000000100046380
- (void)_importOriginalScreenshots;	// IMP=0x0000000100046078
- (void)_importOriginalItemArtwork;	// IMP=0x0000000100045da8
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100045ae4
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000100045824
- (void)importAllItemArtworkAndScreenshots;	// IMP=0x00000001000457f0
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000001000457b8

@end

