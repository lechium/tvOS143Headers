/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SVXClientSessionServiceDelegate <NSObject>
@optional
-(void)sessionServiceDidResignActive:(id)arg1;

@required
-(void)sessionService:(id)arg1 willChangeStateFrom:(long long)arg2 to:(long long)arg3;
-(void)sessionService:(id)arg1 didChangeStateFrom:(long long)arg2 to:(long long)arg3;
-(void)sessionService:(id)arg1 willPresentFeedbackWithDialogIdentifier:(id)arg2;
-(void)sessionService:(id)arg1 willStartSoundWithID:(long long)arg2;
-(void)sessionService:(id)arg1 didStartSoundWithID:(long long)arg2;
-(void)sessionService:(id)arg1 didStopSoundWithID:(long long)arg2 error:(id)arg3;
-(void)sessionService:(id)arg1 willBecomeActiveWithActivationContext:(id)arg2;
-(void)sessionService:(id)arg1 didBecomeActiveWithActivationContext:(id)arg2;
-(void)sessionService:(id)arg1 willResignActiveWithOptions:(unsigned long long)arg2 duration:(double)arg3;
-(void)sessionService:(id)arg1 didResignActiveWithDeactivationContext:(id)arg2;

@end

