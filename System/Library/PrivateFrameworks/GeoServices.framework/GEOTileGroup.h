/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields;

@interface GEOTileGroup : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	SCD_Struct_GE17* _attributionIndexs;
	SCD_Struct_GE17* _fontIndexs;
	GEOTileSetRegion* _hybridUnavailableRegions;
	unsigned long long _hybridUnavailableRegionsCount;
	unsigned long long _hybridUnavailableRegionsSpace;
	SCD_Struct_GE17* _iconIndexs;
	GEORegionalResourceIndex* _regionalResourceIndexs;
	unsigned long long _regionalResourceIndexsCount;
	unsigned long long _regionalResourceIndexsSpace;
	SCD_Struct_GE17* _resourceIndexs;
	SCD_Struct_GE17* _styleSheetIndexs;
	SCD_Struct_GE17* _textureIndexs;
	GEOVersionedTileSet* _tileSets;
	unsigned long long _tileSetsCount;
	unsigned long long _tileSetsSpace;
	SCD_Struct_GE17* _xmlIndexs;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _identifier;
	unsigned _muninVersionIndex;
	struct {
		unsigned has_muninVersionIndex : 1;
		unsigned read_unknownFields : 1;
		unsigned read_attributionIndexs : 1;
		unsigned read_fontIndexs : 1;
		unsigned read_hybridUnavailableRegions : 1;
		unsigned read_iconIndexs : 1;
		unsigned read_regionalResourceIndexs : 1;
		unsigned read_resourceIndexs : 1;
		unsigned read_styleSheetIndexs : 1;
		unsigned read_textureIndexs : 1;
		unsigned read_tileSets : 1;
		unsigned read_xmlIndexs : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) unsigned identifier; 
@property (nonatomic,readonly) unsigned long long tileSetsCount; 
@property (nonatomic,readonly) GEOVersionedTileSet* tileSets; 
@property (nonatomic,readonly) unsigned long long styleSheetIndexsCount; 
@property (nonatomic,readonly) unsigned* styleSheetIndexs; 
@property (nonatomic,readonly) unsigned long long textureIndexsCount; 
@property (nonatomic,readonly) unsigned* textureIndexs; 
@property (nonatomic,readonly) unsigned long long fontIndexsCount; 
@property (nonatomic,readonly) unsigned* fontIndexs; 
@property (nonatomic,readonly) unsigned long long iconIndexsCount; 
@property (nonatomic,readonly) unsigned* iconIndexs; 
@property (nonatomic,readonly) unsigned long long regionalResourceIndexsCount; 
@property (nonatomic,readonly) GEORegionalResourceIndex* regionalResourceIndexs; 
@property (nonatomic,readonly) unsigned long long xmlIndexsCount; 
@property (nonatomic,readonly) unsigned* xmlIndexs; 
@property (nonatomic,readonly) unsigned long long attributionIndexsCount; 
@property (nonatomic,readonly) unsigned* attributionIndexs; 
@property (nonatomic,readonly) unsigned long long hybridUnavailableRegionsCount; 
@property (nonatomic,readonly) GEOTileSetRegion* hybridUnavailableRegions; 
@property (nonatomic,readonly) unsigned long long resourceIndexsCount; 
@property (nonatomic,readonly) unsigned* resourceIndexs; 
@property (assign,nonatomic) BOOL hasMuninVersionIndex; 
@property (assign,nonatomic) unsigned muninVersionIndex; 
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
-(void)addTileSet:(GEOVersionedTileSet)arg1 ;
-(unsigned long long)tileSetsCount;
-(void)clearTileSets;
-(GEOVersionedTileSet)tileSetAtIndex:(unsigned long long)arg1 ;
-(GEOVersionedTileSet*)tileSets;
-(void)clearRegionalResourceIndexs;
-(void)clearHybridUnavailableRegions;
-(void)addStyleSheetIndex:(unsigned)arg1 ;
-(void)addTextureIndex:(unsigned)arg1 ;
-(void)addFontIndex:(unsigned)arg1 ;
-(void)addIconIndex:(unsigned)arg1 ;
-(void)addRegionalResourceIndex:(GEORegionalResourceIndex)arg1 ;
-(void)addXmlIndex:(unsigned)arg1 ;
-(void)addAttributionIndex:(unsigned)arg1 ;
-(void)addHybridUnavailableRegion:(GEOTileSetRegion)arg1 ;
-(void)addResourceIndex:(unsigned)arg1 ;
-(void)setMuninVersionIndex:(unsigned)arg1 ;
-(unsigned long long)styleSheetIndexsCount;
-(void)clearStyleSheetIndexs;
-(unsigned)styleSheetIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)textureIndexsCount;
-(void)clearTextureIndexs;
-(unsigned)textureIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)fontIndexsCount;
-(void)clearFontIndexs;
-(unsigned)fontIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)iconIndexsCount;
-(void)clearIconIndexs;
-(unsigned)iconIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)regionalResourceIndexsCount;
-(GEORegionalResourceIndex)regionalResourceIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)xmlIndexsCount;
-(void)clearXmlIndexs;
-(unsigned)xmlIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)attributionIndexsCount;
-(void)clearAttributionIndexs;
-(unsigned)attributionIndexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)hybridUnavailableRegionsCount;
-(GEOTileSetRegion)hybridUnavailableRegionAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)resourceIndexsCount;
-(void)clearResourceIndexs;
-(unsigned)resourceIndexAtIndex:(unsigned long long)arg1 ;
-(void)setTileSets:(GEOVersionedTileSet*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)styleSheetIndexs;
-(void)setStyleSheetIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)textureIndexs;
-(void)setTextureIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)fontIndexs;
-(void)setFontIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)iconIndexs;
-(void)setIconIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(GEORegionalResourceIndex*)regionalResourceIndexs;
-(void)setRegionalResourceIndexs:(GEORegionalResourceIndex*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)xmlIndexs;
-(void)setXmlIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)attributionIndexs;
-(void)setAttributionIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(GEOTileSetRegion*)hybridUnavailableRegions;
-(void)setHybridUnavailableRegions:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(unsigned*)resourceIndexs;
-(void)setResourceIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned)muninVersionIndex;
-(void)setHasMuninVersionIndex:(BOOL)arg1 ;
-(BOOL)hasMuninVersionIndex;
@end

