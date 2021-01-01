/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ASKStorefrontChangeProvider, NSHashTable;

@interface ASKRebootstrapCoordinator : NSObject {

	BOOL _hasPendingNotification;
	ASKStorefrontChangeProvider* _changeObserver;
	NSHashTable* _handlerTokens;
	/*^block*/id _appBootstrapHandler;
	long long _delayCount;

}

@property (nonatomic,readonly) ASKStorefrontChangeProvider * changeObserver;              //@synthesize changeObserver=_changeObserver - In the implementation block
@property (nonatomic,readonly) NSHashTable * handlerTokens;                               //@synthesize handlerTokens=_handlerTokens - In the implementation block
@property (nonatomic,copy) id appBootstrapHandler;                                        //@synthesize appBootstrapHandler=_appBootstrapHandler - In the implementation block
@property (assign,nonatomic) long long delayCount;                                        //@synthesize delayCount=_delayCount - In the implementation block
@property (assign,nonatomic) BOOL hasPendingNotification;                                 //@synthesize hasPendingNotification=_hasPendingNotification - In the implementation block
+(id)sharedCoordinator;
-(id)init;
-(void)notify;
-(ASKStorefrontChangeProvider *)changeObserver;
-(id)registerCleanupHandler:(/*^block*/id)arg1 ;
-(void)scheduleNotification;
-(long long)delayCount;
-(void)setHasPendingNotification:(BOOL)arg1 ;
-(NSHashTable *)handlerTokens;
-(id)appBootstrapHandler;
-(void)setDelayCount:(long long)arg1 ;
-(BOOL)hasPendingNotification;
-(void)setAppBootstrapHandler:(id)arg1 ;
-(void)beginDelayingNotifications;
-(void)endDelayingNotifications;
-(void)simulateStorefrontChange;
-(void)registerAppBootstrapHandler:(/*^block*/id)arg1 ;
@end

