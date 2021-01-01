/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UIKeyboardKeyplaneTransitionDelegate;
#import <UIKitCore/UIKitCore-Structs.h>
@class CADisplayLink, UIKBTree, UIView, NSMutableArray, UIKBKeyViewAnimator;

@interface UIKeyboardKeyplaneTransition : NSObject {

	double _currentProgress;
	double _liftOffProgress;
	double _finishProgress;
	double _finishDuration;
	double _finalTransitionStartTime;
	CADisplayLink* _displayLink;
	UIKBTree* _keyboard;
	UIKBTree* _start;
	UIKBTree* _end;
	UIView* _startView;
	UIView* _endView;
	/*^block*/id _completionBlock;
	id<UIKeyboardKeyplaneTransitionDelegate> _transitionDelegate;
	BOOL _initiallyAtEnd;
	NSMutableArray* _transitionViews;
	UIKBKeyViewAnimator* _keyViewAnimator;

}

@property (nonatomic,retain) UIKBTree * keyboard;                                                      //@synthesize keyboard=_keyboard - In the implementation block
@property (copy) id completionBlock;                                                                   //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) id<UIKeyboardKeyplaneTransitionDelegate> transitionDelegate;              //@synthesize transitionDelegate=_transitionDelegate - In the implementation block
@property (assign,nonatomic) BOOL initiallyAtEnd;                                                      //@synthesize initiallyAtEnd=_initiallyAtEnd - In the implementation block
@property (nonatomic,readonly) double nonInteractiveDuration; 
@property (nonatomic,retain) UIKBKeyViewAnimator * keyViewAnimator;                                    //@synthesize keyViewAnimator=_keyViewAnimator - In the implementation block
@property (nonatomic,readonly) double startHeight; 
@property (nonatomic,readonly) double endHeight; 
-(void)dealloc;
-(void)setCompletionBlock:(id)arg1 ;
-(id)completionBlock;
-(void)removeAllAnimations;
-(UIKBTree *)keyboard;
-(void)setTransitionDelegate:(id<UIKeyboardKeyplaneTransitionDelegate>)arg1 ;
-(id<UIKeyboardKeyplaneTransitionDelegate>)transitionDelegate;
-(void)updateWithProgress:(double)arg1 ;
-(void)finalizeTransition;
-(void)setKeyboard:(UIKBTree *)arg1 ;
-(UIKBKeyViewAnimator *)keyViewAnimator;
-(void)setKeyViewAnimator:(UIKBKeyViewAnimator *)arg1 ;
-(void)cancelNonInteractiveAnimation;
-(void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4 ;
-(void)finishWithProgress:(double)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)commitTransitionRebuild;
-(void)setInitiallyAtEnd:(BOOL)arg1 ;
-(BOOL)initiallyAtEnd;
-(double)nonInteractiveDuration;
-(void)runNonInteractivelyWithCompletion:(/*^block*/id)arg1 ;
-(double)startHeight;
-(double)endHeight;
-(void)transitionToFinalState:(id)arg1 ;
-(void)addTransitionView:(id)arg1 startFrame:(CGRect)arg2 endFrame:(CGRect)arg3 ;
-(BOOL)canDisplayTransitionFromKeyplane:(id)arg1 toKeyplane:(id)arg2 ;
@end

