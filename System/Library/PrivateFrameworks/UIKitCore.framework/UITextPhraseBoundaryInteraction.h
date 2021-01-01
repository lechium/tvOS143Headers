/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextInteraction.h>

@protocol UITextCursorAssertion;
@class UITextGestureTuning;

@interface UITextPhraseBoundaryInteraction : UITextInteraction {

	UITextGestureTuning* _gestureTuning;
	id<UITextCursorAssertion> _blinkAssertion;

}
-(void)didMoveToView:(id)arg1 ;
-(void)_createGestureTuningIfNecessary;
-(CGPoint)touchAlignedPointForPoint:(CGPoint)arg1 translation:(CGPoint)arg2 ;
-(CGPoint)pointIfPlacedCarefully:(CGPoint)arg1 ;
-(id)initWithTextInput:(id)arg1 ;
-(void)updateVisibilityOffsetForGesture:(id)arg1 ;
-(id)_phraseBoundaryGestureRecognizer;
-(void)_phraseBoundaryGesture:(id)arg1 ;
@end
