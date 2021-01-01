/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class PKPaymentPass, NSString, NSData;

@interface PKPaymentSubmitActivationCodeRequest : PKPaymentWebServiceRequest {

	PKPaymentPass* _pass;
	NSString* _verificationCode;
	NSData* _verificationData;

}

@property (nonatomic,retain) PKPaymentPass * pass;                   //@synthesize pass=_pass - In the implementation block
@property (nonatomic,copy) NSString * verificationCode;              //@synthesize verificationCode=_verificationCode - In the implementation block
@property (nonatomic,copy) NSData * verificationData;                //@synthesize verificationData=_verificationData - In the implementation block
-(PKPaymentPass *)pass;
-(NSData *)verificationData;
-(void)setVerificationData:(NSData *)arg1 ;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(NSString *)verificationCode;
-(void)setVerificationCode:(NSString *)arg1 ;
@end

