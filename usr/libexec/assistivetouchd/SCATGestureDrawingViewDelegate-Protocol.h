//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, SCATGestureDrawingViewController;
@protocol SCATElement;

@protocol SCATGestureDrawingViewDelegate <NSObject>
- (void)drawingViewController:(SCATGestureDrawingViewController *)arg1 shouldResetScanningFromElement:(id <SCATElement>)arg2;
- (void)exitDrawingViewController:(SCATGestureDrawingViewController *)arg1;
- (_Bool)drawingViewController:(SCATGestureDrawingViewController *)arg1 moveFingersToPoints:(NSArray *)arg2;
- (void)touchUpForDrawingViewController:(SCATGestureDrawingViewController *)arg1;
- (void)touchDownForDrawingViewController:(SCATGestureDrawingViewController *)arg1;
@end

