/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOJunctionViewGuidanceFeedback : PBCodable <NSCopying> {

	NSMutableArray* _imageIDs;
	BOOL _imageDisplayed;
	SCD_Struct_GE118 _flags;

}

@property (assign,nonatomic) BOOL hasImageDisplayed; 
@property (assign,nonatomic) BOOL imageDisplayed; 
@property (nonatomic,retain) NSMutableArray * imageIDs; 
+(BOOL)isValid:(id)arg1 ;
+(Class)imageIDType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(NSMutableArray *)imageIDs;
-(void)setImageDisplayed:(BOOL)arg1 ;
-(void)addImageID:(id)arg1 ;
-(unsigned long long)imageIDsCount;
-(void)clearImageIDs;
-(id)imageIDAtIndex:(unsigned long long)arg1 ;
-(BOOL)imageDisplayed;
-(void)setHasImageDisplayed:(BOOL)arg1 ;
-(BOOL)hasImageDisplayed;
-(void)setImageIDs:(NSMutableArray *)arg1 ;
@end

