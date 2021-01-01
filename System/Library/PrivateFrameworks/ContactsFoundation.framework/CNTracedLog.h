/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary;

@interface CNTracedLog : NSObject {

	NSString* _message;
	NSString* _domain;
	NSString* _domainVersion;
	NSString* _domainScope;
	NSString* _signature;
	NSString* _signature2;
	NSString* _signature3;
	NSString* _value;
	NSString* _value2;
	NSString* _value3;
	NSString* _uuid;
	BOOL _summarize;
	long long _result;
	NSDictionary* _customProperties;

}

@property (copy,readonly) NSString * message;                  //@synthesize message=_message - In the implementation block
@property (copy,readonly) NSString * domain;                   //@synthesize domain=_domain - In the implementation block
@property (copy) NSString * domainVersion;                     //@synthesize domainVersion=_domainVersion - In the implementation block
@property (copy) NSString * domainScope;                       //@synthesize domainScope=_domainScope - In the implementation block
@property (copy) NSString * signature;                         //@synthesize signature=_signature - In the implementation block
@property (copy) NSString * signature2;                        //@synthesize signature2=_signature2 - In the implementation block
@property (copy) NSString * signature3;                        //@synthesize signature3=_signature3 - In the implementation block
@property (copy) NSString * value;                             //@synthesize value=_value - In the implementation block
@property (copy) NSString * value2;                            //@synthesize value2=_value2 - In the implementation block
@property (copy) NSString * value3;                            //@synthesize value3=_value3 - In the implementation block
@property (copy) NSString * uuid;                              //@synthesize uuid=_uuid - In the implementation block
@property (assign) BOOL summarize;                             //@synthesize summarize=_summarize - In the implementation block
@property (assign) long long result;                           //@synthesize result=_result - In the implementation block
@property (copy) NSDictionary * customProperties;              //@synthesize customProperties=_customProperties - In the implementation block
+(long long)roundNumber:(long long)arg1 usingSignificantDigits:(unsigned long long)arg2 ;
+(id)logWithDomain:(id)arg1 ;
+(id)formatIntegerByRoundingForPrivacy:(long long)arg1 ;
+(id)formatTimeIntervalByRoundingForPrivacy:(double)arg1 ;
+(BOOL)shouldLogGivenSamplePercentage:(float)arg1 ;
-(id)init;
-(NSString *)domain;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(long long)result;
-(NSString *)uuid;
-(NSString *)signature;
-(NSString *)message;
-(void)setResult:(long long)arg1 ;
-(NSDictionary *)customProperties;
-(void)setUuid:(NSString *)arg1 ;
-(void)setSignature:(NSString *)arg1 ;
-(NSString *)value2;
-(id)initWithDomain:(id)arg1 message:(id)arg2 ;
-(void)enumerateStandardKeysAndValuesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateCustomKeysAndValuesUsingBlock:(/*^block*/id)arg1 ;
-(void)sendValue:(id)arg1 forKey:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)sendTrace;
-(void)enumerateStandardizedKeysAndValuesUsingBlock:(/*^block*/id)arg1 ;
-(id)resultString;
-(NSString *)domainVersion;
-(void)setDomainVersion:(NSString *)arg1 ;
-(NSString *)domainScope;
-(void)setDomainScope:(NSString *)arg1 ;
-(NSString *)signature2;
-(void)setSignature2:(NSString *)arg1 ;
-(NSString *)signature3;
-(void)setSignature3:(NSString *)arg1 ;
-(void)setValue2:(NSString *)arg1 ;
-(NSString *)value3;
-(void)setValue3:(NSString *)arg1 ;
-(BOOL)summarize;
-(void)setSummarize:(BOOL)arg1 ;
-(void)setCustomProperties:(NSDictionary *)arg1 ;
@end

