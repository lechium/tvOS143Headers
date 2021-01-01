//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, SCATGestureArrowView, SCATOutlineLabel;

@interface SCATGestureDrawingView : UIView
{
    NSMutableArray *_arrowViews;	// 8 = 0x8
    _Bool _fingersPressed;	// 16 = 0x10
    _Bool _fingersHighlighted;	// 17 = 0x11
    _Bool _showsRotationControls;	// 18 = 0x12
    _Bool _showsRotation90Controls;	// 19 = 0x13
    _Bool _showsCurvatureControls;	// 20 = 0x14
    SCATGestureArrowView *_rotateClockwiseControl;	// 24 = 0x18
    SCATGestureArrowView *_rotateCounterclockwiseControl;	// 32 = 0x20
    SCATOutlineLabel *_rotate90ClockwiseButton;	// 40 = 0x28
    SCATOutlineLabel *_rotate90CounterclockwiseButton;	// 48 = 0x30
    SCATGestureArrowView *_increaseCurveControl;	// 56 = 0x38
    SCATGestureArrowView *_decreaseCurveControl;	// 64 = 0x40
    SCATGestureArrowView *_straightenCurveControl;	// 72 = 0x48
    NSArray *_rotation90Controls;	// 80 = 0x50
    struct CGRect _frameForToolbar;	// 88 = 0x58
}

+ (struct CGRect)_frameWithIntegralOrigin:(struct CGRect)arg1;	// IMP=0x00000001000998f8
+ (struct CGRect)_bestFrameFor90ControlAtAngle:(double)arg1 size:(struct CGSize)arg2 centerPoint:(struct CGPoint)arg3;	// IMP=0x00000001000995cc
+ (_Bool)_isValidPositionFor90ControlWithXAlignment:(unsigned long long)arg1 yAlignment:(unsigned long long)arg2 size:(struct CGSize)arg3 nearestPoint:(struct CGPoint)arg4 centerPoint:(struct CGPoint)arg5 frame:(struct CGRect *)arg6;	// IMP=0x0000000100099254
+ (struct CGRect)_frameFor90ControlWithXAlignment:(unsigned long long)arg1 yAlignment:(unsigned long long)arg2 size:(struct CGSize)arg3 nearestPoint:(struct CGPoint)arg4;	// IMP=0x00000001000991d0
- (void).cxx_destruct;	// IMP=0x000000010009a444
@property(readonly, nonatomic) NSArray *rotation90Controls; // @synthesize rotation90Controls=_rotation90Controls;
@property(nonatomic) struct CGRect frameForToolbar; // @synthesize frameForToolbar=_frameForToolbar;
@property(readonly, nonatomic) SCATGestureArrowView *straightenCurveControl; // @synthesize straightenCurveControl=_straightenCurveControl;
@property(readonly, nonatomic) SCATGestureArrowView *decreaseCurveControl; // @synthesize decreaseCurveControl=_decreaseCurveControl;
@property(readonly, nonatomic) SCATGestureArrowView *increaseCurveControl; // @synthesize increaseCurveControl=_increaseCurveControl;
@property(readonly, nonatomic) SCATOutlineLabel *rotate90CounterclockwiseButton; // @synthesize rotate90CounterclockwiseButton=_rotate90CounterclockwiseButton;
@property(readonly, nonatomic) SCATOutlineLabel *rotate90ClockwiseButton; // @synthesize rotate90ClockwiseButton=_rotate90ClockwiseButton;
@property(readonly, nonatomic) SCATGestureArrowView *rotateCounterclockwiseControl; // @synthesize rotateCounterclockwiseControl=_rotateCounterclockwiseControl;
@property(readonly, nonatomic) SCATGestureArrowView *rotateClockwiseControl; // @synthesize rotateClockwiseControl=_rotateClockwiseControl;
@property(nonatomic) _Bool showsCurvatureControls; // @synthesize showsCurvatureControls=_showsCurvatureControls;
@property(nonatomic) _Bool showsRotation90Controls; // @synthesize showsRotation90Controls=_showsRotation90Controls;
@property(nonatomic) _Bool showsRotationControls; // @synthesize showsRotationControls=_showsRotationControls;
@property(nonatomic, getter=areFingersHighlighted) _Bool fingersHighlighted; // @synthesize fingersHighlighted=_fingersHighlighted;
@property(nonatomic, getter=areFingersPressed) _Bool fingersPressed; // @synthesize fingersPressed=_fingersPressed;
- (void)_updateCurvatureControls;	// IMP=0x000000010009a0f4
- (void)_updateCurvatureControl:(id)arg1 withTailPoint:(struct CGPoint)arg2 tailAngle:(double)arg3 distance:(double)arg4 curvature:(double)arg5;	// IMP=0x000000010009a04c
- (void)_updateRotationControls;	// IMP=0x0000000100099cf8
- (double)_midAngleForCurvedTrailWithTailPoint:(struct CGPoint)arg1 fingerTrailDistance:(double)arg2 distanceAlongArc:(double)arg3 useSecondIntersectionPointIfNecessary:(_Bool)arg4;	// IMP=0x0000000100099b10
- (void)_updateRotation90Controls;	// IMP=0x0000000100099904
- (void)_updateControls;	// IMP=0x000000010009918c
- (double)_actualDistanceForFingerTrail;	// IMP=0x000000010009912c
- (struct CGPoint)_tailPoint;	// IMP=0x00000001000990b8
- (void)_adjustArrowViewsForNumberOfFingers:(unsigned long long)arg1;	// IMP=0x0000000100098f4c
- (id)_newRotate90Button;	// IMP=0x0000000100098d10
- (id)_newControlArrowForCurvature:(_Bool)arg1;	// IMP=0x0000000100098cb4
@property(nonatomic) double previewDistance;
@property(nonatomic) double curvature;
@property(nonatomic) double angle;
@property(copy, nonatomic) NSArray *fingerPositions;
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100097ee4

@end

