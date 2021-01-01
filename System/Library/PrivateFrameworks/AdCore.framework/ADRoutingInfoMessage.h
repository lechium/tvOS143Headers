/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ADRoutingInfoMessage : PBCodable <NSCopying> {

	NSString* _environmentURL;
	NSString* _protoVersion;
	NSString* _searchType;

}

@property (nonatomic,retain) NSString * searchType;                  //@synthesize searchType=_searchType - In the implementation block
@property (nonatomic,retain) NSString * environmentURL;              //@synthesize environmentURL=_environmentURL - In the implementation block
@property (nonatomic,retain) NSString * protoVersion;                //@synthesize protoVersion=_protoVersion - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setSearchType:(NSString *)arg1 ;
-(NSString *)searchType;
-(void)setEnvironmentURL:(NSString *)arg1 ;
-(void)setProtoVersion:(NSString *)arg1 ;
-(NSString *)environmentURL;
-(NSString *)protoVersion;
@end

