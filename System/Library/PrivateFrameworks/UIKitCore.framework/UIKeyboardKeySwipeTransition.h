/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardKeyplaneTransition.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSArray, NSString;

@interface UIKeyboardKeySwipeTransition : UIKeyboardKeyplaneTransition <CAAnimationDelegate> {

	BOOL _disableMeshOptimization;
	NSArray* _startKeysOrdered;
	NSArray* _endKeysOrdered;
	NSArray* _startGeometries;
	NSArray* _transitionKeys;
	NSArray* _keyInfos;
	double _previousProgress;

}

@property (nonatomic,retain) NSArray * startKeysOrdered;                //@synthesize startKeysOrdered=_startKeysOrdered - In the implementation block
@property (nonatomic,retain) NSArray * endKeysOrdered;                  //@synthesize endKeysOrdered=_endKeysOrdered - In the implementation block
@property (nonatomic,retain) NSArray * startGeometries;                 //@synthesize startGeometries=_startGeometries - In the implementation block
@property (nonatomic,retain) NSArray * transitionKeys;                  //@synthesize transitionKeys=_transitionKeys - In the implementation block
@property (nonatomic,retain) NSArray * keyInfos;                        //@synthesize keyInfos=_keyInfos - In the implementation block
@property (assign,nonatomic) double previousProgress;                   //@synthesize previousProgress=_previousProgress - In the implementation block
@property (assign,nonatomic) BOOL disableMeshOptimization;              //@synthesize disableMeshOptimization=_disableMeshOptimization - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)removeAllAnimations;
-(void)updateWithProgress:(double)arg1 ;
-(void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4 ;
-(void)setDisableMeshOptimization:(BOOL)arg1 ;
-(void)commitTransitionRebuild;
-(void)setStartGeometries:(NSArray *)arg1 ;
-(void)setStartKeysOrdered:(NSArray *)arg1 ;
-(void)setEndKeysOrdered:(NSArray *)arg1 ;
-(void)gatherTransitionKeys;
-(void)setPreviousProgress:(double)arg1 ;
-(void)_runTransformAnimation;
-(void)_runOpacityAnimation;
-(id)meshTransformForKeyplane:(id)arg1 forward:(BOOL)arg2 initial:(BOOL)arg3 ;
-(double)nonInteractiveDuration;
-(NSArray *)startKeysOrdered;
-(NSArray *)endKeysOrdered;
-(void)setTransitionKeys:(NSArray *)arg1 ;
-(void)setKeyInfos:(NSArray *)arg1 ;
-(NSArray *)transitionKeys;
-(NSArray *)startGeometries;
-(NSArray *)keyInfos;
-(CGRect)keyRectForFrame:(CGRect)arg1 normalizedSubRect:(CGRect)arg2 ;
-(void)runNonInteractivelyWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)disableMeshOptimization;
-(double)previousProgress;
@end

