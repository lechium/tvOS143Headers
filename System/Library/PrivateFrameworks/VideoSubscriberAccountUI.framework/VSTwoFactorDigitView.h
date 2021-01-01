/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIControl.h>
#import <UIKit/UIKeyInput.h>
#import <UIKit/UITextInputTraits.h>

@protocol VSTwoFactorDigitViewDelegate;
@class NSString, UITextInputPasswordRules, NSArray;

@interface VSTwoFactorDigitView : UIControl <UIKeyInput, UITextInputTraits> {

	BOOL _hasText;
	long long _keyboardType;
	long long _autocapitalizationType;
	long long _returnKeyType;
	NSString* _textContentType;
	id<VSTwoFactorDigitViewDelegate> _delegate;
	unsigned long long _digitCount;
	NSString* _text;
	NSArray* _digits;

}

@property (nonatomic,retain) NSArray * digits;                                              //@synthesize digits=_digits - In the implementation block
@property (assign,nonatomic,__weak) id<VSTwoFactorDigitViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long digitCount;                               //@synthesize digitCount=_digitCount - In the implementation block
@property (nonatomic,retain) NSString * text;                                               //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) BOOL hasText;                                                //@synthesize hasText=_hasText - In the implementation block
@property (assign,nonatomic) long long autocapitalizationType;                              //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (assign,nonatomic) long long autocorrectionType; 
@property (assign,nonatomic) long long spellCheckingType; 
@property (assign,nonatomic) long long smartQuotesType; 
@property (assign,nonatomic) long long smartDashesType; 
@property (assign,nonatomic) long long smartInsertDeleteType; 
@property (assign,nonatomic) long long keyboardType;                                        //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,nonatomic) long long keyboardAppearance; 
@property (assign,nonatomic) long long returnKeyType;                                       //@synthesize returnKeyType=_returnKeyType - In the implementation block
@property (assign,nonatomic) BOOL enablesReturnKeyAutomatically; 
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType;                                      //@synthesize textContentType=_textContentType - In the implementation block
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<VSTwoFactorDigitViewDelegate>)delegate;
-(void)setDelegate:(id<VSTwoFactorDigitViewDelegate>)arg1 ;
-(long long)keyboardType;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(long long)autocapitalizationType;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setAutocapitalizationType:(long long)arg1 ;
-(NSArray *)digits;
-(BOOL)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(long long)returnKeyType;
-(void)setReturnKeyType:(long long)arg1 ;
-(NSString *)textContentType;
-(void)setTextContentType:(NSString *)arg1 ;
-(void)setDigits:(NSArray *)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)onTouchUpInside:(id)arg1 ;
-(id)initWithDigitCount:(unsigned long long)arg1 ;
-(void)setupDigitViews;
-(unsigned long long)digitCount;
@end

