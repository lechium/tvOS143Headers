/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSError, NSString, AMSBiometricsSignatureResult;

@interface _PaymentSheetState : NSObject {

	BOOL _didAuthorizePayment;
	BOOL _didBiometricsLockout;
	BOOL _didPresent;
	NSError* _error;
	unsigned long long _cancellationType;
	NSString* _passwordEquivalentToken;
	NSString* _paymentToken;
	AMSBiometricsSignatureResult* _signatureResult;

}

@property (nonatomic,retain) NSError * error;                                             //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL didAuthorizePayment;                                    //@synthesize didAuthorizePayment=_didAuthorizePayment - In the implementation block
@property (assign,nonatomic) BOOL didBiometricsLockout;                                   //@synthesize didBiometricsLockout=_didBiometricsLockout - In the implementation block
@property (assign,nonatomic) unsigned long long cancellationType;                         //@synthesize cancellationType=_cancellationType - In the implementation block
@property (assign,nonatomic) BOOL didPresent;                                             //@synthesize didPresent=_didPresent - In the implementation block
@property (nonatomic,retain) NSString * passwordEquivalentToken;                          //@synthesize passwordEquivalentToken=_passwordEquivalentToken - In the implementation block
@property (nonatomic,retain) NSString * paymentToken;                                     //@synthesize paymentToken=_paymentToken - In the implementation block
@property (nonatomic,retain) AMSBiometricsSignatureResult * signatureResult;              //@synthesize signatureResult=_signatureResult - In the implementation block
-(id)init;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSString *)passwordEquivalentToken;
-(void)setPasswordEquivalentToken:(NSString *)arg1 ;
-(BOOL)didPresent;
-(NSString *)paymentToken;
-(void)setDidPresent:(BOOL)arg1 ;
-(void)setPaymentToken:(NSString *)arg1 ;
-(BOOL)didBiometricsLockout;
-(void)setDidBiometricsLockout:(BOOL)arg1 ;
-(AMSBiometricsSignatureResult *)signatureResult;
-(void)setSignatureResult:(AMSBiometricsSignatureResult *)arg1 ;
-(BOOL)didAuthorizePayment;
-(void)setDidAuthorizePayment:(BOOL)arg1 ;
-(unsigned long long)cancellationType;
-(void)setCancellationType:(unsigned long long)arg1 ;
@end

