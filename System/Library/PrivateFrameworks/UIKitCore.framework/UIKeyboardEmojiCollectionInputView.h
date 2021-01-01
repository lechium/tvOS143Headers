/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKeyboardEmojiKeyView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@protocol UIKBEmojiHitTestResponder;
@class UIKeyboardEmojiCollectionView, UICollectionViewFlowLayout, UIKeyboardEmojiCategory, NSIndexPath, UIKeyboardEmojiGraphicsTraits, UIKBTree, UIResponder, NSString;

@interface UIKeyboardEmojiCollectionInputView : UIKeyboardEmojiKeyView <UICollectionViewDataSource, UICollectionViewDelegate> {

	UIKeyboardEmojiCollectionView* _collectionView;
	UICollectionViewFlowLayout* _flowLayout;
	UIKeyboardEmojiCategory* _category;
	NSIndexPath* _tappedSkinToneEmoji;
	UIKeyboardEmojiGraphicsTraits* _emojiGraphicsTraits;
	BOOL _isDraggingInputView;
	unsigned long long _currentSection;
	BOOL _inputDelegateCanSupportAnimoji;
	BOOL _hasShownAnimojiFirstTimeExperience;
	BOOL _shouldRetryFetchingAnimojiRecents;
	BOOL _useWideAnimojiCell;
	BOOL _hasShownAnimojiCell;
	double _frameInset;
	BOOL _showingVariants;
	long long _selectedVariant;
	long long _currentVariantRow;
	UIKBTree* _selectedPopupKey;
	BOOL _supportsMemoji;
	BOOL _hasCheckedMemojiPreference;
	BOOL _currentlyCheckingMemojiPreference;
	/*^block*/id _completionBlock;
	UIResponder*<UIKBEmojiHitTestResponder> _hitTestResponder;
	NSIndexPath* _selectedIndexPath;

}

@property (nonatomic,copy) id completionBlock;                                                      //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedIndexPath;                                       //@synthesize selectedIndexPath=_selectedIndexPath - In the implementation block
@property (assign) BOOL supportsMemoji;                                                             //@synthesize supportsMemoji=_supportsMemoji - In the implementation block
@property (assign) BOOL hasCheckedMemojiPreference;                                                 //@synthesize hasCheckedMemojiPreference=_hasCheckedMemojiPreference - In the implementation block
@property (assign) BOOL currentlyCheckingMemojiPreference;                                          //@synthesize currentlyCheckingMemojiPreference=_currentlyCheckingMemojiPreference - In the implementation block
@property (assign) UIKeyboardEmojiCategory * category;                                              //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) UIResponder*<UIKBEmojiHitTestResponder> hitTestResponder;              //@synthesize hitTestResponder=_hitTestResponder - In the implementation block
@property (readonly) BOOL isDraggingInputView;                                                      //@synthesize isDraggingInputView=_isDraggingInputView - In the implementation block
@property (assign,nonatomic) NSIndexPath * tappedSkinToneEmoji;                                     //@synthesize tappedSkinToneEmoji=_tappedSkinToneEmoji - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)wantsScreenTraits;
+(BOOL)shouldHighlightEmoji:(id)arg1 ;
-(void)dealloc;
-(void)setCompletionBlock:(id)arg1 ;
-(UIKeyboardEmojiCategory *)category;
-(void)setCategory:(UIKeyboardEmojiCategory *)arg1 ;
-(id)completionBlock;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)setContentScaleFactor:(double)arg1 ;
-(void)didMoveToWindow;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)setSelectedIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)selectedIndexPath;
-(BOOL)handleKeyEvent:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3 ;
-(double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3 ;
-(void)willDisplayModalActionView:(id)arg1 withSubTreeKeyView:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)preferencesControllerChanged:(id)arg1 ;
-(void)dimKeys:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 screenTraits:(id)arg4 ;
-(id)subTreeHitTest:(CGPoint)arg1 ;
-(long long)didInputSubTree:(id)arg1 ;
-(void)setHitTestResponder:(UIResponder*<UIKBEmojiHitTestResponder>)arg1 ;
-(UIResponder*<UIKBEmojiHitTestResponder>)hitTestResponder;
-(void)updateToCategory:(long long)arg1 ;
-(void)updateMemojiPreference;
-(id)treeForCell:(id)arg1 ;
-(void)setTappedSkinToneEmoji:(NSIndexPath *)arg1 ;
-(void)resetSelectionIfNeeded;
-(BOOL)baseStringIsCoupleEmoji:(id)arg1 ;
-(BOOL)skinToneWasUsedForEmoji:(id)arg1 ;
-(NSIndexPath *)tappedSkinToneEmoji;
-(BOOL)_userHasSelectedSkinToneEmoji;
-(id)selectedChildSkinToneEmoji:(id)arg1 ;
-(id)emojiBaseString:(id)arg1 ;
-(void)_setUserHasSelectedSkinToneEmoji:(BOOL)arg1 ;
-(void)shouldDismissModalDisplayView:(id)arg1 ;
-(BOOL)hasCheckedMemojiPreference;
-(void)setSupportsMemoji:(BOOL)arg1 ;
-(void)setHasCheckedMemojiPreference:(BOOL)arg1 ;
-(BOOL)supportsMemoji;
-(BOOL)handleSelectionEvent:(id)arg1 ;
-(BOOL)handleKeyInputForFamilySelector:(id)arg1 ;
-(BOOL)handleKeyInputForVariantSelector:(id)arg1 ;
-(BOOL)handleKeyInputForCollectionViewNavigation:(id)arg1 ;
-(long long)keyCodeForCurrentEnvironmentFromKeyCode:(long long)arg1 ;
-(void)updateHighlightForIndexPath:(id)arg1 scrollIfNeeded:(BOOL)arg2 animateScroll:(BOOL)arg3 ;
-(void)insertSelectedEmoji:(id)arg1 shouldDismissPopover:(BOOL)arg2 ;
-(BOOL)keySupportsVariants:(id)arg1 ;
-(BOOL)_handleInitialSelectionEvent:(id)arg1 ;
-(BOOL)_handleVariantSelectionEvent:(id)arg1 ;
-(BOOL)_handleBaseKeySelectionEvent:(id)arg1 ;
-(BOOL)cellShouldScrollWhenSelectedAtIndexPath:(id)arg1 ;
-(void)updateLastSeenItemForIndexPath:(id)arg1 ;
-(void)updatePreferencesForSelectedEmoji:(id)arg1 ;
-(BOOL)currentlyCheckingMemojiPreference;
-(void)setCurrentlyCheckingMemojiPreference:(BOOL)arg1 ;
-(id)firstFullyVisibleHeader;
-(double)snappedXOffsetForOffset:(double)arg1 scrubbing:(BOOL)arg2 ;
-(BOOL)_shouldShowRecentlyUsedMedia;
-(double)_recentlyUsedMediaRoundedOffset:(double)arg1 recentlyUsedMediaCellWidth:(double)arg2 ;
-(id)itemInRect:(CGRect)arg1 ;
-(long long)indexForPrettyCategoryDisplay:(id)arg1 ;
-(id)emojiBaseFirstCharacterString:(id)arg1 ;
-(BOOL)genderEmojiBaseStringNeedVariantSelector:(id)arg1 ;
-(BOOL)memojiSettingEnabled;
-(long long)updateToCategoryWithOffsetPercentage:(double)arg1 ;
-(BOOL)isDraggingInputView;
@end

