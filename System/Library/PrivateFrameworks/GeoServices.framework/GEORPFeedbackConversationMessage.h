/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString, GEORPTimestamp, GEORPPostedBy, NSMutableArray;

@interface GEORPFeedbackConversationMessage : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _comments;
	GEORPTimestamp* _postedAt;
	GEORPPostedBy* _postedBy;
	NSMutableArray* _surveyResponses;
	NSString* _uuid;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	struct {
		unsigned read_unknownFields : 1;
		unsigned read_comments : 1;
		unsigned read_postedAt : 1;
		unsigned read_postedBy : 1;
		unsigned read_surveyResponses : 1;
		unsigned read_uuid : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasUuid; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,readonly) BOOL hasPostedBy; 
@property (nonatomic,retain) GEORPPostedBy * postedBy; 
@property (nonatomic,readonly) BOOL hasPostedAt; 
@property (nonatomic,retain) GEORPTimestamp * postedAt; 
@property (nonatomic,readonly) BOOL hasComments; 
@property (nonatomic,retain) NSString * comments; 
@property (nonatomic,retain) NSMutableArray * surveyResponses; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(Class)surveyResponseType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)uuid;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(BOOL)hasUuid;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(NSString *)comments;
-(void)setComments:(NSString *)arg1 ;
-(BOOL)hasComments;
-(GEORPPostedBy *)postedBy;
-(GEORPTimestamp *)postedAt;
-(void)setPostedBy:(GEORPPostedBy *)arg1 ;
-(void)setPostedAt:(GEORPTimestamp *)arg1 ;
-(void)addSurveyResponse:(id)arg1 ;
-(unsigned long long)surveyResponsesCount;
-(void)clearSurveyResponses;
-(id)surveyResponseAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasPostedBy;
-(BOOL)hasPostedAt;
-(NSMutableArray *)surveyResponses;
-(void)setSurveyResponses:(NSMutableArray *)arg1 ;
@end

