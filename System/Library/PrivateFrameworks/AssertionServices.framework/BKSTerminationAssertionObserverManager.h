/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AssertionServices/AssertionServices-Structs.h>
@class RBSProcessMonitor, NSMutableSet, NSObject;

@interface BKSTerminationAssertionObserverManager : NSObject {

	RBSProcessMonitor* _monitor;
	BOOL _monitorIsReady;
	NSMutableSet* _observers;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSMutableSet* _launchPreventedBundleIDs;

}
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)_createMonitor;
-(BOOL)hasTerminationAssertionForBundleID:(id)arg1 ;
-(unsigned long long)efficacyForBundleID:(id)arg1 ;
@end

