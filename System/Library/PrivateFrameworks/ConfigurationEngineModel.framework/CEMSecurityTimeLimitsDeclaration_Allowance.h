/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSNumber, NSString;

@interface CEMSecurityTimeLimitsDeclaration_Allowance : CEMPayloadBase {

	NSNumber* _payloadEnabled;
	NSNumber* _payloadRangeType;
	NSString* _payloadStart;
	NSString* _payloadEnd;
	NSNumber* _payloadSecondsPerDay;

}

@property (nonatomic,copy) NSNumber * payloadEnabled;                    //@synthesize payloadEnabled=_payloadEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * payloadRangeType;                  //@synthesize payloadRangeType=_payloadRangeType - In the implementation block
@property (nonatomic,copy) NSString * payloadStart;                      //@synthesize payloadStart=_payloadStart - In the implementation block
@property (nonatomic,copy) NSString * payloadEnd;                        //@synthesize payloadEnd=_payloadEnd - In the implementation block
@property (nonatomic,copy) NSNumber * payloadSecondsPerDay;              //@synthesize payloadSecondsPerDay=_payloadSecondsPerDay - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithEnabled:(id)arg1 withRangeType:(id)arg2 withStart:(id)arg3 withEnd:(id)arg4 withSecondsPerDay:(id)arg5 ;
+(id)buildRequiredOnlyWithEnabled:(id)arg1 withRangeType:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadEnabled:(NSNumber *)arg1 ;
-(void)setPayloadRangeType:(NSNumber *)arg1 ;
-(void)setPayloadStart:(NSString *)arg1 ;
-(void)setPayloadEnd:(NSString *)arg1 ;
-(void)setPayloadSecondsPerDay:(NSNumber *)arg1 ;
-(NSNumber *)payloadEnabled;
-(NSNumber *)payloadRangeType;
-(NSString *)payloadStart;
-(NSString *)payloadEnd;
-(NSNumber *)payloadSecondsPerDay;
@end

