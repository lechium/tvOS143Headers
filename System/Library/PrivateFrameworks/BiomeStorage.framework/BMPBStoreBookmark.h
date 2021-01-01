/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomeStorage/BiomeStorage-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BMPBStoreBookmark : PBCodable <NSCopying> {

	double _iterationStartTime;
	unsigned _offset;
	NSString* _segmentName;
	NSString* _streamId;
	SCD_Struct_BM5 _has;

}

@property (nonatomic,readonly) BOOL hasStreamId; 
@property (nonatomic,retain) NSString * streamId;                     //@synthesize streamId=_streamId - In the implementation block
@property (nonatomic,readonly) BOOL hasSegmentName; 
@property (nonatomic,retain) NSString * segmentName;                  //@synthesize segmentName=_segmentName - In the implementation block
@property (assign,nonatomic) BOOL hasIterationStartTime; 
@property (assign,nonatomic) double iterationStartTime;               //@synthesize iterationStartTime=_iterationStartTime - In the implementation block
@property (assign,nonatomic) BOOL hasOffset; 
@property (assign,nonatomic) unsigned offset;                         //@synthesize offset=_offset - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(id)dictionaryRepresentation;
-(unsigned)offset;
-(void)setOffset:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)segmentName;
-(void)setSegmentName:(NSString *)arg1 ;
-(BOOL)hasSegmentName;
-(void)setHasOffset:(BOOL)arg1 ;
-(BOOL)hasOffset;
-(NSString *)streamId;
-(void)setStreamId:(NSString *)arg1 ;
-(double)iterationStartTime;
-(void)setIterationStartTime:(double)arg1 ;
-(BOOL)hasStreamId;
-(void)setHasIterationStartTime:(BOOL)arg1 ;
-(BOOL)hasIterationStartTime;
@end
