/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOVLFCorrection : PBCodable <NSCopying> {

	unsigned _headingCorrectionMagnitude;
	unsigned _locationCorrectionMagnitude;
	SCD_Struct_GE114 _flags;

}

@property (assign,nonatomic) BOOL hasLocationCorrectionMagnitude; 
@property (assign,nonatomic) unsigned locationCorrectionMagnitude; 
@property (assign,nonatomic) BOOL hasHeadingCorrectionMagnitude; 
@property (assign,nonatomic) unsigned headingCorrectionMagnitude; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setLocationCorrectionMagnitude:(unsigned)arg1 ;
-(void)setHeadingCorrectionMagnitude:(unsigned)arg1 ;
-(unsigned)locationCorrectionMagnitude;
-(void)setHasLocationCorrectionMagnitude:(BOOL)arg1 ;
-(BOOL)hasLocationCorrectionMagnitude;
-(unsigned)headingCorrectionMagnitude;
-(void)setHasHeadingCorrectionMagnitude:(BOOL)arg1 ;
-(BOOL)hasHeadingCorrectionMagnitude;
@end
