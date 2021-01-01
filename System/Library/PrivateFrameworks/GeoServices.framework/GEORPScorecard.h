/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSMutableArray, NSString;

@interface GEORPScorecard : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _categoryRatings;
	NSString* _version;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _recommended;
	struct {
		unsigned has_recommended : 1;
		unsigned read_categoryRatings : 1;
		unsigned read_version : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasVersion; 
@property (nonatomic,retain) NSString * version; 
@property (assign,nonatomic) BOOL hasRecommended; 
@property (assign,nonatomic) BOOL recommended; 
@property (nonatomic,retain) NSMutableArray * categoryRatings; 
+(BOOL)isValid:(id)arg1 ;
+(Class)categoryRatingsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)version;
-(id)dictionaryRepresentation;
-(void)setVersion:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasVersion;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setRecommended:(BOOL)arg1 ;
-(void)addCategoryRatings:(id)arg1 ;
-(unsigned long long)categoryRatingsCount;
-(void)clearCategoryRatings;
-(id)categoryRatingsAtIndex:(unsigned long long)arg1 ;
-(BOOL)recommended;
-(void)setHasRecommended:(BOOL)arg1 ;
-(BOOL)hasRecommended;
-(NSMutableArray *)categoryRatings;
-(void)setCategoryRatings:(NSMutableArray *)arg1 ;
@end

