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

@class PBDataReader;

@interface GEOLPRTimeCondition : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE17* _dayOfMonths;
	SCD_Struct_GE85* _dayOfWeeks;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	SCD_Struct_GE37 _flags;

}

@property (nonatomic,readonly) unsigned long long dayOfWeeksCount; 
@property (nonatomic,readonly) int* dayOfWeeks; 
@property (nonatomic,readonly) unsigned long long dayOfMonthsCount; 
@property (nonatomic,readonly) unsigned* dayOfMonths; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
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
-(void)addDayOfWeek:(int)arg1 ;
-(void)addDayOfMonth:(unsigned)arg1 ;
-(unsigned long long)dayOfWeeksCount;
-(void)clearDayOfWeeks;
-(int)dayOfWeekAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)dayOfMonthsCount;
-(void)clearDayOfMonths;
-(unsigned)dayOfMonthAtIndex:(unsigned long long)arg1 ;
-(int*)dayOfWeeks;
-(void)setDayOfWeeks:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)dayOfWeeksAsString:(int)arg1 ;
-(int)StringAsDayOfWeeks:(id)arg1 ;
-(unsigned*)dayOfMonths;
-(void)setDayOfMonths:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

