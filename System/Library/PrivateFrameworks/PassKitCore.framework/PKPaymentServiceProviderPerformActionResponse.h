/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class PKServiceProviderPurchase;

@interface PKPaymentServiceProviderPerformActionResponse : PKPaymentWebServiceResponse {

	PKServiceProviderPurchase* _updatedPurchase;

}

@property (nonatomic,retain,readonly) PKServiceProviderPurchase * updatedPurchase;              //@synthesize updatedPurchase=_updatedPurchase - In the implementation block
-(id)initWithData:(id)arg1 ;
-(PKServiceProviderPurchase *)updatedPurchase;
@end

