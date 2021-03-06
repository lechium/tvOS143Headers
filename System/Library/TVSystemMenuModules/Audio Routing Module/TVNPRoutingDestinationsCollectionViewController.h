//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import "PBSBulletinServiceDelegate-Protocol.h"

@class NSDictionary, NSObject, NSString, PBSAssertion, PBSBulletin, TVNPRoutingDestination, UICollectionViewDiffableDataSource;
@protocol OS_dispatch_queue, TVNPRoutingController, TVNPRoutingDestinationsCollectionViewControllerDelegate;

@interface TVNPRoutingDestinationsCollectionViewController : UICollectionViewController <PBSBulletinServiceDelegate>
{
    _Bool _volumeEditingInProgress;	// 8 = 0x8
    _Bool _shouldFocusInitialIndex;	// 9 = 0x9
    _Bool _observingChanges;	// 10 = 0xa
    _Bool _initiatedByPicker;	// 11 = 0xb
    NSObject<TVNPRoutingController> *_routingController;	// 16 = 0x10
    id <TVNPRoutingDestinationsCollectionViewControllerDelegate> _viewControllerDelegate;	// 24 = 0x18
    PBSAssertion *_volumeAssertion;	// 32 = 0x20
    unsigned long long _initialFocusIndex;	// 40 = 0x28
    TVNPRoutingDestination *_destinationForVolume;	// 48 = 0x30
    PBSBulletin *_volumeBulletin;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_volumeUpdateQueue;	// 64 = 0x40
    TVNPRoutingDestination *_connectingRoutingDestination;	// 72 = 0x48
    CDUnknownBlockType _initialUIDProvider;	// 80 = 0x50
    UICollectionViewDiffableDataSource *_destinationsDataSource;	// 88 = 0x58
    NSDictionary *_destinationsByIdentifier;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000010720
@property(retain, nonatomic) NSDictionary *destinationsByIdentifier; // @synthesize destinationsByIdentifier=_destinationsByIdentifier;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *destinationsDataSource; // @synthesize destinationsDataSource=_destinationsDataSource;
@property(copy, nonatomic) CDUnknownBlockType initialUIDProvider; // @synthesize initialUIDProvider=_initialUIDProvider;
@property(retain, nonatomic) TVNPRoutingDestination *connectingRoutingDestination; // @synthesize connectingRoutingDestination=_connectingRoutingDestination;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *volumeUpdateQueue; // @synthesize volumeUpdateQueue=_volumeUpdateQueue;
@property(retain, nonatomic) PBSBulletin *volumeBulletin; // @synthesize volumeBulletin=_volumeBulletin;
@property(retain, nonatomic) TVNPRoutingDestination *destinationForVolume; // @synthesize destinationForVolume=_destinationForVolume;
@property(readonly, nonatomic) _Bool initiatedByPicker; // @synthesize initiatedByPicker=_initiatedByPicker;
@property(nonatomic) _Bool observingChanges; // @synthesize observingChanges=_observingChanges;
@property(readonly, nonatomic) unsigned long long initialFocusIndex; // @synthesize initialFocusIndex=_initialFocusIndex;
@property(readonly, nonatomic) _Bool shouldFocusInitialIndex; // @synthesize shouldFocusInitialIndex=_shouldFocusInitialIndex;
@property(readonly, nonatomic) PBSAssertion *volumeAssertion; // @synthesize volumeAssertion=_volumeAssertion;
@property(nonatomic) _Bool volumeEditingInProgress; // @synthesize volumeEditingInProgress=_volumeEditingInProgress;
@property(nonatomic) __weak id <TVNPRoutingDestinationsCollectionViewControllerDelegate> viewControllerDelegate; // @synthesize viewControllerDelegate=_viewControllerDelegate;
@property(readonly, nonatomic) NSObject<TVNPRoutingController> *routingController; // @synthesize routingController=_routingController;
- (id)_indexPathForCurrentDestination;	// IMP=0x00000000000104c0
- (void)_presentVolumeBulletinForDestination:(id)arg1;	// IMP=0x000000000000fe14
- (void)bulletinService:(id)arg1 didDismissBulletin:(id)arg2 withReason:(unsigned long long)arg3;	// IMP=0x000000000000fd5c
- (id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1;	// IMP=0x000000000000fd50
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x000000000000f7b0
- (struct CGPoint)collectionView:(id)arg1 targetContentOffsetForProposedContentOffset:(struct CGPoint)arg2;	// IMP=0x000000000000f71c
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000000000f42c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000000f13c
- (_Bool)_ignoreVolumeChangesWhilePendingSelection;	// IMP=0x000000000000efd4
- (void)_showConnectionFailedAlertControllerForRoutingDestination:(id)arg1;	// IMP=0x000000000000ed74
- (void)updateCollectionViewWithDestinations:(id)arg1;	// IMP=0x000000000000ea60
- (void)viewDidLayoutSubviews;	// IMP=0x000000000000e518
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000000e484
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000000e10c
- (void)viewDidLoad;	// IMP=0x000000000000dd18
- (void)dealloc;	// IMP=0x000000000000dc60
- (id)initWithCollectionViewLayout:(id)arg1 routingController:(id)arg2 options:(id)arg3 initialUIDProvider:(CDUnknownBlockType)arg4;	// IMP=0x000000000000da78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

