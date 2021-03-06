/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface SISchemaUserViewRegionInteraction : PBCodable {

	int _viewRegionDesignation;
	int _userViewInteraction;
	SCD_Struct_SI3 _has;

}

@property (assign,nonatomic) int viewRegionDesignation;                  //@synthesize viewRegionDesignation=_viewRegionDesignation - In the implementation block
@property (assign,nonatomic) BOOL hasViewRegionDesignation; 
@property (assign,nonatomic) int userViewInteraction;                    //@synthesize userViewInteraction=_userViewInteraction - In the implementation block
@property (assign,nonatomic) BOOL hasUserViewInteraction; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSData *)jsonData;
-(void)setViewRegionDesignation:(int)arg1 ;
-(void)setUserViewInteraction:(int)arg1 ;
-(int)viewRegionDesignation;
-(BOOL)hasViewRegionDesignation;
-(void)setHasViewRegionDesignation:(BOOL)arg1 ;
-(int)userViewInteraction;
-(BOOL)hasUserViewInteraction;
-(void)setHasUserViewInteraction:(BOOL)arg1 ;
@end

