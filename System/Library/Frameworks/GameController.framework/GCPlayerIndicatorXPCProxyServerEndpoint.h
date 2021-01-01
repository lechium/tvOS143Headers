/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/GameController.framework/GameController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_GCIPCEndpointServer.h>
#import <libobjc.A.dylib/GCPlayerIndicatorXPCProxyRemoteServerEndpointInterface.h>

@protocol GCPlayerIndicatorXPCProxyRemoteClientEndpointInterface, _GCIPCEndpointConnection, NSObjectNSCopyingNSSecureCoding, GCPlayerIndicatorXPCProxyServerEndpointDelegate;
@class NSString;

@interface GCPlayerIndicatorXPCProxyServerEndpoint : NSObject <_GCIPCEndpointServer, GCPlayerIndicatorXPCProxyRemoteServerEndpointInterface> {

	id<GCPlayerIndicatorXPCProxyRemoteClientEndpointInterface> _clientEndpoint;
	id<_GCIPCEndpointConnection> _connection;
	id _connectionInterruptionRegistration;
	id _connectionInvalidationRegistration;
	unsigned long long _pendingUpdates;
	id<NSObject><NSCopying><NSSecureCoding> _identifier;
	long long _playerIndex;
	id<GCPlayerIndicatorXPCProxyServerEndpointDelegate> _delegate;
	id _userInfo;

}

@property (nonatomic,readonly) id<_GCControllerComponentDescription> receiverDescription; 
@property (assign,nonatomic,__weak) id<GCPlayerIndicatorXPCProxyServerEndpointDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id userInfo;                                                                      //@synthesize userInfo=_userInfo - In the implementation block
@property (assign,nonatomic) long long playerIndex;                                                            //@synthesize playerIndex=_playerIndex - In the implementation block
@property (readonly) id<NSObject><NSCopying><NSSecureCoding> identifier;                                       //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)userInfo;
-(id<GCPlayerIndicatorXPCProxyServerEndpointDelegate>)delegate;
-(void)setDelegate:(id<GCPlayerIndicatorXPCProxyServerEndpointDelegate>)arg1 ;
-(id<NSObject><NSCopying><NSSecureCoding>)identifier;
-(void)setUserInfo:(id)arg1 ;
-(void)setPlayerIndex:(long long)arg1 ;
-(void)invalidateConnection;
-(long long)playerIndex;
-(void)fetchObjectIdentifierWithReply:(/*^block*/id)arg1 ;
-(id)initWithIdentifier:(id)arg1 initialValue:(long long)arg2 ;
-(BOOL)acceptClient:(id)arg1 onConnection:(id)arg2 error:(id*)arg3 ;
-(id)initWithInitialValue:(long long)arg1 ;
-(id<_GCControllerComponentDescription>)receiverDescription;
-(void)invalidateClient;
-(void)newPlayerIndex:(long long)arg1 ;
-(void)fetchPlayerIndexWithReply:(/*^block*/id)arg1 ;
@end

