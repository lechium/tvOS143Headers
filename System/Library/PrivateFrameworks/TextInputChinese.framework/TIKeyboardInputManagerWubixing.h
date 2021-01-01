/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInputChinese/TIKeyboardInputManagerShapeBased.h>
#import <libobjc.A.dylib/TIKeyboardInputManagerChineseCompletion.h>

@class TIKeyboardCandidate;

@interface TIKeyboardInputManagerWubixing : TIKeyboardInputManagerShapeBased <TIKeyboardInputManagerChineseCompletion> {

	TIKeyboardCandidate* _autoConfirmationCandidate;

}

@property (nonatomic,retain) TIKeyboardCandidate * autoConfirmationCandidate;              //@synthesize autoConfirmationCandidate=_autoConfirmationCandidate - In the implementation block
+(Class)wordSearchClass;
-(BOOL)supportsNumberKeySelection;
-(BOOL)usesPunctuationKeysForRowNavigation;
-(unsigned)inputIndex;
-(id)keyboardBehaviors;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(id)sortingMethods;
-(int)inputMethodType;
-(void)updateMarkedText;
-(void)notifyUpdateCandidates:(id)arg1 forOperation:(id)arg2 ;
-(TIKeyboardCandidate *)autoConfirmationCandidate;
-(void)setAutoConfirmationCandidate:(TIKeyboardCandidate *)arg1 ;
-(BOOL)isValidWubiInput:(id)arg1 ;
@end
