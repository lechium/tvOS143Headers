/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOPDPlaceCollectionFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	unsigned _expectedResultCount;
	BOOL _isCollectionView;
	BOOL _partiallyClientize;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasExpectedResultCount; 
@property (assign,nonatomic) unsigned expectedResultCount; 
@property (assign,nonatomic) BOOL hasPartiallyClientize; 
@property (assign,nonatomic) BOOL partiallyClientize; 
@property (assign,nonatomic) BOOL hasIsCollectionView; 
@property (assign,nonatomic) BOOL isCollectionView; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
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
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setExpectedResultCount:(unsigned)arg1 ;
-(void)setPartiallyClientize:(BOOL)arg1 ;
-(void)setIsCollectionView:(BOOL)arg1 ;
-(unsigned)expectedResultCount;
-(void)setHasExpectedResultCount:(BOOL)arg1 ;
-(BOOL)hasExpectedResultCount;
-(BOOL)partiallyClientize;
-(void)setHasPartiallyClientize:(BOOL)arg1 ;
-(BOOL)hasPartiallyClientize;
-(BOOL)isCollectionView;
-(void)setHasIsCollectionView:(BOOL)arg1 ;
-(BOOL)hasIsCollectionView;
@end

