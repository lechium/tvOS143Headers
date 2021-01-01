/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIKeyInput.h>

@protocol PKPinCodeFieldDelegate;
@class NSCharacterSet, NSMutableString, NSArray, UIImage, UILabel, NSString, UITextInputPasswordRules;

@interface PKPinCodeField : UIView <UIKeyInput> {

	unsigned long long _pinCodeLength;
	NSCharacterSet* _numbersOnlyCharacterSet;
	NSMutableString* _pinCode;
	double _fontHeight;
	NSArray* _numberLabels;
	NSArray* _dashViews;
	NSArray* _dotViews;
	UIImage* _dotImage;
	UILabel* _hyphenLabel;
	BOOL _keyboardOverrideEnabled;
	unsigned long long _style;
	SCD_Struct_PK36 _config;
	BOOL _hyphenatePinCode;
	BOOL _secureTextEntry;
	id<PKPinCodeFieldDelegate> _delegate;

}

@property (assign,nonatomic) BOOL hyphenatePinCode;                                      //@synthesize hyphenatePinCode=_hyphenatePinCode - In the implementation block
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry;              //@synthesize secureTextEntry=_secureTextEntry - In the implementation block
@property (assign,nonatomic,__weak) id<PKPinCodeFieldDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * pinCode; 
@property (nonatomic,readonly) BOOL hasText; 
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
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKPinCodeFieldDelegate>)delegate;
-(void)setDelegate:(id<PKPinCodeFieldDelegate>)arg1 ;
-(long long)keyboardType;
-(BOOL)hasText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(void)setSecureTextEntry:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFirstResponder;
-(BOOL)isSecureTextEntry;
-(id)initWithPinCodeLength:(unsigned long long)arg1 delegate:(id)arg2 ;
-(void)setHyphenatePinCode:(BOOL)arg1 ;
-(NSString *)pinCode;
-(void)setPinCode:(NSString *)arg1 ;
-(id)initWithPinCodeLength:(unsigned long long)arg1 style:(unsigned long long)arg2 delegate:(id)arg3 ;
-(void)updateCharacterVisibility;
-(BOOL)hyphenatePinCode;
@end

