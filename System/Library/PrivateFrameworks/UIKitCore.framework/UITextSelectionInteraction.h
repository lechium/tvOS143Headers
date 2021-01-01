/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextInteraction.h>

@class UITextGestureTuning, _UIKeyboardTextSelectionController, UITextSelectionGrabberSuppressionAssertion;

@interface UITextSelectionInteraction : UITextInteraction {

	double _lastTapTimestamp;
	CGPoint _lastTapLocation;
	UITextGestureTuning* _gestureTuning;
	BOOL _indirectSelectionType;
	BOOL _viewConformsToTextInput;
	CGRect _originalCaretRect;
	BOOL _wasOriginallyFirstResponder;
	long long _granularityToHandOff;
	_UIKeyboardTextSelectionController* _activeSelectionController;
	UITextSelectionGrabberSuppressionAssertion* _grabberSuppressionAssertion;

}
-(id)initWithMode:(long long)arg1 ;
-(void)confirmMarkedText:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(void)didMoveToView:(id)arg1 ;
-(id)_transientState;
-(void)_createGestureTuningIfNecessary;
-(BOOL)_isNowWithinRepeatedTapTime;
-(void)finishSetup;
-(void)_applyTransientState:(id)arg1 ;
-(BOOL)interaction_gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)_shouldAllowEnforcedTouchTypeForTouch:(id)arg1 forGestureRecognizer:(id)arg2 ;
-(BOOL)interaction_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)toggleSelectionCommands;
-(id)initWithMode:(long long)arg1 indirect:(BOOL)arg2 ;
-(void)_handleMultiTapGesture:(id)arg1 ;
-(void)oneFingerTapSelectsAll:(id)arg1 ;
-(void)tapAndAHalf:(id)arg1 ;
-(BOOL)_usesIndirectSelectionBehavior;
-(void)_showSelectionCommandsIfApplicableAfterDelay:(double)arg1 ;
-(BOOL)_isWithinRepeatedTapTimeForTouch:(id)arg1 ;
-(BOOL)_isRepeatedTap:(id)arg1 gestureLocationOut:(CGPoint*)arg2 ;
-(void)willUpdateSelectionWithGesture:(id)arg1 ;
-(BOOL)_isShiftKeyBeingHeldForGesture:(id)arg1 ;
-(long long)_textGranularityForNumberOfTaps:(unsigned long long)arg1 ;
-(void)didUpdateSelectionWithGesture:(id)arg1 ;
-(void)tappedToSelectTextWithGesture:(id)arg1 atPoint:(CGPoint)arg2 granularity:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(BOOL)_usesPencilSelectionBehaviorForGesture:(id)arg1 ;
-(void)tappedToUpdateSelectionWithGesture:(id)arg1 atPoint:(CGPoint)arg2 granularity:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)tappedToPositionCursorWithGesture:(id)arg1 atPoint:(CGPoint)arg2 granularity:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_checkForRepeatedTap:(id)arg1 gestureLocationOut:(CGPoint*)arg2 ;
-(void)_updateTapGestureHistoryWithLocation:(CGPoint)arg1 ;
-(void)setHybridSelectionWithPoint:(CGPoint)arg1 ;
-(BOOL)shouldHandleOneFingerTapInUneditable:(id)arg1 ;
-(void)oneFingerTripleTap:(id)arg1 ;
-(void)oneFingerDoubleTap:(id)arg1 ;
-(long long)_textGranularityForRepeatedTap:(long long)arg1 ;
-(long long)handOffGranularity;
-(void)twoFingerRangedSelectGesture:(id)arg1 ;
@end

