/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKCDPCodeServiceRequestAccountConfig, CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions, NSMutableArray, NSString, CKCDPCodeServiceRequestProtectedCloudComputeMetadata, CKCDPCodeServiceRequestRequestContext, NSData;

@interface CKCDPCodeServiceRequest : PBRequest <NSCopying> {

	CKCDPCodeServiceRequestAccountConfig* _accountConfig;
	CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions* _assetAuthorizeGetRequestOptions;
	NSMutableArray* _clientConfigs;
	NSString* _functionName;
	CKCDPCodeServiceRequestProtectedCloudComputeMetadata* _protectedCloudComputeMetadata;
	CKCDPCodeServiceRequestRequestContext* _requestContext;
	NSData* _routingToken;
	int _serializationFormat;
	NSData* _serializedParameters;
	NSString* _serviceName;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasServiceName; 
@property (nonatomic,retain) NSString * serviceName;                                                                                //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) BOOL hasFunctionName; 
@property (nonatomic,retain) NSString * functionName;                                                                               //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,readonly) BOOL hasSerializedParameters; 
@property (nonatomic,retain) NSData * serializedParameters;                                                                         //@synthesize serializedParameters=_serializedParameters - In the implementation block
@property (assign,nonatomic) BOOL hasSerializationFormat; 
@property (assign,nonatomic) int serializationFormat;                                                                               //@synthesize serializationFormat=_serializationFormat - In the implementation block
@property (nonatomic,retain) NSMutableArray * clientConfigs;                                                                        //@synthesize clientConfigs=_clientConfigs - In the implementation block
@property (nonatomic,readonly) BOOL hasAccountConfig; 
@property (nonatomic,retain) CKCDPCodeServiceRequestAccountConfig * accountConfig;                                                  //@synthesize accountConfig=_accountConfig - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestContext; 
@property (nonatomic,retain) CKCDPCodeServiceRequestRequestContext * requestContext;                                                //@synthesize requestContext=_requestContext - In the implementation block
@property (nonatomic,readonly) BOOL hasAssetAuthorizeGetRequestOptions; 
@property (nonatomic,retain) CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions * assetAuthorizeGetRequestOptions;              //@synthesize assetAuthorizeGetRequestOptions=_assetAuthorizeGetRequestOptions - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectedCloudComputeMetadata; 
@property (nonatomic,retain) CKCDPCodeServiceRequestProtectedCloudComputeMetadata * protectedCloudComputeMetadata;                  //@synthesize protectedCloudComputeMetadata=_protectedCloudComputeMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasRoutingToken; 
@property (nonatomic,retain) NSData * routingToken;                                                                                 //@synthesize routingToken=_routingToken - In the implementation block
+(Class)clientConfigType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)serviceName;
-(NSString *)functionName;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setServiceName:(NSString *)arg1 ;
-(BOOL)hasServiceName;
-(CKCDPCodeServiceRequestRequestContext *)requestContext;
-(void)setRequestContext:(CKCDPCodeServiceRequestRequestContext *)arg1 ;
-(BOOL)hasRequestContext;
-(void)addClientConfig:(id)arg1 ;
-(unsigned long long)clientConfigsCount;
-(void)clearClientConfigs;
-(id)clientConfigAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)clientConfigs;
-(void)setClientConfigs:(NSMutableArray *)arg1 ;
-(void)setFunctionName:(NSString *)arg1 ;
-(void)setAssetAuthorizeGetRequestOptions:(CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions *)arg1 ;
-(CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions *)assetAuthorizeGetRequestOptions;
-(NSData *)serializedParameters;
-(void)setSerializedParameters:(NSData *)arg1 ;
-(void)setSerializationFormat:(int)arg1 ;
-(void)setProtectedCloudComputeMetadata:(CKCDPCodeServiceRequestProtectedCloudComputeMetadata *)arg1 ;
-(BOOL)hasFunctionName;
-(BOOL)hasSerializedParameters;
-(BOOL)hasProtectedCloudComputeMetadata;
-(CKCDPCodeServiceRequestProtectedCloudComputeMetadata *)protectedCloudComputeMetadata;
-(BOOL)hasAssetAuthorizeGetRequestOptions;
-(void)setRoutingToken:(NSData *)arg1 ;
-(BOOL)hasRoutingToken;
-(NSData *)routingToken;
-(void)setAccountConfig:(CKCDPCodeServiceRequestAccountConfig *)arg1 ;
-(int)serializationFormat;
-(void)setHasSerializationFormat:(BOOL)arg1 ;
-(BOOL)hasSerializationFormat;
-(id)serializationFormatAsString:(int)arg1 ;
-(int)StringAsSerializationFormat:(id)arg1 ;
-(BOOL)hasAccountConfig;
-(CKCDPCodeServiceRequestAccountConfig *)accountConfig;
@end

