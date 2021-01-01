/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIInputViewControllerInterface.h>
#import <UIKit/UITextDocumentProxy.h>
#import <UIKit/UITextDocumentProxy_Private.h>

@protocol _UITextDocumentInterfaceDelegate;
@class NSString, UITextInputMode, NSUUID, _UIInputViewControllerState, _UIInputViewControllerOutput, TIKeyboardOutput, TIDocumentState, TITextInputTraits, UITextInputPasswordRules;

@interface _UITextDocumentInterface : UIInputViewControllerInterface <UITextDocumentProxy, UITextDocumentProxy_Private> {

	id<_UITextDocumentInterfaceDelegate> _delegate;
	_UIInputViewControllerState* _controllerState;
	_UIInputViewControllerOutput* _controllerOutput;
	TIKeyboardOutput* _keyboardOutput;

}

@property (getter=_controllerState,nonatomic,retain) _UIInputViewControllerState * controllerState;                 //@synthesize controllerState=_controllerState - In the implementation block
@property (getter=_controllerOutput,nonatomic,retain) _UIInputViewControllerOutput * controllerOutput;              //@synthesize controllerOutput=_controllerOutput - In the implementation block
@property (getter=_documentState,nonatomic,readonly) TIDocumentState * documentState; 
@property (getter=_textInputTraits,nonatomic,readonly) TITextInputTraits * textInputTraits; 
@property (getter=_keyboardOutput,nonatomic,readonly) TIKeyboardOutput * keyboardOutput;                            //@synthesize keyboardOutput=_keyboardOutput - In the implementation block
@property (assign,getter=_delegate,nonatomic) id<_UITextDocumentInterfaceDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * documentContextBeforeInput; 
@property (nonatomic,readonly) NSString * documentContextAfterInput; 
@property (nonatomic,readonly) NSString * selectedText; 
@property (nonatomic,readonly) UITextInputMode * documentInputMode; 
@property (nonatomic,copy,readonly) NSUUID * documentIdentifier; 
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
@property (assign,getter=isSecureTextEntry,nonatomic) BOOL secureTextEntry; 
@property (nonatomic,copy) NSString * textContentType; 
@property (nonatomic,copy) UITextInputPasswordRules * passwordRules; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * markedText; 
@property (nonatomic,readonly) BOOL needsInputModeSwitchKey; 
-(void)dealloc;
-(void)setDelegate:(id<_UITextDocumentInterfaceDelegate>)arg1 ;
-(id)_delegate;
-(long long)keyboardType;
-(long long)autocapitalizationType;
-(long long)autocorrectionType;
-(BOOL)hasText;
-(NSString *)markedText;
-(NSUUID *)documentIdentifier;
-(id)_documentState;
-(NSString *)selectedText;
-(void)insertText:(id)arg1 ;
-(void)deleteBackward;
-(id)_textInputTraits;
-(long long)spellCheckingType;
-(long long)keyboardAppearance;
-(long long)returnKeyType;
-(BOOL)enablesReturnKeyAutomatically;
-(long long)smartInsertDeleteType;
-(long long)smartQuotesType;
-(long long)smartDashesType;
-(NSString *)textContentType;
-(void)setMarkedText:(id)arg1 selectedRange:(NSRange)arg2 ;
-(void)unmarkText;
-(BOOL)isSecureTextEntry;
-(void)_setPrimaryLanguage:(id)arg1 ;
-(NSString *)documentContextBeforeInput;
-(void)_handleInputViewControllerState:(id)arg1 ;
-(void)setControllerState:(_UIInputViewControllerState *)arg1 ;
-(id)_controllerState;
-(id)_keyboardOutput;
-(UITextInputMode *)documentInputMode;
-(void)setForwardingInterface:(id)arg1 ;
-(BOOL)needsInputModeSwitchKey;
-(void)_setShouldDismiss;
-(void)_setProceedShouldReturnIfPossibleForASP;
-(void)_setShouldAdvanceInputMode;
-(void)_setHasDictation:(BOOL)arg1 ;
-(void)_setInputModeList:(long long)arg1 touchBegan:(double)arg2 fromLocation:(CGPoint)arg3 updatePoint:(CGPoint)arg4 ;
-(void)_createControllerOutputIfNecessary;
-(void)_willPerformOutputOperation;
-(id)_controllerOutput;
-(void)_didPerformOutputOperation;
-(void)adjustTextPositionByCharacterOffset:(long long)arg1 ;
-(void)setControllerOutput:(_UIInputViewControllerOutput *)arg1 ;
-(NSString *)documentContextAfterInput;
@end

