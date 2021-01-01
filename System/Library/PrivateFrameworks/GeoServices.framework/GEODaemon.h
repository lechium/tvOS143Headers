/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source, OS_xpc_object;
@class NSMutableDictionary, NSMutableSet, NSObject, NSSet;

@interface GEODaemon : NSObject {

	NSMutableDictionary* _servers;
	NSMutableSet* _peers;
	NSObject*<OS_dispatch_source> _sigInfoSrc;
	NSObject*<OS_dispatch_source> _sigTermSrc;
	NSObject*<OS_xpc_object> _listener;

}

@property (nonatomic,readonly) NSSet * peers;              //@synthesize peers=_peers - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(void)start;
-(id)initWithPort:(const char*)arg1 ;
-(NSSet *)peers;
-(void)_localeChanged:(id)arg1 ;
-(id)_createListenerWithQueue:(id)arg1 onPort:(const char*)arg2 ;
-(void)_handleNewConnection:(id)arg1 ;
-(id)_createPeerForConnection:(id)arg1 ;
-(void)peerDidConnect:(id)arg1 ;
-(void)peerDidDisconnect:(id)arg1 ;
-(void)handleIncomingMessage:(id)arg1 fromPeer:(id)arg2 ;
-(void)addServerInstance:(id)arg1 ;
-(void)addServerClass:(Class)arg1 ;
-(void)startServerClassIfNecessary:(Class)arg1 ;
@end

