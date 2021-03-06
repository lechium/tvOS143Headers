//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVPImageRepresentation : NSObject
{
    _Bool _fixedFrame;	// 8 = 0x8
    struct CGRect _sourceRect;	// 16 = 0x10
    struct CGRect _destinationRect;	// 48 = 0x30
}

+ (id)_loadingQueue;	// IMP=0x00000001000103e0
+ (id)imageRepresentationWithNamedLayerImage:(id)arg1;	// IMP=0x000000010001002c
+ (id)imageRepresentationWithImageProxy:(id)arg1;	// IMP=0x000000010000ffd8
+ (id)imageRepresentationWithImage:(id)arg1;	// IMP=0x000000010000ff84
+ (id)imageRepresentationWithURL:(id)arg1;	// IMP=0x000000010000fec4
+ (id)imageRepresentationWithImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3;	// IMP=0x000000010000fe30
@property(nonatomic, getter=isFixedFrame) _Bool fixedFrame; // @synthesize fixedFrame=_fixedFrame;
@property(nonatomic) struct CGRect destinationRect; // @synthesize destinationRect=_destinationRect;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
- (id)_originalImageCacheKey;	// IMP=0x00000001000103d8
- (struct CGImage *)_originalImage;	// IMP=0x000000010001035c
- (struct CGImage *)_imageForOriginalImage:(struct CGImage *)arg1;	// IMP=0x00000001000102c8
- (void)loadImageWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000001000101c8
- (struct CGImage *)newImage;	// IMP=0x0000000100010174
@property(readonly, nonatomic) NSString *cacheKey;

@end

