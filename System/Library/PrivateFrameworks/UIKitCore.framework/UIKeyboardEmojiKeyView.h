/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKBKeyView.h>
#import <UIKit/UIKeyboardEmojiCategoryUpdate.h>

@protocol UIKeyboardEmojiCategoryUpdateDelegate;
@class UIKeyboardEmojiKeyDisplayController, NSString;

@interface UIKeyboardEmojiKeyView : UIKBKeyView <UIKeyboardEmojiCategoryUpdate> {

	UIKeyboardEmojiKeyDisplayController*<UIKeyboardEmojiCategoryUpdateDelegate> emojiKeyManager;

}

@property (assign,nonatomic) UIKeyboardEmojiKeyDisplayController*<UIKeyboardEmojiCategoryUpdateDelegate> emojiKeyManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIKeyboardEmojiKeyDisplayController*<UIKeyboardEmojiCategoryUpdateDelegate>)emojiKeyManager;
-(void)setEmojiKeyManager:(UIKeyboardEmojiKeyDisplayController*<UIKeyboardEmojiCategoryUpdateDelegate>)arg1 ;
-(void)updateToCategory:(long long)arg1 ;
-(long long)updateToCategoryWithOffsetPercentage:(double)arg1 ;
@end

