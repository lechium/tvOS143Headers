/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, PBUnknownFields, NSString;

@interface GEOPDQuickLinkItem : PBCodable <NSCopying> {

	PBDataReader* _reader;
	PBUnknownFields* _unknownFields;
	NSString* _appAdamId;
	NSString* _bundleId;
	NSString* _title;
	NSString* _url;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _linkType;
	struct {
		unsigned has_linkType : 1;
		unsigned read_unknownFields : 1;
		unsigned read_appAdamId : 1;
		unsigned read_bundleId : 1;
		unsigned read_title : 1;
		unsigned read_url : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url; 
@property (nonatomic,readonly) BOOL hasAppAdamId; 
@property (nonatomic,retain) NSString * appAdamId; 
@property (nonatomic,readonly) BOOL hasBundleId; 
@property (nonatomic,retain) NSString * bundleId; 
@property (assign,nonatomic) BOOL hasLinkType; 
@property (assign,nonatomic) int linkType; 
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(BOOL)isValid:(id)arg1 ;
+(id)quickLinksForPlaceData:(id)arg1 ;
+(id)secondaryQuickLinksForPlaceData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)url;
-(void)setBundleId:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)bundleId;
-(int)linkType;
-(void)setLinkType:(int)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasUrl;
-(BOOL)hasBundleId;
-(void)setHasLinkType:(BOOL)arg1 ;
-(BOOL)hasLinkType;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearUnknownFields:(BOOL)arg1 ;
-(BOOL)hasTitle;
-(NSString *)appAdamId;
-(void)setAppAdamId:(NSString *)arg1 ;
-(BOOL)hasAppAdamId;
-(id)linkTypeAsString:(int)arg1 ;
-(int)StringAsLinkType:(id)arg1 ;
@end

