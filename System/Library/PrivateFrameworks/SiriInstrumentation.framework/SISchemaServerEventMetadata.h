/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface SISchemaServerEventMetadata : PBCodable {

	NSData* _turnID;
	long long _timestampNs;
	NSData* _siriDeviceID;
	NSString* _serverPod;
	SCD_Struct_SI1 _has;
	BOOL _hasTurnID;
	BOOL _hasSiriDeviceID;
	BOOL _hasServerPod;

}

@property (nonatomic,copy) NSData * turnID;                      //@synthesize turnID=_turnID - In the implementation block
@property (assign,nonatomic) BOOL hasTurnID;                     //@synthesize hasTurnID=_hasTurnID - In the implementation block
@property (assign,nonatomic) long long timestampNs;              //@synthesize timestampNs=_timestampNs - In the implementation block
@property (assign,nonatomic) BOOL hasTimestampNs; 
@property (nonatomic,copy) NSData * siriDeviceID;                //@synthesize siriDeviceID=_siriDeviceID - In the implementation block
@property (assign,nonatomic) BOOL hasSiriDeviceID;               //@synthesize hasSiriDeviceID=_hasSiriDeviceID - In the implementation block
@property (nonatomic,copy) NSString * serverPod;                 //@synthesize serverPod=_serverPod - In the implementation block
@property (assign,nonatomic) BOOL hasServerPod;                  //@synthesize hasServerPod=_hasServerPod - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(NSData *)turnID;
-(void)setTurnID:(NSData *)arg1 ;
-(BOOL)hasTurnID;
-(void)setSiriDeviceID:(NSData *)arg1 ;
-(NSData *)siriDeviceID;
-(BOOL)hasSiriDeviceID;
-(void)setHasTurnID:(BOOL)arg1 ;
-(void)setHasSiriDeviceID:(BOOL)arg1 ;
-(void)setTimestampNs:(long long)arg1 ;
-(void)setServerPod:(NSString *)arg1 ;
-(NSString *)serverPod;
-(long long)timestampNs;
-(BOOL)hasTimestampNs;
-(void)setHasTimestampNs:(BOOL)arg1 ;
-(BOOL)hasServerPod;
-(void)setHasServerPod:(BOOL)arg1 ;
@end

