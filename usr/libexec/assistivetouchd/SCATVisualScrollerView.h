//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SCATCustomFocusingView.h"

@class CAShapeLayer;

@interface SCATVisualScrollerView : SCATCustomFocusingView
{
    unsigned long long _triangle;	// 8 = 0x8
    CDUnknownBlockType _activateActionHandler;	// 16 = 0x10
    CAShapeLayer *_triangleKnockoutLayer;	// 24 = 0x18
    CAShapeLayer *_triangleStrokeLayer;	// 32 = 0x20
}

+ (struct CGSize)scrollerSize;	// IMP=0x000000010000fe7c
- (void).cxx_destruct;	// IMP=0x0000000100010acc
@property(retain, nonatomic) CAShapeLayer *triangleStrokeLayer; // @synthesize triangleStrokeLayer=_triangleStrokeLayer;
@property(retain, nonatomic) CAShapeLayer *triangleKnockoutLayer; // @synthesize triangleKnockoutLayer=_triangleKnockoutLayer;
@property(copy, nonatomic) CDUnknownBlockType activateActionHandler; // @synthesize activateActionHandler=_activateActionHandler;
@property(nonatomic) unsigned long long triangle; // @synthesize triangle=_triangle;
- (_Bool)scatBeginScanningFromSelfAfterActivation;	// IMP=0x0000000100010a40
- (_Bool)scatHidesGroupCursorWhenFocused;	// IMP=0x0000000100010998
- (_Bool)scatIsAuxiliaryElement;	// IMP=0x0000000100010990
- (_Bool)scatShouldAllowDeferFocusToNativeFocusedElement;	// IMP=0x0000000100010988
- (_Bool)scatPerformAction:(int)arg1;	// IMP=0x00000001000108e4
- (_Bool)scatIndicatesOwnFocus;	// IMP=0x00000001000108dc
- (_Bool)updateFocusState:(long long)arg1;	// IMP=0x00000001000104b8
- (void)layoutSubviews;	// IMP=0x000000010000fe88
- (id)description;	// IMP=0x000000010000fd90
- (id)initWithTriangle:(unsigned long long)arg1;	// IMP=0x000000010000fae4

@end
