/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, GEOVLFEntryPoint, NSMutableArray, GEOVLFCorrection;

@interface GEOLogMsgEventVLFUsage : PBCodable <NSCopying> {

	PBDataReader* _reader;
	GEOVLFEntryPoint* _entryPoint;
	NSMutableArray* _localizationDetails;
	GEOVLFCorrection* _postFusionCorrection;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _finalState;
	unsigned _sessionTimeMs;
	unsigned _timeRoundedToHour;
	struct {
		unsigned has_finalState : 1;
		unsigned has_sessionTimeMs : 1;
		unsigned has_timeRoundedToHour : 1;
		unsigned read_entryPoint : 1;
		unsigned read_localizationDetails : 1;
		unsigned read_postFusionCorrection : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasEntryPoint; 
@property (nonatomic,retain) GEOVLFEntryPoint * entryPoint; 
@property (assign,nonatomic) BOOL hasSessionTimeMs; 
@property (assign,nonatomic) unsigned sessionTimeMs; 
@property (nonatomic,retain) NSMutableArray * localizationDetails; 
@property (assign,nonatomic) BOOL hasFinalState; 
@property (assign,nonatomic) int finalState; 
@property (nonatomic,readonly) BOOL hasPostFusionCorrection; 
@property (nonatomic,retain) GEOVLFCorrection * postFusionCorrection; 
@property (assign,nonatomic) BOOL hasTimeRoundedToHour; 
@property (assign,nonatomic) unsigned timeRoundedToHour; 
+(BOOL)isValid:(id)arg1 ;
+(Class)localizationDetailsType;
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
-(void)setTimeRoundedToHour:(unsigned)arg1 ;
-(unsigned)timeRoundedToHour;
-(void)setHasTimeRoundedToHour:(BOOL)arg1 ;
-(BOOL)hasTimeRoundedToHour;
-(void)setEntryPoint:(GEOVLFEntryPoint *)arg1 ;
-(void)setSessionTimeMs:(unsigned)arg1 ;
-(NSMutableArray *)localizationDetails;
-(void)setLocalizationDetails:(NSMutableArray *)arg1 ;
-(void)setFinalState:(int)arg1 ;
-(void)setPostFusionCorrection:(GEOVLFCorrection *)arg1 ;
-(GEOVLFEntryPoint *)entryPoint;
-(GEOVLFCorrection *)postFusionCorrection;
-(void)addLocalizationDetails:(id)arg1 ;
-(unsigned long long)localizationDetailsCount;
-(void)clearLocalizationDetails;
-(id)localizationDetailsAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasEntryPoint;
-(unsigned)sessionTimeMs;
-(void)setHasSessionTimeMs:(BOOL)arg1 ;
-(BOOL)hasSessionTimeMs;
-(int)finalState;
-(void)setHasFinalState:(BOOL)arg1 ;
-(BOOL)hasFinalState;
-(id)finalStateAsString:(int)arg1 ;
-(int)StringAsFinalState:(id)arg1 ;
-(BOOL)hasPostFusionCorrection;
@end

