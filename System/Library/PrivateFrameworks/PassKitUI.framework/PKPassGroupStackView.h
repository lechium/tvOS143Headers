/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <libobjc.A.dylib/PKPassGroupViewDelegate.h>
#import <libobjc.A.dylib/PKPassDeleteAnimationControllerDelegate.h>
#import <libobjc.A.dylib/PKPaymentServiceDelegate.h>
#import <libobjc.A.dylib/PKPassFooterViewDelegate.h>
#import <libobjc.A.dylib/PKDashboardPassViewControllerDelegate.h>
#import <libobjc.A.dylib/PKPassDeleteHandler.h>
#import <libobjc.A.dylib/PKPassGroupViewReceiver.h>

@protocol OS_dispatch_source, PKPassGroupStackViewDatasource;
@class PKPassGroupView, NSMutableArray, NSMutableDictionary, PKPGSVSectionHeaderContext, PKPGSVTransitionInterstitialView, UIView, UIImageView, NSObject, PKPassDeleteAnimationController, PKReusablePassViewQueue, NSTimer, PKPaymentService, PKPassFooterView, PKPassthroughView, PKSecureElement, NSNumber, PKNavigationDashboardPassViewController, PKPass, PKBackdropView, _UIDynamicValueAnimation, PKDiscoveryDataSource, PKGroupsController, UIColor, NSString;

@interface PKPassGroupStackView : UIScrollView <PKPassGroupViewDelegate, PKPassDeleteAnimationControllerDelegate, PKPaymentServiceDelegate, PKPassFooterViewDelegate, PKDashboardPassViewControllerDelegate, PKPassDeleteHandler, PKPassGroupViewReceiver> {

	PKPassGroupView* _modallyPresentedGroupView;
	NSMutableArray* _passPileViews;
	unsigned long long _modalGroupIndex;
	long long _scrollingTestState;
	int _currentTestReps;
	long long _presentationState;
	NSMutableDictionary* _groupViewsByGroupID;
	PKPGSVSectionHeaderContext* _paymentHeaderContext;
	PKPGSVSectionHeaderContext* _passHeaderContext;
	PKPGSVTransitionInterstitialView* _leadingInterstitialItemView;
	PKPGSVTransitionInterstitialView* _trailingInterstitialItemView;
	double _footerAnimationDelay;
	UIView* _footerView;
	double _footerViewMinimumHeight;
	UIImageView* _footerPocketBackgroundShadow;
	UIImageView* _footerPocketForegroundShadow;
	double _bottomContentSeparatorVisibility;
	NSObject*<OS_dispatch_source> _bottomContentSeparatorVisibilityTimer;
	SCD_Struct_PK17 _layoutState;
	CGSize _lastBoundsSize;
	UIEdgeInsets _lastBoundsInsets;
	double _lastTopContentSeparatorHeight;
	PKPassDeleteAnimationController* _deleteAnimationController;
	/*^block*/id _transitionCanceller;
	long long _nextState;
	long long _priorState;
	NSMutableArray* _transitionCompletionHandlers;
	unsigned _externalPresentationTag;
	unsigned _interstitialTag;
	BOOL _hasSuspendedTransition;
	long long _suspendedNextState;
	NSMutableArray* _suspendedTransitionCompletionHandlers;
	PKReusablePassViewQueue* _reusableCardViewQueue;
	PKPassGroupView* _reorderedGroupView;
	unsigned long long _initialIndexOfReorderedGroup;
	unsigned long long _previousIndexOfReorderedGroup;
	CGPoint _reorderedGroupViewPositionInFrame;
	CGPoint _panningVelocity;
	NSTimer* _autoscrollTimer;
	struct {
		unsigned isReordering : 1;
		unsigned isReorderPeekCompensated : 1;
		unsigned hasScrolledUp : 1;
		unsigned hasScrolledDown : 1;
	}  _reorderingFlags;
	NSMutableArray* _reorderActions;
	unsigned long long _reorderActionTag;
	NSMutableDictionary* _groupViewsInFlightByGroupID;
	unsigned _userInteractionCounter;
	NSMutableDictionary* _animatorsByGroupID;
	PKPaymentService* _paymentService;
	PKPassFooterView* _passFooterView;
	BOOL _passFooterViewVisible;
	double _passFooterViewAlpha;
	unsigned _passFooterViewOutstandingAnimations;
	unsigned _passFooterViewVisibilityToken;
	BOOL _invalidated;
	PKPassthroughView* _headerContainerView;
	PKPassthroughView* _subheaderContainerView;
	PKPassthroughView* _passContainerView;
	PKSecureElement* _secureElement;
	BOOL _delegateWantsTopContentSeparation;
	BOOL _delegateWantsBottomContentSeparation;
	BOOL _wantsBacklightRamping;
	NSNumber* _featuredGroupID;
	PKNavigationDashboardPassViewController* _externalVC;
	PKPassGroupView* _loanedGroupView;
	long long _pressedGroupViewIndex;
	double _modalGroupViewVelocity;
	BOOL _modalGroupViewDragging;
	PKPass* _passToBeDeletedExternally;
	double _timeBackdropViewLastPresented;
	PKBackdropView* _backdropView;
	BOOL _isHidingBackdropView;
	BOOL _isPresentingBackdropView;
	_UIDynamicValueAnimation* _panningAnimation;
	BOOL _effectivePaused;
	BOOL _footerSuppressed;
	BOOL _externalFooterSuppressed;
	BOOL _staggerPileAnimations;
	BOOL _paused;
	id<PKPassGroupStackViewDatasource> _datasource;
	PKDiscoveryDataSource* _discoveryDatasource;
	PKGroupsController* _groupsController;
	long long _coachingState;
	UIColor* _pageIndicatorTintColor;
	UIColor* _currentPageIndicatorTintColor;
	double _topContentSeparatorHeight;

}

@property (assign,nonatomic,__weak) id<PKPassGroupStackViewDelegate><UIScrollViewDelegate> delegate; 
@property (assign,nonatomic,__weak) id<PKPassGroupStackViewDatasource> datasource;                                //@synthesize datasource=_datasource - In the implementation block
@property (assign,nonatomic) long long presentationState;                                                         //@synthesize presentationState=_presentationState - In the implementation block
@property (assign,nonatomic) unsigned long long modalGroupIndex;                                                  //@synthesize modalGroupIndex=_modalGroupIndex - In the implementation block
@property (assign,nonatomic) long long pilingMode; 
@property (nonatomic,retain) PKDiscoveryDataSource * discoveryDatasource;                                         //@synthesize discoveryDatasource=_discoveryDatasource - In the implementation block
@property (nonatomic,retain) PKGroupsController * groupsController;                                               //@synthesize groupsController=_groupsController - In the implementation block
@property (assign,nonatomic) BOOL footerSuppressed;                                                               //@synthesize footerSuppressed=_footerSuppressed - In the implementation block
@property (assign,nonatomic) BOOL externalFooterSuppressed;                                                       //@synthesize externalFooterSuppressed=_externalFooterSuppressed - In the implementation block
@property (nonatomic,readonly) PKPass * modalGroupFrontmostPass; 
@property (nonatomic,readonly) BOOL isReordering; 
@property (nonatomic,readonly) BOOL isPresentingPassViewFront; 
@property (nonatomic,readonly) double pileHeight; 
@property (nonatomic,readonly) BOOL isModallyPresentedPassAuthorized; 
@property (nonatomic,readonly) long long coachingState;                                                           //@synthesize coachingState=_coachingState - In the implementation block
@property (nonatomic,copy) UIColor * pageIndicatorTintColor;                                                      //@synthesize pageIndicatorTintColor=_pageIndicatorTintColor - In the implementation block
@property (nonatomic,copy) UIColor * currentPageIndicatorTintColor;                                               //@synthesize currentPageIndicatorTintColor=_currentPageIndicatorTintColor - In the implementation block
@property (assign,nonatomic) double topContentSeparatorHeight;                                                    //@synthesize topContentSeparatorHeight=_topContentSeparatorHeight - In the implementation block
@property (assign,nonatomic) BOOL staggerPileAnimations;                                                          //@synthesize staggerPileAnimations=_staggerPileAnimations - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                                         //@synthesize paused=_paused - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)backgroundColor;
+(id)backdropStartBackgroundColor;
+(id)backdropEndBackgroundColor;
-(void)dealloc;
-(void)invalidate;
-(void)setDelegate:(id<PKPassGroupStackViewDelegate><UIScrollViewDelegate>)arg1 ;
-(BOOL)isPaused;
-(void)setPaused:(BOOL)arg1 ;
-(void)reloadData;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)presentationState;
-(void)setPresentationState:(long long)arg1 ;
-(void)_stopAutoscrollTimer;
-(id<PKPassGroupStackViewDatasource>)datasource;
-(void)setDatasource:(id<PKPassGroupStackViewDatasource>)arg1 ;
-(CGSize)_contentSize;
-(void)layoutSubviews;
-(unsigned long long)_lastIndex;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)safeAreaInsetsDidChange;
-(void)didUpdateDefaultPaymentPassWithUniqueIdentifier:(id)arg1 ;
-(BOOL)isReordering;
-(void)_updateContentSize;
-(void)setCurrentPageIndicatorTintColor:(UIColor *)arg1 ;
-(void)setPageIndicatorTintColor:(UIColor *)arg1 ;
-(long long)coachingState;
-(void)_updatePausedState;
-(void)presentDiff:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateCoachingState;
-(void)presentPassWithUniqueID:(id)arg1 ;
-(void)dashboardPassViewController:(id)arg1 didRequestPaymentForPass:(id)arg2 fromButton:(BOOL)arg3 ;
-(void)resetBrightness;
-(void)evaluateBrightness;
-(void)deleteAnimationController:(id)arg1 didComplete:(BOOL)arg2 ;
-(void)deleteAnimationControllerWillBeginDeleteAnimation:(id)arg1 ;
-(BOOL)handleDeletePassRequestWithPass:(id)arg1 forViewController:(id)arg2 ;
-(void)groupViewIsAvailable:(id)arg1 ;
-(void)groupViewDidMoveToReceiver:(id)arg1 ;
-(void)leadingHeaderViewInterstitialIsAvailable:(id)arg1 ;
-(void)trailingHeaderViewInterstitialIsAvailable:(id)arg1 ;
-(void)groupViewWillBeAvailable:(id)arg1 ;
-(void)groupViewNeedsAnimating:(id)arg1 withVelocity:(double)arg2 dragging:(BOOL)arg3 ;
-(long long)groupViewContentModeForFrontmostPassWhenPiled:(id)arg1 withDefaultContentMode:(long long)arg2 ;
-(unsigned long long)groupViewPassesSuppressedContent:(id)arg1 ;
-(void)willDeletePass:(id)arg1 ;
-(void)didDeletePass:(id)arg1 ;
-(void)groupViewTapped:(id)arg1 ;
-(void)groupViewPressed:(id)arg1 ;
-(void)groupViewPressedDidEnd:(id)arg1 ;
-(BOOL)groupViewShouldAllowPanning:(id)arg1 ;
-(void)groupViewPanDidBegin:(id)arg1 ;
-(void)groupViewPanDidEnd:(id)arg1 ;
-(void)groupView:(id)arg1 panned:(CGPoint)arg2 withVelocity:(CGPoint)arg3 ;
-(void)groupViewDidUpdatePageControlVisibility:(id)arg1 ;
-(void)groupView:(id)arg1 didUpdatePassView:(id)arg2 ;
-(void)groupView:(id)arg1 deleteButtonPressedForPass:(id)arg2 ;
-(BOOL)groupView:(id)arg1 deleteButtonEnabledForPass:(id)arg2 ;
-(void)groupView:(id)arg1 frontmostPassViewDidChange:(id)arg2 withContext:(id)arg3 ;
-(id)groupViewReusablePassViewQueue:(id)arg1 ;
-(void)groupViewExpandButtonTapped:(id)arg1 ;
-(long long)groupViewContentModeForFrontmostPassWhenStacked:(id)arg1 ;
-(void)passFooterViewDidChangePhysicalButtonRequirement:(id)arg1 ;
-(void)passFooterViewDidChangeCoachingState:(id)arg1 ;
-(BOOL)isPassFooterViewInGroup:(id)arg1 ;
-(unsigned long long)suppressedContentForPassFooter:(id)arg1 ;
-(void)passFooterViewDidChangePileSuppressionRequirement:(id)arg1 ;
-(void)passFooterViewDidSucceedAtAuthorization:(id)arg1 ;
-(void)passFooterViewDidEndAuthorization:(id)arg1 ;
-(void)setFooterSuppressed:(BOOL)arg1 ;
-(BOOL)footerSuppressed;
-(void)setGroupsController:(PKGroupsController *)arg1 ;
-(void)setDiscoveryDatasource:(PKDiscoveryDataSource *)arg1 ;
-(void)updateHeaderAndSubheaderViewsIfNecessary;
-(void)tilePassesEagerly:(BOOL)arg1 ;
-(void)setModalGroupIndex:(unsigned long long)arg1 ;
-(void)setTopContentSeparatorHeight:(double)arg1 ;
-(PKPass *)modalGroupFrontmostPass;
-(BOOL)isPresentingPassViewFront;
-(void)layoutContentForCurrentPresentationState:(BOOL)arg1 ;
-(void)noteDidEndScrollingForTesting;
-(void)stageGroupInPresentationState:(long long)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setPresentationState:(long long)arg1 animated:(BOOL)arg2 ;
-(unsigned long long)modalGroupIndex;
-(void)deleteGroup:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)moveGroup:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(BOOL)canPerformPaymentForGroupAtIndex:(unsigned long long)arg1 ;
-(void)setPresentationState:(long long)arg1 withContext:(id)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)modalPresentationIsPending;
-(BOOL)presentedPassCanPerformPayment;
-(BOOL)isModallyPresentedPassAuthorized;
-(id)headerForPassType:(unsigned long long)arg1 ;
-(long long)pilingMode;
-(void)setPilingMode:(long long)arg1 ;
-(void)setTableModalPresentationEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)presentPassWithUniqueID:(id)arg1 withContext:(id)arg2 animated:(BOOL)arg3 ;
-(void)setFooterSuppressed:(BOOL)arg1 withContext:(id)arg2 ;
-(void)setExternalFooterSuppressed:(BOOL)arg1 ;
-(BOOL)isTableModalPresentation;
-(void)updatePeerPaymentFooterViewIfNecessary;
-(PKGroupsController *)groupsController;
-(void)_updateBackdropViewFilters;
-(void)_handleScrollViewPanGesture:(id)arg1 ;
-(void)_paymentDidReceiveSuccessfulTransactionNotification:(id)arg1 ;
-(void)_cancelTransition;
-(void)_cancelSuspendedTransition;
-(void)_executeCompletionHandlers:(id)arg1 cancelled:(BOOL)arg2 ;
-(void)layoutHeaderFootersAnimated:(BOOL)arg1 ;
-(void)_updateContentSizeAndLayout:(BOOL)arg1 forceUpdate:(BOOL)arg2 ;
-(SCD_Struct_PK18)_layoutStateForHeaderContextInTable:(id)arg1 withBounds:(CGRect)arg2 ;
-(CGRect)_xFrameForGroupViewInState:(long long)arg1 ;
-(void)_updateTopContentSeparatorVisibilityAnimated:(BOOL)arg1 ;
-(void)_updateBottomContentSeparatorVisibilityAnimated:(BOOL)arg1 ;
-(double)_nativeYForGroupInTableAtIndex:(unsigned long long)arg1 ;
-(SCD_Struct_PK19)discoveryGalleryLayoutStateForCurrentLayoutState;
-(double)_transformedYForNativeYInTable:(double)arg1 withBounds:(CGRect)arg2 index:(unsigned long long)arg3 ;
-(void)_resumeSuspendedTransition;
-(void)_enumerateLoadedGroupViews:(/*^block*/id)arg1 ;
-(id)_groupViewAtIndex:(unsigned long long)arg1 ;
-(void)_transitionSuccessful:(BOOL)arg1 ;
-(BOOL)_recomputeLayoutState;
-(void)_updateHeaderFooterState:(BOOL)arg1 layout:(BOOL)arg2 ;
-(BOOL)_acquireGroupView:(id)arg1 ;
-(void)_setScrollEnabled:(BOOL)arg1 ;
-(void)_presentOffscreenAnimated:(BOOL)arg1 split:(BOOL)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_tileGroupsForState:(long long)arg1 eager:(BOOL)arg2 ;
-(void)_presentGroupStackViewWithAnimation:(BOOL)arg1 priorBounds:(CGRect)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_loadModalGroupViewAndPresentOffscreenIfNotCached:(BOOL)arg1 ;
-(void)_presentModalGroupView:(id)arg1 withState:(long long)arg2 animated:(BOOL)arg3 context:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_presentPassIngestionWithAnimation:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)_refreshBacklightForFrontmostPassGroup;
-(void)_updatePassFooterViewIfNecessaryWithContext:(id)arg1 becomeVisibleDelay:(double)arg2 ;
-(void)_updatePassFooterViewWithContext:(id)arg1 ;
-(BOOL)_pauseStateForGroupView:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(double)_layoutContentFromOffset:(CGPoint)arg1 toOffset:(CGPoint)arg2 animated:(BOOL)arg3 ;
-(NSRange)_rangeOfVisibleIndexes;
-(id)_loadGroupViewAtIndex:(unsigned long long)arg1 forState:(long long)arg2 presentationState:(long long)arg3 cached:(BOOL*)arg4 ;
-(void)_arrangeGroups;
-(void)_cleanUpAnimatorForGroupView:(id)arg1 ;
-(void)_addPanGestureRecognizerToGroupView:(id)arg1 ;
-(void)_removeGroupViewAsSubviewWithGroupID:(id)arg1 ;
-(void)_updatePassFooterViewWithConfiguration:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 reload:(BOOL)arg4 delay:(double)arg5 ;
-(CGPoint)_positionForGroupView:(id)arg1 atIndex:(unsigned long long)arg2 forState:(long long)arg3 ;
-(void)_updateGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3 ;
-(id)_createStackedIndices;
-(double)_maxYOfPassFrontFaceAtIndex:(unsigned long long)arg1 ;
-(double)_yPositionForGroupAtIndex:(unsigned long long)arg1 forState:(long long)arg2 ;
-(void)_updateTransformForGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3 ;
-(double)_xPositionForGroupView:(id)arg1 forState:(long long)arg2 ;
-(void)_updatePositionForGroupView:(id)arg1 toPosition:(CGPoint)arg2 withSpringFactory:(id)arg3 ;
-(unsigned long long)_indexOfGroupView:(id)arg1 ;
-(void)_updateGroupStateForGroupViewInStackPresentation:(id)arg1 animated:(BOOL)arg2 ;
-(id)_headerContextForPassType:(unsigned long long)arg1 ;
-(double)_pileAscenderHeight;
-(double)_pileBaseHeight;
-(double)_pileSeparationHeight;
-(void)_addGroupViewAsSubview:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(CATransform3D)_transformForGroupView:(id)arg1 atIndex:(unsigned long long)arg2 forState:(long long)arg3 ;
-(NSRange)_rangeOfEagerLoadedIndexes;
-(double)_opacityForGroupAtIndex:(unsigned long long)arg1 forState:(long long)arg2 ;
-(void)_layoutFooterAnimated:(BOOL)arg1 withAnimationDelay:(double)arg2 ;
-(void)_setModalGroupView:(id)arg1 ;
-(CGPoint)_nativePositionForPositionInTable:(CGPoint)arg1 ;
-(unsigned long long)_indexForNativePositionInTable:(CGPoint)arg1 roundToClosestIndex:(BOOL)arg2 ;
-(NSRange)_rangeOfVisibleIndexesIgnoringBottomInset:(BOOL)arg1 ;
-(unsigned long long)_startVisibleIndex;
-(double)_yForGroupInTableAtIndex:(unsigned long long)arg1 ;
-(id)_separatorGroup;
-(unsigned long long)_edgeStylesObscuredByTopMiddleOfPassStyle:(long long)arg1 ;
-(unsigned long long)_edgeStylesObscuredByTopCornersOfPassStyle:(long long)arg1 ;
-(BOOL)_isGroupAtIndexInModalPile:(unsigned long long)arg1 ;
-(double)_setupSpringFactory:(id)arg1 forPileAnimationToPresentationState:(long long)arg2 reverse:(BOOL)arg3 ;
-(void)_generateModalGroupPileWithVisibleIndexes:(NSRange)arg1 reservePlaceForModalGroup:(BOOL)arg2 ;
-(id)_factoryForExternalPresentation;
-(void)_setupSpringFactoryForTableToExternalAnimations:(id)arg1 ;
-(void)_updateGroupStateForGroupViewInModalPresentation:(id)arg1 withState:(long long)arg2 animated:(BOOL)arg3 ;
-(void)_updateModalGroupViewFromTableToExternalPresentationWithFactory:(id)arg1 ;
-(void)_updateGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3 atIndex:(unsigned long long)arg4 ;
-(void)_hideBackdropViewAnimated:(BOOL)arg1 delay:(double)arg2 ;
-(id)_dismissModalGroupViewFromExternalToState:(long long)arg1 ;
-(void)_rampBacklightIfNecessary:(BOOL)arg1 ;
-(BOOL)_shouldTablePresentationScroll;
-(id)_createPassFooterConfigurationForPassView:(id)arg1 withContext:(id)arg2 ;
-(CGRect)_frameForFooterViewForPassView:(id)arg1 ;
-(void)passFooterViewDidChangePhysicalButtonRequirement:(id)arg1 withContext:(id)arg2 ;
-(void)_handleModalGroupGesture:(id)arg1 ;
-(void)_beginGroupPanWithGestureRecognizer:(id)arg1 ;
-(id)_animatorForGestureRecognizer:(id)arg1 ;
-(void)_adjustPassFooterViewOpacityForYOffset:(double)arg1 ;
-(double)_yForGroupInModalPileWithModalGroupY:(double)arg1 ;
-(void)_endGroupPanWithGestureRecognizer:(id)arg1 ;
-(void)_suspendTransition;
-(double)_scaleForGroupView:(id)arg1 atIndex:(unsigned long long)arg2 forState:(long long)arg3 ;
-(BOOL)_updateHeaderContext:(id*)arg1 toContext:(id)arg2 animated:(BOOL)arg3 ;
-(double)_groupCellHeight;
-(id)_groupViewAtIndexWhileEnsuringVisible:(unsigned long long)arg1 withContentMode:(long long)arg2 ;
-(double)_yForModallyPresentedGroup;
-(double)_yForGroupInModalPileAtIndex:(unsigned long long)arg1 ;
-(double)_yForGroupInPileAtIndex:(unsigned long long)arg1 ;
-(double)_yForExternalModallyPresentedGroup;
-(double)_yForGroupInExternalModalPileWithModalGroupY:(double)arg1 ;
-(double)_yForSingleGroupView:(id)arg1 ;
-(double)_lastBarcodePassGroupCellHeight;
-(double)_yForModallyPresentedGroupForExternalPresentation:(BOOL)arg1 ignoringCompactState:(BOOL)arg2 ;
-(BOOL)_isModalPresentationAllowedForSingleGroup;
-(id)_firstHeaderContext;
-(unsigned long long)_maximumNumberOfVisiblePilePasses;
-(double)_scaleForModalPileGroupInExternalPresentation;
-(double)_yForGroupInOffscreenPileAtIndex:(unsigned long long)arg1 ;
-(double)_pileAscenderHeightForGroupViewInPile:(id)arg1 ;
-(double)_scaleForStackGroupInExternalPresentation;
-(double)pileHeight;
-(void)_updatePositionForGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3 atIndex:(unsigned long long)arg4 ;
-(double)_setupSpringFactoryForExternalToTableAnimations:(id)arg1 ;
-(double)_setupSpringFactoryForPileAnimations:(id)arg1 withMaximumAcceleration:(double)arg2 reverse:(BOOL)arg3 ;
-(void)_autoscrollForReordering:(id)arg1 ;
-(void)_reorderPositionChangedForReorderedGroupViewWithVelocity:(CGPoint)arg1 ;
-(unsigned long long)_indexForNativePositionInTable:(CGPoint)arg1 ;
-(unsigned long long)_indexOfReorderedGroupView;
-(void)_adjustGroupViewsForReordering;
-(void)_animateGroupViewAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 withAnchorView:(id)arg3 insertAbove:(BOOL)arg4 ;
-(void)_reverseEnumerateLoadedGroupViews:(/*^block*/id)arg1 ;
-(void)_autoscrollIfNecessary;
-(double)_setupSpringFactory:(id)arg1 forPileAnimationFromPresentationState:(long long)arg2 toPresentationState:(long long)arg3 reverse:(BOOL)arg4 ;
-(id)_createSortedGroupViewIndexes;
-(id)_groupViewWithGroup:(id)arg1 ;
-(void)_disableScrollingAndNormalizeContentOffset;
-(void)_undoUserReorderWithReorderedGroupView:(id)arg1 ;
-(void)_animateGroupViewForUndo:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)_presentModalGroupViewPostAnimationActions;
-(void)_notifyDelegateOfStateChange:(BOOL)arg1 ;
-(BOOL)_isModalPresentationAllowed;
-(void)_unpressGroupView;
-(void)_setDefaultPaymentPassFromGroupView:(id)arg1 reorderedGroupView:(id)arg2 ;
-(unsigned long long)_tablePresentationNumberOfCellsBeforeStacking;
-(void)_resetBrightness;
-(BOOL)_shouldRampForPass:(id)arg1 ;
-(BOOL)_shouldRampForFrontmostPassView:(id)arg1 ;
-(void)_presentBackdropViewAnimated:(BOOL)arg1 delay:(double)arg2 ;
-(BOOL)_shouldSwitchToTableStateFromExternalDismissal;
-(void)_moveBackdropViewToFront;
-(void)_resetBackdropViewToStart:(BOOL)arg1 ;
-(id)subheaderForPassType:(unsigned long long)arg1 ;
-(void)_updateContentSizeAndLayout:(BOOL)arg1 ;
-(unsigned long long)_tablePresentationNumberOfCellsBeforeHeaderHidden;
-(void)_updatePositionForGroupView:(id)arg1 toPresentationState:(long long)arg2 withSpringFactory:(id)arg3 ;
-(id)_frontmostPastViewForGroupIndex:(unsigned long long)arg1 ;
-(BOOL)_isIngestingPass;
-(void)paymentDeviceDidBecomeAvailable;
-(void)paymentDeviceDidBecomeUnavailable;
-(PKDiscoveryDataSource *)discoveryDatasource;
-(BOOL)externalFooterSuppressed;
-(UIColor *)pageIndicatorTintColor;
-(UIColor *)currentPageIndicatorTintColor;
-(double)topContentSeparatorHeight;
-(BOOL)staggerPileAnimations;
-(void)setStaggerPileAnimations:(BOOL)arg1 ;
-(void)scrollUpTest;
-(void)scrollDownTest;
-(void)scrollNext;
-(void)testGroupSelection;
-(void)testGoModal;
-(void)beginScrollCardListTest;
-(void)beginSelectCardTest;
-(void)gotoBaseTestState;
@end

