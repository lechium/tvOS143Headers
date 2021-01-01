/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IdleTimerServices.framework/IdleTimerServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ITIdleTimerStateServerDelegate <NSObject>
@required
-(void)clientDidDisconnect:(id)arg1;
-(BOOL)addIdleTimerConfiguration:(id)arg1 fromProcess:(id)arg2 forReason:(id)arg3;
-(void)removeIdleTimerConfigurationFromProcess:(id)arg1 forReason:(id)arg2;
-(BOOL)isIdleTimerServiceAvailable;

@end
