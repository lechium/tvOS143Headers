/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions : PBCodable <NSCopying> {

	unsigned long long _contentRequestAuthorizeGetOptions;
	NSMutableArray* _contentRequestHeaders;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,retain) NSMutableArray * contentRequestHeaders;                            //@synthesize contentRequestHeaders=_contentRequestHeaders - In the implementation block
@property (assign,nonatomic) BOOL hasContentRequestAuthorizeGetOptions; 
@property (assign,nonatomic) unsigned long long contentRequestAuthorizeGetOptions;              //@synthesize contentRequestAuthorizeGetOptions=_contentRequestAuthorizeGetOptions - In the implementation block
+(Class)contentRequestHeadersType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setContentRequestAuthorizeGetOptions:(unsigned long long)arg1 ;
-(void)setContentRequestHeaders:(NSMutableArray *)arg1 ;
-(NSMutableArray *)contentRequestHeaders;
-(void)addContentRequestHeaders:(id)arg1 ;
-(unsigned long long)contentRequestHeadersCount;
-(void)clearContentRequestHeaders;
-(id)contentRequestHeadersAtIndex:(unsigned long long)arg1 ;
-(void)setHasContentRequestAuthorizeGetOptions:(BOOL)arg1 ;
-(BOOL)hasContentRequestAuthorizeGetOptions;
-(unsigned long long)contentRequestAuthorizeGetOptions;
@end

