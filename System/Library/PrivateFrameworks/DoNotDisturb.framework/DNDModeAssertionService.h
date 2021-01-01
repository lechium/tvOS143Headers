/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/DNDRemoteServiceConnectionEventListener.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, NSHashTable, DNDModeAssertion;

@interface DNDModeAssertionService : NSObject <DNDRemoteServiceConnectionEventListener> {

	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSString* _clientIdentifier;
	NSHashTable* _assertionUpdateListeners;
	atomic_flag _registeredForUpdates;
	DNDModeAssertion* _activeAssertion;
	os_unfair_lock_s _activeAssertionLock;

}

@property (nonatomic,copy,readonly) NSString * clientIdentifier;              //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)serviceForClientIdentifier:(id)arg1 ;
-(NSString *)clientIdentifier;
-(id)_initWithClientIdentifier:(id)arg1 ;
-(void)didReceiveConnectionInterruptedEventForRemoteService:(id)arg1 ;
-(void)didReceiveConnectionInvalidatedEventForRemoteService:(id)arg1 ;
-(void)remoteService:(id)arg1 didChangeActiveModeAssertion:(id)arg2 invalidation:(id)arg3 ;
-(id)invalidateActiveModeAssertionWithInvalidationDetails:(id)arg1 reasonOverride:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)_registerForAssertionUpdatesIfRequiredWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_handleXPCInterruption;
-(void)_handleChangeActiveModeAssertion:(id)arg1 invalidation:(id)arg2 ;
-(id)activeModeAssertionWithError:(id*)arg1 ;
-(id)takeModeAssertionWithDetails:(id)arg1 error:(id*)arg2 ;
-(id)invalidateActiveModeAssertionWithError:(id*)arg1 ;
-(id)latestModeAssertionInvalidationWithError:(id*)arg1 ;
-(BOOL)invalidateAllActiveModeAssertionsWithError:(id*)arg1 ;
-(void)addAssertionUpdateListener:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)removeAssertionUpdateListener:(id)arg1 ;
-(BOOL)addAssertionUpdateListener:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeAssertionUpdateListener:(id)arg1 error:(id*)arg2 ;
@end

