//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBSViewServicePresenter-Protocol.h"

@class NSString, TVAirPlayAPRKVideoSession, TVAirPlayAPRKViewController, TVAirPlayInfoSession, TVAirPlayPINViewController, TVAirPlayPresentationSession, TVAirPlayPresentationViewController, TVAirPlayURLSession, UIAlertController, UISceneSession, _TVAirPlayVideoPlayerViewController;
@protocol TVAirPlayMediaViewControllerDelegate, TVAirPlayPinSession;

@interface TVAirPlayMediaViewController : UIViewController <PBSViewServicePresenter>
{
    _Bool _dismissing;	// 8 = 0x8
    UISceneSession *_sceneSession;	// 16 = 0x10
    id <TVAirPlayPinSession> _pinSession;	// 24 = 0x18
    TVAirPlayInfoSession *_dialogInfoSession;	// 32 = 0x20
    TVAirPlayPresentationSession *_presentationSession;	// 40 = 0x28
    TVAirPlayURLSession *_videoPlaybackSession;	// 48 = 0x30
    TVAirPlayAPRKVideoSession *_APRKVideoSession;	// 56 = 0x38
    id <TVAirPlayMediaViewControllerDelegate> _delegate;	// 64 = 0x40
    TVAirPlayPINViewController *_pinViewController;	// 72 = 0x48
    UIAlertController *_dialogViewController;	// 80 = 0x50
    _TVAirPlayVideoPlayerViewController *_videoPlayerViewController;	// 88 = 0x58
    TVAirPlayPresentationViewController *_presentationViewController;	// 96 = 0x60
    TVAirPlayAPRKViewController *_aprkViewController;	// 104 = 0x68
}

+ (id)_remoteViewControllerInterface;	// IMP=0x000000010001c7f8
+ (id)_exportedInterface;	// IMP=0x000000010001c6f8
- (void).cxx_destruct;	// IMP=0x000000010001cef0
@property(retain, nonatomic) TVAirPlayAPRKViewController *aprkViewController; // @synthesize aprkViewController=_aprkViewController;
@property(retain, nonatomic) TVAirPlayPresentationViewController *presentationViewController; // @synthesize presentationViewController=_presentationViewController;
@property(retain, nonatomic) _TVAirPlayVideoPlayerViewController *videoPlayerViewController; // @synthesize videoPlayerViewController=_videoPlayerViewController;
@property(retain, nonatomic) UIAlertController *dialogViewController; // @synthesize dialogViewController=_dialogViewController;
@property(retain, nonatomic) TVAirPlayPINViewController *pinViewController; // @synthesize pinViewController=_pinViewController;
@property(nonatomic) _Bool dismissing; // @synthesize dismissing=_dismissing;
@property(nonatomic) __weak id <TVAirPlayMediaViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TVAirPlayAPRKVideoSession *APRKVideoSession; // @synthesize APRKVideoSession=_APRKVideoSession;
@property(retain, nonatomic) TVAirPlayURLSession *videoPlaybackSession; // @synthesize videoPlaybackSession=_videoPlaybackSession;
@property(retain, nonatomic) TVAirPlayPresentationSession *presentationSession; // @synthesize presentationSession=_presentationSession;
@property(retain, nonatomic) TVAirPlayInfoSession *dialogInfoSession; // @synthesize dialogInfoSession=_dialogInfoSession;
@property(retain, nonatomic) id <TVAirPlayPinSession> pinSession; // @synthesize pinSession=_pinSession;
@property(retain, nonatomic) UISceneSession *sceneSession; // @synthesize sceneSession=_sceneSession;
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2;	// IMP=0x000000010001c814
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010001c478
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x000000010001c380
- (void)dismiss;	// IMP=0x000000010001c190
- (id)preferredFocusEnvironments;	// IMP=0x000000010001b7cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

