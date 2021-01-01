/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface SFSSVoiceAsset : NSObject {

	NSString* _assetPath;
	NSString* _name;
	NSString* _language;
	long long _gender;
	long long _footprint;
	long long _type;
	long long _contentVersion;

}

@property (nonatomic,copy) NSString * assetPath;                      //@synthesize assetPath=_assetPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * language;              //@synthesize language=_language - In the implementation block
@property (nonatomic,readonly) long long gender;                      //@synthesize gender=_gender - In the implementation block
@property (nonatomic,readonly) long long footprint;                   //@synthesize footprint=_footprint - In the implementation block
@property (nonatomic,readonly) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long contentVersion;              //@synthesize contentVersion=_contentVersion - In the implementation block
+(id)generateVoiceAssetFromVoiceKeyString:(id)arg1 ;
-(NSString *)name;
-(long long)type;
-(id)key;
-(long long)gender;
-(NSString *)language;
-(long long)contentVersion;
-(long long)footprint;
-(void)setAssetPath:(NSString *)arg1 ;
-(NSString *)assetPath;
-(id)init:(id)arg1 gender:(long long)arg2 name:(id)arg3 type:(long long)arg4 footprint:(long long)arg5 contentVersion:(long long)arg6 ;
@end

