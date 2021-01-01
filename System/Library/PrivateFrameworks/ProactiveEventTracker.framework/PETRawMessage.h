/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProactiveEventTracker/ProactiveEventTracker-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface PETRawMessage : PBCodable <NSCopying> {

	NSString* _name;
	NSData* _rawBytes;
	unsigned _typeId;
	SCD_Struct_PE5 _has;

}

@property (assign,nonatomic) BOOL hasTypeId; 
@property (assign,nonatomic) unsigned typeId;                 //@synthesize typeId=_typeId - In the implementation block
@property (nonatomic,readonly) BOOL hasRawBytes; 
@property (nonatomic,retain) NSData * rawBytes;               //@synthesize rawBytes=_rawBytes - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                 //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasName;
-(NSData *)rawBytes;
-(void)setTypeId:(unsigned)arg1 ;
-(void)setHasTypeId:(BOOL)arg1 ;
-(BOOL)hasTypeId;
-(BOOL)hasRawBytes;
-(unsigned)typeId;
-(void)setRawBytes:(NSData *)arg1 ;
@end

