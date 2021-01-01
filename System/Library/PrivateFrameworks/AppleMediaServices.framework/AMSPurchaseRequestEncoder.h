/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleMediaServices/AMSURLRequestEncoder.h>

@protocol AMSBagProtocol, OS_dispatch_queue;
@class AMSPurchaseInfo, NSObject;

@interface AMSPurchaseRequestEncoder : AMSURLRequestEncoder {

	id<AMSBagProtocol> _bag;
	AMSPurchaseInfo* _purchaseInfo;
	NSObject*<OS_dispatch_queue> _purchaseRequestQueue;

}

@property (nonatomic,readonly) AMSPurchaseInfo * purchaseInfo;                               //@synthesize purchaseInfo=_purchaseInfo - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> purchaseRequestQueue;              //@synthesize purchaseRequestQueue=_purchaseRequestQueue - In the implementation block
+(void)configureRequest:(id)arg1 purchaseInfo:(id)arg2 bag:(id)arg3 error:(id*)arg4 ;
+(long long)_anisetteTypeFromAccount:(id)arg1 ;
+(id)_parametersFromPurchaseInfo:(id)arg1 error:(id*)arg2 ;
-(id)bag;
-(void)setBag:(id)arg1 ;
-(id)_bagURL;
-(AMSPurchaseInfo *)purchaseInfo;
-(id)initWithPurchaseInfo:(id)arg1 bag:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)purchaseRequestQueue;
-(id)initWithPurchaseInfo:(id)arg1 ;
-(id)encodeRequest;
-(void)setPurchaseRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
