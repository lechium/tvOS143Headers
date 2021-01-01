/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, GEORPFeedbackLayoutFieldName;

@interface GEORPLayoutField : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _displayText;
	GEORPFeedbackLayoutFieldName* _name;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _ordinal;
	int _type;
	BOOL _enabled;
	struct {
		unsigned has_ordinal : 1;
		unsigned has_type : 1;
		unsigned has_enabled : 1;
		unsigned read_displayText : 1;
		unsigned read_name : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) GEORPFeedbackLayoutFieldName * name; 
@property (nonatomic,readonly) BOOL hasDisplayText; 
@property (nonatomic,retain) NSString * displayText; 
@property (assign,nonatomic) BOOL hasEnabled; 
@property (assign,nonatomic) BOOL enabled; 
@property (assign,nonatomic) BOOL hasOrdinal; 
@property (assign,nonatomic) unsigned ordinal; 
+(BOOL)isValid:(id)arg1 ;
-(GEORPFeedbackLayoutFieldName *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)setType:(int)arg1 ;
-(id)initWithData:(id)arg1 ;
-(int)type;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setName:(GEORPFeedbackLayoutFieldName *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setHasEnabled:(BOOL)arg1 ;
-(BOOL)hasEnabled;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setOrdinal:(unsigned)arg1 ;
-(unsigned)ordinal;
-(void)setHasOrdinal:(BOOL)arg1 ;
-(BOOL)hasOrdinal;
-(NSString *)displayText;
-(void)setDisplayText:(NSString *)arg1 ;
-(BOOL)hasDisplayText;
@end

