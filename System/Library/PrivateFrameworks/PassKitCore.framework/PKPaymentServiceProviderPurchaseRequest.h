/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentServiceProviderPurchaseRequest : PKPaymentWebServiceRequest {

	NSString* _purchaseIdentifier;

}

@property (nonatomic,copy) NSString * purchaseIdentifier;              //@synthesize purchaseIdentifier=_purchaseIdentifier - In the implementation block
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)initWithPurchaseIdentifier:(id)arg1 ;
-(NSString *)purchaseIdentifier;
-(void)setPurchaseIdentifier:(NSString *)arg1 ;
@end

