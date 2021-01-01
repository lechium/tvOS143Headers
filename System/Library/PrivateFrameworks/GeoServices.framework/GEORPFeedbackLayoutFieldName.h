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

@interface GEORPFeedbackLayoutFieldName : PBCodable <NSCopying> {

	int _addressFieldName;
	int _curatedCollectionFieldName;
	int _groundviewFieldName;
	int _incidentType;
	int _otherFieldName;
	int _poiFieldName;
	int _poiImageCorrectionType;
	int _workflowFieldName;
	struct {
		unsigned has_addressFieldName : 1;
		unsigned has_curatedCollectionFieldName : 1;
		unsigned has_groundviewFieldName : 1;
		unsigned has_incidentType : 1;
		unsigned has_otherFieldName : 1;
		unsigned has_poiFieldName : 1;
		unsigned has_poiImageCorrectionType : 1;
		unsigned has_workflowFieldName : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasWorkflowFieldName; 
@property (assign,nonatomic) int workflowFieldName; 
@property (assign,nonatomic) BOOL hasPoiFieldName; 
@property (assign,nonatomic) int poiFieldName; 
@property (assign,nonatomic) BOOL hasAddressFieldName; 
@property (assign,nonatomic) int addressFieldName; 
@property (assign,nonatomic) BOOL hasOtherFieldName; 
@property (assign,nonatomic) int otherFieldName; 
@property (assign,nonatomic) BOOL hasGroundviewFieldName; 
@property (assign,nonatomic) int groundviewFieldName; 
@property (assign,nonatomic) BOOL hasIncidentType; 
@property (assign,nonatomic) int incidentType; 
@property (assign,nonatomic) BOOL hasPoiImageCorrectionType; 
@property (assign,nonatomic) int poiImageCorrectionType; 
@property (assign,nonatomic) BOOL hasCuratedCollectionFieldName; 
@property (assign,nonatomic) int curatedCollectionFieldName; 
+(BOOL)isValid:(id)arg1 ;
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
-(void)setIncidentType:(int)arg1 ;
-(BOOL)hasIncidentType;
-(int)incidentType;
-(void)setWorkflowFieldName:(int)arg1 ;
-(void)setPoiFieldName:(int)arg1 ;
-(void)setAddressFieldName:(int)arg1 ;
-(void)setOtherFieldName:(int)arg1 ;
-(void)setGroundviewFieldName:(int)arg1 ;
-(void)setPoiImageCorrectionType:(int)arg1 ;
-(void)setCuratedCollectionFieldName:(int)arg1 ;
-(int)workflowFieldName;
-(void)setHasWorkflowFieldName:(BOOL)arg1 ;
-(BOOL)hasWorkflowFieldName;
-(id)workflowFieldNameAsString:(int)arg1 ;
-(int)StringAsWorkflowFieldName:(id)arg1 ;
-(int)poiFieldName;
-(void)setHasPoiFieldName:(BOOL)arg1 ;
-(BOOL)hasPoiFieldName;
-(id)poiFieldNameAsString:(int)arg1 ;
-(int)StringAsPoiFieldName:(id)arg1 ;
-(int)addressFieldName;
-(void)setHasAddressFieldName:(BOOL)arg1 ;
-(BOOL)hasAddressFieldName;
-(id)addressFieldNameAsString:(int)arg1 ;
-(int)StringAsAddressFieldName:(id)arg1 ;
-(int)otherFieldName;
-(void)setHasOtherFieldName:(BOOL)arg1 ;
-(BOOL)hasOtherFieldName;
-(id)otherFieldNameAsString:(int)arg1 ;
-(int)StringAsOtherFieldName:(id)arg1 ;
-(int)groundviewFieldName;
-(void)setHasGroundviewFieldName:(BOOL)arg1 ;
-(BOOL)hasGroundviewFieldName;
-(id)groundviewFieldNameAsString:(int)arg1 ;
-(int)StringAsGroundviewFieldName:(id)arg1 ;
-(void)setHasIncidentType:(BOOL)arg1 ;
-(id)incidentTypeAsString:(int)arg1 ;
-(int)StringAsIncidentType:(id)arg1 ;
-(int)poiImageCorrectionType;
-(void)setHasPoiImageCorrectionType:(BOOL)arg1 ;
-(BOOL)hasPoiImageCorrectionType;
-(id)poiImageCorrectionTypeAsString:(int)arg1 ;
-(int)StringAsPoiImageCorrectionType:(id)arg1 ;
-(int)curatedCollectionFieldName;
-(void)setHasCuratedCollectionFieldName:(BOOL)arg1 ;
-(BOOL)hasCuratedCollectionFieldName;
-(id)curatedCollectionFieldNameAsString:(int)arg1 ;
-(int)StringAsCuratedCollectionFieldName:(id)arg1 ;
@end

