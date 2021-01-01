/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSArray;

@interface CEMSecuritySingleSignOnDeclaration_Kerberos : CEMPayloadBase {

	NSString* _payloadPrincipalName;
	NSString* _payloadPayloadCertificateUUID;
	NSString* _payloadRealm;
	NSArray* _payloadURLPrefixMatches;
	NSArray* _payloadAppIdentifierMatches;

}

@property (nonatomic,copy) NSString * payloadPrincipalName;                       //@synthesize payloadPrincipalName=_payloadPrincipalName - In the implementation block
@property (nonatomic,copy) NSString * payloadPayloadCertificateUUID;              //@synthesize payloadPayloadCertificateUUID=_payloadPayloadCertificateUUID - In the implementation block
@property (nonatomic,copy) NSString * payloadRealm;                               //@synthesize payloadRealm=_payloadRealm - In the implementation block
@property (nonatomic,copy) NSArray * payloadURLPrefixMatches;                     //@synthesize payloadURLPrefixMatches=_payloadURLPrefixMatches - In the implementation block
@property (nonatomic,copy) NSArray * payloadAppIdentifierMatches;                 //@synthesize payloadAppIdentifierMatches=_payloadAppIdentifierMatches - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithPrincipalName:(id)arg1 withPayloadCertificateUUID:(id)arg2 withRealm:(id)arg3 withURLPrefixMatches:(id)arg4 withAppIdentifierMatches:(id)arg5 ;
+(id)buildRequiredOnlyWithRealm:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadAppIdentifierMatches:(NSArray *)arg1 ;
-(NSArray *)payloadAppIdentifierMatches;
-(void)setPayloadRealm:(NSString *)arg1 ;
-(NSString *)payloadRealm;
-(void)setPayloadPayloadCertificateUUID:(NSString *)arg1 ;
-(NSString *)payloadPayloadCertificateUUID;
-(void)setPayloadPrincipalName:(NSString *)arg1 ;
-(void)setPayloadURLPrefixMatches:(NSArray *)arg1 ;
-(NSString *)payloadPrincipalName;
-(NSArray *)payloadURLPrefixMatches;
@end

