//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHRootViewController.h"

#import "TVHPlaybackManagerDelegate-Protocol.h"

@class NSString, TVHPlaybackManager;

@interface TVHDefaultRootViewController : TVHRootViewController <TVHPlaybackManagerDelegate>
{
    TVHPlaybackManager *_playbackManager;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000adc94
@property(retain, nonatomic) TVHPlaybackManager *playbackManager; // @synthesize playbackManager=_playbackManager;
- (void)_addViewControllerToNavigationController:(id)arg1 animate:(_Bool)arg2 removePlaybackViewControllers:(_Bool)arg3 otherViewControllersToRemove:(id)arg4;	// IMP=0x00000001000adb58
- (id)_navigationControllerViewControllersWithNoPlaybackViewControllers;	// IMP=0x00000001000adaa8
- (void)playbackManager:(id)arg1 playbackOfMediaItem:(id)arg2 didFailWithError:(id)arg3;	// IMP=0x00000001000ad854
- (void)playbackManager:(id)arg1 showMediaEntityCollectionForMediaItem:(id)arg2 mediaEntityCollectionType:(unsigned long long)arg3;	// IMP=0x00000001000ad6b0
- (void)playbackManager:(id)arg1 sendKeepAlivesForMediaServerIdentifiers:(id)arg2;	// IMP=0x00000001000ad424
- (void)playbackManager:(id)arg1 removePlaybackViewControllerAnimated:(_Bool)arg2;	// IMP=0x00000001000ad3a8
- (void)playbackManager:(id)arg1 showPlaybackViewController:(id)arg2 options:(unsigned long long)arg3 viewControllersToRemove:(id)arg4;	// IMP=0x00000001000ad2c0
- (void)_mediaLibrary:(id)arg1 connectionStateDidChange:(unsigned long long)arg2;	// IMP=0x00000001000ad158
- (id)_browseViewControllersWithMediaLibrary:(id)arg1 openURL:(id)arg2;	// IMP=0x00000001000ad064
- (id)initWithMediaLibrariesEnviroment:(id)arg1;	// IMP=0x00000001000acf9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

