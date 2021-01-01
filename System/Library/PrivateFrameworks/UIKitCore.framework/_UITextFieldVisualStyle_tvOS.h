/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UITextFieldVisualStyle.h>
#import <UIKitCore/_UITextFieldEditingProcessorDelegate.h>

@class NSString;

@interface _UITextFieldVisualStyle_tvOS : _UITextFieldVisualStyle <_UITextFieldEditingProcessorDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)placeholderColor;
-(id)defaultTextColor;
-(id)defaultTextColorForKeyboardAppearance;
-(id)editingProcessorOverridingEditingAttributes:(id)arg1 ;
-(id)parentViewForTextContentView;
-(id)defaultFocusedTextColor;
-(BOOL)textShouldUseVibrancy;
-(void)handleTextVibrancy;
-(id)_defaultTextColorForUserInterfaceStyle;
-(id)_defaultTextColorBlackKeyboard;
-(id)_defaultTextColorDarkKeyboard;
-(id)_defaultTextColorLightKeyboard;
-(id)_placeholderTextColorBlackKeyboard;
-(id)_placeholderTextColorDarkKeyboard;
-(id)_placeholderTextColorLightKeyboard;
-(id)_placeholderTextColorFocused;
-(id)_defaultEditingFont;
@end

