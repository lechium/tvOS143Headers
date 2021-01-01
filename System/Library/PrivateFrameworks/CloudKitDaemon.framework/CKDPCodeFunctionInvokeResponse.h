/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPCodeFunctionInvokeResponseAttestationResponse, NSData;

@interface CKDPCodeFunctionInvokeResponse : PBCodable <NSCopying> {

	CKDPCodeFunctionInvokeResponseAttestationResponse* _attestationResponse;
	NSData* _serializedResult;

}

@property (nonatomic,readonly) BOOL hasSerializedResult; 
@property (nonatomic,retain) NSData * serializedResult;                                                            //@synthesize serializedResult=_serializedResult - In the implementation block
@property (nonatomic,readonly) BOOL hasAttestationResponse; 
@property (nonatomic,retain) CKDPCodeFunctionInvokeResponseAttestationResponse * attestationResponse;              //@synthesize attestationResponse=_attestationResponse - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)serializedResult;
-(BOOL)hasAttestationResponse;
-(CKDPCodeFunctionInvokeResponseAttestationResponse *)attestationResponse;
-(void)setSerializedResult:(NSData *)arg1 ;
-(BOOL)hasSerializedResult;
-(void)setAttestationResponse:(CKDPCodeFunctionInvokeResponseAttestationResponse *)arg1 ;
@end

