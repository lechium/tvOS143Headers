/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol UIViewControllerAnimatedTransitioning;
@class NSString;

@interface _UISimpleTransitioningDelegate : NSObject <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate> {

	id<UIViewControllerAnimatedTransitioning> _animator;
	BOOL __suppressCrossFadeNavigationBarAnimation;

}

@property (assign,setter=_setSuppressCrossFadeNavigationBarAnimation:,nonatomic) BOOL _suppressCrossFadeNavigationBarAnimation;              //@synthesize _suppressCrossFadeNavigationBarAnimation=__suppressCrossFadeNavigationBarAnimation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(id)initWithAnimator:(id)arg1 ;
-(BOOL)_navigationControllerShouldCrossFadeNavigationBar:(id)arg1 ;
-(BOOL)_suppressCrossFadeNavigationBarAnimation;
-(void)_setSuppressCrossFadeNavigationBarAnimation:(BOOL)arg1 ;
@end

