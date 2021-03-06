/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_group;
@class NSObject;

@interface OspreyDeferredObject : NSObject {

	id _promised;
	NSObject*<OS_dispatch_queue> _deferralQueue;
	NSObject*<OS_dispatch_queue> _fulfillmentQueue;
	NSObject*<OS_dispatch_group> _fulfillmentGroup;

}
-(void)fulfill:(id)arg1 ;
-(id)initWithFulfillmentQueue:(id)arg1 ;
-(void)fulfilledWithCompletion:(/*^block*/id)arg1 ;
@end

