/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOServerFormatTokenCountdownValue.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary, NSString, PBDataReader, PBUnknownFields, NSMutableArray;

@interface GEOCountdownData : PBCodable <GEOServerFormatTokenCountdownValue, NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE85* _alternateCountdownTypes;
	SCD_Struct_GE17* _timestampValues;
	NSMutableArray* _alternateFormatStrings;
	NSString* _separator;
	NSString* _timezone;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_alternateCountdownTypes : 1;
		unsigned read_timestampValues : 1;
		unsigned read_alternateFormatStrings : 1;
		unsigned read_separator : 1;
		unsigned read_timezone : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) long long countdownType; 
@property (nonatomic,readonly) NSArray * timestamps; 
@property (nonatomic,readonly) NSDictionary * alternativeFormatStringsByType; 
@property (nonatomic,readonly) NSString * separator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long timestampValuesCount; 
@property (nonatomic,readonly) unsigned* timestampValues; 
@property (nonatomic,retain) NSMutableArray * alternateFormatStrings; 
@property (nonatomic,readonly) unsigned long long alternateCountdownTypesCount; 
@property (nonatomic,readonly) int* alternateCountdownTypes; 
@property (nonatomic,readonly) BOOL hasSeparator; 
@property (nonatomic,retain) NSString * separator; 
@property (nonatomic,readonly) BOOL hasTimezone; 
@property (nonatomic,retain) NSString * timezone; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)alternateFormatStringType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSArray *)timestamps;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)separator;
-(NSString *)timezone;
-(NSMutableArray *)alternateFormatStrings;
-(void)addTimestampValue:(unsigned)arg1 ;
-(void)addAlternateFormatString:(id)arg1 ;
-(void)addAlternateCountdownType:(int)arg1 ;
-(void)setSeparator:(NSString *)arg1 ;
-(void)setTimezone:(NSString *)arg1 ;
-(unsigned long long)timestampValuesCount;
-(void)clearTimestampValues;
-(unsigned)timestampValueAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)alternateFormatStringsCount;
-(void)clearAlternateFormatStrings;
-(id)alternateFormatStringAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)alternateCountdownTypesCount;
-(void)clearAlternateCountdownTypes;
-(int)alternateCountdownTypeAtIndex:(unsigned long long)arg1 ;
-(unsigned*)timestampValues;
-(void)setTimestampValues:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)setAlternateFormatStrings:(NSMutableArray *)arg1 ;
-(int*)alternateCountdownTypes;
-(void)setAlternateCountdownTypes:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)alternateCountdownTypesAsString:(int)arg1 ;
-(int)StringAsAlternateCountdownTypes:(id)arg1 ;
-(BOOL)hasSeparator;
-(BOOL)hasTimezone;
-(long long)_convertFrom:(int)arg1 ;
-(long long)countdownType;
-(NSDictionary *)alternativeFormatStringsByType;
@end
