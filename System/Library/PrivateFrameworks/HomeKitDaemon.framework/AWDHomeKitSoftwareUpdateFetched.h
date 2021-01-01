/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDHomeKitSoftwareUpdateFetched : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _duration;
	unsigned _resultErrorCode;
	int _source;
	BOOL _wasNewUpdateFetched;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                         //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasResultErrorCode; 
@property (assign,nonatomic) unsigned resultErrorCode;                  //@synthesize resultErrorCode=_resultErrorCode - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) int source;                                //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasWasNewUpdateFetched; 
@property (assign,nonatomic) BOOL wasNewUpdateFetched;                  //@synthesize wasNewUpdateFetched=_wasNewUpdateFetched - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)source;
-(void)setSource:(int)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasDuration;
-(void)setHasSource:(BOOL)arg1 ;
-(BOOL)hasSource;
-(id)sourceAsString:(int)arg1 ;
-(int)StringAsSource:(id)arg1 ;
-(void)setResultErrorCode:(unsigned)arg1 ;
-(void)setHasResultErrorCode:(BOOL)arg1 ;
-(BOOL)hasResultErrorCode;
-(void)setWasNewUpdateFetched:(BOOL)arg1 ;
-(void)setHasWasNewUpdateFetched:(BOOL)arg1 ;
-(BOOL)hasWasNewUpdateFetched;
-(unsigned)resultErrorCode;
-(BOOL)wasNewUpdateFetched;
@end

