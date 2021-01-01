/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkServiceProxy/NPTunnelTuscany.h>

@class NPTunnelFlow;

@interface NPTunnelTuscanyLoopback : NPTunnelTuscany {

	void* _window;
	NPTunnelFlow* _flow;

}

@property (assign) void* window;                     //@synthesize window=_window - In the implementation block
@property (retain) NPTunnelFlow * flow;              //@synthesize flow=_flow - In the implementation block
-(void)dealloc;
-(void)write:(id)arg1 ;
-(void*)window;
-(void)cancelConnection;
-(NPTunnelFlow *)flow;
-(void)setFlow:(NPTunnelFlow *)arg1 ;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 appRule:(id)arg3 flowProperties:(id)arg4 onRamp:(id)arg5 delegate:(id)arg6 ;
-(unsigned long long)initialWindowSize;
-(BOOL)addNewFlow:(id)arg1 ;
-(void)removeFlow:(unsigned long long)arg1 ;
-(unsigned long long)maxFrameSize;
-(void)createTuscanyClient;
-(unsigned)dayPassSessionCounter;
-(long long)currentMTU;
-(BOOL)selectBestEdge;
-(void)startConnectionTimer;
-(void)cancelConnectionTimer;
-(void)sendUsageReportWithRTT:(unsigned long long)arg1 geohash:(id)arg2 fallbackReason:(long long)arg3 ;
-(void)pingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setWindow:(void*)arg1 ;
@end

