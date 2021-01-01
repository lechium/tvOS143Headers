/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHomeKitCameraRecordingBulkSendDataRead : PBCodable <NSCopying> {

	unsigned long long _bitRate;
	unsigned long long _bytesRead;
	unsigned long long _chunkSequenceNumber;
	unsigned long long _duration;
	unsigned long long _iFrameInterval;
	unsigned long long _imageHeight;
	unsigned long long _imageWidth;
	unsigned long long _sequenceNumber;
	unsigned long long _timestamp;
	NSString* _cameraUUID;
	NSString* _sessionUUID;
	unsigned _status;
	SCD_Struct_AW15 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) BOOL hasCameraUUID; 
@property (nonatomic,retain) NSString * cameraUUID;                               //@synthesize cameraUUID=_cameraUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                              //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) unsigned long long sequenceNumber;                   //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL hasChunkSequenceNumber; 
@property (assign,nonatomic) unsigned long long chunkSequenceNumber;              //@synthesize chunkSequenceNumber=_chunkSequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL hasBytesRead; 
@property (assign,nonatomic) unsigned long long bytesRead;                        //@synthesize bytesRead=_bytesRead - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) unsigned status;                                     //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasBitRate; 
@property (assign,nonatomic) unsigned long long bitRate;                          //@synthesize bitRate=_bitRate - In the implementation block
@property (assign,nonatomic) BOOL hasImageHeight; 
@property (assign,nonatomic) unsigned long long imageHeight;                      //@synthesize imageHeight=_imageHeight - In the implementation block
@property (assign,nonatomic) BOOL hasImageWidth; 
@property (assign,nonatomic) unsigned long long imageWidth;                       //@synthesize imageWidth=_imageWidth - In the implementation block
@property (assign,nonatomic) BOOL hasIFrameInterval; 
@property (assign,nonatomic) unsigned long long iFrameInterval;                   //@synthesize iFrameInterval=_iFrameInterval - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned)status;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(unsigned long long)sequenceNumber;
-(void)setDuration:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSequenceNumber:(unsigned long long)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setStatus:(unsigned)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(BOOL)hasSequenceNumber;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setSessionUUID:(NSString *)arg1 ;
-(BOOL)hasSessionUUID;
-(NSString *)sessionUUID;
-(unsigned long long)bitRate;
-(void)setBitRate:(unsigned long long)arg1 ;
-(void)setImageWidth:(unsigned long long)arg1 ;
-(void)setImageHeight:(unsigned long long)arg1 ;
-(unsigned long long)imageWidth;
-(void)setHasImageWidth:(BOOL)arg1 ;
-(BOOL)hasImageWidth;
-(unsigned long long)imageHeight;
-(void)setHasImageHeight:(BOOL)arg1 ;
-(BOOL)hasImageHeight;
-(BOOL)hasBitRate;
-(void)setHasBitRate:(BOOL)arg1 ;
-(unsigned long long)bytesRead;
-(NSString *)cameraUUID;
-(void)setChunkSequenceNumber:(unsigned long long)arg1 ;
-(unsigned long long)iFrameInterval;
-(unsigned long long)chunkSequenceNumber;
-(void)setCameraUUID:(NSString *)arg1 ;
-(void)setBytesRead:(unsigned long long)arg1 ;
-(void)setIFrameInterval:(unsigned long long)arg1 ;
-(BOOL)hasCameraUUID;
-(void)setHasChunkSequenceNumber:(BOOL)arg1 ;
-(BOOL)hasChunkSequenceNumber;
-(void)setHasBytesRead:(BOOL)arg1 ;
-(BOOL)hasBytesRead;
-(void)setHasIFrameInterval:(BOOL)arg1 ;
-(BOOL)hasIFrameInterval;
@end

