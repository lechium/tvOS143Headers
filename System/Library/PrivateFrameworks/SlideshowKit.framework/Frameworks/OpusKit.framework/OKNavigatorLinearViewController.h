/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OKNavigatorViewController.h>
#import <libobjc.A.dylib/OFPageViewControllerDelegate.h>
#import <libobjc.A.dylib/OFPageViewControllerDataSource.h>
#import <libobjc.A.dylib/OKPresentationLiveUpdateSupport.h>
#import <libobjc.A.dylib/OKNavigatorViewControllerTransitionActionProtocol.h>
#import <libobjc.A.dylib/OFViewControllerTransitioningDelegate.h>

@class NSArray, OKTransition, OFPageViewController, NSMutableArray, NSMapTable, NSString;

@interface OKNavigatorLinearViewController : OKNavigatorViewController <OFPageViewControllerDelegate, OFPageViewControllerDataSource, OKPresentationLiveUpdateSupport, OKNavigatorViewControllerTransitionActionProtocol, OFViewControllerTransitioningDelegate> {

	NSArray* _transitions;
	OKTransition* _currentTransition;
	OFPageViewController* _pagesViewController;
	NSMutableArray* _orderedPagesNames;
	NSMapTable* _registeredActionBindingTransitions;
	NSMapTable* _actionRespondersTransitionContexts;
	BOOL _wraps;
	BOOL _panIsEnabled;
	BOOL _wantsPageControl;
	BOOL _keyboardIsEnabled;
	OKTransition* _defaultTransition;
	OKTransition* _overrideTransition;
	long long _navigationOrientation;

}

@property (assign,nonatomic) double interactiveTransitionTrackingBoxRadius; 
@property (assign,nonatomic) double interactiveTransitionProgressThreshold; 
@property (assign,nonatomic) double interactiveTransitionVelocityThreshold; 
@property (nonatomic,retain) OKTransition * defaultTransition;                           //@synthesize defaultTransition=_defaultTransition - In the implementation block
@property (nonatomic,retain) OKTransition * overrideTransition;                          //@synthesize overrideTransition=_overrideTransition - In the implementation block
@property (assign,nonatomic) long long navigationOrientation;                            //@synthesize navigationOrientation=_navigationOrientation - In the implementation block
@property (assign,nonatomic) BOOL wraps;                                                 //@synthesize wraps=_wraps - In the implementation block
@property (assign,nonatomic) BOOL panIsEnabled;                                          //@synthesize panIsEnabled=_panIsEnabled - In the implementation block
@property (assign,nonatomic) BOOL keyboardIsEnabled;                                     //@synthesize keyboardIsEnabled=_keyboardIsEnabled - In the implementation block
@property (assign,nonatomic) BOOL wantsPageControl;                                      //@synthesize wantsPageControl=_wantsPageControl - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(void)commonInit;
-(void)viewDidLoad;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(void)setWraps:(BOOL)arg1 ;
-(BOOL)wraps;
-(BOOL)prepareForDisplay;
-(long long)presentationCountForPageViewController:(id)arg1 ;
-(long long)presentationIndexForPageViewController:(id)arg1 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 ;
-(void)pageViewController:(id)arg1 willStartTransitioningToViewController:(id)arg2 fromViewController:(id)arg3 withDirection:(long long)arg4 ;
-(void)pageViewController:(id)arg1 didStartTransitioningToViewController:(id)arg2 fromViewController:(id)arg3 ;
-(void)pageViewController:(id)arg1 willFinishTransitioningToViewController:(id)arg2 fromViewController:(id)arg3 transitionWillComplete:(BOOL)arg4 ;
-(void)pageViewController:(id)arg1 didFinishTransitioningToViewController:(id)arg2 fromViewController:(id)arg3 transitionCompleted:(BOOL)arg4 ;
-(void)pageViewController:(id)arg1 willStartBouncingWithDirection:(long long)arg2 ;
-(void)pageViewControllerDidFinishBouncing:(id)arg1 ;
-(BOOL)pageViewController:(id)arg1 canAutomaticallyHandleGestureRecognizer:(id)arg2 ;
-(void)pageViewController:(id)arg1 didUpdateTransitioningToViewController:(id)arg2 fromViewController:(id)arg3 withProgress:(double)arg4 andVelocity:(double)arg5 ;
-(id)navigationController:(id)arg1 animationControllerForDirection:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(void)setWantsPageControl:(BOOL)arg1 ;
-(long long)navigationOrientation;
-(void)setNavigationOrientation:(long long)arg1 ;
-(BOOL)panIsEnabled;
-(void)setPanIsEnabled:(BOOL)arg1 ;
-(BOOL)wantsPageControl;
-(double)interactiveTransitionTrackingBoxRadius;
-(void)setInteractiveTransitionTrackingBoxRadius:(double)arg1 ;
-(double)interactiveTransitionProgressThreshold;
-(void)setInteractiveTransitionProgressThreshold:(double)arg1 ;
-(double)interactiveTransitionVelocityThreshold;
-(void)setInteractiveTransitionVelocityThreshold:(double)arg1 ;
-(BOOL)prepareForWarmup;
-(BOOL)prepareForUnload;
-(void)applySettings;
-(void)presentationDidLiveUpdate;
-(void)navigateToPageWithName:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)canPerformAction:(id)arg1 ;
-(void)gotoPageWithName:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)reloadPagesViewController;
-(void)prepareAdjacentPageViewControllers;
-(void)updatePagesViewController;
-(id)nameForPageBeforePage:(id)arg1 ;
-(id)nameForPageAfterPage:(id)arg1 ;
-(void)setSettingOrientation:(long long)arg1 ;
-(void)goToNext:(id)arg1 ;
-(void)goToPrevious:(id)arg1 ;
-(id)initNavigationWithKey:(id)arg1 isKeyUp:(BOOL)arg2 andMethod:(SEL)arg3 ;
-(void)setDefaultTransition:(OKTransition *)arg1 ;
-(void)setOverrideTransition:(OKTransition *)arg1 ;
-(void)navigateToNext:(id)arg1 ;
-(void)navigateToPrevious:(id)arg1 ;
-(OKTransition *)defaultTransition;
-(void)_navigateToPrevious:(BOOL)arg1 withAction:(id)arg2 overridingTransition:(BOOL)arg3 ;
-(id)transitionAfterPage:(id)arg1 ;
-(id)transitionBeforePage:(id)arg1 ;
-(id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2 createIfNeeded:(BOOL)arg3 ;
-(id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2 createIfNeeded:(BOOL)arg3 ;
-(void)setCurrentPageToPageWithName:(id)arg1 direction:(long long)arg2 animated:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)_pageViewControllerForActionResponder:(id)arg1 ;
-(void)registerActionBindingTransition:(id)arg1 ;
-(void)unregisterActionBindingTransition:(id)arg1 ;
-(void)setSettingDefaultTransition:(id)arg1 ;
-(void)setSettingOverrideTransition:(id)arg1 ;
-(void)setSettingWraps:(BOOL)arg1 ;
-(void)setSettingKeyboardIsEnabled:(BOOL)arg1 ;
-(void)setSettingPanIsEnabled:(BOOL)arg1 ;
-(void)setSettingWantsPageControl:(BOOL)arg1 ;
-(void)setSettingTransitions:(id)arg1 ;
-(void)setSettingInteractiveTransitionSettings:(id)arg1 ;
-(void)pageViewController:(id)arg1 didFinishAnimating:(BOOL)arg2 fromViewController:(id)arg3 transitionCompleted:(BOOL)arg4 ;
-(OKTransition *)overrideTransition;
-(BOOL)keyboardIsEnabled;
-(void)setKeyboardIsEnabled:(BOOL)arg1 ;
@end

