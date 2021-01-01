/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BSServiceConnectionHost, SASPresentationServerDelegate;
@class BSServiceConnectionEndpointInjector, BSServiceConnection, NSMutableArray;

@interface SASPresentationServer : NSObject {

	BOOL _invalidated;
	BSServiceConnectionEndpointInjector* _workspaceServiceInjector;
	BSServiceConnection*<BSServiceConnectionHost> _connection;
	NSMutableArray* _waitForConnectBlocks;
	id<SASPresentationServerDelegate> _weak_delegate;
	long long _presentationIdentifier;

}

@property (nonatomic,retain) BSServiceConnectionEndpointInjector * workspaceServiceInjector;              //@synthesize workspaceServiceInjector=_workspaceServiceInjector - In the implementation block
@property (nonatomic,retain) BSServiceConnection*<BSServiceConnectionHost> connection;                    //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL invalidated;                                                            //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,retain) NSMutableArray * waitForConnectBlocks;                                       //@synthesize waitForConnectBlocks=_waitForConnectBlocks - In the implementation block
@property (assign,nonatomic,__weak) id<SASPresentationServerDelegate> weak_delegate;                      //@synthesize weak_delegate=_weak_delegate - In the implementation block
@property (assign,nonatomic) long long presentationIdentifier;                                            //@synthesize presentationIdentifier=_presentationIdentifier - In the implementation block
+(id)interface;
+(id)serviceQuality;
+(void)_unregisterConnection:(id)arg1 ;
+(id)serverForConnection:(id)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)_setConnection:(id)arg1 ;
-(BSServiceConnection*<BSServiceConnectionHost>)connection;
-(void)setConnection:(BSServiceConnection*<BSServiceConnectionHost>)arg1 ;
-(void)setInvalidated:(BOOL)arg1 ;
-(BOOL)invalidated;
-(oneway void)pong;
-(oneway void)willDismiss;
-(void)setPresentationIdentifier:(long long)arg1 ;
-(long long)presentationIdentifier;
-(NSMutableArray *)waitForConnectBlocks;
-(void)setWaitForConnectBlocks:(NSMutableArray *)arg1 ;
-(oneway void)registerPresentationIdentifier:(id)arg1 ;
-(oneway void)unregisterPresentationIdentifier:(id)arg1 ;
-(oneway void)didDismiss;
-(oneway void)didPresentSiri;
-(oneway void)resetSiriToActive;
-(oneway void)failedToPresentSiriWithError:(id)arg1 ;
-(id)allBulletins;
-(id)bulletinsOnLockScreen;
-(id)bulletinForIdentifier:(id)arg1 ;
-(oneway void)handleMarkBulletinWithIdentifier:(id)arg1 asRead:(id)arg2 ;
-(oneway void)speechRequestStartedFromSiriOrb;
-(oneway void)speechRequestCancelledFromSiriOrb;
-(BSServiceConnectionEndpointInjector *)workspaceServiceInjector;
-(void)setWorkspaceServiceInjector:(BSServiceConnectionEndpointInjector *)arg1 ;
-(id<SASPresentationServerDelegate>)weak_delegate;
-(void)setWeak_delegate:(id<SASPresentationServerDelegate>)arg1 ;
@end

