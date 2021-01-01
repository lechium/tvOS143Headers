/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Network.framework/Network
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NWAWDNWProtocolEstablishmentReport : PBCodable <NSCopying> {

	unsigned long long _handshakeMilliseconds;
	unsigned long long _handshakeRTTMilliseconds;
	int _protocolIndex;
	NSString* _protocolName;
	SCD_Struct_NW12 _has;

}

@property (assign,nonatomic) BOOL hasProtocolIndex; 
@property (assign,nonatomic) int protocolIndex;                                        //@synthesize protocolIndex=_protocolIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasProtocolName; 
@property (nonatomic,retain) NSString * protocolName;                                  //@synthesize protocolName=_protocolName - In the implementation block
@property (assign,nonatomic) BOOL hasHandshakeMilliseconds; 
@property (assign,nonatomic) unsigned long long handshakeMilliseconds;                 //@synthesize handshakeMilliseconds=_handshakeMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasHandshakeRTTMilliseconds; 
@property (assign,nonatomic) unsigned long long handshakeRTTMilliseconds;              //@synthesize handshakeRTTMilliseconds=_handshakeRTTMilliseconds - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setProtocolName:(NSString *)arg1 ;
-(NSString *)protocolName;
-(BOOL)hasProtocolName;
-(void)setProtocolIndex:(int)arg1 ;
-(void)setHasProtocolIndex:(BOOL)arg1 ;
-(BOOL)hasProtocolIndex;
-(void)setHandshakeMilliseconds:(unsigned long long)arg1 ;
-(void)setHasHandshakeMilliseconds:(BOOL)arg1 ;
-(BOOL)hasHandshakeMilliseconds;
-(void)setHandshakeRTTMilliseconds:(unsigned long long)arg1 ;
-(void)setHasHandshakeRTTMilliseconds:(BOOL)arg1 ;
-(BOOL)hasHandshakeRTTMilliseconds;
-(int)protocolIndex;
-(unsigned long long)handshakeMilliseconds;
-(unsigned long long)handshakeRTTMilliseconds;
@end
