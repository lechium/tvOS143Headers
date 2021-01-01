/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields;

@interface GEOTileSetVersion : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	GEOTileSetRegion* _availableTiles;
	unsigned long long _availableTilesCount;
	unsigned long long _availableTilesSpace;
	GEOGenericTile* _genericTiles;
	unsigned long long _genericTilesCount;
	unsigned long long _genericTilesSpace;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _identifier;
	unsigned _supportedLanguagesVersion;
	unsigned _timeToLiveSeconds;
	struct {
		unsigned has_supportedLanguagesVersion : 1;
		unsigned has_timeToLiveSeconds : 1;
		unsigned read_unknownFields : 1;
		unsigned read_availableTiles : 1;
		unsigned read_genericTiles : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) unsigned identifier; 
@property (nonatomic,readonly) unsigned long long availableTilesCount; 
@property (nonatomic,readonly) GEOTileSetRegion* availableTiles; 
@property (assign,nonatomic) BOOL hasTimeToLiveSeconds; 
@property (assign,nonatomic) unsigned timeToLiveSeconds; 
@property (nonatomic,readonly) unsigned long long genericTilesCount; 
@property (nonatomic,readonly) GEOGenericTile* genericTiles; 
@property (assign,nonatomic) BOOL hasSupportedLanguagesVersion; 
@property (assign,nonatomic) unsigned supportedLanguagesVersion; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(unsigned)identifier;
-(void)setIdentifier:(unsigned)arg1 ;
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
-(void)setTimeToLiveSeconds:(unsigned)arg1 ;
-(unsigned)timeToLiveSeconds;
-(void)setHasTimeToLiveSeconds:(BOOL)arg1 ;
-(BOOL)hasTimeToLiveSeconds;
-(void)clearAvailableTiles;
-(void)addAvailableTiles:(GEOTileSetRegion)arg1 ;
-(unsigned long long)availableTilesCount;
-(GEOTileSetRegion)availableTilesAtIndex:(unsigned long long)arg1 ;
-(GEOTileSetRegion*)availableTiles;
-(void)setAvailableTiles:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)genericTilesCount;
-(GEOGenericTile)genericTileAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSupportedLanguagesVersion;
-(unsigned)supportedLanguagesVersion;
-(GEOGenericTile*)genericTiles;
-(void)clearGenericTiles;
-(void)addGenericTile:(GEOGenericTile)arg1 ;
-(void)setSupportedLanguagesVersion:(unsigned)arg1 ;
-(void)setGenericTiles:(GEOGenericTile*)arg1 count:(unsigned long long)arg2 ;
-(void)setHasSupportedLanguagesVersion:(BOOL)arg1 ;
@end

