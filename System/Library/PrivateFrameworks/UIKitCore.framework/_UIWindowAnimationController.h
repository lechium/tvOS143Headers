/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIWindow, NSString;

@interface _UIWindowAnimationController : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _shouldCrossfade;
	UIWindow* _window;

}

@property (assign,nonatomic) UIWindow * window;                     //@synthesize window=_window - In the implementation block
@property (assign,nonatomic) BOOL shouldCrossfade;                  //@synthesize shouldCrossfade=_shouldCrossfade - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animationControllerWithWindow:(id)arg1 ;
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)initWithWindow:(id)arg1 ;
-(BOOL)shouldCrossfade;
-(void)setShouldCrossfade:(BOOL)arg1 ;
-(void)_performCrossfadeAnimationWithContext:(id)arg1 windowGeometryUpdatingBlock:(/*^block*/id)arg2 ;
-(void)_performLayoutAnimationWithContext:(id)arg1 windowGeometryUpdatingBlock:(/*^block*/id)arg2 ;
@end

