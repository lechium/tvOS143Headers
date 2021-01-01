/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface CKCDPError : PBCodable <NSCopying> {

	int _auxiliaryCode;
	NSString* _auxiliaryDomain;
	NSMutableArray* _auxiliaryUserInfos;
	int _code;
	NSString* _message;
	int _targetPartition;
	SCD_Struct_CK17 _has;

}

@property (assign,nonatomic) BOOL hasCode; 
@property (assign,nonatomic) int code;                                         //@synthesize code=_code - In the implementation block
@property (nonatomic,readonly) BOOL hasMessage; 
@property (nonatomic,retain) NSString * message;                               //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) BOOL hasAuxiliaryDomain; 
@property (nonatomic,retain) NSString * auxiliaryDomain;                       //@synthesize auxiliaryDomain=_auxiliaryDomain - In the implementation block
@property (assign,nonatomic) BOOL hasAuxiliaryCode; 
@property (assign,nonatomic) int auxiliaryCode;                                //@synthesize auxiliaryCode=_auxiliaryCode - In the implementation block
@property (nonatomic,retain) NSMutableArray * auxiliaryUserInfos;              //@synthesize auxiliaryUserInfos=_auxiliaryUserInfos - In the implementation block
@property (assign,nonatomic) BOOL hasTargetPartition; 
@property (assign,nonatomic) int targetPartition;                              //@synthesize targetPartition=_targetPartition - In the implementation block
+(Class)auxiliaryUserInfoType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(int)code;
-(id)dictionaryRepresentation;
-(NSString *)message;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCode:(int)arg1 ;
-(void)setHasCode:(BOOL)arg1 ;
-(BOOL)hasCode;
-(BOOL)hasMessage;
-(id)codeAsString:(int)arg1 ;
-(int)StringAsCode:(id)arg1 ;
-(BOOL)hasAuxiliaryDomain;
-(NSString *)auxiliaryDomain;
-(BOOL)hasAuxiliaryCode;
-(int)auxiliaryCode;
-(unsigned long long)auxiliaryUserInfosCount;
-(NSMutableArray *)auxiliaryUserInfos;
-(void)addAuxiliaryUserInfo:(id)arg1 ;
-(void)setAuxiliaryDomain:(NSString *)arg1 ;
-(void)clearAuxiliaryUserInfos;
-(id)auxiliaryUserInfoAtIndex:(unsigned long long)arg1 ;
-(void)setAuxiliaryCode:(int)arg1 ;
-(void)setHasAuxiliaryCode:(BOOL)arg1 ;
-(void)setTargetPartition:(int)arg1 ;
-(void)setHasTargetPartition:(BOOL)arg1 ;
-(BOOL)hasTargetPartition;
-(void)setAuxiliaryUserInfos:(NSMutableArray *)arg1 ;
-(int)targetPartition;
@end

