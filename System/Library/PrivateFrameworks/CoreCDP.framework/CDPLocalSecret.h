/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CDPLocalSecret : NSObject <NSSecureCoding> {

	NSString* _validatedSecret;
	unsigned long long _secretType;

}

@property (nonatomic,readonly) NSString * validatedSecret;                 //@synthesize validatedSecret=_validatedSecret - In the implementation block
@property (nonatomic,readonly) unsigned long long secretType;              //@synthesize secretType=_secretType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)validatedSecret;
-(unsigned long long)secretType;
-(id)initWithValidatedSecret:(id)arg1 secretType:(unsigned long long)arg2 ;
@end

