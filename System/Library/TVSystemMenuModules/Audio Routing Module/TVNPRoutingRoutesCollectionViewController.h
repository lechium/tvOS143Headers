//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import "TVNPRouteCollectionViewCellDelegate-Protocol.h"
#import "TVNPRoutingRoutesCollectionViewLayoutDelegate-Protocol.h"
#import "TVNPShareAudioMainViewControllerDelegate-Protocol.h"

@class NSDictionary, NSDiffableDataSourceSnapshot, NSMutableDictionary, NSMutableSet, NSObject, NSString, TVNPRoute, UICollectionViewDiffableDataSource, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol TVNPRoutingController, TVNPRoutingRoutesCollectionViewControllerDelegate;

@interface TVNPRoutingRoutesCollectionViewController : UICollectionViewController <TVNPRoutingRoutesCollectionViewLayoutDelegate, TVNPShareAudioMainViewControllerDelegate, TVNPRouteCollectionViewCellDelegate>
{
    _Bool _shareAudioFocused;	// 8 = 0x8
    _Bool _observingChanges;	// 9 = 0x9
    NSObject<TVNPRoutingController> *_routingController;	// 16 = 0x10
    TVNPRoute *_focusedRoute;	// 24 = 0x18
    NSDiffableDataSourceSnapshot *_currentSnapshot;	// 32 = 0x20
    id <TVNPRoutingRoutesCollectionViewControllerDelegate> _delegate;	// 40 = 0x28
    TVNPRoute *_routeForVolume;	// 48 = 0x30
    NSMutableSet *_expandedGroupUIDs;	// 56 = 0x38
    NSDictionary *_routesByUID;	// 64 = 0x40
    NSMutableDictionary *_volumeHUDAssertionsByUID;	// 72 = 0x48
    UICollectionViewDiffableDataSource *_routesDataSource;	// 80 = 0x50
    UILongPressGestureRecognizer *_longPressRecognizer;	// 88 = 0x58
    UITapGestureRecognizer *_menuRecognizer;	// 96 = 0x60
    UITapGestureRecognizer *_selectRecognizer;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000021b28
@property(retain, nonatomic) UITapGestureRecognizer *selectRecognizer; // @synthesize selectRecognizer=_selectRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *routesDataSource; // @synthesize routesDataSource=_routesDataSource;
@property(retain, nonatomic) NSMutableDictionary *volumeHUDAssertionsByUID; // @synthesize volumeHUDAssertionsByUID=_volumeHUDAssertionsByUID;
@property(retain, nonatomic) NSDictionary *routesByUID; // @synthesize routesByUID=_routesByUID;
@property(retain, nonatomic) NSMutableSet *expandedGroupUIDs; // @synthesize expandedGroupUIDs=_expandedGroupUIDs;
@property(retain, nonatomic) TVNPRoute *routeForVolume; // @synthesize routeForVolume=_routeForVolume;
@property(nonatomic) _Bool observingChanges; // @synthesize observingChanges=_observingChanges;
@property(nonatomic) __weak id <TVNPRoutingRoutesCollectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDiffableDataSourceSnapshot *currentSnapshot; // @synthesize currentSnapshot=_currentSnapshot;
@property(nonatomic, getter=isShareAudioFocused) _Bool shareAudioFocused; // @synthesize shareAudioFocused=_shareAudioFocused;
@property(retain, nonatomic) TVNPRoute *focusedRoute; // @synthesize focusedRoute=_focusedRoute;
@property(readonly, nonatomic) NSObject<TVNPRoutingController> *routingController; // @synthesize routingController=_routingController;
- (void)_pickRoute:(id)arg1;	// IMP=0x0000000000021718
- (void)_relinquishVolumeHUDAssertionForRouteWithUID:(id)arg1;	// IMP=0x0000000000021684
- (void)_acquireVolumeHUDAssertionForRouteWithUID:(id)arg1;	// IMP=0x0000000000021554
- (void)_calculateVisibleVolumeCells;	// IMP=0x0000000000021224
- (void)_cleanupRouteForVolumeIfNeeded;	// IMP=0x0000000000021114
- (id)_gradientMask;	// IMP=0x0000000000020ce4
- (void)routeCellDidSelectAccessoryView:(id)arg1;	// IMP=0x0000000000020c20
- (void)routeCellDidSelectRouteView:(id)arg1;	// IMP=0x00000000000205f8
- (void)viewControllerDidRequestDismissal:(id)arg1 cancelled:(_Bool)arg2;	// IMP=0x00000000000205e0
- (void)shareAudioSelected;	// IMP=0x000000000002054c
- (void)handleEndVolumeControl:(id)arg1;	// IMP=0x000000000002030c
- (void)longPressSelect:(id)arg1;	// IMP=0x0000000000020250
- (id)indexPathForVolumeSliderInCollectionView:(id)arg1 layout:(id)arg2;	// IMP=0x0000000000020174
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000002005c
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000001ff44
- (_Bool)collectionView:(id)arg1 shouldUpdateFocusInContext:(id)arg2;	// IMP=0x000000000001ff08
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000000001fca4
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000001fb64
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000001fa78
- (void)handleVolumeDown;	// IMP=0x000000000001f720
- (void)handleVolumeUp;	// IMP=0x000000000001f3c8
- (void)updateCollectionViewWithRoutes:(id)arg1;	// IMP=0x000000000001e888
- (void)viewDidLayoutSubviews;	// IMP=0x000000000001e648
- (void)viewDidLoad;	// IMP=0x000000000001dc34
- (void)dealloc;	// IMP=0x000000000001dbe4
- (id)initWithCollectionViewLayout:(id)arg1 routingController:(id)arg2;	// IMP=0x000000000001daf0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

