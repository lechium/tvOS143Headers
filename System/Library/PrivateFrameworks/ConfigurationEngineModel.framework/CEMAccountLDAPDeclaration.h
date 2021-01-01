/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSNumber, NSArray, CEMAccountLDAPDeclaration_CommunicationServiceRules;

@interface CEMAccountLDAPDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadLDAPAccountDescription;
	NSString* _payloadLDAPAccountHostName;
	NSNumber* _payloadLDAPAccountUseSSL;
	NSArray* _payloadLDAPSearchSettings;
	CEMAccountLDAPDeclaration_CommunicationServiceRules* _payloadCommunicationServiceRules;
	NSString* _payloadLDAPCredentials;

}

@property (nonatomic,copy) NSString * payloadLDAPAccountDescription;                                                            //@synthesize payloadLDAPAccountDescription=_payloadLDAPAccountDescription - In the implementation block
@property (nonatomic,copy) NSString * payloadLDAPAccountHostName;                                                               //@synthesize payloadLDAPAccountHostName=_payloadLDAPAccountHostName - In the implementation block
@property (nonatomic,copy) NSNumber * payloadLDAPAccountUseSSL;                                                                 //@synthesize payloadLDAPAccountUseSSL=_payloadLDAPAccountUseSSL - In the implementation block
@property (nonatomic,copy) NSArray * payloadLDAPSearchSettings;                                                                 //@synthesize payloadLDAPSearchSettings=_payloadLDAPSearchSettings - In the implementation block
@property (nonatomic,copy) CEMAccountLDAPDeclaration_CommunicationServiceRules * payloadCommunicationServiceRules;              //@synthesize payloadCommunicationServiceRules=_payloadCommunicationServiceRules - In the implementation block
@property (nonatomic,copy) NSString * payloadLDAPCredentials;                                                                   //@synthesize payloadLDAPCredentials=_payloadLDAPCredentials - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withLDAPAccountDescription:(id)arg2 withLDAPAccountHostName:(id)arg3 withLDAPAccountUseSSL:(id)arg4 withLDAPSearchSettings:(id)arg5 withCommunicationServiceRules:(id)arg6 withLDAPCredentials:(id)arg7 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withLDAPAccountHostName:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadCommunicationServiceRules:(CEMAccountLDAPDeclaration_CommunicationServiceRules *)arg1 ;
-(CEMAccountLDAPDeclaration_CommunicationServiceRules *)payloadCommunicationServiceRules;
-(NSString *)payloadLDAPCredentials;
-(void)setPayloadLDAPAccountDescription:(NSString *)arg1 ;
-(void)setPayloadLDAPAccountHostName:(NSString *)arg1 ;
-(void)setPayloadLDAPAccountUseSSL:(NSNumber *)arg1 ;
-(void)setPayloadLDAPSearchSettings:(NSArray *)arg1 ;
-(void)setPayloadLDAPCredentials:(NSString *)arg1 ;
-(NSString *)payloadLDAPAccountDescription;
-(NSString *)payloadLDAPAccountHostName;
-(NSNumber *)payloadLDAPAccountUseSSL;
-(NSArray *)payloadLDAPSearchSettings;
@end

