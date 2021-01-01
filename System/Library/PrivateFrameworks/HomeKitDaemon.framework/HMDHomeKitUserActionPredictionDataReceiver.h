/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMDUserActionPredictionDataReceiver.h>

@protocol HMDUserActionPredictionDataSource, OS_dispatch_queue;
@class HMFTimer, NSMapTable, NSObject, NSUUID, HMFMessageDispatcher, NSString;

@interface HMDHomeKitUserActionPredictionDataReceiver : HMFObject <HMFTimerDelegate, HMFLogging, HMFMessageReceiver, HMDUserActionPredictionDataReceiver> {

	HMFTimer* _notifyDebounceTimer;
	unsigned long long _debouncedNotifyPredictionLimit;
	NSMapTable* _subscribedClientConnections;
	id<HMDUserActionPredictionDataSource> _dataSource;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSUUID* _UUID;
	HMFMessageDispatcher* _messageDispatcher;

}

@property (readonly) NSMapTable * subscribedClientConnections;                                //@synthesize subscribedClientConnections=_subscribedClientConnections - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                  //@synthesize workQueue=_workQueue - In the implementation block
@property (copy,readonly) NSUUID * UUID;                                                      //@synthesize UUID=_UUID - In the implementation block
@property (readonly) HMFMessageDispatcher * messageDispatcher;                                //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (__weak) id<HMDUserActionPredictionDataSource> dataSource;                          //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSUUID *)UUID;
-(id<HMDUserActionPredictionDataSource>)dataSource;
-(void)setDataSource:(id<HMDUserActionPredictionDataSource>)arg1 ;
-(id)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(HMFMessageDispatcher *)messageDispatcher;
-(id)initWithUUID:(id)arg1 messageDispatcher:(id)arg2 workQueue:(id)arg3 ;
-(void)configureWithDataSource:(id)arg1 ;
-(void)updatedUserActionPrediction:(id)arg1 atSortedIndex:(unsigned long long)arg2 ;
-(void)removedUserActionPrediction:(id)arg1 atSortedIndex:(unsigned long long)arg2 ;
-(id)initWithUUID:(id)arg1 messageDispatcher:(id)arg2 workQueue:(id)arg3 timerFactory:(/*^block*/id)arg4 ;
-(void)_notifySubscribersOfUpdateBelowLimit:(unsigned long long)arg1 ;
-(void)_handleSubscribeMessage:(id)arg1 ;
-(void)_handleUnsubscribeMessage:(id)arg1 ;
-(void)_handleUpdatePredictionMessage:(id)arg1 ;
-(void)_handleRemovePredictionMessage:(id)arg1 ;
-(void)_handleRemoveAllPredictionsMessage:(id)arg1 ;
-(void)_debounceNotifySubscribersOfUpdateBelowLimit:(unsigned long long)arg1 ;
-(NSMapTable *)subscribedClientConnections;
-(void)_notifySubscriber:(id)arg1 clientConnection:(id)arg2 messageName:(id)arg3 payload:(id)arg4 ;
-(id)decodeUserActionPredictionsFromMessage:(id)arg1 error:(id*)arg2 ;
-(void)_addOrUpdateSubcriber:(id)arg1 clientConnection:(id)arg2 ;
-(void)_removeSubcriberWithUUID:(id)arg1 clientConnection:(id)arg2 ;
@end
