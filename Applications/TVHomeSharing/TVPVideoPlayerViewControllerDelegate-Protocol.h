//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, TVPVideoPlayerViewController;
@protocol TVPMediaItem;

@protocol TVPVideoPlayerViewControllerDelegate <NSObject>

@optional
- (void)userDidFinishInteractionAfterErrorWasPresented:(TVPVideoPlayerViewController *)arg1;
- (_Bool)videoPlayerViewController:(TVPVideoPlayerViewController *)arg1 shouldAllowVideoPlaybackWithoutVisualsForMediaItem:(NSObject<TVPMediaItem> *)arg2;
- (void)videoPlayerViewController:(TVPVideoPlayerViewController *)arg1 loadRelatedContentForMediaItem:(NSObject<TVPMediaItem> *)arg2 withCompletionHandler:(void (^)(TVPRelatedContent *))arg3;
@end

