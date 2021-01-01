/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEORPSuggestionEntry : PBCodable <NSCopying> {

	NSMutableArray* _displayLines;
	unsigned _serverSearchCompletionEntryIndex;
	unsigned _serverSearchCompletionSectionIndex;
	int _type;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type; 
@property (nonatomic,retain) NSMutableArray * displayLines; 
@property (assign,nonatomic) BOOL hasServerSearchCompletionSectionIndex; 
@property (assign,nonatomic) unsigned serverSearchCompletionSectionIndex; 
@property (assign,nonatomic) BOOL hasServerSearchCompletionEntryIndex; 
@property (assign,nonatomic) unsigned serverSearchCompletionEntryIndex; 
+(BOOL)isValid:(id)arg1 ;
+(Class)displayLineType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setServerSearchCompletionSectionIndex:(unsigned)arg1 ;
-(void)setServerSearchCompletionEntryIndex:(unsigned)arg1 ;
-(NSMutableArray *)displayLines;
-(void)addDisplayLine:(id)arg1 ;
-(unsigned long long)displayLinesCount;
-(void)clearDisplayLines;
-(id)displayLineAtIndex:(unsigned long long)arg1 ;
-(void)setDisplayLines:(NSMutableArray *)arg1 ;
-(unsigned)serverSearchCompletionSectionIndex;
-(void)setHasServerSearchCompletionSectionIndex:(BOOL)arg1 ;
-(BOOL)hasServerSearchCompletionSectionIndex;
-(unsigned)serverSearchCompletionEntryIndex;
-(void)setHasServerSearchCompletionEntryIndex:(BOOL)arg1 ;
-(BOOL)hasServerSearchCompletionEntryIndex;
@end
