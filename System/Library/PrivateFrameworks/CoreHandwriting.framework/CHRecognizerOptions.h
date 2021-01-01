/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CHRecognizerOptions : NSObject {

	BOOL _enableCachingIfAvailable;
	BOOL _enableGen2ModelIfAvailable;
	BOOL _enableGen2CharacterLMIfAvailable;

}

@property (assign,nonatomic) BOOL enableCachingIfAvailable;                      //@synthesize enableCachingIfAvailable=_enableCachingIfAvailable - In the implementation block
@property (assign,nonatomic) BOOL enableGen2ModelIfAvailable;                    //@synthesize enableGen2ModelIfAvailable=_enableGen2ModelIfAvailable - In the implementation block
@property (assign,nonatomic) BOOL enableGen2CharacterLMIfAvailable;              //@synthesize enableGen2CharacterLMIfAvailable=_enableGen2CharacterLMIfAvailable - In the implementation block
-(id)init;
-(BOOL)enableCachingIfAvailable;
-(void)setEnableCachingIfAvailable:(BOOL)arg1 ;
-(BOOL)enableGen2ModelIfAvailable;
-(void)setEnableGen2ModelIfAvailable:(BOOL)arg1 ;
-(BOOL)enableGen2CharacterLMIfAvailable;
-(void)setEnableGen2CharacterLMIfAvailable:(BOOL)arg1 ;
@end

