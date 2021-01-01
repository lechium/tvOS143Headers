//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MPAssetKeyDelegate-Protocol.h"
#import "PBSViewServicePresenter-Protocol.h"

@class NSArray, NSDictionary, NSMutableSet, NSString, TVPhotoCollection, TVPhotoSource, TVSSMarimbaView, TVSSSlideshowUtilities, UIActivityIndicatorView;

@interface TVSSMarimbaViewController : UIViewController <MPAssetKeyDelegate, PBSViewServicePresenter>
{
    NSDictionary *_assetKeysToAssetPaths;	// 8 = 0x8
    TVPhotoSource *_currentPhotoSource;	// 16 = 0x10
    TVPhotoCollection *_selectedPhotoCollection;	// 24 = 0x18
    TVSSMarimbaView *_marimbaView;	// 32 = 0x20
    UIActivityIndicatorView *_spinnerView;	// 40 = 0x28
    TVSSSlideshowUtilities *_screensaverUtilities;	// 48 = 0x30
    id _preferenceObserverToken;	// 56 = 0x38
    NSMutableSet *_activeImageProxies;	// 64 = 0x40
    NSArray *_cachedPhotoAssets;	// 72 = 0x48
    _Bool _didWarmUpAndStartMarimbaRenderer;	// 80 = 0x50
    _Bool _playbackHasBeenPausedWhileScreenSaverIsUp;	// 81 = 0x51
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0000000100004b4c
+ (id)_exportedInterface;	// IMP=0x0000000100004a4c
+ (void)initialize;	// IMP=0x00000001000039c8
- (void).cxx_destruct;	// IMP=0x0000000100006100
- (id)_photoSourceWithIdentifier:(id)arg1;	// IMP=0x0000000100005f38
- (id)_preferences;	// IMP=0x0000000100005f24
- (id)_photoAssetsFromImageCache;	// IMP=0x0000000100005e44
- (id)_photoAssetFromFilePath:(id)arg1;	// IMP=0x0000000100005d98
- (void)_fileAddedToImageCacheNotification:(id)arg1;	// IMP=0x0000000100005a0c
- (_Bool)_didScreenSaverPhotoCollectionChange;	// IMP=0x0000000100005960
- (void)_endObservingThemeChanges;	// IMP=0x00000001000058e4
- (void)_beginObservingThemeChanges;	// IMP=0x0000000100005530
- (void)_startScreenSaverWithPhotoAssets:(id)arg1;	// IMP=0x0000000100005414
- (void)_stopMarimbaRenderer;	// IMP=0x0000000100005384
- (void)_fetchAssetsAndBeginScreensaverPreview;	// IMP=0x0000000100004f08
- (void)_displayAssetsLoadingView;	// IMP=0x0000000100004dd8
- (void)_startScreenSaverPreview;	// IMP=0x0000000100004d9c
- (void)_mediaPlaybackStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000100004b68
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100004a00
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x00000001000049e0
- (void)_mediaRemotePlaybackApplicationStateDidChange:(id)arg1;	// IMP=0x00000001000048bc
- (void)_usedAllPathsNotification:(id)arg1;	// IMP=0x000000010000485c
- (void)_selectAction:(id)arg1;	// IMP=0x00000001000047f0
- (void)_sendMediaRemoteCommand:(unsigned int)arg1 dismissOnFailure:(_Bool)arg2;	// IMP=0x000000010000471c
- (void)_downAction:(id)arg1;	// IMP=0x00000001000046b0
- (void)_upAction:(id)arg1;	// IMP=0x0000000100004644
- (void)_rightAction:(id)arg1;	// IMP=0x00000001000045f0
- (void)_leftAction:(id)arg1;	// IMP=0x000000010000459c
- (void)_playPauseAction:(id)arg1;	// IMP=0x000000010000448c
- (id)absolutePathForStillAssetAtPath:(id)arg1 andSize:(struct CGSize)arg2;	// IMP=0x0000000100004484
- (id)absolutePathForAssetKey:(id)arg1 andSize:(struct CGSize)arg2;	// IMP=0x0000000100004478
- (id)absolutePathForAssetKey:(id)arg1;	// IMP=0x00000001000043f8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100004398
- (void)viewDidLoad;	// IMP=0x0000000100003e4c
- (void)loadView;	// IMP=0x0000000100003dac
- (void)dealloc;	// IMP=0x0000000100003ce0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100003a18

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

