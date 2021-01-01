/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/TextInput/TextInput_ta.bundle/TextInput_ta
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextInput_ta/TextInput_ta-Structs.h>
#import <TextInputCore/TIKeyboardFeatureSpecialization.h>

@interface TIKeyboardFeatureSpecialization_ta : TIKeyboardFeatureSpecialization {

	BOOL _qwertyLayout;

}

@property (assign,getter=isQwertyLayout,nonatomic) BOOL qwertyLayout;              //@synthesize qwertyLayout=_qwertyLayout - In the implementation block
-(BOOL)doesComposeText;
-(id)nonstopPunctuationCharacters;
-(void)specializeInputManager:(TIInputManager*)arg1 forLayoutState:(id)arg2 ;
-(BOOL)dictionaryUsesExternalEncoding;
-(BOOL)shouldConvertCandidateToExternal;
-(BOOL)allowsAutocorrectionOfValidWords;
-(void)setQwertyLayout:(BOOL)arg1 ;
-(BOOL)isQwertyLayout;
@end

