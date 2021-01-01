/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKPeerPaymentPerformActionRequest : PKPeerPaymentWebServiceRequest {

	NSString* _paymentIdentifier;
	NSString* _action;

}

@property (nonatomic,copy) NSString * paymentIdentifier;              //@synthesize paymentIdentifier=_paymentIdentifier - In the implementation block
@property (nonatomic,copy) NSString * action;                         //@synthesize action=_action - In the implementation block
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(void)setPaymentIdentifier:(NSString *)arg1 ;
-(NSString *)paymentIdentifier;
@end

