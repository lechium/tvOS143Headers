/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKit/StoreKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSDictionary, SKPaymentDiscount;

@interface SKPaymentInternal : NSObject <NSCopying> {

	NSString* _applicationUsername;
	NSString* _partnerIdentifier;
	NSString* _partnerTransactionIdentifier;
	NSString* _productIdentifier;
	long long _quantity;
	NSData* _requestData;
	NSDictionary* _requestParameters;
	BOOL _simulatesAskToBuyInSandbox;
	BOOL _isStoreOriginated;
	SKPaymentDiscount* _paymentDiscount;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
@end

