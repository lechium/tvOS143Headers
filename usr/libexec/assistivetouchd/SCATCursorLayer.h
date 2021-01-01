//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAShapeLayer.h>

@class UIColor;

@interface SCATCursorLayer : CAShapeLayer
{
    _Bool _ensureHidden;	// 24 = 0x18
    _Bool _simpleRect;	// 25 = 0x19
    _Bool _isSimpleRect;	// 26 = 0x1a
    _Bool _isDark;	// 27 = 0x1b
    int _theme;	// 28 = 0x1c
    int _level;	// 32 = 0x20
    UIColor *_restingStrokeColor;	// 40 = 0x28
    UIColor *_restingFillColor;	// 48 = 0x30
    double _boundsInset;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000100048208
@property(nonatomic) _Bool isDark; // @synthesize isDark=_isDark;
@property(readonly, nonatomic) _Bool isSimpleRect; // @synthesize isSimpleRect=_isSimpleRect;
@property(nonatomic) int level; // @synthesize level=_level;
@property(nonatomic) int theme; // @synthesize theme=_theme;
@property(nonatomic) double boundsInset; // @synthesize boundsInset=_boundsInset;
@property(nonatomic, getter=isSimpleRect) _Bool simpleRect; // @synthesize simpleRect=_simpleRect;
@property(retain, nonatomic) UIColor *restingFillColor; // @synthesize restingFillColor=_restingFillColor;
@property(retain, nonatomic) UIColor *restingStrokeColor; // @synthesize restingStrokeColor=_restingStrokeColor;
- (double)_opacityForTheme:(int)arg1 level:(int)arg2 highVisibility:(_Bool)arg3 options:(int)arg4;	// IMP=0x000000010004809c
- (id)_borderPatternForTheme:(int)arg1 level:(int)arg2 highVisibility:(_Bool)arg3 options:(int)arg4;	// IMP=0x0000000100048094
- (double)_borderWidthForTheme:(int)arg1 level:(int)arg2 highVisibility:(_Bool)arg3 options:(int)arg4;	// IMP=0x000000010004808c
- (double)_boundsInsetForTheme:(int)arg1 level:(int)arg2 highVisibility:(_Bool)arg3 options:(int)arg4;	// IMP=0x0000000100048084
- (id)_fillColorForTheme:(int)arg1 level:(int)arg2 highVisibility:(_Bool)arg3 options:(int)arg4;	// IMP=0x000000010004807c
- (id)_strokeColorForTheme:(int)arg1 level:(int)arg2 highVisibility:(_Bool)arg3 options:(int)arg4;	// IMP=0x000000010004800c
- (void)_updatePresentationProperties:(int)arg1;	// IMP=0x0000000100047d74
- (void)updatePath:(id)arg1 frame:(struct CGRect)arg2 isSimpleRect:(_Bool)arg3 animated:(_Bool)arg4 options:(int)arg5;	// IMP=0x0000000100047c30
- (void)updateLevel:(int)arg1 animated:(_Bool)arg2 options:(int)arg3;	// IMP=0x0000000100047b74
- (void)updateTheme:(int)arg1 animated:(_Bool)arg2 options:(int)arg3;	// IMP=0x0000000100047ab8
- (void)ensureHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000100047a10
- (id)styleProvider;	// IMP=0x00000001000479fc
- (_Bool)usesHighVisibility;	// IMP=0x00000001000479a8
- (id)description;	// IMP=0x00000001000477b8
- (id)init;	// IMP=0x0000000100047720

@end
