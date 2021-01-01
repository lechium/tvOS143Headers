/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/Support/libvoiced_tts.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libvoiced_tts.dylib/libvoiced_tts.dylib-Structs.h>
#import <libobjc.A.dylib/FLTBFBufferAccessor.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSData, NSString;

@interface OPTTSWordTimingInfo : NSObject <FLTBFBufferAccessor, NSCopying> {

	NSMutableDictionary* _storage;
	NSData* _data;
	const WordTimingInfo* _root;

}

@property (nonatomic,readonly) NSString * word; 
@property (nonatomic,readonly) unsigned sample_idx; 
@property (nonatomic,readonly) unsigned offset; 
@property (nonatomic,readonly) unsigned length; 
@property (nonatomic,readonly) float timestamp; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)length;
-(float)timestamp;
-(unsigned)offset;
-(NSString *)word;
-(id)flatbuffData;
-(id)initWithFlatbuffData:(id)arg1 ;
-(unsigned)sample_idx;
-(id)initWithFlatbuffData:(id)arg1 root:(const WordTimingInfo*)arg2 verify:(BOOL)arg3 ;
-(Offset<siri::speech::schema_fb::WordTimingInfo>)addObjectToBuffer:(FlatBufferBuilder*)arg1 ;
-(id)initAndVerifyWithFlatbuffData:(id)arg1 ;
-(id)initWithFlatbuffData:(id)arg1 root:(const WordTimingInfo*)arg2 ;
@end

