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

@class CKDPUserAlias, NSString, NSMutableArray;

@interface CKDPUserQueryRequest : PBRequest <NSCopying> {

	CKDPUserAlias* _alias;
	NSString* _oBSOLETEPcsServiceType;
	NSMutableArray* _sortedBys;
	BOOL _publicKeyRequested;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasAlias; 
@property (nonatomic,retain) CKDPUserAlias * alias;                          //@synthesize alias=_alias - In the implementation block
@property (nonatomic,retain) NSMutableArray * sortedBys;                     //@synthesize sortedBys=_sortedBys - In the implementation block
@property (nonatomic,readonly) BOOL hasOBSOLETEPcsServiceType; 
@property (nonatomic,retain) NSString * oBSOLETEPcsServiceType;              //@synthesize oBSOLETEPcsServiceType=_oBSOLETEPcsServiceType - In the implementation block
@property (assign,nonatomic) BOOL hasPublicKeyRequested; 
@property (assign,nonatomic) BOOL publicKeyRequested;                        //@synthesize publicKeyRequested=_publicKeyRequested - In the implementation block
+(id)options;
+(Class)sortedByType;
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
-(void)setAlias:(CKDPUserAlias *)arg1 ;
-(CKDPUserAlias *)alias;
-(void)addSortedBy:(id)arg1 ;
-(unsigned long long)sortedBysCount;
-(void)clearSortedBys;
-(id)sortedByAtIndex:(unsigned long long)arg1 ;
-(void)setOBSOLETEPcsServiceType:(NSString *)arg1 ;
-(BOOL)hasAlias;
-(BOOL)hasOBSOLETEPcsServiceType;
-(BOOL)publicKeyRequested;
-(void)setPublicKeyRequested:(BOOL)arg1 ;
-(void)setHasPublicKeyRequested:(BOOL)arg1 ;
-(BOOL)hasPublicKeyRequested;
-(NSMutableArray *)sortedBys;
-(void)setSortedBys:(NSMutableArray *)arg1 ;
-(NSString *)oBSOLETEPcsServiceType;
@end

