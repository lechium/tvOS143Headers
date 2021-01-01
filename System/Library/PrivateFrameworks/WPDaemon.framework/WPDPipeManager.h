/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WPDaemon/WPDManager.h>
#import <libobjc.A.dylib/CBScalablePipeManagerDelegate.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CBScalablePipeManager, NSMutableDictionary, NSString;

@interface WPDPipeManager : WPDManager <CBScalablePipeManagerDelegate, NSStreamDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CBScalablePipeManager* _pipeManager;
	NSMutableDictionary* _endpointsDict;
	NSMutableDictionary* _peerPipesDict;
	NSMutableDictionary* _connectionInitiators;

}

@property (__weak) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (retain) CBScalablePipeManager * pipeManager;                     //@synthesize pipeManager=_pipeManager - In the implementation block
@property (retain) NSMutableDictionary * endpointsDict;                     //@synthesize endpointsDict=_endpointsDict - In the implementation block
@property (retain) NSMutableDictionary * peerPipesDict;                     //@synthesize peerPipesDict=_peerPipesDict - In the implementation block
@property (retain) NSMutableDictionary * connectionInitiators;              //@synthesize connectionInitiators=_connectionInitiators - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)update;
-(void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3 ;
-(void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2 ;
-(void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2 ;
-(void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3 ;
-(id)initWithServer:(id)arg1 ;
-(id)generateStateDump;
-(void)setPipeManager:(CBScalablePipeManager *)arg1 ;
-(CBScalablePipeManager *)pipeManager;
-(void)unregisterEndpoint:(id)arg1 forClient:(id)arg2 ;
-(void)setPipeClientConnectionStatus:(BOOL)arg1 forPeer:(id)arg2 forClient:(id)arg3 ;
-(void)setConnectionInitiator:(BOOL)arg1 forPeer:(id)arg2 forClient:(id)arg3 ;
-(void)registerEndpoint:(id)arg1 requireAck:(BOOL)arg2 requireEncryption:(BOOL)arg3 forClient:(id)arg4 ;
-(void)sendData:(id)arg1 forPeer:(id)arg2 forClient:(id)arg3 ;
-(NSMutableDictionary *)endpointsDict;
-(NSMutableDictionary *)peerPipesDict;
-(long long)writeDataToPipe:(id)arg1 pipe:(id)arg2 ;
-(void)invalidatePipeInfo:(id)arg1 forPeer:(id)arg2 ;
-(id)pipeInfo:(id)arg1 forClient:(id)arg2 ;
-(NSMutableDictionary *)connectionInitiators;
-(void)sendConnectStatus:(id)arg1 connectStatus:(unsigned char)arg2 ;
-(BOOL)sendVersionInfo:(id)arg1 ;
-(void)sendRemainingData:(id)arg1 wpClient:(id)arg2 ;
-(void)handleIncomingPipeData:(id)arg1 data:(char*)arg2 dataSize:(long long)arg3 ;
-(void)receivedPayload:(id)arg1 data:(char*)arg2 dataSize:(long long)arg3 ;
-(void)receivedAck:(id)arg1 data:(char*)arg2 dataSize:(long long)arg3 ;
-(void)receivedVersionInfo:(id)arg1 data:(char*)arg2 dataSize:(long long)arg3 ;
-(void)receivedError:(id)arg1 data:(char*)arg2 dataSize:(long long)arg3 ;
-(void)receivedConnectStatus:(id)arg1 data:(char*)arg2 dataSize:(long long)arg3 ;
-(void)sendErrorResponse:(id)arg1 errorCode:(unsigned char)arg2 ;
-(void)sendAck:(id)arg1 errorCode:(unsigned char)arg2 ;
-(void)channelHasData:(id)arg1 ;
-(void)sendChannelData:(id)arg1 ;
-(id)streamEvent:(unsigned long long)arg1 ;
-(id)pipeManagerState:(long long)arg1 ;
-(void)setEndpointsDict:(NSMutableDictionary *)arg1 ;
-(void)setPeerPipesDict:(NSMutableDictionary *)arg1 ;
-(void)setConnectionInitiators:(NSMutableDictionary *)arg1 ;
@end

