/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WirelessCoexManager.framework/WirelessCoexManager
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WirelessCoexManager/WRMClientInterface.h>

@interface WRM_UCMInterface : WRMClientInterface
-(void)registerClient:(int)arg1 queue:(id)arg2 ;
-(void)setCriticalAirPlayEnabled:(BOOL)arg1 estimatedDuration:(unsigned)arg2 criticalityPercentage:(unsigned short)arg3 ;
-(void)handleNotification:(id)arg1 :(BOOL)arg2 ;
@end

