/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class PKPeerPaymentRequestToken;

@interface PKPeerPaymentRequestTokenResponse : PKPeerPaymentWebServiceResponse {

	BOOL _success;
	PKPeerPaymentRequestToken* _requestToken;

}

@property (nonatomic,readonly) BOOL success;                                          //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) PKPeerPaymentRequestToken * requestToken;              //@synthesize requestToken=_requestToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)success;
-(PKPeerPaymentRequestToken *)requestToken;
-(id)initWithData:(id)arg1 deviceScoreIdentifier:(id)arg2 ;
@end

