/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CLPNRCellNeighbor : PBCodable <NSCopying> {

	int _ecn0;
	int _nrarfcn;
	int _pid;
	int _rscp;
	int _rssi;
	unsigned _saOrNsaNeighbor;
	unsigned _scs;
	SCD_Struct_CL8 _has;

}

@property (assign,nonatomic) BOOL hasNrarfcn; 
@property (assign,nonatomic) int nrarfcn;                           //@synthesize nrarfcn=_nrarfcn - In the implementation block
@property (assign,nonatomic) BOOL hasPid; 
@property (assign,nonatomic) int pid;                               //@synthesize pid=_pid - In the implementation block
@property (assign,nonatomic) BOOL hasRssi; 
@property (assign,nonatomic) int rssi;                              //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) BOOL hasEcn0; 
@property (assign,nonatomic) int ecn0;                              //@synthesize ecn0=_ecn0 - In the implementation block
@property (assign,nonatomic) BOOL hasRscp; 
@property (assign,nonatomic) int rscp;                              //@synthesize rscp=_rscp - In the implementation block
@property (assign,nonatomic) BOOL hasScs; 
@property (assign,nonatomic) unsigned scs;                          //@synthesize scs=_scs - In the implementation block
@property (assign,nonatomic) BOOL hasSaOrNsaNeighbor; 
@property (assign,nonatomic) unsigned saOrNsaNeighbor;              //@synthesize saOrNsaNeighbor=_saOrNsaNeighbor - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(int)rssi;
-(int)rscp;
-(int)ecn0;
-(void)setRssi:(int)arg1 ;
-(void)setRscp:(int)arg1 ;
-(void)setEcn0:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasRssi:(BOOL)arg1 ;
-(BOOL)hasRssi;
-(void)setHasPid:(BOOL)arg1 ;
-(BOOL)hasPid;
-(void)setHasEcn0:(BOOL)arg1 ;
-(BOOL)hasEcn0;
-(void)setHasRscp:(BOOL)arg1 ;
-(BOOL)hasRscp;
-(void)setNrarfcn:(int)arg1 ;
-(void)setHasNrarfcn:(BOOL)arg1 ;
-(BOOL)hasNrarfcn;
-(void)setScs:(unsigned)arg1 ;
-(void)setHasScs:(BOOL)arg1 ;
-(BOOL)hasScs;
-(void)setSaOrNsaNeighbor:(unsigned)arg1 ;
-(void)setHasSaOrNsaNeighbor:(BOOL)arg1 ;
-(BOOL)hasSaOrNsaNeighbor;
-(int)nrarfcn;
-(unsigned)scs;
-(unsigned)saOrNsaNeighbor;
@end

