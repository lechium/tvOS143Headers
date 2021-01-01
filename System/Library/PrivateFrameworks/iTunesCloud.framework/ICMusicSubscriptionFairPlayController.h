/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface ICMusicSubscriptionFairPlayController : NSObject {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _fairPlaySerialQueue;
	NSMutableDictionary* _subscriptionKeyBagStatusCache;

}
+(id)sharedController;
-(id)_init;
-(void)importSubscriptionKeyBagData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)generateSubscriptionBagRequestWithAccountUniqueIdentifier:(unsigned long long)arg1 transactionType:(unsigned)arg2 machineIDData:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)importSubscriptionKeyBagData:(id)arg1 leaseInfoData:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)generateSubscriptionLeaseRequestWithAccountUniqueID:(unsigned long long)arg1 transactionType:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)stopSubscriptionLeaseForAccountUniqueIdentifier:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getKeyStatusListWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleSubscriptionFairPlayKeyStatusChangedDistributedNotification:(id)arg1 ;
-(void)getKeyStatusForAccountUniqueIdentifier:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end
