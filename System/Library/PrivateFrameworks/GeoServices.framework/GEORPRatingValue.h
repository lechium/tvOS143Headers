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

@class GEOLocalizedString;

@interface GEORPRatingValue : PBCodable <NSCopying> {

	GEOLocalizedString* _categoryName;
	int _score;
	struct {
		unsigned has_score : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasCategoryName; 
@property (nonatomic,retain) GEOLocalizedString * categoryName; 
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) int score; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)score;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setScore:(int)arg1 ;
-(void)setHasScore:(BOOL)arg1 ;
-(BOOL)hasScore;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(GEOLocalizedString *)categoryName;
-(void)setCategoryName:(GEOLocalizedString *)arg1 ;
-(BOOL)hasCategoryName;
@end

