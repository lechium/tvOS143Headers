/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCPProtoTime : PBCodable <NSCopying> {

	long long _epoch;
	long long _value;
	unsigned _flags;
	int _timescale;

}

@property (assign,nonatomic) long long value;              //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) int timescale;                //@synthesize timescale=_timescale - In the implementation block
@property (assign,nonatomic) unsigned flags;               //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) long long epoch;              //@synthesize epoch=_epoch - In the implementation block
+(id)timeWithCMTime:(SCD_Struct_VC6)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned)flags;
-(long long)value;
-(void)setValue:(long long)arg1 ;
-(id)dictionaryRepresentation;
-(long long)epoch;
-(void)setEpoch:(long long)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(SCD_Struct_VC6)timeValue;
-(int)timescale;
-(void)setTimescale:(int)arg1 ;
@end

