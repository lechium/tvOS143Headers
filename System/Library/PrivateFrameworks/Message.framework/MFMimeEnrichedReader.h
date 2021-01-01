/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Message/Message-Structs.h>
@class NSMutableString;

@interface MFMimeEnrichedReader : NSObject {

	SCD_Struct_MF1* _inputBuffer;
	long long _currentIndex;
	long long _inputLength;
	unsigned _noFillLevel : 30;
	unsigned _eatOneNewline : 1;
	unsigned _insideComment : 1;
	unsigned _wantsPlainText : 1;
	int _lastQuoteLevel;
	CFArrayRef _commandStack;
	id _outputString;
	NSMutableString* _outputBuffer;
	CFStringRef _prependHTML;
	CFStringRef _postpendHTML;
	float _indentWidth;

}
+(CFCharacterSetRef)parenSet;
+(CFCharacterSetRef)punctuationSet;
-(id)description;
-(void)dealloc;
-(id)currentFont;
-(void)parseParameterString:(id)arg1 ;
-(void)nowWouldBeAGoodTimeToAppendToTheAttributedString;
-(void)handleNoParameterCommand:(const SCD_Struct_MF5*)arg1 ;
-(void)setupFontStackEntry:(CommandStackEntry*)arg1 ;
-(void)mismatchError:(id)arg1 ;
-(void)appendNewLine:(id)arg1 ;
-(void)resetStateWithString:(id)arg1 outputString:(id)arg2 ;
-(int)readTokenInto:(id*)arg1 ;
-(void)beginCommand:(id)arg1 ;
-(void)endCommand:(id)arg1 ;
-(void)appendStringToBuffer:(id)arg1 ;
-(void)closeUpQuoting;
-(void)setWantsHTML:(BOOL)arg1 ;
-(void)convertRichTextString:(id)arg1 intoOutputString:(id)arg2 ;
-(void)convertEnrichedString:(id)arg1 intoOutputString:(id)arg2 ;
@end
