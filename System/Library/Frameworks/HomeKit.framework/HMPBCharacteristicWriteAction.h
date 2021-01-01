/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKit/HomeKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, HMPBCharacteristicReference;

@interface HMPBCharacteristicWriteAction : PBCodable <NSCopying> {

	NSData* _actionUUID;
	HMPBCharacteristicReference* _characteristicReference;
	NSData* _targetValue;

}

@property (nonatomic,readonly) BOOL hasActionUUID; 
@property (nonatomic,retain) NSData * actionUUID;                                                //@synthesize actionUUID=_actionUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasTargetValue; 
@property (nonatomic,retain) NSData * targetValue;                                               //@synthesize targetValue=_targetValue - In the implementation block
@property (nonatomic,readonly) BOOL hasCharacteristicReference; 
@property (nonatomic,retain) HMPBCharacteristicReference * characteristicReference;              //@synthesize characteristicReference=_characteristicReference - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)targetValue;
-(void)setTargetValue:(NSData *)arg1 ;
-(NSData *)actionUUID;
-(void)setActionUUID:(NSData *)arg1 ;
-(BOOL)hasActionUUID;
-(HMPBCharacteristicReference *)characteristicReference;
-(void)setCharacteristicReference:(HMPBCharacteristicReference *)arg1 ;
-(BOOL)hasTargetValue;
-(BOOL)hasCharacteristicReference;
@end

