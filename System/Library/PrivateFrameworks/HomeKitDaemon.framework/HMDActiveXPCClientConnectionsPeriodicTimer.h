/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol HMDActiveXPCClientConnectionsPeriodicTimerDelegate, OS_dispatch_queue;
@class NSString, NSObject, NSHashTable, HMFTimer, NSSet;

@interface HMDActiveXPCClientConnectionsPeriodicTimer : HMFObject <HMFLogging, HMFTimerDelegate> {

	NSString* _logIdentifier;
	double _timeInterval;
	id<HMDActiveXPCClientConnectionsPeriodicTimerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSHashTable* _mutableClientConnections;
	HMFTimer* _timer;
	/*^block*/id _timerFactory;

}

@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                                     //@synthesize workQueue=_workQueue - In the implementation block
@property (copy,readonly) NSString * logIdentifier;                                              //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (readonly) NSHashTable * mutableClientConnections;                                     //@synthesize mutableClientConnections=_mutableClientConnections - In the implementation block
@property (retain) HMFTimer * timer;                                                             //@synthesize timer=_timer - In the implementation block
@property (copy) id timerFactory;                                                                //@synthesize timerFactory=_timerFactory - In the implementation block
@property (readonly) double timeInterval;                                                        //@synthesize timeInterval=_timeInterval - In the implementation block
@property (copy,readonly) NSSet * clientConnections; 
@property (__weak) id<HMDActiveXPCClientConnectionsPeriodicTimerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(double)timeInterval;
-(id<HMDActiveXPCClientConnectionsPeriodicTimerDelegate>)delegate;
-(void)setDelegate:(id<HMDActiveXPCClientConnectionsPeriodicTimerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setTimer:(HMFTimer *)arg1 ;
-(HMFTimer *)timer;
-(void)_updateTimer;
-(NSSet *)clientConnections;
-(NSString *)logIdentifier;
-(void)timerDidFire:(id)arg1 ;
-(id)timerFactory;
-(void)setTimerFactory:(id)arg1 ;
-(NSHashTable *)mutableClientConnections;
-(void)handleClientConnectionDidActivate:(id)arg1 ;
-(void)handleClientConnectionDidDeactivate:(id)arg1 ;
-(id)initWithTimeInterval:(double)arg1 logIdentifier:(id)arg2 workQueue:(id)arg3 ;
-(void)addClientConnection:(id)arg1 ;
-(void)removeClientConnection:(id)arg1 ;
@end

