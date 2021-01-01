/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <EmojiFoundation/EmojiFoundation-Structs.h>
@class NSLock, NSLocale;

@interface EMFStringStemmer : NSObject {

	sb_stemmerRef _stemmer;
	NSLock* _stemmerLock;
	NSLocale* _locale;
	unsigned long long _encoding;

}

@property (nonatomic,retain,readonly) NSLocale * locale;               //@synthesize locale=_locale - In the implementation block
@property (assign,nonatomic) unsigned long long encoding;              //@synthesize encoding=_encoding - In the implementation block
+(id)stemmerLanguageNameForLocale:(id)arg1 ;
+(sb_stemmerRef)_createSnowballStemmerForLocale:(id)arg1 ;
+(unsigned char)supportsLocale:(id)arg1 ;
+(id)supportedLanguageNames;
-(void)dealloc;
-(NSLocale *)locale;
-(id)initWithLocale:(id)arg1 ;
-(unsigned long long)encoding;
-(void)setEncoding:(unsigned long long)arg1 ;
-(id)stemToken:(id)arg1 ;
-(id)stemTokens:(id)arg1 ;
@end
