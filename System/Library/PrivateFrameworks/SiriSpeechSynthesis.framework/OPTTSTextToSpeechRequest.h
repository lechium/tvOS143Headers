/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriSpeechSynthesis.framework/SiriSpeechSynthesis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriSpeechSynthesis/SiriSpeechSynthesis-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString, NSArray, OPTTSTextToSpeechRequestMeta;

@interface OPTTSTextToSpeechRequest : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const TextToSpeechRequest* _root;

}

@property (nonatomic,readonly) NSString * speech_id; 
@property (nonatomic,readonly) NSString * session_id; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSString * gender; 
@property (nonatomic,readonly) NSString * text; 
@property (nonatomic,readonly) long long audio_type; 
@property (nonatomic,readonly) BOOL enable_word_timing_info; 
@property (nonatomic,readonly) NSString * voice_name; 
@property (nonatomic,readonly) NSArray * context_info; 
@property (nonatomic,readonly) long long preferred_voice_type; 
@property (nonatomic,readonly) OPTTSTextToSpeechRequestMeta * meta_info; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)gender;
-(NSString *)text;
-(NSString *)language;
-(NSString *)speech_id;
-(NSString *)session_id;
-(OPTTSTextToSpeechRequestMeta *)meta_info;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(long long)audio_type;
-(BOOL)enable_word_timing_info;
-(NSString *)voice_name;
-(NSArray *)context_info;
-(long long)preferred_voice_type;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechRequest*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::TextToSpeechRequest>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const TextToSpeechRequest*)arg2 ;
@end

