/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDSTransportHint;

@interface GEOPDSSearchLocationParameters : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDSTransportHint* _searchTransportHint;
	int _searchLocationParametersType;
	struct {
		unsigned has_searchLocationParametersType : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasSearchLocationParametersType; 
@property (assign,nonatomic) int searchLocationParametersType; 
@property (nonatomic,readonly) BOOL hasSearchTransportHint; 
@property (nonatomic,retain) GEOPDSTransportHint * searchTransportHint; 
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
-(GEOPDSTransportHint *)searchTransportHint;
-(void)setSearchLocationParametersType:(int)arg1 ;
-(void)setSearchTransportHint:(GEOPDSTransportHint *)arg1 ;
-(int)searchLocationParametersType;
-(void)setHasSearchLocationParametersType:(BOOL)arg1 ;
-(BOOL)hasSearchLocationParametersType;
-(id)searchLocationParametersTypeAsString:(int)arg1 ;
-(int)StringAsSearchLocationParametersType:(id)arg1 ;
-(BOOL)hasSearchTransportHint;
@end
