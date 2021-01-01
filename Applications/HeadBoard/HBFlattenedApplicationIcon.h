//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HBFlattenedApplicationIcon : NSObject
{
    double _scale;	// 8 = 0x8
    CDUnknownBlockType _drawInRectBlock;	// 16 = 0x10
    struct CGSize _size;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000100078070
@property(readonly, nonatomic, getter=_drawInRectBlock) CDUnknownBlockType drawInRectBlock; // @synthesize drawInRectBlock=_drawInRectBlock;
@property(readonly, nonatomic) double scale; // @synthesize scale=_scale;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (id)image;	// IMP=0x0000000100077eac
- (void)drawInRect:(struct CGRect)arg1;	// IMP=0x0000000100077e40
- (id)initWithPlaceholderImage:(id)arg1;	// IMP=0x0000000100077d50
- (id)initWithAssetCatalogApplicationIcon:(id)arg1;	// IMP=0x0000000100077bfc
- (id)initWithApplicationIconFile:(id)arg1;	// IMP=0x0000000100077aa8

@end
