/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOWiFiHarvestLabel : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _comment;
	NSString* _internalIdentifier;
	NSString* _venueCategory;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	int _networkType;
	int _originator;
	struct {
		unsigned has_networkType : 1;
		unsigned has_originator : 1;
		unsigned read_comment : 1;
		unsigned read_internalIdentifier : 1;
		unsigned read_venueCategory : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (assign,nonatomic) BOOL hasOriginator; 
@property (assign,nonatomic) int originator; 
@property (nonatomic,readonly) BOOL hasVenueCategory; 
@property (nonatomic,retain) NSString * venueCategory; 
@property (nonatomic,readonly) BOOL hasComment; 
@property (nonatomic,retain) NSString * comment; 
@property (assign,nonatomic) BOOL hasNetworkType; 
@property (assign,nonatomic) int networkType; 
@property (nonatomic,readonly) BOOL hasInternalIdentifier; 
@property (nonatomic,retain) NSString * internalIdentifier; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)comment;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)networkType;
-(void)setNetworkType:(int)arg1 ;
-(void)setHasNetworkType:(BOOL)arg1 ;
-(BOOL)hasNetworkType;
-(id)networkTypeAsString:(int)arg1 ;
-(int)StringAsNetworkType:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setComment:(NSString *)arg1 ;
-(BOOL)hasComment;
-(NSString *)venueCategory;
-(NSString *)internalIdentifier;
-(void)setOriginator:(int)arg1 ;
-(void)setVenueCategory:(NSString *)arg1 ;
-(void)setInternalIdentifier:(NSString *)arg1 ;
-(int)originator;
-(void)setHasOriginator:(BOOL)arg1 ;
-(BOOL)hasOriginator;
-(id)originatorAsString:(int)arg1 ;
-(int)StringAsOriginator:(id)arg1 ;
-(BOOL)hasVenueCategory;
-(BOOL)hasInternalIdentifier;
@end

