/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NEVPNConnection.h>

@interface NETunnelProviderSession : NEVPNConnection
-(BOOL)startTunnelWithOptions:(id)arg1 andReturnError:(id*)arg2 ;
-(void)stopTunnel;
-(BOOL)sendProviderMessage:(id)arg1 returnError:(id*)arg2 responseHandler:(/*^block*/id)arg3 ;
@end

