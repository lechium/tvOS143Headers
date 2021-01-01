/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPredicateBase.h>
#import <libobjc.A.dylib/CEMRegisteredTypeProtocol.h>

@class CEMPredicateBase, NSString;

@interface CEMPredicateNot : CEMPredicateBase <CEMRegisteredTypeProtocol> {

	CEMPredicateBase* _payloadPredicate;

}

@property (nonatomic,copy) CEMPredicateBase * payloadPredicate;              //@synthesize payloadPredicate=_payloadPredicate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allowedPayloadKeys;
+(id)registeredClassName;
+(id)registeredIdentifier;
+(id)buildWithPredicate:(id)arg1 ;
+(id)buildRequiredOnlyWithPredicate:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadPredicate:(CEMPredicateBase *)arg1 ;
-(CEMPredicateBase *)payloadPredicate;
@end

