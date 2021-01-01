/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKit/UIKeyboardEmojiCategoryUpdateDelegate.h>

@class UIKeyboardEmojiKeyView, UIKeyboardEmojiCategory, NSString;

@interface UIKeyboardEmojiKeyDisplayController : NSObject <UIKeyboardEmojiCategoryUpdateDelegate> {

	UIKeyboardEmojiKeyView* _inputView;
	UIKeyboardEmojiKeyView* _categoryView;
	UIKeyboardEmojiCategory* _lastViewedCategory;

}

@property (nonatomic,retain) UIKeyboardEmojiKeyView * inputView;                 //@synthesize inputView=_inputView - In the implementation block
@property (nonatomic,retain) UIKeyboardEmojiKeyView * categoryView;              //@synthesize categoryView=_categoryView - In the implementation block
@property (assign) UIKeyboardEmojiCategory * lastViewedCategory; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)classForInputView:(long long)arg1 ;
+(Class)classForCategoryControl:(long long)arg1 ;
+(void)writeEmojiDefaultsAndReleaseActiveInputView;
-(id)init;
-(void)dealloc;
-(void)setInputView:(UIKeyboardEmojiKeyView *)arg1 ;
-(UIKeyboardEmojiKeyView *)inputView;
-(id)recents;
-(UIKeyboardEmojiKeyView *)categoryView;
-(void)setCategoryView:(UIKeyboardEmojiKeyView *)arg1 ;
-(id)lastUsedVariantEmojiForEmojiString:(id)arg1 ;
-(void)emojiUsed:(id)arg1 language:(id)arg2 ;
-(void)updateEmojiKeyManagerWithKey:(id)arg1 withKeyView:(id)arg2 ;
-(BOOL)userHasSelectedSkinToneEmoji;
-(UIKeyboardEmojiCategory *)lastViewedCategory;
-(void)reloadForCategory:(long long)arg1 withSender:(id)arg2 ;
-(long long)reloadCategoryForOffsetPercentage:(double)arg1 withSender:(id)arg2 ;
-(BOOL)hasLastUsedVariantForEmojiString:(id)arg1 ;
-(void)updateSkinToneBaseKey:(id)arg1 variantUsed:(id)arg2 ;
-(id)recentEmojiAtIndex:(long long)arg1 size:(unsigned long long*)arg2 ;
-(id)emojiWithoutDuplicateRecents:(id)arg1 ;
-(void)setLastViewedCategory:(UIKeyboardEmojiCategory *)arg1 ;
-(long long)lastVisibleFirstEmojiIndexforCategory:(id)arg1 ;
-(id)skinToneBaseKeyPreferences;
-(void)emojiUsed:(id)arg1 ;
@end

