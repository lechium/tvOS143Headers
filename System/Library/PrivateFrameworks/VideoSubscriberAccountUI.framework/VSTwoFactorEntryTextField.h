/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface VSTwoFactorEntryTextField : NSObject {

	BOOL _autoShowKeyboard;
	NSString* _label;
	unsigned long long _expectedLength;
	NSString* _text;
	long long _keyboardType;
	long long _autocapitalizationType;
	long long _autocorrectionType;
	long long _returnKeyType;

}

@property (nonatomic,copy) NSString * label;                                 //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long expectedLength;              //@synthesize expectedLength=_expectedLength - In the implementation block
@property (assign,nonatomic) BOOL autoShowKeyboard;                          //@synthesize autoShowKeyboard=_autoShowKeyboard - In the implementation block
@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long keyboardType;                         //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,nonatomic) long long autocapitalizationType;               //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (assign,nonatomic) long long autocorrectionType;                   //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
@property (assign,nonatomic) long long returnKeyType;                        //@synthesize returnKeyType=_returnKeyType - In the implementation block
-(id)init;
-(long long)keyboardType;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(long long)autocapitalizationType;
-(long long)autocorrectionType;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setAutocorrectionType:(long long)arg1 ;
-(void)setAutocapitalizationType:(long long)arg1 ;
-(long long)returnKeyType;
-(void)setReturnKeyType:(long long)arg1 ;
-(void)setExpectedLength:(unsigned long long)arg1 ;
-(unsigned long long)expectedLength;
-(void)setAutoShowKeyboard:(BOOL)arg1 ;
-(BOOL)autoShowKeyboard;
@end

