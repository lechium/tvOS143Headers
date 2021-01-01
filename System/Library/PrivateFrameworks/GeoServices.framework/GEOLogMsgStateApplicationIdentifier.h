/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString;

@interface GEOLogMsgStateApplicationIdentifier : PBCodable <NSCopying> {

	PBDataReader* _reader;
	NSString* _appIdentifier;
	NSString* _appMajorVersion;
	NSString* _appMinorVersion;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	BOOL _appDarkMode;
	struct {
		unsigned has_appDarkMode : 1;
		unsigned read_appIdentifier : 1;
		unsigned read_appMajorVersion : 1;
		unsigned read_appMinorVersion : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,readonly) BOOL hasAppIdentifier; 
@property (nonatomic,retain) NSString * appIdentifier; 
@property (nonatomic,readonly) BOOL hasAppMajorVersion; 
@property (nonatomic,retain) NSString * appMajorVersion; 
@property (nonatomic,readonly) BOOL hasAppMinorVersion; 
@property (nonatomic,retain) NSString * appMinorVersion; 
@property (assign,nonatomic) BOOL hasAppDarkMode; 
@property (assign,nonatomic) BOOL appDarkMode; 
+(BOOL)isValid:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)readAll:(BOOL)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(void)setAppIdentifier:(NSString *)arg1 ;
-(NSString *)appIdentifier;
-(BOOL)hasAppIdentifier;
-(void)setAppMajorVersion:(NSString *)arg1 ;
-(void)setAppMinorVersion:(NSString *)arg1 ;
-(NSString *)appMajorVersion;
-(NSString *)appMinorVersion;
-(BOOL)hasAppMajorVersion;
-(BOOL)hasAppMinorVersion;
-(void)setAppDarkMode:(BOOL)arg1 ;
-(BOOL)appDarkMode;
-(void)setHasAppDarkMode:(BOOL)arg1 ;
-(BOOL)hasAppDarkMode;
@end

