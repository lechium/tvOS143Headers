/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOAddressCorrectionTaggedLocationRequest : PBRequest <NSCopying> {

	NSMutableArray* _significantLocations;

}

@property (nonatomic,retain) NSMutableArray * significantLocations; 
+(BOOL)isValid:(id)arg1 ;
+(Class)significantLocationType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)clearSensitiveFields;
-(void)addSignificantLocation:(id)arg1 ;
-(NSMutableArray *)significantLocations;
-(unsigned long long)significantLocationsCount;
-(void)clearSignificantLocations;
-(id)significantLocationAtIndex:(unsigned long long)arg1 ;
-(void)setSignificantLocations:(NSMutableArray *)arg1 ;
@end

