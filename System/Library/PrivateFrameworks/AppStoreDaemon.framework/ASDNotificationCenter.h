/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/ASDNotificationServiceProtocol.h>

@protocol OS_dispatch_queue, ASDNotificationCenterDialogObserver;
@class NSObject, NSMutableDictionary, NSHashTable;

@interface ASDNotificationCenter : NSObject <ASDNotificationServiceProtocol> {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableDictionary* _notificationObservers;
	os_unfair_lock_s _observerLock;
	NSHashTable* _progressObservers;
	id<ASDNotificationCenterDialogObserver> _dialogObserver;

}

@property (__weak) id<ASDNotificationCenterDialogObserver> dialogObserver;              //@synthesize dialogObserver=_dialogObserver - In the implementation block
+(id)defaultCenter;
+(id)interface;
-(id)init;
-(void)removeNotificationObserver:(id)arg1 forName:(id)arg2 ;
-(void)removeProgressObserver:(id)arg1 ;
-(void)addNotificationObserver:(id)arg1 forName:(id)arg2 ;
-(void)addProgressObserver:(id)arg1 ;
-(void)deliverAuthenticateRequest:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)deliverDialogRequest:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)deliverEngagementRequest:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(void)deliverNotifications:(id)arg1 ;
-(void)deliverProgress:(id)arg1 ;
-(id)_copyNotificationObserversForName:(id)arg1 ;
-(id)_copyProgressObservers;
-(id<ASDNotificationCenterDialogObserver>)dialogObserver;
-(void)setDialogObserver:(id<ASDNotificationCenterDialogObserver>)arg1 ;
@end

