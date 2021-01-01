/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AMSDialogTextField : NSObject <NSSecureCoding> {

	BOOL _secure;
	long long _keyboardType;
	NSString* _placeholder;
	long long _tag;
	NSString* _text;

}

@property (assign,nonatomic) long long keyboardType;              //@synthesize keyboardType=_keyboardType - In the implementation block
@property (nonatomic,copy) NSString * placeholder;                //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,nonatomic) BOOL secure;                         //@synthesize secure=_secure - In the implementation block
@property (assign,nonatomic) long long tag;                       //@synthesize tag=_tag - In the implementation block
@property (nonatomic,copy) NSString * text;                       //@synthesize text=_text - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)textFieldWithPlaceholder:(id)arg1 secure:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSecure:(BOOL)arg1 ;
-(BOOL)secure;
-(long long)keyboardType;
-(long long)tag;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)placeholder;
-(void)setKeyboardType:(long long)arg1 ;
-(void)setTag:(long long)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
@end

