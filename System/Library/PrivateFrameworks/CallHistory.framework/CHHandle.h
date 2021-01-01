/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CallHistory/CallHistory-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CHHandle : NSObject <NSSecureCoding, NSCopying> {

	long long _type;
	NSString* _value;
	NSString* _normalizedValue;

}

@property (nonatomic,copy,readonly) NSString * normalizedValue;              //@synthesize normalizedValue=_normalizedValue - In the implementation block
@property (nonatomic,readonly) long long type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * value;                        //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)normalizedEmailAddressHandleForValue:(id)arg1 ;
+(id)normalizedGenericHandleForValue:(id)arg1 ;
+(id)normalizedPhoneNumberHandleForValue:(id)arg1 isoCountryCode:(id)arg2 ;
+(long long)handleTypeForValue:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
-(NSString *)value;
-(id)initWithHandle:(id)arg1 ;
-(id)initWithType:(long long)arg1 value:(id)arg2 ;
-(BOOL)isEqualToHandle:(id)arg1 ;
-(NSString *)normalizedValue;
-(id)initWithType:(long long)arg1 value:(id)arg2 normalizedValue:(id)arg3 ;
@end

