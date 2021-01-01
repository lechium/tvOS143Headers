/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol SKRemoteDismissingViewController;
@class UIViewController, NSString;

@interface SKRemoteDismissingTransition : NSObject <UIViewControllerAnimatedTransitioning> {

	UIViewController*<SKRemoteDismissingViewController> _viewController;

}

@property (assign,nonatomic,__weak) UIViewController*<SKRemoteDismissingViewController> viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setViewController:(UIViewController*<SKRemoteDismissingViewController>)arg1 ;
-(UIViewController*<SKRemoteDismissingViewController>)viewController;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)initWithViewController:(id)arg1 ;
-(void)dismissRemoteViewController:(id)arg1 ;
@end
