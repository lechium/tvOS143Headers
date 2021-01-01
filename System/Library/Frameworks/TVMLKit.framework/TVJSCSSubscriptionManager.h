/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVJSCSSubscriptionManager.h>

@protocol TVJSCSSubscriptionManager <JSExport>
@required
-(id)init;
-(void)unregisterAllSubscriptions;
-(void)registerSubscription:(id)arg1 :(id)arg2;
-(void)unregisterSubscription:(id)arg1;

@end


@class CSSubscriptionManager;

@interface TVJSCSSubscriptionManager : NSObject <TVJSCSSubscriptionManager> {

	CSSubscriptionManager* _subscriptionManager;

}

@property (nonatomic,retain) CSSubscriptionManager * subscriptionManager;              //@synthesize subscriptionManager=_subscriptionManager - In the implementation block
+(void)configureJSContext:(id)arg1 ;
-(id)init;
-(void)unregisterAllSubscriptions;
-(CSSubscriptionManager *)subscriptionManager;
-(void)registerSubscription:(id)arg1 :(id)arg2 ;
-(void)unregisterSubscription:(id)arg1 ;
-(void)setSubscriptionManager:(CSSubscriptionManager *)arg1 ;
@end
