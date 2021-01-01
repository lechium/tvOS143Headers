/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBSplitImageView.h>
#import <UIKit/UIKBCacheableView.h>

@protocol UIKBKeyplaneViewDelegate;
@class UIKBTree, UIKBCacheToken, UIKBKeyViewAnimator, UIKeyboardEmojiKeyDisplayController, UIKBKeyView, NSMutableDictionary, UIKBRenderConfig, UIKBRenderingContext, UIKBRenderFactory, UIKBSplitImageView, UIView, UIKBScreenTraits, NSString;

@interface UIKBKeyplaneView : UIKBSplitImageView <UIKBCacheableView> {

	UIKBTree* _keyplane;
	UIKBTree* _defaultKeyplane;
	UIKBCacheToken* _cacheToken;
	UIKBCacheToken* _defaultKeyplaneCacheToken;
	UIKBKeyViewAnimator* _keyViewAnimator;
	UIKeyboardEmojiKeyDisplayController* _emojiKeyManager;
	UIKBKeyView* _candidateGapView;
	NSMutableDictionary* _subviewIndex;
	NSMutableDictionary* _activeViewIndex;
	NSMutableDictionary* _renderedKeyViews;
	NSMutableDictionary* _delayedDeactivationKeys;
	BOOL _shouldDrawRect;
	UIKBRenderConfig* _renderConfig;
	UIKBRenderingContext* _renderingContext;
	UIKBRenderFactory* _factory;
	UIKBSplitImageView* _keyBorders;
	UIKBSplitImageView* _keyBackgrounds;
	UIKBSplitImageView* _keyCaps;
	UIView* _keyplaneMaskView;
	BOOL _suppressDrawing;
	UIKBScreenTraits* _overrideScreenTraits;
	id<UIKBKeyplaneViewDelegate> _delegate;

}

@property (assign,nonatomic) id<UIKBKeyplaneViewDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIKBTree * keyplane;                                                //@synthesize keyplane=_keyplane - In the implementation block
@property (nonatomic,retain) UIKBTree * defaultKeyplane;                                         //@synthesize defaultKeyplane=_defaultKeyplane - In the implementation block
@property (nonatomic,retain) UIKBCacheToken * cacheToken;                                        //@synthesize cacheToken=_cacheToken - In the implementation block
@property (nonatomic,retain) UIKBCacheToken * defaultKeyplaneCacheToken;                         //@synthesize defaultKeyplaneCacheToken=_defaultKeyplaneCacheToken - In the implementation block
@property (nonatomic,retain) UIKBRenderConfig * renderConfig;                                    //@synthesize renderConfig=_renderConfig - In the implementation block
@property (nonatomic,retain) UIKBRenderingContext * renderingContext;                            //@synthesize renderingContext=_renderingContext - In the implementation block
@property (nonatomic,retain) UIKBRenderFactory * factory;                                        //@synthesize factory=_factory - In the implementation block
@property (nonatomic,retain) UIKBKeyViewAnimator * keyViewAnimator;                              //@synthesize keyViewAnimator=_keyViewAnimator - In the implementation block
@property (nonatomic,retain) UIKeyboardEmojiKeyDisplayController * emojiKeyManager;              //@synthesize emojiKeyManager=_emojiKeyManager - In the implementation block
@property (nonatomic,retain) UIKBScreenTraits * overrideScreenTraits;                            //@synthesize overrideScreenTraits=_overrideScreenTraits - In the implementation block
@property (assign,nonatomic) BOOL suppressDrawing;                                               //@synthesize suppressDrawing=_suppressDrawing - In the implementation block
@property (nonatomic,readonly) UIView * keyplaneMaskView;                                        //@synthesize keyplaneMaskView=_keyplaneMaskView - In the implementation block
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) BOOL cacheDeferable; 
@property (nonatomic,readonly) double cachedWidth; 
@property (nonatomic,readonly) BOOL keepNonPersistent; 
@property (nonatomic,readonly) long long assetIdiom; 
@property (nonatomic,readonly) long long cacheDeferPriority; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<UIKBKeyplaneViewDelegate>)delegate;
-(void)setDelegate:(id<UIKBKeyplaneViewDelegate>)arg1 ;
-(void)displayLayer:(id)arg1 ;
-(NSString *)cacheKey;
-(void)removeFromSuperview;
-(UIKBRenderFactory *)factory;
-(void)setContentScaleFactor:(double)arg1 ;
-(void)layoutSubviews;
-(BOOL)_canDrawContent;
-(void)willMoveToWindow:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)prepareForDisplay;
-(id)viewForKey:(id)arg1 ;
-(void)setFactory:(UIKBRenderFactory *)arg1 ;
-(void)setState:(int)arg1 forKey:(id)arg2 ;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(UIKBRenderConfig *)renderConfig;
-(BOOL)_shouldInheritScreenScaleAsContentScaleFactor;
-(void)dimKeys:(id)arg1 ;
-(UIKBKeyViewAnimator *)keyViewAnimator;
-(UIKBTree *)keyplane;
-(UIKBRenderingContext *)renderingContext;
-(void)setRenderingContext:(UIKBRenderingContext *)arg1 ;
-(id)cacheKeysForRenderFlags:(id)arg1 ;
-(BOOL)cacheDeferable;
-(double)cachedWidth;
-(BOOL)keepNonPersistent;
-(long long)assetIdiom;
-(void)drawContentsOfRenderers:(id)arg1 ;
-(long long)cacheDeferPriority;
-(void)purgeKeyViews;
-(BOOL)isPasscodeStyle;
-(void)purgeFactory;
-(void)_generateFactoryIfNeeded;
-(void)_generateRenderingContextIfNeeded;
-(void)_updateKeyplaneMaskView;
-(UIKBCacheToken *)cacheToken;
-(UIKBCacheToken *)defaultKeyplaneCacheToken;
-(BOOL)useDefaultKeyplaneCacheTokenForRenderFlags:(long long)arg1 ;
-(UIKBTree *)defaultKeyplane;
-(unsigned long long)cornerMaskForKey:(id)arg1 recursive:(BOOL)arg2 ;
-(BOOL)suppressDrawing;
-(BOOL)_shouldAllowKey:(id)arg1 ;
-(void)removeKeyFromDelayedDeactivationSet:(id)arg1 ;
-(id)_existingVariantsKeyViewForKey:(id)arg1 ;
-(void)deactivateKey:(id)arg1 previousState:(int)arg2 ;
-(id)containingViewForKey:(id)arg1 withState:(int)arg2 wantsActiveOut:(BOOL*)arg3 ;
-(id)cacheIdentifierForKey:(id)arg1 withState:(int)arg2 ;
-(CGRect)_safeFrameForKeyViewFrame:(CGRect)arg1 inContainer:(id)arg2 forKey:(id)arg3 ;
-(UIKBScreenTraits *)overrideScreenTraits;
-(BOOL)shouldAnimateInKeyView:(id)arg1 ;
-(UIKeyboardEmojiKeyDisplayController *)emojiKeyManager;
-(void)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(CGPoint)arg2 ;
-(void)retestForTouchUpSelectedVariantIndexForKey:(id)arg1 atPoint:(CGPoint)arg2 ;
-(BOOL)shouldAnimateOutKeyView:(id)arg1 ;
-(void)cancelDelayedDeactivation;
-(void)deactivateKeys;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 ;
-(BOOL)validForKeyplane:(id)arg1 withVisualStyle:(int)arg2 ;
-(void)addKeyToDelayedDeactivationSet:(id)arg1 ;
-(id)cacheIdentifierForKey:(id)arg1 ;
-(int)stateForKey:(id)arg1 ;
-(id)activeKeyViews;
-(void)updateFrameForKey:(id)arg1 ;
-(id)viewForKey:(id)arg1 state:(int)arg2 ;
-(void)deactivateAdaptiveKey:(id)arg1 ;
-(void)hideKeyCaps:(BOOL)arg1 ;
-(void)activateKeys;
-(void)purgeActiveKeyViews;
-(void)purgeSubviews;
-(void)purgeLayerContents;
-(UIView *)keyplaneMaskView;
-(void)setKeyplane:(UIKBTree *)arg1 ;
-(void)setDefaultKeyplane:(UIKBTree *)arg1 ;
-(void)setCacheToken:(UIKBCacheToken *)arg1 ;
-(void)setDefaultKeyplaneCacheToken:(UIKBCacheToken *)arg1 ;
-(void)setKeyViewAnimator:(UIKBKeyViewAnimator *)arg1 ;
-(void)setEmojiKeyManager:(UIKeyboardEmojiKeyDisplayController *)arg1 ;
-(void)setOverrideScreenTraits:(UIKBScreenTraits *)arg1 ;
-(void)setSuppressDrawing:(BOOL)arg1 ;
@end

