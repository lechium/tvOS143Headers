/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextToSpeech/TTSAssetBase.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface TTSVoiceAsset : TTSAssetBase <NSSecureCoding> {

	BOOL _neural;
	BOOL _isInstalled;
	BOOL _isBuiltInVoice;
	NSString* _name;
	NSString* _identifier;
	NSArray* _languages;
	long long _gender;
	long long _footprint;
	NSString* _voicePath;

}

@property (nonatomic,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSArray * languages;              //@synthesize languages=_languages - In the implementation block
@property (nonatomic,readonly) long long gender;                 //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) long long footprint;              //@synthesize footprint=_footprint - In the implementation block
@property (nonatomic,readonly) BOOL neural;                      //@synthesize neural=_neural - In the implementation block
@property (nonatomic,readonly) BOOL isInstalled;                 //@synthesize isInstalled=_isInstalled - In the implementation block
@property (nonatomic,readonly) BOOL isBuiltInVoice;              //@synthesize isBuiltInVoice=_isBuiltInVoice - In the implementation block
@property (nonatomic,retain) NSString * voicePath;               //@synthesize voicePath=_voicePath - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(long long)gender;
-(BOOL)isInstalled;
-(NSArray *)languages;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(long long)footprint;
-(NSString *)voicePath;
-(void)setVoicePath:(NSString *)arg1 ;
-(BOOL)isBuiltInVoice;
-(id)initWithName:(id)arg1 languages:(id)arg2 gender:(long long)arg3 footprint:(long long)arg4 isInstalled:(BOOL)arg5 isBuiltIn:(BOOL)arg6 masteredVersion:(id)arg7 compatibilityVersion:(id)arg8 neural:(BOOL)arg9 ;
-(BOOL)neural;
@end

