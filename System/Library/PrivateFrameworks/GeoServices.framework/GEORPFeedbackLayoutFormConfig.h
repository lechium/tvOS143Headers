/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEORPFeedbackLayoutFormConfig : PBCodable <NSCopying> {

	NSMutableArray* _layoutFields;
	int _formType;
	unsigned _ttl;
	BOOL _enabled;
	SCD_Struct_GE37 _flags;

}

@property (assign,nonatomic) BOOL hasTtl; 
@property (assign,nonatomic) unsigned ttl; 
@property (assign,nonatomic) BOOL hasFormType; 
@property (assign,nonatomic) int formType; 
@property (nonatomic,retain) NSMutableArray * layoutFields; 
@property (assign,nonatomic) BOOL hasEnabled; 
@property (assign,nonatomic) BOOL enabled; 
+(BOOL)isValid:(id)arg1 ;
+(Class)layoutFieldType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasEnabled:(BOOL)arg1 ;
-(BOOL)hasEnabled;
-(unsigned)ttl;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)hasTtl;
-(void)setTtl:(unsigned)arg1 ;
-(void)setHasTtl:(BOOL)arg1 ;
-(void)setFormType:(int)arg1 ;
-(int)formType;
-(void)setHasFormType:(BOOL)arg1 ;
-(BOOL)hasFormType;
-(id)formTypeAsString:(int)arg1 ;
-(int)StringAsFormType:(id)arg1 ;
-(void)addLayoutField:(id)arg1 ;
-(unsigned long long)layoutFieldsCount;
-(void)clearLayoutFields;
-(id)layoutFieldAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)layoutFields;
-(void)setLayoutFields:(NSMutableArray *)arg1 ;
@end

