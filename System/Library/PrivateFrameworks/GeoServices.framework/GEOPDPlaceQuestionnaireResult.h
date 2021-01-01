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

@class PBDataReader, NSMutableArray, GEOPDMapsIdentifier, GEOPDScorecardLayout;

@interface GEOPDPlaceQuestionnaireResult : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSMutableArray* _historicalMapsIds;
	GEOPDMapsIdentifier* _mapsId;
	GEOPDScorecardLayout* _scorecardLayout;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _status;
	BOOL _isOverride;
	struct {
		unsigned has_status : 1;
		unsigned has_isOverride : 1;
		unsigned read_historicalMapsIds : 1;
		unsigned read_mapsId : 1;
		unsigned read_scorecardLayout : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status; 
@property (nonatomic,readonly) BOOL hasScorecardLayout; 
@property (nonatomic,retain) GEOPDScorecardLayout * scorecardLayout; 
@property (nonatomic,readonly) BOOL hasMapsId; 
@property (nonatomic,retain) GEOPDMapsIdentifier * mapsId; 
@property (assign,nonatomic) BOOL hasIsOverride; 
@property (assign,nonatomic) BOOL isOverride; 
@property (nonatomic,retain) NSMutableArray * historicalMapsIds; 
+(BOOL)isValid:(id)arg1 ;
+(Class)historicalMapsIdType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(GEOPDMapsIdentifier *)mapsId;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setMapsId:(GEOPDMapsIdentifier *)arg1 ;
-(BOOL)hasMapsId;
-(GEOPDScorecardLayout *)scorecardLayout;
-(NSMutableArray *)historicalMapsIds;
-(void)setScorecardLayout:(GEOPDScorecardLayout *)arg1 ;
-(void)setIsOverride:(BOOL)arg1 ;
-(void)addHistoricalMapsId:(id)arg1 ;
-(unsigned long long)historicalMapsIdsCount;
-(void)clearHistoricalMapsIds;
-(id)historicalMapsIdAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasScorecardLayout;
-(BOOL)isOverride;
-(void)setHasIsOverride:(BOOL)arg1 ;
-(BOOL)hasIsOverride;
-(void)setHistoricalMapsIds:(NSMutableArray *)arg1 ;
@end

