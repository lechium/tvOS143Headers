/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>

@class NSString, NSData;

@interface LTSchemaTask : PBCodable {

	NSString* _translationTask;
	NSString* _sourceLanguage;
	NSString* _targetLanguage;
	NSString* _deviceOS;
	NSString* _deviceType;
	NSString* _osVersion;
	NSString* _bundleIdentifier;
	BOOL _hasTranslationTask;
	BOOL _hasSourceLanguage;
	BOOL _hasTargetLanguage;
	BOOL _hasDeviceOS;
	BOOL _hasDeviceType;
	BOOL _hasOsVersion;
	BOOL _hasBundleIdentifier;

}

@property (nonatomic,copy) NSString * translationTask;               //@synthesize translationTask=_translationTask - In the implementation block
@property (assign,nonatomic) BOOL hasTranslationTask;                //@synthesize hasTranslationTask=_hasTranslationTask - In the implementation block
@property (nonatomic,copy) NSString * sourceLanguage;                //@synthesize sourceLanguage=_sourceLanguage - In the implementation block
@property (assign,nonatomic) BOOL hasSourceLanguage;                 //@synthesize hasSourceLanguage=_hasSourceLanguage - In the implementation block
@property (nonatomic,copy) NSString * targetLanguage;                //@synthesize targetLanguage=_targetLanguage - In the implementation block
@property (assign,nonatomic) BOOL hasTargetLanguage;                 //@synthesize hasTargetLanguage=_hasTargetLanguage - In the implementation block
@property (nonatomic,copy) NSString * deviceOS;                      //@synthesize deviceOS=_deviceOS - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceOS;                       //@synthesize hasDeviceOS=_hasDeviceOS - In the implementation block
@property (nonatomic,copy) NSString * deviceType;                    //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceType;                     //@synthesize hasDeviceType=_hasDeviceType - In the implementation block
@property (nonatomic,copy) NSString * osVersion;                     //@synthesize osVersion=_osVersion - In the implementation block
@property (assign,nonatomic) BOOL hasOsVersion;                      //@synthesize hasOsVersion=_hasOsVersion - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasBundleIdentifier;               //@synthesize hasBundleIdentifier=_hasBundleIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)dictionaryRepresentation;
-(NSString *)sourceLanguage;
-(void)setSourceLanguage:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)deviceType;
-(void)setDeviceType:(NSString *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasBundleIdentifier;
-(NSString *)osVersion;
-(void)setOsVersion:(NSString *)arg1 ;
-(BOOL)hasOsVersion;
-(BOOL)hasDeviceType;
-(void)setHasDeviceType:(BOOL)arg1 ;
-(NSData *)jsonData;
-(void)setHasBundleIdentifier:(BOOL)arg1 ;
-(void)setTranslationTask:(NSString *)arg1 ;
-(void)setTargetLanguage:(NSString *)arg1 ;
-(void)setDeviceOS:(NSString *)arg1 ;
-(NSString *)translationTask;
-(NSString *)targetLanguage;
-(NSString *)deviceOS;
-(BOOL)hasTranslationTask;
-(BOOL)hasSourceLanguage;
-(BOOL)hasTargetLanguage;
-(BOOL)hasDeviceOS;
-(void)setHasTranslationTask:(BOOL)arg1 ;
-(void)setHasSourceLanguage:(BOOL)arg1 ;
-(void)setHasTargetLanguage:(BOOL)arg1 ;
-(void)setHasDeviceOS:(BOOL)arg1 ;
-(void)setHasOsVersion:(BOOL)arg1 ;
@end

