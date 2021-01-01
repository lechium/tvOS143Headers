/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaSiriUISettings : PBCodable {

	BOOL _alwaysShowUserSpeechTranscript;
	BOOL _alwaysBlurBackground;
	BOOL _alwaysShowSiriDialog;
	SCD_Struct_LT0 _has;

}

@property (assign,nonatomic) BOOL alwaysShowUserSpeechTranscript;                 //@synthesize alwaysShowUserSpeechTranscript=_alwaysShowUserSpeechTranscript - In the implementation block
@property (assign,nonatomic) BOOL hasAlwaysShowUserSpeechTranscript; 
@property (assign,nonatomic) BOOL alwaysBlurBackground;                           //@synthesize alwaysBlurBackground=_alwaysBlurBackground - In the implementation block
@property (assign,nonatomic) BOOL hasAlwaysBlurBackground; 
@property (assign,nonatomic) BOOL alwaysShowSiriDialog;                           //@synthesize alwaysShowSiriDialog=_alwaysShowSiriDialog - In the implementation block
@property (assign,nonatomic) BOOL hasAlwaysShowSiriDialog; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setAlwaysShowUserSpeechTranscript:(BOOL)arg1 ;
-(void)setAlwaysBlurBackground:(BOOL)arg1 ;
-(void)setAlwaysShowSiriDialog:(BOOL)arg1 ;
-(BOOL)alwaysShowUserSpeechTranscript;
-(BOOL)alwaysBlurBackground;
-(BOOL)alwaysShowSiriDialog;
-(BOOL)hasAlwaysShowUserSpeechTranscript;
-(void)setHasAlwaysShowUserSpeechTranscript:(BOOL)arg1 ;
-(BOOL)hasAlwaysBlurBackground;
-(void)setHasAlwaysBlurBackground:(BOOL)arg1 ;
-(BOOL)hasAlwaysShowSiriDialog;
-(void)setHasAlwaysShowSiriDialog:(BOOL)arg1 ;
@end
