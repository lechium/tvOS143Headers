/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIAccessibilityHUDGestureDelegate.h>
#import <UIKitCore/_UIBarPositioningInternal.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <UIKit/UIBarPositioning.h>

@protocol _UINavigationBarDelegatePrivate;
@class _UINavigationBarItemStack, UIColor, _UIViewControllerTransitionContext, _UINavigationBarVisualProvider, _UINavigationBarVisualStyle, UIAccessibilityHUDGestureManager, UINavigationBarAppearance, NSDictionary, NSArray, _UINavigationControllerRefreshControlHost, UIBarButtonItem, UILayoutGuide, _UINavigationItemButtonView, UIView, NSString, UINavigationItem, UIImage;

@interface UINavigationBar : UIView <UIGestureRecognizerDelegate, UIAccessibilityHUDGestureDelegate, _UIBarPositioningInternal, NSCoding, UIBarPositioning> {

	_UINavigationBarItemStack* _stack;
	id<_UINavigationBarDelegatePrivate> _delegate;
	UIColor* _barTintColor;
	id _appearanceStorage;
	long long _animationDisabledCount;
	long long _barStyle;
	long long _barTranslucence;
	_UIViewControllerTransitionContext* _navControllerAnimatingContext;
	_UINavigationBarVisualProvider* _visualProvider;
	_UINavigationBarVisualStyle* _visualStyle;
	UIAccessibilityHUDGestureManager* _axHUDGestureManager;
	NSDirectionalEdgeInsets _resolvedLayoutMargins;
	int _currentPushTransition;
	struct {
		unsigned forceFullHeightInLandscape : 1;
		unsigned isLocked : 1;
		unsigned isIgnoringLock : 1;
		unsigned layoutInProgress : 1;
		unsigned delegateRespondsToFreezeLayoutForDismissalSelector : 1;
		unsigned delegateRespondsToInterfaceOrientationWindowSelector : 1;
	}  _navbarFlags;
	BOOL _wantsLetterpressContent;
	BOOL _prefersLargeTitles;
	BOOL __startedAnimationTracking;
	BOOL _alwaysUseDefaultMetrics;
	long long _barPosition;
	double _requestedMaxBackButtonWidth;
	UIColor* _accessibilityButtonBackgroundTintColor;
	UINavigationBarAppearance* _standardAppearance;
	NSDictionary* _largeTitleTextAttributes;
	UINavigationBarAppearance* _compactAppearance;
	UINavigationBarAppearance* _scrollEdgeAppearance;
	double __overrideBackgroundExtension;
	NSArray* _backgroundEffects;
	long long _requestedContentSize;

}

@property (assign,setter=_setBackIndicatorLeftMargin:,nonatomic) double _backIndicatorLeftMargin; 
@property (nonatomic,readonly) long long _barTranslucence; 
@property (assign,setter=_setOverrideBackgroundExtension:,nonatomic) double _overrideBackgroundExtension;                                                                                        //@synthesize _overrideBackgroundExtension=__overrideBackgroundExtension - In the implementation block
@property (nonatomic,readonly) double _heightForRestoringFromCancelledTransition; 
@property (assign,setter=_setDeferShadowToSearchBar:,nonatomic) BOOL _deferShadowToSearchBar; 
@property (nonatomic,readonly) NSArray * _animationIds; 
@property (nonatomic,readonly) BOOL _startedAnimationTracking;                                                                                                                                   //@synthesize _startedAnimationTracking=__startedAnimationTracking - In the implementation block
@property (nonatomic,readonly) _UINavigationBarItemStack * _stack; 
@property (nonatomic,readonly) double _heightIncludingBackground; 
@property (nonatomic,retain) _UINavigationControllerRefreshControlHost * refreshControlHost; 
@property (assign,setter=_setForceScrollEdgeAppearance:,nonatomic) BOOL _forceScrollEdgeAppearance; 
@property (nonatomic,readonly) BOOL _hasVariableHeight; 
@property (nonatomic,readonly) BOOL _hasFixedMaximumHeight; 
@property (setter=_setStaticNavBarButtonItem:,nonatomic,retain) UIBarButtonItem * _staticNavBarButtonItem; 
@property (getter=_isContentViewHidden,nonatomic,readonly) BOOL _contentViewHidden; 
@property (assign,setter=_setShouldFadeStaticNavBarButton:,getter=_shouldFadeStaticNavBarButton,nonatomic) BOOL _shouldFadeStaticNavBarButton; 
@property (assign,setter=_setStaticNavBarButtonLingers:,getter=_staticNavBarButtonLingers,nonatomic) BOOL _staticNavBarButtonLingers; 
@property (getter=_isAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange,nonatomic,readonly) BOOL _animatingNavItemContentLayoutGuideForStaticButtonVisibilityChange; 
@property (nonatomic,readonly) double _navItemContentLayoutGuideAnimationDistance; 
@property (nonatomic,copy) NSArray * backgroundEffects;                                                                                                                                          //@synthesize backgroundEffects=_backgroundEffects - In the implementation block
@property (assign,nonatomic) long long requestedContentSize;                                                                                                                                     //@synthesize requestedContentSize=_requestedContentSize - In the implementation block
@property (nonatomic,readonly) long long currentContentSize; 
@property (nonatomic,readonly) UILayoutGuide * _userContentGuide; 
@property (nonatomic,readonly) int state; 
@property (assign,getter=isLocked,nonatomic) BOOL locked; 
@property (nonatomic,readonly) _UINavigationItemButtonView * currentBackButton; 
@property (nonatomic,readonly) UIView * currentLeftView; 
@property (nonatomic,readonly) UIView * currentRightView; 
@property (nonatomic,readonly) BOOL isMinibar; 
@property (assign,nonatomic) BOOL forceFullHeightInLandscape; 
@property (assign,setter=_setUseInlineBackgroundHeightWhenLarge:,nonatomic) BOOL _useInlineBackgroundHeightWhenLarge; 
@property (assign,setter=_setBackgroundOpacity:,nonatomic) double _backgroundOpacity; 
@property (assign,setter=_setTitleOpacity:,nonatomic) double _titleOpacity; 
@property (assign,setter=_setAlwaysUseDefaultMetrics:,nonatomic) BOOL alwaysUseDefaultMetrics;                                                                                                   //@synthesize alwaysUseDefaultMetrics=_alwaysUseDefaultMetrics - In the implementation block
@property (assign,setter=_setHidesShadow:,nonatomic) BOOL _hidesShadow; 
@property (assign,setter=_setWantsLetterpressContent:,nonatomic) BOOL _wantsLetterpressContent;                                                                                                  //@synthesize wantsLetterpressContent=_wantsLetterpressContent - In the implementation block
@property (setter=_setBackgroundView:,nonatomic,retain) UIView * _backgroundView; 
@property (assign,setter=_setShadowAlpha:,nonatomic) double _shadowAlpha; 
@property (assign,setter=_setDisableBlurTinting:,nonatomic) BOOL _disableBlurTinting; 
@property (nonatomic,retain,readonly) NSString * _backdropViewLayerGroupName; 
@property (assign,setter=_setRequestedMaxBackButtonWidth:,nonatomic) double _requestedMaxBackButtonWidth;                                                                                        //@synthesize requestedMaxBackButtonWidth=_requestedMaxBackButtonWidth - In the implementation block
@property (setter=_setAccessibilityButtonBackgroundTintColor:,nonatomic,retain) UIColor * _accessibilityButtonBackgroundTintColor;                                                               //@synthesize accessibilityButtonBackgroundTintColor=_accessibilityButtonBackgroundTintColor - In the implementation block
@property (assign,nonatomic) long long barStyle;                                                                                                                                                 //@synthesize barStyle=_barStyle - In the implementation block
@property (assign,nonatomic,__weak) id<UINavigationBarDelegate> delegate; 
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent; 
@property (nonatomic,readonly) UINavigationItem * topItem; 
@property (nonatomic,readonly) UINavigationItem * backItem; 
@property (nonatomic,copy) NSArray * items; 
@property (assign,nonatomic) BOOL prefersLargeTitles;                                                                                                                                            //@synthesize prefersLargeTitles=_prefersLargeTitles - In the implementation block
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) UIColor * barTintColor; 
@property (nonatomic,retain) UIImage * shadowImage; 
@property (nonatomic,copy) NSDictionary * titleTextAttributes; 
@property (nonatomic,copy) NSDictionary * largeTitleTextAttributes;                                                                                                                              //@synthesize largeTitleTextAttributes=_largeTitleTextAttributes - In the implementation block
@property (nonatomic,retain) UIImage * backIndicatorImage; 
@property (nonatomic,retain) UIImage * backIndicatorTransitionMaskImage; 
@property (nonatomic,copy) UINavigationBarAppearance * standardAppearance;                                                                                                                       //@synthesize standardAppearance=_standardAppearance - In the implementation block
@property (nonatomic,copy) UINavigationBarAppearance * compactAppearance;                                                                                                                        //@synthesize compactAppearance=_compactAppearance - In the implementation block
@property (nonatomic,copy) UINavigationBarAppearance * scrollEdgeAppearance;                                                                                                                     //@synthesize scrollEdgeAppearance=_scrollEdgeAppearance - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long barPosition;                                                                                                                                            //@synthesize barPosition=_barPosition - In the implementation block
+(CGSize)defaultSize;
+(void)_setUseCustomBackButtonAction:(BOOL)arg1 ;
+(CGSize)defaultSizeForOrientation:(long long)arg1 ;
+(double)defaultAnimationDuration;
+(BOOL)_useCustomBackButtonAction;
+(BOOL)_requiresModernVisualProvider;
+(id)_defaultVisualStyleForOrientation:(long long)arg1 ;
+(BOOL)_forceLegacyVisualProvider;
+(id)_statusBarBaseTintColorForStyle:(long long)arg1 translucent:(BOOL)arg2 tintColor:(id)arg3 backgroundImage:(id)arg4 viewSize:(CGSize)arg5 ;
+(id)_visualProviderForNavigationBar:(id)arg1 ;
+(BOOL)_supportsCanvasView;
+(CGSize)defaultSizeWithPromptForOrientation:(long long)arg1 ;
+(id)_statusBarBaseTintColorForStyle:(long long)arg1 translucent:(BOOL)arg2 tintColor:(id)arg3 ;
+(CGSize)defaultSizeWithPrompt;
+(id)defaultPromptFont;
+(void)_initializeForIdiom:(long long)arg1 ;
-(id)smu_backgroundView;
-(void)setLayoutDirection:(long long)arg1 ;
-(void)setLayoutDirection:(long long)arg1 ;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(void)siriui_customizeAppearance;
-(void)_gkApplyTheme:(id)arg1 navbarStyle:(long long)arg2 ;
-(void)_gkApplyTheme:(id)arg1 ;
-(void)_cnui_applyContactStyle;
-(void)_cnui_setHasInvisibleBackground:(BOOL)arg1 ;
-(BOOL)_cnui_hasInvisibleBackground;
-(NSString *)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<UINavigationBarDelegate>)delegate;
-(void)setDelegate:(id<UINavigationBarDelegate>)arg1 ;
-(int)state;
-(NSArray *)items;
-(BOOL)isLocked;
-(_UINavigationBarItemStack *)_stack;
-(void)setFrame:(CGRect)arg1 ;
-(void)setLocked:(BOOL)arg1 ;
-(void)setNeedsLayout;
-(void)setBounds:(CGRect)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)setCenter:(CGPoint)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setItems:(NSArray *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_contentView;
-(UINavigationItem *)backItem;
-(CGSize)intrinsicContentSize;
-(void)setRightMargin:(double)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)prompt;
-(void)setPrompt:(id)arg1 ;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg1 ;
-(UINavigationItem *)topItem;
-(void)showLeftButton:(id)arg1 withStyle:(int)arg2 rightButton:(id)arg3 withStyle:(int)arg4 ;
-(void)_setHidesShadow:(BOOL)arg1 ;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)setBackgroundImage:(id)arg1 forBarMetrics:(long long)arg2 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(void)enableAnimation;
-(void)setTitleTextAttributes:(NSDictionary *)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(void)setStandardAppearance:(UINavigationBarAppearance *)arg1 ;
-(void)setCompactAppearance:(UINavigationBarAppearance *)arg1 ;
-(void)setScrollEdgeAppearance:(UINavigationBarAppearance *)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)updateConstraints;
-(double)defaultHeight;
-(void)addConstraint:(id)arg1 ;
-(void)didMoveToWindow;
-(void)tintColorDidChange;
-(void)layoutMarginsDidChange;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(UIView *)_backgroundView;
-(long long)barStyle;
-(long long)_barStyle;
-(void)invalidateIntrinsicContentSize;
-(NSDictionary *)titleTextAttributes;
-(BOOL)isAnimationEnabled;
-(void)disableAnimation;
-(id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2 ;
-(UIImage *)shadowImage;
-(void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3 ;
-(void)setShadowImage:(UIImage *)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)safeAreaInsetsDidChange;
-(double)_shadowAlpha;
-(BOOL)_hostsLayoutEngineAllowsTAMIC_NO;
-(BOOL)isMinibar;
-(void)removeConstraint:(id)arg1 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg1 ;
-(id)preferredFocusedView;
-(void)setBackgroundEffects:(NSArray *)arg1 ;
-(void)_pushNavigationItem:(id)arg1 transition:(int)arg2 ;
-(id)_popNavigationItemWithTransition:(int)arg1 ;
-(void)_setBackgroundView:(id)arg1 ;
-(void)setButton:(int)arg1 enabled:(BOOL)arg2 ;
-(void)setTitleView:(id)arg1 ;
-(CGSize)defaultSizeForOrientation:(long long)arg1 ;
-(id)_titleTextColor;
-(UINavigationBarAppearance *)scrollEdgeAppearance;
-(UINavigationBarAppearance *)compactAppearance;
-(UINavigationBarAppearance *)standardAppearance;
-(UIView *)currentLeftView;
-(UIView *)currentRightView;
-(void)pushNavigationItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateOpacity;
-(void)_setBackgroundOpacity:(double)arg1 ;
-(double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(BOOL)arg4 ;
-(NSArray *)backgroundEffects;
-(NSString *)_backdropViewLayerGroupName;
-(double)_titleOpacity;
-(void)didAddSubview:(id)arg1 ;
-(void)_setShadowAlpha:(double)arg1 ;
-(void)_setTitleOpacity:(double)arg1 ;
-(id)_accessibility_contentsOfNavigationBar;
-(void)_accessibility_triggerBackButton;
-(void)_accessibility_triggerBarButtonItem:(id)arg1 ;
-(id)promptView;
-(void)_accessibility_navigationBarContentsDidChange;
-(_UINavigationItemButtonView *)currentBackButton;
-(void)setItems:(id)arg1 animated:(BOOL)arg2 ;
-(id)_traitCollectionForChildEnvironment:(id)arg1 ;
-(id)navigationItems;
-(void)setNavigationItems:(id)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldBeginAtPoint:(CGPoint)arg2 ;
-(BOOL)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(CGPoint)arg2 ;
-(void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(CGPoint)arg2 ;
-(UIImage *)backIndicatorImage;
-(void)_accessibilityButtonShapesDidChangeNotification:(id)arg1 ;
-(void)_traitCollectionDidChangeOnSubtreeInternal:(const UITraitCollectionChangeDescription*)arg1 ;
-(UIImage *)backIndicatorTransitionMaskImage;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)_accessibilityButtonShapesParametersDidChange;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(void)_evaluateBackIndicatorForHilightedState:(BOOL)arg1 ofBarButtonItem:(id)arg2 inNavigationItem:(id)arg3 ;
-(long long)_activeBarMetrics;
-(BOOL)_canHandleStatusBarTouchAtLocation:(CGPoint)arg1 ;
-(id)_appearanceStorage;
-(BOOL)_wantsLetterpressContent;
-(long long)_barPosition;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(BOOL)_hidesShadow;
-(void)_customViewChangedForButtonItem:(id)arg1 ;
-(BOOL)_hasLegacyProvider;
-(BOOL)isTranslucent;
-(void)_updateBackIndicatorImage;
-(long long)barPosition;
-(double)_heightIncludingBackground;
-(void)setBackIndicatorImage:(UIImage *)arg1 ;
-(void)setBackIndicatorTransitionMaskImage:(UIImage *)arg1 ;
-(BOOL)_deferShadowToSearchBar;
-(void)_applySPIAppearanceToButtons;
-(void)_setButtonItemTextColor:(id)arg1 shadowColor:(id)arg2 forState:(unsigned long long)arg3 ;
-(void)_updatePalette:(id)arg1 ;
-(long long)_currentBarStyle;
-(void)_updateNavigationBarItemsForStyle:(long long)arg1 ;
-(id)_currentVisualStyle;
-(void)_installDefaultAppearance;
-(void)_upgradeAppearanceAPI;
-(id)_effectiveBarTintColor;
-(void)_effectiveBarTintColorDidChangeWithPreviousColor:(id)arg1 ;
-(void)_propagateEffectiveBarTintColorWithPreviousColor:(id)arg1 ;
-(void)_setNeedsBackgroundViewUpdate;
-(void)_sendNavigationBarDidChangeStyle;
-(BOOL)_isAlwaysHidden;
-(void)_setupAXHUDGestureIfNecessary;
-(long long)_effectiveMetricsForMetrics:(long long)arg1 ;
-(double)defaultHeightForMetrics:(long long)arg1 ;
-(void)setTitleVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2 ;
-(void)_setBackIndicatorLeftMargin:(double)arg1 ;
-(void)_commonNavBarInit;
-(void)_setDecodedItems:(id)arg1 ;
-(void)_reenableUserInteraction;
-(id)_defaultTitleFontWithScaleAdjustment:(double)arg1 ;
-(id)_defaultTitleFontFittingHeight:(double)arg1 withScaleAdjustment:(double)arg2 ;
-(void)_disableAnimation;
-(id)_effectiveDelegate;
-(void)_pushNavigationItem:(id)arg1 transitionAssistant:(id)arg2 ;
-(BOOL)_isAnimationEnabled;
-(void)updatePrompt;
-(void)_enableAnimation;
-(void)_pushNavigationItemUsingCurrentTransition:(id)arg1 ;
-(void)_performUpdatesIgnoringLock:(/*^block*/id)arg1 ;
-(void)_cancelInteractiveTransition;
-(void)_completePushOperationAnimated:(BOOL)arg1 transitionAssistant:(id)arg2 ;
-(void)_popNavigationItemWithTransitionAssistant:(id)arg1 ;
-(void)_completePopOperationAnimated:(BOOL)arg1 transitionAssistant:(id)arg2 ;
-(int)_transitionForOldItems:(id)arg1 newItems:(id)arg2 ;
-(void)_setItems:(id)arg1 transition:(int)arg2 ;
-(void)_setItems:(id)arg1 transition:(int)arg2 reset:(BOOL)arg3 resetOwningRelationship:(BOOL)arg4 ;
-(BOOL)_didVisibleItemsChangeWithNewItems:(id)arg1 oldItems:(id)arg2 ;
-(void)_setBarStyle:(long long)arg1 ;
-(void)_addItem:(id)arg1 withEffectiveDelegate:(id)arg2 transition:(int)arg3 ;
-(BOOL)forceFullHeightInLandscape;
-(BOOL)_canShowBackgroundEffects;
-(long long)currentContentSize;
-(void)_setBackIndicatorPressed:(BOOL)arg1 initialPress:(BOOL)arg2 ;
-(void)_willMoveToWindow:(id)arg1 ;
-(BOOL)_shouldShowBackButtonForScreen:(id)arg1 ;
-(void)_setBarPosition:(long long)arg1 ;
-(void)_configurePaletteConstraintsIfNecessary;
-(void)_updateNavigationBarItem:(id)arg1 forStyle:(long long)arg2 previousTintColor:(id)arg3 ;
-(void)_updateNavigationBarItemsForStyle:(long long)arg1 previousTintColor:(id)arg2 ;
-(void)_updatePaletteBackgroundIfNecessary;
-(BOOL)_titleAutoresizesToFit;
-(BOOL)_hasBackButton;
-(id)_currentLeftViews;
-(id)_currentRightViews;
-(BOOL)supportsRefreshControlHosting;
-(void)setRefreshControlHost:(_UINavigationControllerRefreshControlHost *)arg1 ;
-(_UINavigationControllerRefreshControlHost *)refreshControlHost;
-(BOOL)_shouldShowBackButtonForNavigationItem:(id)arg1 ;
-(id)_backButtonForBackItem:(id)arg1 topItem:(id)arg2 ;
-(void)_setPrompt:(id)arg1 ;
-(id)_accessibility_navigationController;
-(CGRect)_incomingNavigationBarFrame;
-(id)_effectiveBackgroundEffects;
-(id)backgroundImageForBarMetrics:(long long)arg1 ;
-(UIColor *)_accessibilityButtonBackgroundTintColor;
-(void)_barSizeDidChange:(CGSize)arg1 ;
-(id)_allViews;
-(long long)effectiveInterfaceOrientation;
-(void)_updateActiveBarMetrics;
-(id)popNavigationItemAnimated:(BOOL)arg1 ;
-(void)_removeContentClippingView;
-(void)_installContentClippingView:(id)arg1 ;
-(void)_refreshBackButtonMenu;
-(UIBarButtonItem *)_staticNavBarButtonItem;
-(void)_sendNavigationPopForBackBarButtonItem:(id)arg1 ;
-(BOOL)_useInlineBackgroundHeightWhenLarge;
-(void)_setUseInlineBackgroundHeightWhenLarge:(BOOL)arg1 ;
-(double)_backgroundOpacity;
-(BOOL)_disableBlurTinting;
-(void)_setDisableBlurTinting:(BOOL)arg1 ;
-(void)_setBackgroundImage:(id)arg1 mini:(id)arg2 ;
-(void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned long long)arg3 ;
-(void)_setBackButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned long long)arg3 ;
-(void)_setButtonItemTextColor:(id)arg1 shadowColor:(id)arg2 ;
-(void)_setPressedButtonItemTextColor:(id)arg1 shadowColor:(id)arg2 ;
-(void)_setButtonTextShadowOffset:(CGSize)arg1 ;
-(void)_setReversesButtonTextShadowOffsetWhenPressed:(BOOL)arg1 ;
-(id)_backgroundViewForPalette:(id)arg1 ;
-(void)_palette:(id)arg1 isAttaching:(BOOL)arg2 didComplete:(BOOL)arg3 ;
-(long long)_barTranslucence;
-(void)_setBackdropViewLayerGroupName:(id)arg1 ;
-(void)_setWantsLetterpressContent:(BOOL)arg1 ;
-(double)_backIndicatorLeftMargin;
-(double)_effectiveBackIndicatorLeftMargin;
-(UILayoutGuide *)_userContentGuide;
-(long long)_itemStackCount;
-(void)_setAccessibilityButtonBackgroundTintColor:(id)arg1 ;
-(double)titleVerticalPositionAdjustmentForBarMetrics:(long long)arg1 ;
-(void)_setDeferShadowToSearchBar:(BOOL)arg1 ;
-(void)_setAlwaysUseDefaultMetrics:(BOOL)arg1 ;
-(double)defaultBackButtonAlignmentHeight;
-(BOOL)_subclassImplementsDrawRect;
-(id)_defaultTitleFont;
-(NSArray *)_animationIds;
-(void)_beginInteractiveTransition;
-(void)_updateInteractiveTransition:(double)arg1 ;
-(void)_finishInteractiveTransition:(double)arg1 completionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(void)_cancelInteractiveTransition:(double)arg1 completionSpeed:(double)arg2 completionCurve:(long long)arg3 ;
-(double)_heightForRestoringFromCancelledTransition;
-(void)pushNavigationItem:(id)arg1 ;
-(void)_popNestedNavigationItem;
-(void)_pushNestedNavigationItem:(id)arg1 ;
-(void)popNavigationItem;
-(void)_redisplayItems;
-(void)_displayItemsKeepingOwningNavigationBar:(id)arg1 ;
-(void)_setItems:(id)arg1 transition:(int)arg2 reset:(BOOL)arg3 ;
-(void)_setItemsUpToItem:(id)arg1 transition:(int)arg2 ;
-(void)_addItems:(id)arg1 withEffectiveDelegate:(id)arg2 transition:(int)arg3 ;
-(void)setRequestedContentSize:(long long)arg1 ;
-(void)setPrefersLargeTitles:(BOOL)arg1 ;
-(void)setLargeTitleTextAttributes:(NSDictionary *)arg1 ;
-(SCD_Struct_UI25)_layoutHeightsForNavigationItem:(id)arg1 fittingWidth:(double)arg2 ;
-(id)_restingHeights;
-(BOOL)_heightDependentOnOrientation;
-(NSDirectionalEdgeInsets)_resolvedLayoutMargins;
-(NSDirectionalEdgeInsets)_resolvedLargeTitleMargins;
-(NSDirectionalEdgeInsets)_resolvedSearchBarMargins;
-(void)_cancelInProgressPushOrPop;
-(id)navigationItemAtPoint:(CGPoint)arg1 ;
-(void)_reenableUserInteractionWhenReadyWithContext:(id)arg1 ;
-(BOOL)_allowInteractionDuringTransition;
-(void)popForCarplayPressAtFakePoint:(CGPoint)arg1 ;
-(id)animationFactory;
-(long long)_statusBarStyle;
-(void)setForceFullHeightInLandscape:(BOOL)arg1 ;
-(id)buttonItemShadowColor;
-(id)buttonItemTextColor;
-(UIColor *)barTintColor;
-(void)setTitleAutoresizesToFit:(BOOL)arg1 ;
-(BOOL)titleAutoresizesToFit;
-(void)_updateTitleViewIfTop:(id)arg1 ;
-(BOOL)_forceScrollEdgeAppearance;
-(void)_setForceScrollEdgeAppearance:(BOOL)arg1 ;
-(BOOL)_hasVariableHeight;
-(BOOL)_hasFixedMaximumHeight;
-(void)_animateForSearchPresentation:(BOOL)arg1 ;
-(void)_presentHostedSearchWithTransitionCoordinator:(id)arg1 ;
-(void)_dismissHostedSearchWithTransitionCoordinator:(id)arg1 ;
-(BOOL)_delegateWantsNavigationBarHidden;
-(void)_sendResizeForPromptChange;
-(void)_sendNavigationBarResize;
-(void)_sendNavigationBarAnimateTransition;
-(CGRect)promptBounds;
-(long long)animationDisabledCount;
-(void)drawBackgroundInRect:(CGRect)arg1 withStyle:(long long)arg2 ;
-(void)drawBackButtonBackgroundInRect:(CGRect)arg1 withStyle:(long long)arg2 pressed:(BOOL)arg3 ;
-(void)showButtonsWithLeftTitle:(id)arg1 rightTitle:(id)arg2 ;
-(void)showButtonsWithLeftTitle:(id)arg1 rightTitle:(id)arg2 leftBack:(BOOL)arg3 ;
-(void)showButtonsWithLeft:(id)arg1 right:(id)arg2 leftBack:(BOOL)arg3 ;
-(void)_updateContentIfTopItem:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateBackButtonVisibilityIfTop:(id)arg1 animated:(BOOL)arg2 ;
-(id)createButtonWithContents:(id)arg1 width:(double)arg2 barStyle:(long long)arg3 buttonStyle:(int)arg4 isRight:(BOOL)arg5 ;
-(void)hideButtons;
-(void)showBackButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_getBackgroundImage:(id*)arg1 shouldRespectOversizedBackgroundImage:(BOOL*)arg2 actualBarMetrics:(long long*)arg3 actualBarPosition:(long long*)arg4 ;
-(BOOL)_suppressBackIndicator;
-(CGRect)availableTitleArea;
-(void)_fadeAllViewsOut;
-(void)_fadeAllViewsIn;
-(void)_setAutoAdjustTitle:(BOOL)arg1 ;
-(long long)_backgroundBackdropStyle;
-(void)_setStaticNavBarButtonItem:(id)arg1 ;
-(BOOL)_isContentViewHidden;
-(void)_setNeedsStaticNavBarButtonUpdate;
-(void)_setShouldFadeStaticNavBarButton:(BOOL)arg1 ;
-(BOOL)_shouldFadeStaticNavBarButton;
-(void)_setStaticNavBarButtonLingers:(BOOL)arg1 ;
-(BOOL)_staticNavBarButtonLingers;
-(void)_beginAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
-(BOOL)_isAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
-(double)_navItemContentLayoutGuideAnimationDistance;
-(BOOL)_updateNavItemContentLayoutGuideAnimationConstraintConstant:(double)arg1 ;
-(void)_endAnimatingNavItemContentLayoutGuideForStaticButtonVisibilityChange;
-(long long)_sceneDraggingBehaviorOnPan;
-(double)_requestedMaxBackButtonWidth;
-(void)_setRequestedMaxBackButtonWidth:(double)arg1 ;
-(BOOL)prefersLargeTitles;
-(NSDictionary *)largeTitleTextAttributes;
-(double)_overrideBackgroundExtension;
-(void)_setOverrideBackgroundExtension:(double)arg1 ;
-(BOOL)_startedAnimationTracking;
-(long long)requestedContentSize;
-(BOOL)alwaysUseDefaultMetrics;
-(id)backButtonViewAtPoint:(CGPoint)arg1 ;
-(void)_uikit_applyValueFromTraitStorage:(id)arg1 forKeyPath:(id)arg2 ;
-(BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long*)arg1 ;
-(double)_defaultAutolayoutSpacing;
@end

