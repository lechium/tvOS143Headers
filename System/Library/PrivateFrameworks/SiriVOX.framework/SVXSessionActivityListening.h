/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SVXSessionActivityListening <NSObject>
@optional
-(void)sessionWillChangeFromState:(long long)arg1 toState:(long long)arg2;
-(void)sessionDidChangeFromState:(long long)arg1 toState:(long long)arg2;
-(void)sessionWillPresentFeedbackWithDialogIdentifier:(id)arg1;
-(void)sessionWillStartSoundWithID:(long long)arg1;
-(void)sessionDidStartSoundWithID:(long long)arg1;
-(void)sessionDidStopSoundWithID:(long long)arg1 error:(id)arg2;
-(void)sessionWillBecomeActiveWithActivationContext:(id)arg1;
-(void)sessionDidBecomeActiveWithActivationContext:(id)arg1;
-(void)sessionWillResignActiveWithOptions:(unsigned long long)arg1 duration:(double)arg2;
-(void)sessionDidResignActiveWithDeactivationContext:(id)arg1;
-(void)audioSessionWillBecomeActive:(BOOL)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3;
-(void)audioSessionDidBecomeActive:(BOOL)arg1 activationContext:(id)arg2 deactivationContext:(id)arg3;

@end
