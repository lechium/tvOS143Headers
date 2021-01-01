/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/TSKPreviewingDelegate.h>
#import <libobjc.A.dylib/_TSKAnimatorDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol TSKPreviewing;
@class UINavigationController, UIViewController, UIView, NSString;

@interface _TSKSplitViewController : UIViewController <TSKPreviewingDelegate, _TSKAnimatorDelegate, UINavigationControllerDelegate> {

	BOOL _isAnimatingTransition;
	UINavigationController* _navigationController;
	UIViewController* _previewViewController;
	UIView* _previewContainerView;
	UIViewController*<TSKPreviewing> _previewProvider;

}

@property (assign,nonatomic) BOOL isAnimatingTransition;                                    //@synthesize isAnimatingTransition=_isAnimatingTransition - In the implementation block
@property (nonatomic,readonly) UIView * previewContainerView;                               //@synthesize previewContainerView=_previewContainerView - In the implementation block
@property (nonatomic,retain) UIViewController*<TSKPreviewing> previewProvider;              //@synthesize previewProvider=_previewProvider - In the implementation block
@property (nonatomic,readonly) UINavigationController * navigationController;               //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,readonly) UIViewController * previewViewController;                    //@synthesize previewViewController=_previewViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidLoad;
-(UINavigationController *)navigationController;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)preferredFocusEnvironments;
-(UIViewController *)previewViewController;
-(id)initWithNavigationController:(id)arg1 ;
-(void)previewing:(id)arg1 needsUpdateForItemAtIndexPath:(id)arg2 ;
-(void)animatorWillBeginTransition:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(void)animatorDidCompleteTransition:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3 ;
-(id)animator:(id)arg1 previewViewControllerForViewController:(id)arg2 ;
-(void)animator:(id)arg1 transitionToPreview:(id)arg2 animated:(BOOL)arg3 ;
-(void)_updatePreviewingWithViewController:(id)arg1 ;
-(BOOL)isAnimatingTransition;
-(void)setPreviewViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)setIsAnimatingTransition:(BOOL)arg1 ;
-(UIView *)previewContainerView;
-(UIViewController*<TSKPreviewing>)previewProvider;
-(void)setPreviewProvider:(UIViewController*<TSKPreviewing>)arg1 ;
@end

