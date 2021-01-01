/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SVXSessionDelegate <NSObject>
@required
-(void)sessionDidInvalidate:(id)arg1;
-(void)session:(id)arg1 willChangeFromState:(long long)arg2 toState:(long long)arg3;
-(void)session:(id)arg1 didChangeFromState:(long long)arg2 toState:(long long)arg3;
-(void)session:(id)arg1 willBeginUpdateAudioPowerWithType:(long long)arg2 wrapper:(id)arg3;
-(void)session:(id)arg1 didEndUpdateAudioPowerWithType:(long long)arg2;
-(void)session:(id)arg1 willStartSoundWithID:(long long)arg2;
-(void)session:(id)arg1 didStartSoundWithID:(long long)arg2;
-(void)session:(id)arg1 didStopSoundWithID:(long long)arg2 error:(id)arg3;
-(void)session:(id)arg1 willBecomeActiveWithActivationContext:(id)arg2 activityUUID:(id)arg3;
-(void)session:(id)arg1 didBecomeActiveWithActivationContext:(id)arg2 activityUUID:(id)arg3;
-(void)session:(id)arg1 willResignActiveWithOptions:(unsigned long long)arg2 duration:(double)arg3 activityUUID:(id)arg4;
-(void)session:(id)arg1 didResignActiveWithDeactivationContext:(id)arg2 activityUUID:(id)arg3;
-(void)session:(id)arg1 willActivateWithContext:(id)arg2;
-(void)session:(id)arg1 didActivateWithContext:(id)arg2;
-(void)session:(id)arg1 didNotActivateWithContext:(id)arg2 error:(id)arg3;
-(void)session:(id)arg1 willDeactivateWithContext:(id)arg2;
-(void)session:(id)arg1 didDeactivateWithContext:(id)arg2;
-(void)session:(id)arg1 audioSessionWillBecomeActive:(BOOL)arg2 activationContext:(id)arg3 deactivationContext:(id)arg4;
-(void)session:(id)arg1 audioSessionDidBecomeActive:(BOOL)arg2 activationContext:(id)arg3 deactivationContext:(id)arg4;

@end

