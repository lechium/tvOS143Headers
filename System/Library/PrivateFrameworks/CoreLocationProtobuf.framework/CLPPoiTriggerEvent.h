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

@interface CLPPoiTriggerEvent : PBCodable <NSCopying> {

	unsigned long long _muid;
	double _triggerTimestamp;
	int _providerIdentifier;
	int _triggerSubType;
	int _triggerType;
	SCD_Struct_CL2 _has;

}

@property (assign,nonatomic) unsigned long long muid;                 //@synthesize muid=_muid - In the implementation block
@property (assign,nonatomic) BOOL hasProviderIdentifier; 
@property (assign,nonatomic) int providerIdentifier;                  //@synthesize providerIdentifier=_providerIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasTriggerType; 
@property (assign,nonatomic) int triggerType;                         //@synthesize triggerType=_triggerType - In the implementation block
@property (assign,nonatomic) BOOL hasTriggerTimestamp; 
@property (assign,nonatomic) double triggerTimestamp;                 //@synthesize triggerTimestamp=_triggerTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTriggerSubType; 
@property (assign,nonatomic) int triggerSubType;                      //@synthesize triggerSubType=_triggerSubType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)providerIdentifier;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTriggerType:(int)arg1 ;
-(void)setHasTriggerType:(BOOL)arg1 ;
-(BOOL)hasTriggerType;
-(int)triggerType;
-(void)setProviderIdentifier:(int)arg1 ;
-(void)setHasProviderIdentifier:(BOOL)arg1 ;
-(BOOL)hasProviderIdentifier;
-(id)triggerTypeAsString:(int)arg1 ;
-(int)StringAsTriggerType:(id)arg1 ;
-(void)setTriggerTimestamp:(double)arg1 ;
-(void)setHasTriggerTimestamp:(BOOL)arg1 ;
-(BOOL)hasTriggerTimestamp;
-(void)setTriggerSubType:(int)arg1 ;
-(void)setHasTriggerSubType:(BOOL)arg1 ;
-(BOOL)hasTriggerSubType;
-(unsigned long long)muid;
-(void)setMuid:(unsigned long long)arg1 ;
-(double)triggerTimestamp;
-(int)triggerSubType;
@end

