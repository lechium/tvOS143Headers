/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOSurchargeType.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOFormattedString, NSString;

@interface GEORequestOption : PBCodable <GEOSurchargeType, NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOFormattedString* _name;
	int _enumValue;
	struct {
		unsigned has_enumValue : 1;
	}  _flags;

}

@property (nonatomic,readonly) int value; 
@property (nonatomic,readonly) id<GEOServerFormattedString> formattedName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasEnumValue; 
@property (assign,nonatomic) int enumValue; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) GEOFormattedString * name; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(GEOFormattedString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(GEOFormattedString *)arg1 ;
-(int)value;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(void)setEnumValue:(int)arg1 ;
-(int)enumValue;
-(void)setHasEnumValue:(BOOL)arg1 ;
-(BOOL)hasEnumValue;
-(id<GEOServerFormattedString>)formattedName;
@end

