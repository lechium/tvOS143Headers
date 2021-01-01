/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface PETSchemaPETRawMessage : PBCodable {

	unsigned _type_id;
	NSData* _raw_bytes;
	NSString* _name;
	SCD_Struct_SI1 _has;
	BOOL _hasRaw_bytes;
	BOOL _hasName;

}

@property (assign,nonatomic) unsigned type_id;                 //@synthesize type_id=_type_id - In the implementation block
@property (assign,nonatomic) BOOL hasType_id; 
@property (nonatomic,copy) NSData * raw_bytes;                 //@synthesize raw_bytes=_raw_bytes - In the implementation block
@property (assign,nonatomic) BOOL hasRaw_bytes;                //@synthesize hasRaw_bytes=_hasRaw_bytes - In the implementation block
@property (nonatomic,copy) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasName;                     //@synthesize hasName=_hasName - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasName;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasName:(BOOL)arg1 ;
-(NSData *)jsonData;
-(void)setType_id:(unsigned)arg1 ;
-(void)setRaw_bytes:(NSData *)arg1 ;
-(NSData *)raw_bytes;
-(unsigned)type_id;
-(BOOL)hasType_id;
-(void)setHasType_id:(BOOL)arg1 ;
-(BOOL)hasRaw_bytes;
-(void)setHasRaw_bytes:(BOOL)arg1 ;
@end

