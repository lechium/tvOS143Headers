/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface PPPBContactNameRecordCache : PBCodable <NSCopying> {

	long long _createdAt;
	NSMutableArray* _records;
	SCD_Struct_PP1 _has;

}

@property (nonatomic,retain) NSMutableArray * records;              //@synthesize records=_records - In the implementation block
@property (assign,nonatomic) BOOL hasCreatedAt; 
@property (assign,nonatomic) long long createdAt;                   //@synthesize createdAt=_createdAt - In the implementation block
+(Class)recordsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)records;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRecords:(NSMutableArray *)arg1 ;
-(void)addRecords:(id)arg1 ;
-(unsigned long long)recordsCount;
-(void)clearRecords;
-(id)recordsAtIndex:(unsigned long long)arg1 ;
-(long long)createdAt;
-(void)setCreatedAt:(long long)arg1 ;
-(BOOL)hasCreatedAt;
-(void)setHasCreatedAt:(BOOL)arg1 ;
@end

