/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSData;

@interface GEOMapsServerMetadata : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _mapsSearchResults;
	NSMutableArray* _suggestionEntryMetadataDisplayeds;
	NSData* _suggestionEntryMetadataTappedOn;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_mapsSearchResults : 1;
		unsigned read_suggestionEntryMetadataDisplayeds : 1;
		unsigned read_suggestionEntryMetadataTappedOn : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadataTappedOn; 
@property (nonatomic,retain) NSData * suggestionEntryMetadataTappedOn; 
@property (nonatomic,retain) NSMutableArray * suggestionEntryMetadataDisplayeds; 
@property (nonatomic,retain) NSMutableArray * mapsSearchResults; 
+(BOOL)isValid:(id)arg1 ;
+(Class)suggestionEntryMetadataDisplayedType;
+(Class)mapsSearchResultType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)suggestionEntryMetadataTappedOn;
-(NSMutableArray *)suggestionEntryMetadataDisplayeds;
-(void)setSuggestionEntryMetadataTappedOn:(NSData *)arg1 ;
-(void)addSuggestionEntryMetadataDisplayed:(id)arg1 ;
-(void)addMapsSearchResult:(id)arg1 ;
-(unsigned long long)suggestionEntryMetadataDisplayedsCount;
-(void)clearSuggestionEntryMetadataDisplayeds;
-(id)suggestionEntryMetadataDisplayedAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)mapsSearchResultsCount;
-(void)clearMapsSearchResults;
-(id)mapsSearchResultAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSuggestionEntryMetadataTappedOn;
-(void)setSuggestionEntryMetadataDisplayeds:(NSMutableArray *)arg1 ;
-(NSMutableArray *)mapsSearchResults;
-(void)setMapsSearchResults:(NSMutableArray *)arg1 ;
@end
