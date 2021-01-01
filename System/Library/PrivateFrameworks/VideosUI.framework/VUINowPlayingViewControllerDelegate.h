/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VUINowPlayingViewControllerDelegate <NSObject>
@optional
-(void)nowPlayingControllerViewWillAppear:(id)arg1;
-(void)nowPlayingControllerViewWillDisappear:(id)arg1 withDisappearanceReason:(unsigned long long)arg2;
-(void)nowPlayingControllerViewDidAppear:(id)arg1;
-(void)nowPlayingControllerViewDidDisappear:(id)arg1;
-(void)nowPlayingControllerDidSelectSkipIntro:(id)arg1;
-(void)nowPlayingControllerDidSelectFromBeginningButton:(id)arg1;
-(void)nowPlayingControllerDidSelectMoreInfoButton:(id)arg1;
-(void)nowPlayingController:(id)arg1 safeAreaDidChange:(UIEdgeInsets)arg2;
-(void)nowPlayingViewControllerUserDidInteract:(id)arg1;
-(void)nowPlayingViewController:(id)arg1 mediaInfoDidChange:(id)arg2 canPlay:(BOOL)arg3;
-(void)nowPlayingController:(id)arg1 didEnableUIMode:(long long)arg2 enabled:(BOOL)arg3;

@required
-(void)nowPlayingViewControllerMenuButtonPressedToDismiss:(id)arg1;

@end

