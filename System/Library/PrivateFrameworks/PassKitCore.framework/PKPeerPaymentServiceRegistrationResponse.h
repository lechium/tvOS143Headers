/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPeerPaymentWebServiceResponse.h>

@class NSString, NSURL;

@interface PKPeerPaymentServiceRegistrationResponse : PKPeerPaymentWebServiceResponse {

	NSString* _deviceIdentifier;
	NSString* _peerPaymentServicesPushTopic;
	NSURL* _peerPaymentServiceURL;

}

@property (nonatomic,copy,readonly) NSString * deviceIdentifier;                          //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * peerPaymentServicesPushTopic;              //@synthesize peerPaymentServicesPushTopic=_peerPaymentServicesPushTopic - In the implementation block
@property (nonatomic,copy,readonly) NSURL * peerPaymentServiceURL;                        //@synthesize peerPaymentServiceURL=_peerPaymentServiceURL - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSString *)deviceIdentifier;
-(NSURL *)peerPaymentServiceURL;
-(NSString *)peerPaymentServicesPushTopic;
@end

