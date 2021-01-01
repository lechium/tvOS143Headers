/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEOLPRPowerType : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _key;
	NSMutableArray* _subtitles;
	NSMutableArray* _subtypes;
	NSMutableArray* _titles;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_key : 1;
		unsigned read_subtitles : 1;
		unsigned read_subtypes : 1;
		unsigned read_titles : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key; 
@property (nonatomic,retain) NSMutableArray * titles; 
@property (nonatomic,retain) NSMutableArray * subtitles; 
@property (nonatomic,retain) NSMutableArray * subtypes; 
+(BOOL)isValid:(id)arg1 ;
+(Class)titleType;
+(Class)subtitleType;
+(Class)subtypesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasKey;
-(void)addTitle:(id)arg1 ;
-(unsigned long long)titlesCount;
-(void)clearTitles;
-(id)titleAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)titles;
-(void)setTitles:(NSMutableArray *)arg1 ;
-(void)addSubtitle:(id)arg1 ;
-(void)addSubtypes:(id)arg1 ;
-(unsigned long long)subtitlesCount;
-(void)clearSubtitles;
-(id)subtitleAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)subtypesCount;
-(void)clearSubtypes;
-(id)subtypesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)subtitles;
-(void)setSubtitles:(NSMutableArray *)arg1 ;
-(NSMutableArray *)subtypes;
-(void)setSubtypes:(NSMutableArray *)arg1 ;
@end

