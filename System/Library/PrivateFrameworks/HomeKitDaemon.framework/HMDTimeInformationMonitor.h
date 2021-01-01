/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_queue;
@class HMFTimer, NSHashTable, NSObject, NSString;

@interface HMDTimeInformationMonitor : HMFObject <HMFTimerDelegate> {

	HMFTimer* _expirationTimer;
	NSHashTable* _delegates;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (nonatomic,readonly) HMFTimer * expirationTimer;                            //@synthesize expirationTimer=_expirationTimer - In the implementation block
@property (nonatomic,retain) NSHashTable * delegates;                                 //@synthesize delegates=_delegates - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSHashTable *)delegates;
-(void)setDelegates:(NSHashTable *)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(void)systemTimeChanged:(id)arg1 ;
-(void)_updateWithTimerInterval;
-(HMFTimer *)expirationTimer;
-(void)_handleExpiration;
@end

