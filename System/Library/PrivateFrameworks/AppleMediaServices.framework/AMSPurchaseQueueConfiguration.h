/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AMSBagProtocol, AMSPurchaseResponseProtocol;
@interface AMSPurchaseQueueConfiguration : NSObject {

	id<AMSBagProtocol> _bag;
	id<AMSPurchaseResponseProtocol> _delegate;

}

@property (nonatomic,readonly) id<AMSBagProtocol> bag;                              //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) id<AMSPurchaseResponseProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<AMSPurchaseResponseProtocol>)delegate;
-(void)setDelegate:(id<AMSPurchaseResponseProtocol>)arg1 ;
-(id<AMSBagProtocol>)bag;
-(id)initWithBag:(id)arg1 ;
@end
