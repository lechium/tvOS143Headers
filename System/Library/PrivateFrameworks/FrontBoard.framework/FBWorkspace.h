/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FrontBoard/FrontBoard-Structs.h>
#import <libobjc.A.dylib/FBSceneClient.h>
#import <libobjc.A.dylib/FBSceneClientProvider.h>

@protocol FBWorkspaceDelegate, BSServiceConnectionHost, OS_dispatch_queue;
@class FBProcess, FBWorkspaceEventDispatcherRegistration, BSServiceConnection, NSMutableArray, NSMutableDictionary, NSObject, FBSSerialQueue, FBSceneClientProviderInvalidationAction, RBSAssertion, BSCompoundAssertion, BSServiceConnectionEndpointInjector, BSAuditToken, NSString;

@interface FBWorkspace : NSObject <FBSceneClient, FBSceneClientProvider> {

	id<FBWorkspaceDelegate> _weak_delegate;
	FBProcess* _weak_process;
	FBWorkspaceEventDispatcherRegistration* _lock_eventDispatcher;
	BSServiceConnection*<BSServiceConnectionHost> _lock_connection;
	NSMutableArray* _lock_waitForConnectBlocks;
	NSMutableDictionary* _lock_identifierToSceneMap;
	NSMutableDictionary* _lock_identifierToRemnantsMap;
	NSMutableArray* _lock_pendedRequests;
	os_unfair_lock_s _lock;
	NSObject*<OS_dispatch_queue> _queue;
	FBSSerialQueue* _workspaceQueue;
	FBSceneClientProviderInvalidationAction* _lock_invalidationAction;
	RBSAssertion* _lock_lifeAssertion;
	RBSAssertion* _lock_connectAssertion;
	RBSAssertion* _lock_afterlifeAssertion;
	long long _lock_activeInterruptionPolicy;
	unsigned char _lock_activeAssertionState;
	BSCompoundAssertion* _compoundAssertion;
	BSServiceConnectionEndpointInjector* _workspaceServiceInjector;
	BOOL _shouldInjectEndpoint;
	BOOL _lock_didReceiveHandshake;
	BOOL _lock_invalidated;

}

@property (assign,nonatomic,__weak) id<FBWorkspaceDelegate> delegate; 
@property (nonatomic,__weak,readonly) FBProcess * process; 
@property (nonatomic,readonly) BSAuditToken * auditToken; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)_resolveInterruptionPolicy:(long long)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(id<FBWorkspaceDelegate>)delegate;
-(void)setDelegate:(id<FBWorkspaceDelegate>)arg1 ;
-(BSAuditToken *)auditToken;
-(FBProcess *)process;
-(void)sendActions:(id)arg1 ;
-(oneway void)requestSceneWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)handshakeWithRemnants:(id)arg1 ;
-(oneway void)sceneID:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 transitionContext:(id)arg3 ;
-(oneway void)sceneID:(id)arg1 didReceiveActions:(id)arg2 ;
-(oneway void)sceneID:(id)arg1 sendMessage:(id)arg2 withResponse:(/*^block*/id)arg3 ;
-(void)_updateProcessAssertionState;
-(id)_acquireAssertionForReason:(id)arg1 withState:(unsigned char)arg2 ;
-(void)_lock_enqueueConnectBlock:(/*^block*/id)arg1 ;
-(void)_lock_fireInvalidationAction;
-(id)_sceneForIdentifier:(id)arg1 ;
-(void)_resolveSceneLifecycleStateAndInterruptionPolicy;
-(void)host:(id)arg1 didInvalidateWithTransitionContext:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)_unregisterSceneForIdentifier:(id)arg1 ;
-(void)_terminateWithReason:(id)arg1 ;
-(void)host:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)host:(id)arg1 didReceiveActions:(id)arg2 ;
-(void)registerInvalidationAction:(id)arg1 ;
-(id)registerHost:(id)arg1 withSpecification:(id)arg2 settings:(id)arg3 initialClientSettings:(id)arg4 fromRemnant:(id)arg5 ;
-(void)unregisterHost:(id)arg1 ;
@end

