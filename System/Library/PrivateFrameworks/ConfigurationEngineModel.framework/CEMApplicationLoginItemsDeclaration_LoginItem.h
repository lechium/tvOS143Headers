/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber;

@interface CEMApplicationLoginItemsDeclaration_LoginItem : CEMPayloadBase {

	NSString* _payloadPath;
	NSNumber* _payloadHide;

}

@property (nonatomic,copy) NSString * payloadPath;              //@synthesize payloadPath=_payloadPath - In the implementation block
@property (nonatomic,copy) NSNumber * payloadHide;              //@synthesize payloadHide=_payloadHide - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithPath:(id)arg1 withHide:(id)arg2 ;
+(id)buildRequiredOnlyWithPath:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadPath:(NSString *)arg1 ;
-(void)setPayloadHide:(NSNumber *)arg1 ;
-(NSString *)payloadPath;
-(NSNumber *)payloadHide;
@end

