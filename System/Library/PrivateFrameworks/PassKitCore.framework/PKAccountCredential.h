/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentCredential.h>

@class PKAccount, PKPaymentPass, PKAccountWebServicePassDetailsResponse, NSString;

@interface PKAccountCredential : PKPaymentCredential {

	PKAccount* _account;
	PKPaymentPass* _paymentPass;
	PKAccountWebServicePassDetailsResponse* _passDetailsResponse;

}

@property (nonatomic,readonly) PKAccount * account;                                                     //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) PKPaymentPass * paymentPass;                                               //@synthesize paymentPass=_paymentPass - In the implementation block
@property (nonatomic,retain) PKAccountWebServicePassDetailsResponse * passDetailsResponse;              //@synthesize passDetailsResponse=_passDetailsResponse - In the implementation block
@property (nonatomic,copy,readonly) NSString * ownershipTokenIdentifier; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithAccount:(id)arg1 ;
-(PKAccount *)account;
-(id)longDescription;
-(PKPaymentPass *)paymentPass;
-(void)setPassDetailsResponse:(PKAccountWebServicePassDetailsResponse *)arg1 ;
-(void)setPaymentPass:(PKPaymentPass *)arg1 ;
-(BOOL)_isEqualToCredential:(id)arg1 ;
-(NSString *)ownershipTokenIdentifier;
-(PKAccountWebServicePassDetailsResponse *)passDetailsResponse;
@end

