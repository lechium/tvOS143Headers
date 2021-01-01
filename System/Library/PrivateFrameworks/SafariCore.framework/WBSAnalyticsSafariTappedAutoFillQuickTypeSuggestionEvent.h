/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariCore/SafariCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WBSAnalyticsSafariTappedAutoFillQuickTypeSuggestionEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _category;
	int _formProperty;
	SCD_Struct_WB7 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasCategory; 
@property (assign,nonatomic) int category;                              //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) BOOL hasFormProperty; 
@property (assign,nonatomic) int formProperty;                          //@synthesize formProperty=_formProperty - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)category;
-(void)setCategory:(int)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setHasCategory:(BOOL)arg1 ;
-(BOOL)hasCategory;
-(id)categoryAsString:(int)arg1 ;
-(int)StringAsCategory:(id)arg1 ;
-(int)formProperty;
-(void)setFormProperty:(int)arg1 ;
-(void)setHasFormProperty:(BOOL)arg1 ;
-(BOOL)hasFormProperty;
-(id)formPropertyAsString:(int)arg1 ;
-(int)StringAsFormProperty:(id)arg1 ;
@end

