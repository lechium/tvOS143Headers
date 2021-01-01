/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <SiriSpeechSynthesis/OPTTSTextToSpeechVoice.h>

@class NSString;

@interface OPTTSMutableTextToSpeechVoice : OPTTSTextToSpeechVoice

@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * version; 
@property (nonatomic,copy) NSString * quality; 
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)version;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setQuality:(NSString *)arg1 ;
-(NSString *)quality;
@end
