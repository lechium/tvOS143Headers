/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIPresentationController.h>
#import <UIKit/UIDimmingViewDelegate.h>
#import <UIKitCore/_UISheetLayoutInfoDelegate.h>
#import <UIKitCore/_UISheetInteractionDelegate.h>

@class _UISheetInteraction, _UISheetLayoutInfo, UIDimmingView, _UISheetAnimationController, UIPercentDrivenInteractiveTransition, NSUserActivity, _UIRemoteViewController, UIViewPropertyAnimator, UIDropShadowView, _UISheetPresentationControllerConfiguration, UIView, NSArray, NSString;

@interface _UISheetPresentationController : UIPresentationController <UIDimmingViewDelegate, _UISheetLayoutInfoDelegate, _UISheetInteractionDelegate> {

	BOOL __shouldPresentedViewControllerControlStatusBarAppearance;
	BOOL __didAttemptToStartDismiss;
	BOOL __didTearOff;
	BOOL __remoteDismissing;
	BOOL __dimmingViewTapDismissing;
	BOOL __keyboardShown;
	BOOL __isRemote;
	BOOL __presentsAtStandardHalfHeight;
	BOOL __allowsTearOff;
	_UISheetInteraction* __sheetInteraction;
	double __preferredRecessedCornerRadius;
	_UISheetLayoutInfo* __layoutInfo;
	UIDimmingView* __confinedDimmingView;
	_UISheetAnimationController* __animationController;
	UIPercentDrivenInteractiveTransition* __interactionController;
	NSUserActivity* __tearOffActivity;
	_UIRemoteViewController* __connectedRemoteViewController;
	UIViewPropertyAnimator* __remoteDismissalPropertyAnimator;
	UIDropShadowView* _dropShadowView;
	UIDimmingView* _dimmingView;
	CGPoint __initialTearOffPoint;
	CGRect _frameOfPresentedViewInContainerView;

}

@property (nonatomic,readonly) _UISheetLayoutInfo * _layoutInfo;                                                                                                             //@synthesize _layoutInfo=__layoutInfo - In the implementation block
@property (nonatomic,readonly) UIDimmingView * _confinedDimmingView;                                                                                                         //@synthesize _confinedDimmingView=__confinedDimmingView - In the implementation block
@property (nonatomic,readonly) _UISheetPresentationController * _parentSheetPresentationController; 
@property (nonatomic,readonly) _UISheetPresentationController * _childSheetPresentationController; 
@property (assign,nonatomic) CGRect frameOfPresentedViewInContainerView;                                                                                                     //@synthesize frameOfPresentedViewInContainerView=_frameOfPresentedViewInContainerView - In the implementation block
@property (assign,setter=_setShouldPresentedViewControllerControlStatusBarAppearance:,nonatomic) BOOL _shouldPresentedViewControllerControlStatusBarAppearance;              //@synthesize _shouldPresentedViewControllerControlStatusBarAppearance=__shouldPresentedViewControllerControlStatusBarAppearance - In the implementation block
@property (nonatomic,readonly) _UISheetInteraction * _sheetInteraction;                                                                                                      //@synthesize _sheetInteraction=__sheetInteraction - In the implementation block
@property (nonatomic,readonly) _UISheetInteraction * _sheetInteractionIfLoaded; 
@property (setter=_setAnimatedTransition:,nonatomic,retain) _UISheetAnimationController * _animationController;                                                              //@synthesize _animationController=__animationController - In the implementation block
@property (setter=_setInteractiveTransition:,nonatomic,retain) UIPercentDrivenInteractiveTransition * _interactionController;                                                //@synthesize _interactionController=__interactionController - In the implementation block
@property (assign,setter=_setDidAttemptToStartDismiss:,nonatomic) BOOL _didAttemptToStartDismiss;                                                                            //@synthesize _didAttemptToStartDismiss=__didAttemptToStartDismiss - In the implementation block
@property (assign,setter=_setDidTearOff:,nonatomic) BOOL _didTearOff;                                                                                                        //@synthesize _didTearOff=__didTearOff - In the implementation block
@property (assign,setter=_setInitialTearOffPoint:,nonatomic) CGPoint _initialTearOffPoint;                                                                                   //@synthesize _initialTearOffPoint=__initialTearOffPoint - In the implementation block
@property (setter=_setTearOffActivity:,nonatomic,retain) NSUserActivity * _tearOffActivity;                                                                                  //@synthesize _tearOffActivity=__tearOffActivity - In the implementation block
@property (getter=_isHosting,nonatomic,readonly) BOOL _hosting; 
@property (nonatomic,readonly) _UIRemoteViewController * _connectedRemoteViewController;                                                                                     //@synthesize _connectedRemoteViewController=__connectedRemoteViewController - In the implementation block
@property (nonatomic,readonly) _UIRemoteViewController * _expectedRemoteViewController; 
@property (assign,setter=_setRemoteDismissing:,getter=_isRemoteDismissing,nonatomic) BOOL _remoteDismissing;                                                                 //@synthesize _remoteDismissing=__remoteDismissing - In the implementation block
@property (nonatomic,retain) UIViewPropertyAnimator * _remoteDismissalPropertyAnimator;                                                                                      //@synthesize _remoteDismissalPropertyAnimator=__remoteDismissalPropertyAnimator - In the implementation block
@property (assign,setter=_setDimmingViewTapDismissing:,getter=_isDimmingViewTapDismissing,nonatomic) BOOL _dimmingViewTapDismissing;                                         //@synthesize _dimmingViewTapDismissing=__dimmingViewTapDismissing - In the implementation block
@property (assign,setter=_setKeyboardShown:,getter=_isKeyboardShown,nonatomic) BOOL _keyboardShown;                                                                          //@synthesize _keyboardShown=__keyboardShown - In the implementation block
@property (nonatomic,readonly) UIDropShadowView * dropShadowView;                                                                                                            //@synthesize dropShadowView=_dropShadowView - In the implementation block
@property (nonatomic,readonly) UIDimmingView * dimmingView;                                                                                                                  //@synthesize dimmingView=_dimmingView - In the implementation block
@property (assign,setter=_setMode:,nonatomic) long long _mode; 
@property (assign,setter=_setIsRemote:,nonatomic) BOOL _isRemote;                                                                                                            //@synthesize _isRemote=__isRemote - In the implementation block
@property (setter=_setConfiguration:,nonatomic,retain) _UISheetPresentationControllerConfiguration * _configuration; 
@property (nonatomic,readonly) BOOL _isRootPresentation; 
@property (assign,setter=_setAdditionalMinimumTopInset:,nonatomic) double _additionalMinimumTopInset; 
@property (assign,setter=_setGrabberTopSpacing:,nonatomic) double _grabberTopSpacing; 
@property (assign,setter=_setWantsBottomAttached:,nonatomic) BOOL _wantsBottomAttached; 
@property (assign,setter=_setAllowsInteractiveDismissWhenFullScreen:,nonatomic) BOOL _allowsInteractiveDismissWhenFullScreen; 
@property (assign,setter=_setPresentsAtStandardHalfHeight:,nonatomic) BOOL _presentsAtStandardHalfHeight;                                                                    //@synthesize _presentsAtStandardHalfHeight=__presentsAtStandardHalfHeight - In the implementation block
@property (assign,setter=_setAllowsTearOff:,nonatomic) BOOL _allowsTearOff;                                                                                                  //@synthesize _allowsTearOff=__allowsTearOff - In the implementation block
@property (setter=_setSourceView:,nonatomic,retain) UIView * _sourceView; 
@property (assign,setter=_setShouldDismissWhenTappedOutside:,getter=_shouldDismissWhenTappedOutside,nonatomic) BOOL shouldDismissWhenTappedOutside; 
@property (assign,setter=_setShouldScaleDownBehindDescendantSheets:,nonatomic) BOOL _shouldScaleDownBehindDescendantSheets; 
@property (assign,setter=_setWantsFullScreen:,nonatomic) BOOL _wantsFullScreen; 
@property (assign,setter=_setWantsBottomAttachedInCompactHeight:,nonatomic) BOOL _wantsBottomAttachedInCompactHeight; 
@property (assign,setter=_setWidthFollowsPreferredContentSizeWhenBottomAttached:,nonatomic) BOOL _widthFollowsPreferredContentSizeWhenBottomAttached; 
@property (assign,setter=_setWantsGrabber:,nonatomic) BOOL _wantsGrabber; 
@property (assign,setter=_setCornerRadiusForPresentationAndDismissal:,nonatomic) double _cornerRadiusForPresentationAndDismissal; 
@property (assign,setter=_setPreferredCornerRadius:,nonatomic) double _preferredCornerRadius; 
@property (assign,setter=_setPreferredRecessedCornerRadius:,nonatomic) double _preferredRecessedCornerRadius;                                                                //@synthesize _preferredRecessedCornerRadius=__preferredRecessedCornerRadius - In the implementation block
@property (assign,nonatomic,__weak) id<_UISheetPresentationControllerDelegate> delegate; 
@property (setter=_setDetents:,nonatomic,copy) NSArray * _detents; 
@property (assign,setter=_setIndexOfCurrentDetent:,nonatomic) long long _indexOfCurrentDetent; 
@property (assign,setter=_setIndexOfLastUndimmedDetent:,nonatomic) long long _indexOfLastUndimmedDetent; 
@property (assign,setter=_setPrefersScrollingExpandsToLargerDetentWhenScrolledToEdge:,nonatomic) BOOL _prefersScrollingExpandsToLargerDetentWhenScrolledToEdge; 
@property (setter=_setPassthroughViews:,nonatomic,copy) NSArray * _passthroughViews; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_initialMode;
-(_UISheetPresentationControllerConfiguration *)_configuration;
-(_UISheetLayoutInfo *)_layoutInfo;
-(long long)_mode;
-(long long)presentationStyle;
-(UIView *)_sourceView;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 ;
-(void)containerViewWillLayoutSubviews;
-(CGRect)frameOfPresentedViewInContainerView;
-(void)presentationTransitionWillBegin;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(id)presentedView;
-(CGRect)_frameOfPresentedViewControllerViewInSuperview;
-(UIDimmingView *)dimmingView;
-(void)_setShouldDismissWhenTappedOutside:(BOOL)arg1 ;
-(void)_setDetents:(id)arg1 ;
-(void)_setWantsBottomAttachedInCompactHeight:(BOOL)arg1 ;
-(void)_setWidthFollowsPreferredContentSizeWhenBottomAttached:(BOOL)arg1 ;
-(void)_setMode:(long long)arg1 ;
-(UIPercentDrivenInteractiveTransition *)_interactionController;
-(_UISheetAnimationController *)_animationController;
-(void)_setConfiguration:(id)arg1 ;
-(void)dismissalTransitionWillBegin;
-(BOOL)_isRemote;
-(void)containerViewDidLayoutSubviews;
-(BOOL)_shouldOccludeDuringPresentation;
-(void)sheetInteraction:(id)arg1 didChangeOffset:(CGPoint)arg2 ;
-(BOOL)sheetInteraction:(id)arg1 shouldBeginHorizontalRubberBandingWithGestureRecognizer:(id)arg2 ;
-(BOOL)sheetInteraction:(id)arg1 shouldAllowVerticalRubberBandingWithEvent:(id)arg2 ;
-(CGPoint)offsetForInterruptedAnimationInSheetInteraction:(id)arg1 ;
-(NSArray *)_detents;
-(long long)_indexOfCurrentDetent;
-(BOOL)_shouldPresentedViewControllerControlStatusBarAppearance;
-(id)_preferredAnimationControllerForDismissal;
-(void)_realSourceViewGeometryDidChange;
-(void)dimmingViewWasTapped:(id)arg1 ;
-(NSArray *)_passthroughViews;
-(BOOL)_shouldPreserveFirstResponder;
-(id)_viewToIgnoreLayerTransformForViewFrameInWindowContentOverlayInsetsCalculation;
-(void)_containerViewBoundsDidChange;
-(void)_containerViewTraitCollectionDidChange;
-(void)_containerViewSafeAreaInsetsDidChange;
-(void)_containerViewLayoutSubviews;
-(id)_preferredInteractionControllerForDismissal:(id)arg1 ;
-(UIDropShadowView *)dropShadowView;
-(BOOL)_isRootPresentation;
-(void)_setIndexOfCurrentDetent:(long long)arg1 ;
-(long long)_indexOfLastUndimmedDetent;
-(void)_setIndexOfLastUndimmedDetent:(long long)arg1 ;
-(double)_additionalMinimumTopInset;
-(BOOL)_wantsFullScreen;
-(BOOL)_wantsBottomAttached;
-(BOOL)_wantsBottomAttachedInCompactHeight;
-(BOOL)_widthFollowsPreferredContentSizeWhenBottomAttached;
-(BOOL)_isHosting;
-(double)_preferredCornerRadius;
-(BOOL)_wantsGrabber;
-(BOOL)_allowsInteractiveDismissWhenFullScreen;
-(BOOL)_shouldDismissWhenTappedOutside;
-(void)_sheetLayoutInfoPrelayout:(id)arg1 ;
-(void)_sheetLayoutInfoLayout:(id)arg1 ;
-(BOOL)_prefersScrollingExpandsToLargerDetentWhenScrolledToEdge;
-(double)_grabberTopSpacing;
-(void)_setAdditionalMinimumTopInset:(double)arg1 ;
-(void)_setWantsFullScreen:(BOOL)arg1 ;
-(void)_setWantsBottomAttached:(BOOL)arg1 ;
-(void)_setAllowsInteractiveDismissWhenFullScreen:(BOOL)arg1 ;
-(void)_setPrefersScrollingExpandsToLargerDetentWhenScrolledToEdge:(BOOL)arg1 ;
-(void)_setPassthroughViews:(id)arg1 ;
-(void)_setWantsGrabber:(BOOL)arg1 ;
-(void)_setGrabberTopSpacing:(double)arg1 ;
-(void)_setPreferredCornerRadius:(double)arg1 ;
-(void)_sheetLayoutInfoDidInvalidateOutput:(id)arg1 ;
-(void)_accessibilityReduceMotionStatusDidChange;
-(_UIRemoteViewController *)_expectedRemoteViewController;
-(void)_setRemoteDismissing:(BOOL)arg1 ;
-(void)_updateLayoutInfoContainerSafeAreaInsets;
-(void)_updateLayoutInfoContainerTraitCollection;
-(void)_updateShouldPresentedViewControllerControlStatusBarAppearance;
-(_UIRemoteViewController *)_connectedRemoteViewController;
-(UIDimmingView *)_confinedDimmingView;
-(_UISheetPresentationController *)_parentSheetPresentationController;
-(_UISheetInteraction *)_sheetInteraction;
-(void)_keyboardAboutToShow:(id)arg1 ;
-(void)_keyboardAboutToHide:(id)arg1 ;
-(void)_keyboardAboutToChangeFrame:(id)arg1 ;
-(void)transitionWillBegin:(BOOL)arg1 ;
-(void)_setKeyboardShown:(BOOL)arg1 ;
-(void)_handleKeyboardNotification:(id)arg1 aboutToHide:(BOOL)arg2 ;
-(BOOL)_isKeyboardShown;
-(void)_setAnimatedTransition:(id)arg1 ;
-(void)_setInteractiveTransition:(id)arg1 ;
-(void)_tryToConnectToRemoteViewController:(id)arg1 ;
-(void)_updatePresentedViewFrame;
-(BOOL)_isDimmingViewTapDismissing;
-(void)_setDimmingViewTapDismissing:(BOOL)arg1 ;
-(_UISheetInteraction *)_sheetInteractionIfLoaded;
-(void)setFrameOfPresentedViewInContainerView:(CGRect)arg1 ;
-(BOOL)_isRemoteDismissing;
-(BOOL)_didTearOff;
-(void)_setShouldPresentedViewControllerControlStatusBarAppearance:(BOOL)arg1 ;
-(void)_updateInteractiveTransitionWithProgress:(double)arg1 ;
-(void)_updateAnimationController;
-(void)_sheetInteractionDidChangeOffset:(CGPoint)arg1 dragging:(BOOL)arg2 deferredDismissible:(/*^block*/id)arg3 indexOfCurrentDetent:(unsigned long long)arg4 duration:(double)arg5 timingCurve:(id)arg6 ;
-(NSUserActivity *)_tearOffActivity;
-(void)_completeInteractiveTransition:(BOOL)arg1 duration:(double)arg2 timingCurve:(id)arg3 ;
-(BOOL)_didAttemptToStartDismiss;
-(void)_startInteractiveTransitionWithProgress:(double)arg1 ;
-(void)_setDidAttemptToStartDismiss:(BOOL)arg1 ;
-(UIViewPropertyAnimator *)_remoteDismissalPropertyAnimator;
-(void)set_remoteDismissalPropertyAnimator:(UIViewPropertyAnimator *)arg1 ;
-(BOOL)_shouldScaleDownBehindDescendantSheets;
-(void)_setShouldScaleDownBehindDescendantSheets:(BOOL)arg1 ;
-(double)_cornerRadiusForPresentationAndDismissal;
-(void)_setCornerRadiusForPresentationAndDismissal:(double)arg1 ;
-(void)_setPresentsAtStandardHalfHeight:(BOOL)arg1 ;
-(void)_setSourceView:(id)arg1 ;
-(void)_resetRemoteDismissing;
-(_UISheetPresentationController *)_childSheetPresentationController;
-(void)_remoteSheetInteractionDidChangeOffset:(CGPoint)arg1 dragging:(BOOL)arg2 dismissible:(BOOL)arg3 indexOfCurrentDetent:(unsigned long long)arg4 duration:(double)arg5 timingCurve:(id)arg6 ;
-(void)_setAllowsTearOff:(BOOL)arg1 ;
-(double)_preferredRecessedCornerRadius;
-(void)_setPreferredRecessedCornerRadius:(double)arg1 ;
-(void)_setDidTearOff:(BOOL)arg1 ;
-(CGPoint)_initialTearOffPoint;
-(void)_setInitialTearOffPoint:(CGPoint)arg1 ;
-(void)_setTearOffActivity:(id)arg1 ;
-(void)_setIsRemote:(BOOL)arg1 ;
-(BOOL)_presentsAtStandardHalfHeight;
-(BOOL)_allowsTearOff;
@end

