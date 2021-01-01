/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TextInputCore/TextInputCore-Structs.h>
@class NSString, NSMutableDictionary, TIInputMode;

@interface TIKeyboardFeatureSpecialization : NSObject {

	NSString* m_softwareLayout;
	USetRef m_precomposedCharacterSet;
	USetRef m_acceptableCharacterSet;
	NSMutableDictionary* m_compositionMaps;
	NSMutableDictionary* m_reverseCompositionMaps;
	BOOL _useRelaxedOVSPolicy;
	TIInputMode* _inputMode;
	long long _currentUserInterfaceIdiom;

}

@property (nonatomic,readonly) TIInputMode * inputMode;                        //@synthesize inputMode=_inputMode - In the implementation block
@property (assign,nonatomic) long long currentUserInterfaceIdiom;              //@synthesize currentUserInterfaceIdiom=_currentUserInterfaceIdiom - In the implementation block
@property (assign,nonatomic) BOOL useRelaxedOVSPolicy;                         //@synthesize useRelaxedOVSPolicy=_useRelaxedOVSPolicy - In the implementation block
+(id)createSpecializationForInputMode:(id)arg1 ;
+(USetRef)createAcceptableCharacterSetForKeyboardLocale:(id)arg1 ;
-(void)dealloc;
-(TIInputMode *)inputMode;
-(BOOL)canHandleKeyHitTest;
-(BOOL)shouldExtendPriorWord;
-(id)wordSeparator;
-(id)keyboardBehaviors;
-(id)replacementForDoubleSpace;
-(BOOL)shouldAddModifierSymbolsToWordCharacters;
-(id)wordCharacters;
-(id)terminatorsDeletingAutospace;
-(id)initWithInputMode:(id)arg1 ;
-(BOOL)doesComposeText;
-(id)allAccentKeyStrings;
-(id)layoutTags;
-(id)nonstopPunctuationCharacters;
-(id)sentencePrefixingCharacters;
-(id)sentenceDelimitingCharacters;
-(id)sentenceTrailingCharacters;
-(void)setCurrentUserInterfaceIdiom:(long long)arg1 ;
-(void)reloadPrecomposedCharacterSetWithIdiom:(long long)arg1 ;
-(BOOL)supportsLearning;
-(BOOL)shouldLearnLowercaseAtBeginningOfSentence;
-(id)accentKeyStringForKeyboardState:(id)arg1 ;
-(long long)currentUserInterfaceIdiom;
-(BOOL)useRelaxedOVSPolicy;
-(void)setUseRelaxedOVSPolicy:(BOOL)arg1 ;
-(TIInputManager*)createInputManager;
-(id)dictionaryInputMode;
-(USetRef)createAcceptableCharacterSet;
-(void)specializeInputManager:(TIInputManager*)arg1 forLayoutState:(id)arg2 ;
-(id)externalStringToInternal:(id)arg1 ;
-(id)internalStringToExternal:(id)arg1 ;
-(unsigned long long)maxPriorWordTokensAfterTrimming;
-(BOOL)acceptsCharacter:(unsigned)arg1 ;
-(BOOL)dictionaryUsesExternalEncoding;
-(BOOL)shouldConvertCandidateToExternal;
-(BOOL)allowsAutocorrectionOfValidWords;
-(BOOL)shouldConvertAutocorrectionCandidatesToFullWidth;
-(id)compositionMapForLayout:(id)arg1 reverse:(BOOL)arg2 ;
-(const USetRef)precomposedCharacterSet;
@end

