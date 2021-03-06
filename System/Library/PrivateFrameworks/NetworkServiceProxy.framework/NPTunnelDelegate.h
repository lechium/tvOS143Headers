/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NPTunnelDelegate <NSObject>
@property (readonly) BOOL isFirstTunnel; 
@required
-(BOOL)isFirstTunnel;
-(void)tunnel:(id)arg1 flowDidFallbackWithReason:(long long)arg2;
-(void)tunnelDidConnect:(id)arg1;
-(void)tunnelIsReady:(id)arg1;
-(void)tunnelDidCancel:(id)arg1;

@end

