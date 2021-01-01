/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface TIMathSymbolPunctuationController : NSObject {

	unsigned long long _state;
	long long _location;
	unsigned short _replacementCharacter;
	BOOL _replaceAfterNumerals;
	BOOL _enabled;
	BOOL _converted;
	NSString* _decimalSeparator;

}

@property (nonatomic,copy) NSString * decimalSeparator;              //@synthesize decimalSeparator=_decimalSeparator - In the implementation block
@property (assign,nonatomic) BOOL replaceAfterNumerals;              //@synthesize replaceAfterNumerals=_replaceAfterNumerals - In the implementation block
@property (assign,nonatomic) BOOL enabled;                           //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL converted;                       //@synthesize converted=_converted - In the implementation block
-(id)init;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(NSString *)decimalSeparator;
-(void)setDecimalSeparator:(NSString *)arg1 ;
-(void)reset;
-(void)setInputString:(id)arg1 ;
-(BOOL)updateInputString:(id)arg1 ;
-(id)mathSymbolPunctuationedStringForInputString:(id)arg1 ;
-(BOOL)replaceAfterNumerals;
-(void)setReplaceAfterNumerals:(BOOL)arg1 ;
-(BOOL)converted;
@end

