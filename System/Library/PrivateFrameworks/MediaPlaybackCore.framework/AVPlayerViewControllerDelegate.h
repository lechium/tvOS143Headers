/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVPlayerViewControllerDelegate <NSObject>
@optional
-(BOOL)playerViewControllerShouldDismiss:(id)arg1;
-(void)playerViewControllerWillStartPictureInPicture:(id)arg1;
-(void)playerViewControllerDidStartPictureInPicture:(id)arg1;
-(BOOL)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)arg1;
-(void)playerViewController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;
-(void)playerViewControllerWillStopPictureInPicture:(id)arg1;
-(void)playerViewControllerDidStopPictureInPicture:(id)arg1;
-(void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(/*^block*/id)arg2;
-(void)playerViewController:(id)arg1 willTransitionToVisibilityOfTransportBar:(BOOL)arg2 withAnimationCoordinator:(id)arg3;
-(BOOL)playerViewController:(id)arg1 shouldPresentContentProposal:(id)arg2;
-(void)playerViewController:(id)arg1 didRejectContentProposal:(id)arg2;
-(void)playerViewController:(id)arg1 didAcceptContentProposal:(id)arg2;
-(id)previousChannelInterstitialViewControllerForPlayerViewController:(id)arg1;
-(id)nextChannelInterstitialViewControllerForPlayerViewController:(id)arg1;
-(void)playerViewController:(id)arg1 skipToNextChannel:(/*^block*/id)arg2;
-(void)playerViewController:(id)arg1 skipToPreviousChannel:(/*^block*/id)arg2;
-(void)skipToPreviousItemForPlayerViewController:(id)arg1;
-(void)skipToNextItemForPlayerViewController:(id)arg1;
-(void)playerViewController:(id)arg1 didSelectExternalSubtitleOptionLanguage:(id)arg2;
-(void)playerViewController:(id)arg1 didSelectMediaSelectionOption:(id)arg2 inMediaSelectionGroup:(id)arg3;
-(SCD_Struct_MP14*)playerViewController:(id)arg1 timeToSeekAfterUserNavigatedFromTime:(SCD_Struct_MP14)arg2 toTime:(SCD_Struct_MP14)arg3;
-(void)playerViewController:(id)arg1 willResumePlaybackAfterUserNavigatedFromTime:(SCD_Struct_MP14)arg2 toTime:(SCD_Struct_MP14)arg3;
-(void)playerViewController:(id)arg1 didPresentInterstitialTimeRange:(id)arg2;
-(void)playerViewController:(id)arg1 willPresentInterstitialTimeRange:(id)arg2;
-(void)playerViewControllerDidEndDismissalTransition:(id)arg1;
-(void)playerViewControllerWillBeginDismissalTransition:(id)arg1;

@end

