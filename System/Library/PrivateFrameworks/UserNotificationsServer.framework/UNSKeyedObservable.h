/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface UNSKeyedObservable : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callOutQueue;
	NSMutableDictionary* _observersByKey;

}
-(void)addObserver:(id)arg1 forKey:(id)arg2 ;
-(void)removeObserver:(id)arg1 forKey:(id)arg2 ;
-(void)_queue_addObserver:(id)arg1 forKey:(id)arg2 ;
-(void)_queue_removeObserver:(id)arg1 forKey:(id)arg2 ;
-(void)_callOutQueue_notifyObserversKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)_observersForKey:(id)arg1 ;
-(id)initWithQueue:(id)arg1 callOutQueue:(id)arg2 ;
-(void)notifyObserversKey:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

