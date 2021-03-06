/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/CoreAccessories/PlugIns/Transports/IOAccessoryManager.transport/IOAccessoryManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, NSMutableDictionary, NSRecursiveLock;

@interface ACCUserNotificationManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _userNotifications;
	NSMutableDictionary* _completionHandlers;
	NSRecursiveLock* _lock;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableSet * userNotifications;                      //@synthesize userNotifications=_userNotifications - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * completionHandlers;              //@synthesize completionHandlers=_completionHandlers - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * lock;                                //@synthesize lock=_lock - In the implementation block
+(id)sharedManager;
-(id)init;
-(NSRecursiveLock *)lock;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setLock:(NSRecursiveLock *)arg1 ;
-(NSMutableDictionary *)completionHandlers;
-(void)setCompletionHandlers:(NSMutableDictionary *)arg1 ;
-(void)presentNotification:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)dismissNotificationsWithGroupIdentifier:(id)arg1 ;
-(void)dismissNotificationWithIdentifier:(id)arg1 ;
-(NSMutableSet *)userNotifications;
-(void)dismissNotification:(id)arg1 ;
-(void)removeUserNotification:(id)arg1 ;
-(void)dismisssAllNotifications;
-(id)userNotificationWithUUID:(id)arg1 ;
-(void)setUserNotifications:(NSMutableSet *)arg1 ;
@end

