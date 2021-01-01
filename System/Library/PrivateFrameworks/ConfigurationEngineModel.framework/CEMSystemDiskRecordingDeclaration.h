/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMConfigurationBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class NSString, NSNumber;

@interface CEMSystemDiskRecordingDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol> {

	NSString* _payloadBurnSupport;
	NSNumber* _payloadProhibitBurn;

}

@property (nonatomic,copy) NSString * payloadBurnSupport;               //@synthesize payloadBurnSupport=_payloadBurnSupport - In the implementation block
@property (nonatomic,copy) NSNumber * payloadProhibitBurn;              //@synthesize payloadProhibitBurn=_payloadProhibitBurn - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)profileType;
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)restrictionPayloadKeys;
+(id)buildWithIdentifier:(id)arg1 withBurnSupport:(id)arg2 withProhibitBurn:(id)arg3 ;
+(id)buildRequiredOnlyWithIdentifier:(id)arg1 withBurnSupport:(id)arg2 withProhibitBurn:(id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)multipleAllowed;
-(BOOL)mustBeSupervised;
-(int)activationLevel;
-(id)assetReferences;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadBurnSupport:(NSString *)arg1 ;
-(void)setPayloadProhibitBurn:(NSNumber *)arg1 ;
-(NSString *)payloadBurnSupport;
-(NSNumber *)payloadProhibitBurn;
@end

