/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CKDPWebAuthTokenRetrieveRequest : PBRequest <NSCopying> {

	NSString* _apiToken;
	BOOL _forceFetchToken;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasApiToken; 
@property (nonatomic,retain) NSString * apiToken;                  //@synthesize apiToken=_apiToken - In the implementation block
@property (assign,nonatomic) BOOL hasForceFetchToken; 
@property (assign,nonatomic) BOOL forceFetchToken;                 //@synthesize forceFetchToken=_forceFetchToken - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)apiToken;
-(void)setApiToken:(NSString *)arg1 ;
-(BOOL)hasApiToken;
-(void)setForceFetchToken:(BOOL)arg1 ;
-(void)setHasForceFetchToken:(BOOL)arg1 ;
-(BOOL)hasForceFetchToken;
-(BOOL)forceFetchToken;
@end

