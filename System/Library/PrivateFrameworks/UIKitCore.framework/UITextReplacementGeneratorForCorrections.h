/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITextReplacementGenerator.h>

@class UITextChecker, TIKeyboardCandidate;

@interface UITextReplacementGeneratorForCorrections : UITextReplacementGenerator {

	BOOL _showRevertingAutocorrectionInPredictionView;
	BOOL _forceHistoryReplacement;
	BOOL _forceAutocorrectionGuesses;
	BOOL _forceSpellingGuesses;
	UITextChecker* _textChecker;
	TIKeyboardCandidate* _autocorrectionRecord;
	unsigned long long _maxEditDistance;
	unsigned long long _maxCountAfterAutocorrectionGuesses;
	unsigned long long _maxCountAfterSpellingGuesses;

}

@property (nonatomic,retain) UITextChecker * textChecker;                                        //@synthesize textChecker=_textChecker - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * autocorrectionRecord;                         //@synthesize autocorrectionRecord=_autocorrectionRecord - In the implementation block
@property (assign,nonatomic) BOOL forceHistoryReplacement;                                       //@synthesize forceHistoryReplacement=_forceHistoryReplacement - In the implementation block
@property (assign,nonatomic) unsigned long long maxEditDistance;                                 //@synthesize maxEditDistance=_maxEditDistance - In the implementation block
@property (assign,nonatomic) unsigned long long maxCountAfterAutocorrectionGuesses;              //@synthesize maxCountAfterAutocorrectionGuesses=_maxCountAfterAutocorrectionGuesses - In the implementation block
@property (assign,nonatomic) BOOL forceAutocorrectionGuesses;                                    //@synthesize forceAutocorrectionGuesses=_forceAutocorrectionGuesses - In the implementation block
@property (assign,nonatomic) unsigned long long maxCountAfterSpellingGuesses;                    //@synthesize maxCountAfterSpellingGuesses=_maxCountAfterSpellingGuesses - In the implementation block
@property (assign,nonatomic) BOOL forceSpellingGuesses;                                          //@synthesize forceSpellingGuesses=_forceSpellingGuesses - In the implementation block
-(id)init;
-(id)replacements;
-(void)setTextChecker:(UITextChecker *)arg1 ;
-(void)setAutocorrectionRecord:(TIKeyboardCandidate *)arg1 ;
-(void)setForceHistoryReplacement:(BOOL)arg1 ;
-(void)setForceAutocorrectionGuesses:(BOOL)arg1 ;
-(void)setForceSpellingGuesses:(BOOL)arg1 ;
-(void)setMaxCountAfterAutocorrectionGuesses:(unsigned long long)arg1 ;
-(void)setMaxCountAfterSpellingGuesses:(unsigned long long)arg1 ;
-(void)setMaxEditDistance:(unsigned long long)arg1 ;
-(BOOL)isStringToReplaceMisspelled;
-(UITextChecker *)textChecker;
-(BOOL)isStringMisspelled:(id)arg1 ;
-(TIKeyboardCandidate *)autocorrectionRecord;
-(unsigned long long)maxCountAfterAutocorrectionGuesses;
-(unsigned long long)maxEditDistance;
-(unsigned long long)maxCountAfterSpellingGuesses;
-(BOOL)forceSpellingGuesses;
-(BOOL)forceHistoryReplacement;
-(id)addReplacementRevertingAutocorrectionToReplacements:(id)arg1 ;
-(void)addPreviouslySuggestedAutocorrectionToReplacements:(id)arg1 ;
-(BOOL)forceAutocorrectionGuesses;
-(void)addAutocorrectionGuessesToReplacements:(id)arg1 ;
-(void)addSpellingGuessesForString:(id)arg1 ToReplacements:(id)arg2 ;
@end

