/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentCredential.h>

@class NSString, PKPaymentPass;

@interface PKPaymentLocalPassCredential : PKPaymentCredential {

	NSString* _serialNumber;
	NSString* _passTypeIdentifier;
	PKPaymentPass* _paymentPass;

}

@property (nonatomic,copy) NSString * serialNumber;                           //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy) NSString * passTypeIdentifier;                     //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) PKPaymentPass * paymentPass;              //@synthesize paymentPass=_paymentPass - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSString *)serialNumber;
-(void)setSerialNumber:(NSString *)arg1 ;
-(PKPaymentPass *)paymentPass;
-(NSString *)passTypeIdentifier;
-(id)initWithPaymentPass:(id)arg1 ;
-(BOOL)_isEqualToCredential:(id)arg1 ;
-(void)setPassTypeIdentifier:(NSString *)arg1 ;
@end

