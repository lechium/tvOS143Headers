/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UISearchBarVisualProvidingDelegate.h>
#import <UIKit/UITextInputTraits_Private.h>
#import <UIKitCore/_UIBarPositioningInternal.h>
#import <UIKitCore/_UINavigationBarAugmentedTitleView.h>
#import <UIKit/UIBarPositioning.h>
#import <UIKit/UITextInputTraits.h>

@protocol UISearchBarDelegateUISearchBarDelegate_Private, _UISearchBarVisualProviding, _UISearchBarSearchContainerLayoutCustomizationDelegate;
@class UISearchBarTextField, UIView, _UINavigationControllerPalette, UISearchController, NSString, NSIndexSet, UIColor, UIImage, UIInputContextHistory, UITextInputPasswordRules, UITapGestureRecognizer, UITextInputTraits, UIButton, UISearchTextField, UITextInputAssistantItem, NSArray;

@interface UISearchBar : UIView <_UISearchBarVisualProvidingDelegate, UITextInputTraits_Private, _UIBarPositioningInternal, _UINavigationBarAugmentedTitleView, UIBarPositioning, UITextInputTraits> {

	id<UISearchBarDelegate><UISearchBarDelegate_Private> _delegate;
	UITapGestureRecognizer* _tapToActivateGestureRecognizer;
	UITextInputTraits* _textInputTraits;
	BOOL _forceLegacyVisual;
	BOOL __supportsDynamicType;
	BOOL __forceCenteredPlaceholderLayout;
	BOOL __transplanting;
	UIView* _inputAccessoryView;
	id<_UISearchBarVisualProviding> _visualProvider;
	id<_UISearchBarSearchContainerLayoutCustomizationDelegate> _searchFieldContainerLayoutCustomizationDelegate;
	Class _classForSearchTextField;
	UISearchController* __searchController;

}

@property (assign,setter=_setForceLegacyVisual:,nonatomic) BOOL _forceLegacyVisual; 
@property (nonatomic,readonly) id<_UISearchBarVisualProviding> _visualProvider;                                                                                                                                           //@synthesize visualProvider=_visualProvider - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets _effectiveContentInset; 
@property (getter=_searchBarTextField,nonatomic,readonly) UISearchBarTextField * searchBarTextField; 
@property (assign,setter=_setSupportsDynamicType:,nonatomic) BOOL _supportsDynamicType;                                                                                                                                   //@synthesize _supportsDynamicType=__supportsDynamicType - In the implementation block
@property (nonatomic,readonly) BOOL _effectivelySupportsDynamicType; 
@property (assign,nonatomic) BOOL _forceCenteredPlaceholderLayout;                                                                                                                                                        //@synthesize _forceCenteredPlaceholderLayout=__forceCenteredPlaceholderLayout - In the implementation block
@property (assign,setter=_setSearchController:,nonatomic) UISearchController * _searchController;                                                                                                                         //@synthesize _searchController=__searchController - In the implementation block
@property (assign,setter=_setTransplanting:,nonatomic) BOOL _transplanting;                                                                                                                                               //@synthesize _transplanting=__transplanting - In the implementation block
@property (assign,setter=_setScopeBarPosition:,nonatomic) unsigned long long _scopeBarPosition; 
@property (assign,setter=_setAllowsInlineScopeBar:,nonatomic) BOOL _allowsInlineScopeBar; 
@property (assign,setter=_setReliesOnNavigationBarBackdrop:,nonatomic) BOOL _reliesOnNavigationBarBackdrop; 
@property (assign,setter=_setHostedByNavigationBar:,getter=_isHostedByNavigationBar,nonatomic) BOOL _hostedByNavigationBar; 
@property (assign,setter=_setSearchFieldContainerLayoutCustomizationDelegate:,nonatomic,__weak) id<_UISearchBarSearchContainerLayoutCustomizationDelegate> _searchFieldContainerLayoutCustomizationDelegate;              //@synthesize searchFieldContainerLayoutCustomizationDelegate=_searchFieldContainerLayoutCustomizationDelegate - In the implementation block
@property (assign,setter=_setAdditionalPaddingForCancelButtonAtLeadingEdge:,nonatomic) double _additionalPaddingForCancelButtonAtLeadingEdge; 
@property (nonatomic,retain,readonly) UIButton * _leftButton; 
@property (setter=_setClassForSearchTextField:,nonatomic,retain) Class _classForSearchTextField;                                                                                                                          //@synthesize classForSearchTextField=_classForSearchTextField - In the implementation block
@property (assign,nonatomic) long long barStyle; 
@property (assign,nonatomic,__weak) id<UISearchBarDelegate> delegate;                                                                                                                                                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * prompt; 
@property (nonatomic,copy) NSString * placeholder; 
@property (assign,nonatomic) BOOL showsBookmarkButton; 
@property (nonatomic,readonly) UISearchTextField * searchTextField; 
@property (assign,nonatomic) BOOL showsCancelButton; 
@property (assign,nonatomic) BOOL showsSearchResultsButton; 
@property (assign,getter=isSearchResultsButtonSelected,nonatomic) BOOL searchResultsButtonSelected; 
@property (nonatomic,readonly) UITextInputAssistantItem * inputAssistantItem; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,retain) UIColor * barTintColor; 
@property (assign,nonatomic) unsigned long long searchBarStyle; 
@property (assign,getter=isTranslucent,nonatomic) BOOL translucent; 
@property (nonatomic,copy) NSArray * scopeButtonTitles; 
@property (assign,nonatomic) long long selectedScopeButtonIndex; 
@property (assign,nonatomic) BOOL showsScopeBar; 
@property (nonatomic,retain) UIView * inputAccessoryView;                                                                                                                                                                 //@synthesize inputAccessoryView=_inputAccessoryView - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage; 
@property (nonatomic,retain) UIImage * scopeBarBackgroundImage; 
@property (assign,nonatomic) UIOffset searchFieldBackgroundPositionAdjustment; 
@property (assign,nonatomic) UIOffset searchTextPositionAdjustment; 
@property (nonatomic,readonly) UIView * _viewForChildViews; 
@property (nonatomic,readonly) _UINavigationControllerPalette * _containingNavigationPalette; 
@property (nonatomic,readonly) long long barPosition; 
@property (nonatomic,readonly) long long _expectedInterfaceOrientation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * recentInputIdentifier; 
@property (assign,nonatomic) NSRange validTextRange; 
@property (nonatomic,copy) NSIndexSet * PINEntrySeparatorIndexes; 
@property (assign,nonatomic) CFCharacterSetRef textTrimmingSet; 
@property (nonatomic,retain) UIColor * insertionPointColor; 
@property (nonatomic,retain) UIColor * selectionBarColor; 
@property (nonatomic,retain) UIColor * selectionHighlightColor; 
@property (nonatomic,retain) UIImage * selectionDragDotImage; 
@property (nonatomic,retain) UIColor * underlineColorForTextAlternatives; 
@property (nonatomic,retain) UIColor * underlineColorForSpelling; 
@property (assign,nonatomic) unsigned long long insertionPointWidth; 
@property (assign,nonatomic) int textLoupeVisibility; 
@property (assign,nonatomic) int textSelectionBehavior; 
@property (assign,nonatomic) id textSuggestionDelegate; 
@property (assign,nonatomic) BOOL isSingleLineDocument; 
@property (assign,nonatomic) BOOL contentsIsSingleValue; 
@property (assign,nonatomic) BOOL hasDefaultContents; 
@property (assign,nonatomic) BOOL acceptsPayloads; 
@property (assign,nonatomic) BOOL acceptsEmoji; 
@property (assign,nonatomic) BOOL acceptsInitialEmojiKeyboard; 
@property (assign,nonatomic) BOOL acceptsDictationSearchResults; 
@property (assign,nonatomic) BOOL useAutomaticEndpointing; 
@property (assign,nonatomic) BOOL showDictationButton; 
@property (assign,nonatomic) BOOL forceEnableDictation; 
@property (assign,nonatomic) BOOL forceDisableDictation; 
@property (assign,nonatomic) BOOL forceDefaultDictationInfo; 
@property (assign,nonatomic) long long forceDictationKeyboardType; 
@property (assign,nonatomic) BOOL preferOnlineDictation; 
@property (assign,nonatomic) int emptyContentReturnKeyType; 
@property (assign,nonatomic) BOOL returnKeyGoesToNextResponder; 
@property (assign,nonatomic) BOOL acceptsFloatingKeyboard; 
@property (assign,nonatomic) BOOL forceFloatingKeyboard; 
@property (assign,nonatomic) UIEdgeInsets floatingKeyboardEdgeInsets; 
@property (assign,nonatomic) BOOL acceptsSplitKeyboard; 
@property (assign,nonatomic) BOOL displaySecureTextUsingPlainText; 
@property (assign,nonatomic) BOOL displaySecureEditsUsingPlainText; 
@property (assign,nonatomic) BOOL learnsCorrections; 
@property (assign,nonatomic) int shortcutConversionType; 
@property (assign,nonatomic) BOOL suppressReturnKeyStyling; 
@property (assign,nonatomic) BOOL useInterfaceLanguageForLocalization; 
@property (assign,nonatomic) BOOL deferBecomingResponder; 
@property (assign,nonatomic) BOOL enablesReturnKeyOnNonWhiteSpaceContent; 
@property (nonatomic,copy) NSString * autocorrectionContext; 
@property (nonatomic,copy) NSString * responseContext; 
@property (nonatomic,retain) UIInputContextHistory * inputContextHistory; 
@property (assign,nonatomic) BOOL disableInputBars; 
@property (assign,nonatomic) BOOL isCarPlayIdiom; 
@property (assign,nonatomic) long long textScriptType; 
@property (assign,nonatomic) BOOL loadKeyboardsForSiriLanguage; 
@property (assign,nonatomic) BOOL disablePrediction; 
@property (assign,nonatomic) BOOL hidePrediction; 
@property (assign,getter=isDevicePasscodeEntry,nonatomic) BOOL devicePasscodeEntry; 
@property (assign,nonatomic) long long autocapitalizationType; 
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType; 
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType; 
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
@property (nonatomic,readonly) BOOL _underlayNavigationBarContent; 
@property (nonatomic,readonly) double _navigationBarContentHeight; 
@property (nonatomic,readonly) double _navigationBarBackButtonMaximumWidth; 
@property (nonatomic,readonly) BOOL _hideNavigationBarBackButton; 
@property (nonatomic,readonly) BOOL _hideNavigationBarLeadingBarButtons; 
@property (nonatomic,readonly) BOOL _hideNavigationBarStandardTitle; 
@property (nonatomic,readonly) BOOL _hideNavigationBarTrailingBarButtons; 
@property (nonatomic,readonly) double _navigationBarBackButtonAlpha; 
@property (nonatomic,readonly) double _navigationBarLeadingBarButtonsAlpha; 
@property (nonatomic,readonly) double _navigationBarTrailingBarButtonsAlpha; 
@property (nonatomic,readonly) long long _preferredAlignment; 
+(void)_initializeForIdiom:(long long)arg1 ;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(void)_cnui_applyContactStyle;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(NSString *)description;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<UISearchBarDelegate>)delegate;
-(void)setDelegate:(id<UISearchBarDelegate>)arg1 ;
-(BOOL)_isEnabled;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(NSString *)placeholder;
-(void)setNeedsLayout;
-(void)setBounds:(CGRect)arg1 ;
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_commonInit;
-(id)textInputTraits;
-(id)_textColor;
-(void)setKeyboardAppearance:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setDrawsBackground:(BOOL)arg1 ;
-(BOOL)drawsBackground;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setPlaceholder:(NSString *)arg1 ;
-(void)insertTextSuggestion:(id)arg1 ;
-(void)setController:(id)arg1 ;
-(id)controller;
-(BOOL)isFirstResponder;
-(CGSize)intrinsicContentSize;
-(void)_setEnabled:(BOOL)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)setTintColor:(UIColor *)arg1 ;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFirstResponder;
-(id)cancelButton;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setCancelButton:(id)arg1 ;
-(id)_cancelButton;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)setTranslucent:(BOOL)arg1 ;
-(void)setBackgroundImage:(id)arg1 forBarMetrics:(long long)arg2 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(UISearchController *)_searchController;
-(void)setBarStyle:(long long)arg1 ;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(void)_setShowsSeparator:(BOOL)arg1 ;
-(BOOL)showsCancelButton;
-(BOOL)canResignFirstResponder;
-(void)didMoveToWindow;
-(void)layoutMarginsDidChange;
-(void)willMoveToWindow:(id)arg1 ;
-(void)bringSubviewToFront:(id)arg1 ;
-(id)_backgroundView;
-(long long)barStyle;
-(id)searchField;
-(id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2 ;
-(void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UIView *)inputAccessoryView;
-(UITextInputAssistantItem *)inputAssistantItem;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(UIEdgeInsets)_effectiveContentInset;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)reloadInputViews;
-(void)takeTraitsFrom:(id)arg1 ;
-(long long)_textInputSource;
-(void)didMoveToSuperview;
-(void)safeAreaInsetsDidChange;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)sendSubviewToBack:(id)arg1 ;
-(id)preferredFocusEnvironments;
-(id)preferredFocusedView;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)setInputAccessoryView:(UIView *)arg1 ;
-(double)_autolayoutSpacingAtEdge:(int)arg1 forAttribute:(long long)arg2 inContainer:(id)arg3 isGuide:(BOOL)arg4 ;
-(UISearchTextField *)searchTextField;
-(UIButton *)_leftButton;
-(void)_deleteButtonPressed;
-(void)_setAutoDisableCancelButton:(BOOL)arg1 ;
-(void)setSearchBarStyle:(unsigned long long)arg1 ;
-(double)_defaultHeight;
-(id)_searchField;
-(unsigned long long)_backdropStyle;
-(id)imageForSearchBarIcon:(long long)arg1 state:(unsigned long long)arg2 ;
-(void)_searchFieldBeginEditing;
-(void)_searchFieldEndEditing;
-(BOOL)showsScopeBar;
-(id<_UISearchBarVisualProviding>)_visualProvider;
-(BOOL)_disableAutomaticKeyboardUI;
-(BOOL)_enableAutomaticKeyboardPressDone;
-(void)setScopeButtonTitles:(NSArray *)arg1 ;
-(void)setShowsScopeBar:(BOOL)arg1 ;
-(void)setSelectedScopeButtonIndex:(long long)arg1 ;
-(void)_setForceLegacyVisual:(BOOL)arg1 ;
-(id)_defaultPromptString;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
-(void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3 ;
-(void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2 ;
-(void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(BOOL)arg3 ;
-(long long)_barPosition;
-(BOOL)isTranslucent;
-(long long)barPosition;
-(void)_setBarPosition:(long long)arg1 ;
-(UIColor *)barTintColor;
-(void)_setDataSource:(id)arg1 navigationItem:(id)arg2 titleLocation:(long long)arg3 ;
-(void)_resetIfNecessaryForNavigationBarHosting:(BOOL)arg1 ;
-(long long)_preferredContentSizeForSize:(long long)arg1 ;
-(void)_contentDidChange;
-(BOOL)_wantsTwoPartTransition;
-(void)_navigationBarTransitionWillBegin:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(void)_performNavigationBarTransition:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(void)_navigationBarTransitionCompleted:(long long)arg1 willBeDisplayed:(BOOL)arg2 ;
-(void)_navigationBarTraitCollectionDidChangeTo:(id)arg1 from:(id)arg2 ;
-(id)_traitCollectionOverridesForNavigationBarTraitCollection:(id)arg1 ;
-(BOOL)_underlayNavigationBarContent;
-(double)_navigationBarContentHeight;
-(double)_navigationBarBackButtonMaximumWidth;
-(BOOL)_hideNavigationBarBackButton;
-(BOOL)_hideNavigationBarLeadingBarButtons;
-(BOOL)_hideNavigationBarStandardTitle;
-(BOOL)_hideNavigationBarTrailingBarButtons;
-(double)_navigationBarBackButtonAlpha;
-(double)_navigationBarLeadingBarButtonsAlpha;
-(double)_navigationBarTrailingBarButtonsAlpha;
-(long long)_preferredAlignment;
-(BOOL)_shouldUseNavigationBarHeight;
-(void)_updateNavigationBarLayoutInsertDataForSearchBar:(id)arg1 collapsibleScopeBar:(id)arg2 forLayoutState:(long long)arg3 ;
-(void)_navigationBarSlideTransitionWillBegin;
-(id)_scopeBar;
-(void)_navigationBarSlideTransitionDidEnd;
-(void)_prepareForTransitionToSearchLayoutState:(long long)arg1 ;
-(BOOL)_usesLegacyVisualProvider;
-(void)_animateTransitionToSearchLayoutState:(long long)arg1 ;
-(void)_completeTransitionToSearchLayoutState:(long long)arg1 ;
-(void)_cancelTransitionToSearchLayoutState:(long long)arg1 ;
-(void)_updateEffectiveContentInset;
-(BOOL)_isHostedByNavigationBar;
-(void)tappedSearchBar:(id)arg1 ;
-(void)_setUpVisualProvider;
-(id)_searchBarTextField;
-(void)setScopeBarBackgroundImage:(UIImage *)arg1 ;
-(void)_setShowsCancelButton:(BOOL)arg1 ;
-(void)setUsesEmbeddedAppearance:(BOOL)arg1 ;
-(BOOL)centerPlaceholder;
-(void)setSearchTextPositionAdjustment:(UIOffset)arg1 ;
-(void)setSearchFieldBackgroundPositionAdjustment:(UIOffset)arg1 ;
-(BOOL)showsBookmarkButton;
-(BOOL)showsSearchResultsButton;
-(BOOL)isSearchResultsButtonSelected;
-(BOOL)usesEmbeddedAppearance;
-(NSArray *)scopeButtonTitles;
-(UIImage *)scopeBarBackgroundImage;
-(UIOffset)searchTextPositionAdjustment;
-(UIOffset)searchFieldBackgroundPositionAdjustment;
-(unsigned long long)searchBarStyle;
-(void)_setCancelButtonText:(id)arg1 ;
-(void)_didUpdateEffectivelySupportsDynamicType;
-(BOOL)_supportsDynamicType;
-(void)_identifyBarContainer;
-(void)_setMaskActive:(BOOL)arg1 ;
-(void)setShowsSearchResultsButton:(BOOL)arg1 ;
-(void)setSearchResultsButtonSelected:(BOOL)arg1 ;
-(void)setShowsBookmarkButton:(BOOL)arg1 ;
-(void)setShowsCancelButton:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setDrawsBackgroundInPalette:(BOOL)arg1 ;
-(BOOL)drawsBackgroundInPalette;
-(void)_setReliesOnNavigationBarBackdrop:(BOOL)arg1 ;
-(void)_setHostedByNavigationBar:(BOOL)arg1 ;
-(void)_setBackdropStyle:(unsigned long long)arg1 ;
-(long long)_expectedInterfaceOrientation;
-(BOOL)_effectivelySupportsDynamicType;
-(double)_defaultHeightForOrientation:(long long)arg1 ;
-(UIView *)_viewForChildViews;
-(BOOL)_containedInNavigationPalette;
-(void)_setShowsScopeBar:(BOOL)arg1 animateOpacity:(BOOL)arg2 ;
-(void)setShowsScopeBar:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setDisableFocus:(BOOL)arg1 ;
-(void)setSearchFieldBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)searchFieldBackgroundImageForState:(unsigned long long)arg1 ;
-(void)setImage:(id)arg1 forSearchBarIcon:(long long)arg2 state:(unsigned long long)arg3 ;
-(BOOL)_ownsInputAccessoryView;
-(BOOL)_hasDarkUIAppearance;
-(void)setCenterPlaceholder:(BOOL)arg1 ;
-(long long)searchFieldLeftViewMode;
-(void)setSearchFieldLeftViewMode:(long long)arg1 ;
-(_UINavigationControllerPalette *)_containingNavigationPalette;
-(Class)_classForSearchTextField;
-(void)_setSearchController:(id)arg1 ;
-(void)_setRequiresLegacyVisualProvider;
-(BOOL)_supportsLayoutStates;
-(void)_setMaskBounds:(CGRect)arg1 ;
-(void)_setSearchFieldContainerLayoutCustomizationDelegate:(id)arg1 ;
-(void)_setAdditionalPaddingForCancelButtonAtLeadingEdge:(double)arg1 ;
-(double)_additionalPaddingForCancelButtonAtLeadingEdge;
-(void)set_cancelButtonText:(id)arg1 ;
-(id)_cancelButtonText;
-(void)_setSupportsDynamicType:(BOOL)arg1 ;
-(void)_setClassForSearchTextField:(Class)arg1 ;
-(void)_setDisableDictationButton:(BOOL)arg1 ;
-(BOOL)_showingDictationButton;
-(BOOL)_reliesOnNavigationBarBackdrop;
-(void)_setAllowsInlineScopeBar:(BOOL)arg1 ;
-(BOOL)_allowsInlineScopeBar;
-(BOOL)_shouldCombineLandscapeBars;
-(BOOL)_shouldCombineLandscapeBarsForOrientation:(long long)arg1 ;
-(BOOL)_wouldCombineLandscapeBarsForSize:(CGSize)arg1 ;
-(BOOL)_searchBarTextFieldShouldBeginEditing;
-(BOOL)_searchBarTextFieldShouldEndEditing;
-(BOOL)_searchBarTextFieldShouldScrollToVisibleWhenBecomingFirstResponder;
-(BOOL)_searchBarTextFieldShouldClear;
-(BOOL)_searchBarTextFieldShouldChangeCharactersInRange:(NSRange)arg1 replacementString:(id)arg2 ;
-(void)_driveTransitionToSearchLayoutState:(long long)arg1 ;
-(double)_barHeightForBarMetrics:(long long)arg1 ;
-(double)_barHeightForBarMetrics:(long long)arg1 barPosition:(long long)arg2 ;
-(double)_scopeBarHeight;
-(id)_makeShadowView;
-(void)_setShadowVisibleIfNecessary:(BOOL)arg1 ;
-(void)_setOverrideContentInsets:(UIEdgeInsets)arg1 forRectEdges:(unsigned long long)arg2 ;
-(void)_getOverrideContentInsets:(UIEdgeInsets*)arg1 overriddenEdges:(unsigned long long*)arg2 ;
-(void)_containerSafeAreaInsetsDidChange:(id)arg1 ;
-(BOOL)_scopeBarIsVisible;
-(UIEdgeInsets)_scopeBarInsets;
-(long long)selectedScopeButtonIndex;
-(void)_setScopeBarHidden:(BOOL)arg1 ;
-(void)_setScopeBarPosition:(unsigned long long)arg1 ;
-(unsigned long long)_scopeBarPosition;
-(void)_presentScopeBarIfNecessary;
-(void)_dismissScopeBarIfNecessary;
-(void)_setShowsScopeBar:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_scopeChanged:(id)arg1 ;
-(id)_separatorImage;
-(void)_setSeparatorImage:(id)arg1 ;
-(void)setScopeBarButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)scopeBarButtonBackgroundImageForState:(unsigned long long)arg1 ;
-(void)setScopeBarButtonDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 ;
-(id)scopeBarButtonDividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 ;
-(void)setScopeBarButtonTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)scopeBarButtonTitleTextAttributesForState:(unsigned long long)arg1 ;
-(void)setPositionAdjustment:(UIOffset)arg1 forSearchBarIcon:(long long)arg2 ;
-(UIOffset)positionAdjustmentForSearchBarIcon:(long long)arg1 ;
-(id)_searchDisplayControllerNavigationItem;
-(id)_animatedAppearanceBarButtonItem;
-(void)_setBackgroundLayoutNeedsUpdate;
-(id)_presentationBackgroundBlurEffectForTraitCollection:(id)arg1 ;
-(id)_colorForComponent:(unsigned long long)arg1 disabled:(BOOL)arg2 ;
-(void)_allowCursorToAppear:(BOOL)arg1 ;
-(void)_updateInsetsForTableView:(id)arg1 ;
-(void)_updateInsetsForCurrentContainerViewAndBarPosition;
-(long long)_barMetricsForOrientation:(long long)arg1 ;
-(void)_setCancelButtonWantsLetterpress;
-(id)_uiktest_placeholderLabelColor;
-(id<_UISearchBarSearchContainerLayoutCustomizationDelegate>)_searchFieldContainerLayoutCustomizationDelegate;
-(BOOL)_forceCenteredPlaceholderLayout;
-(void)set_forceCenteredPlaceholderLayout:(BOOL)arg1 ;
-(BOOL)_transplanting;
-(void)_setTransplanting:(BOOL)arg1 ;
-(BOOL)_forceLegacyVisual;
-(void)_cancelOperation:(id)arg1 ;
-(void)_cancelButtonPressed;
-(void)_searchFieldEditingChanged;
-(BOOL)pretendsIsInBar;
-(void)setPretendsIsInBar:(BOOL)arg1 ;
-(BOOL)_isInBarButNotHosted;
-(void)_setShowsDeleteButton:(BOOL)arg1 ;
-(void)_setupCancelButton;
-(void)_setupCancelButtonWithAppearance:(id)arg1 ;
-(void)_destroyCancelButton;
-(void)_bookmarkButtonPressed;
-(void)_resultsListButtonPressed;
-(void)_searchFieldReturnPressed;
-(void)_searchFieldSelectionChanged;
-(void)_searchFieldTokensChanged;
-(void)_setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)_scopeBarContainerView;
-(void)_updateBackgroundToBackdropStyle:(long long)arg1 ;
-(BOOL)_showsHelperPlaceholder;
-(void)_setHelperPlaceholder:(id)arg1 ;
-(void)_setHelperPlaceholderOverride:(id)arg1 ;
-(void)_setHelperPlaceholderHidden:(BOOL)arg1 ;
-(BOOL)_hasCustomAutolayoutNeighborSpacingForAttribute:(long long*)arg1 ;
-(double)_defaultAutolayoutSpacing;
@end

