/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface GEOMinimumVisibleElevationRange : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _lowerBoundCm;
	int _upperBoundCm;
	struct {
		unsigned has_lowerBoundCm : 1;
		unsigned has_upperBoundCm : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasLowerBoundCm; 
@property (assign,nonatomic) int lowerBoundCm; 
@property (assign,nonatomic) BOOL hasUpperBoundCm; 
@property (assign,nonatomic) int upperBoundCm; 
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
-(void)setLowerBoundCm:(int)arg1 ;
-(void)setUpperBoundCm:(int)arg1 ;
-(int)lowerBoundCm;
-(void)setHasLowerBoundCm:(BOOL)arg1 ;
-(BOOL)hasLowerBoundCm;
-(int)upperBoundCm;
-(void)setHasUpperBoundCm:(BOOL)arg1 ;
-(BOOL)hasUpperBoundCm;
@end
