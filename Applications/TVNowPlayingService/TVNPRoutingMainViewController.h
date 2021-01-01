//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TVNPRoutingDestinationsCollectionViewControllerDelegate-Protocol.h"
#import "TVNPRoutingRoutesCollectionViewControllerDelegate-Protocol.h"

@class MPRouteLabel, NSObject, NSString, PBSAssertion, TVNPRoutingDestinationsCollectionViewController, TVNPRoutingRoutesCollectionViewController, UILabel;
@protocol TVNPRoutingController, TVNPRoutingMainViewControllerDelegate;

@interface TVNPRoutingMainViewController : UIViewController <TVNPRoutingDestinationsCollectionViewControllerDelegate, TVNPRoutingRoutesCollectionViewControllerDelegate>
{
    _Bool _editingVolume;	// 8 = 0x8
    id <TVNPRoutingMainViewControllerDelegate> _delegate;	// 16 = 0x10
    PBSAssertion *_playPauseAssertion;	// 24 = 0x18
    MPRouteLabel *_titleView;	// 32 = 0x20
    UILabel *_hintView;	// 40 = 0x28
    TVNPRoutingDestinationsCollectionViewController *_destinationsCollectionViewController;	// 48 = 0x30
    TVNPRoutingRoutesCollectionViewController *_routesCollectionViewController;	// 56 = 0x38
    NSObject<TVNPRoutingController> *_routingController;	// 64 = 0x40
}

+ (id)_destinationLayout;	// IMP=0x0000000100018a00
- (void).cxx_destruct;	// IMP=0x0000000100018fa4
@property(readonly, nonatomic) NSObject<TVNPRoutingController> *routingController; // @synthesize routingController=_routingController;
@property(readonly, nonatomic) TVNPRoutingRoutesCollectionViewController *routesCollectionViewController; // @synthesize routesCollectionViewController=_routesCollectionViewController;
@property(readonly, nonatomic) TVNPRoutingDestinationsCollectionViewController *destinationsCollectionViewController; // @synthesize destinationsCollectionViewController=_destinationsCollectionViewController;
@property(readonly, nonatomic) UILabel *hintView; // @synthesize hintView=_hintView;
@property(readonly, nonatomic) MPRouteLabel *titleView; // @synthesize titleView=_titleView;
@property(readonly, nonatomic) PBSAssertion *playPauseAssertion; // @synthesize playPauseAssertion=_playPauseAssertion;
@property(readonly, nonatomic) _Bool editingVolume; // @synthesize editingVolume=_editingVolume;
@property(nonatomic) __weak id <TVNPRoutingMainViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_routesLayout;	// IMP=0x0000000100018b00
- (void)_updateHintText;	// IMP=0x0000000100017ca8
- (void)_updateTitleView;	// IMP=0x0000000100017c00
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000100017b14
- (void)didPressPlayPause:(id)arg1;	// IMP=0x0000000100017aa0
- (void)didPressMenu:(id)arg1;	// IMP=0x0000000100017a2c
- (void)routingViewController:(id)arg1 shareAudioPresentationRequested:(id)arg2;	// IMP=0x0000000100017a14
- (void)routingViewControllerWillEndEditingVolume:(id)arg1;	// IMP=0x00000001000179c4
- (void)routingViewControllerWillBeginEditingVolume:(id)arg1;	// IMP=0x0000000100017970
- (void)viewControllerDidRequestDismissal:(id)arg1 cancelled:(_Bool)arg2;	// IMP=0x0000000100017918
- (id)preferredFocusEnvironments;	// IMP=0x00000001000178a0
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100017848
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000001000177f0
- (void)viewDidLoad;	// IMP=0x0000000100016bcc
- (void)dealloc;	// IMP=0x0000000100016a80
- (id)initWithRoutingController:(id)arg1 options:(id)arg2;	// IMP=0x00000001000164e0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

