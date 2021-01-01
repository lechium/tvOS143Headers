/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol OS_dispatch_queue;
@class APSConnection, NSMutableSet, NSString, NSHashTable, NSObject, NSArray;

@interface PDPushNotificationManager : NSObject <APSConnectionDelegate> {

	APSConnection* _apsConnection;
	NSMutableSet* _registeredTopics;
	NSString* _pushToken;
	NSHashTable* _consumers;
	long long _enableCriticalReliabilityCount;
	os_unfair_lock_s _consumersLock;
	os_unfair_lock_s _criticalReliabilityLock;
	NSObject*<OS_dispatch_queue> _replyQueue;

}

@property (nonatomic,copy) NSString * pushToken;                        //@synthesize pushToken=_pushToken - In the implementation block
@property (nonatomic,readonly) NSArray * topics; 
@property (nonatomic,readonly) NSArray * currentConsumers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)connect;
-(NSString *)pushToken;
-(void)setPushToken:(NSString *)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3 ;
-(NSArray *)topics;
-(void)enableCriticalReliability;
-(void)disableCriticalReliability;
-(void)recalculatePushTopics;
-(void)registerConsumer:(id)arg1 ;
-(void)unregisterConsumer:(id)arg1 ;
-(void)unregisterAllConsumers;
-(NSArray *)currentConsumers;
-(void)simulatePushForTopic:(id)arg1 ;
@end
