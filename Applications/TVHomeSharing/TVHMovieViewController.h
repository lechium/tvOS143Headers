//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVHMediaEntitiesFetchViewController.h"

#import "TVHContributorsShelfViewControllerDelegate-Protocol.h"
#import "TVHMediaEntitiesFetchViewControllerDelegate-Protocol.h"
#import "TVHMediaEntitiesShelfViewControllerDelegate-Protocol.h"
#import "TVHMoviesInfoCenterObserver-Protocol.h"
#import "TVHProductInfoViewDelegate-Protocol.h"

@class NSObject, NSString, TVHKMediaItem, TVHMoviesInfoCenter, TVHProductContentSectionItem, TVHProductViewController;
@protocol OS_dispatch_source;

@interface TVHMovieViewController : TVHMediaEntitiesFetchViewController <TVHContributorsShelfViewControllerDelegate, TVHMediaEntitiesFetchViewControllerDelegate, TVHMediaEntitiesShelfViewControllerDelegate, TVHMoviesInfoCenterObserver, TVHProductInfoViewDelegate>
{
    TVHMoviesInfoCenter *_moviesInfoCenter;	// 8 = 0x8
    TVHKMediaItem *_movie;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_rentalExpirationUpdateTimer;	// 24 = 0x18
    TVHProductViewController *_productViewController;	// 32 = 0x20
    TVHProductContentSectionItem *_genreMoviesContentSectionItem;	// 40 = 0x28
    TVHProductContentSectionItem *_contributorsContentSectionItem;	// 48 = 0x30
    TVHProductContentSectionItem *_seperatorContentSectionItem;	// 56 = 0x38
    TVHProductContentSectionItem *_footerContentSectionItem;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000010007212c
@property(retain, nonatomic) TVHProductContentSectionItem *footerContentSectionItem; // @synthesize footerContentSectionItem=_footerContentSectionItem;
@property(retain, nonatomic) TVHProductContentSectionItem *seperatorContentSectionItem; // @synthesize seperatorContentSectionItem=_seperatorContentSectionItem;
@property(retain, nonatomic) TVHProductContentSectionItem *contributorsContentSectionItem; // @synthesize contributorsContentSectionItem=_contributorsContentSectionItem;
@property(retain, nonatomic) TVHProductContentSectionItem *genreMoviesContentSectionItem; // @synthesize genreMoviesContentSectionItem=_genreMoviesContentSectionItem;
@property(retain, nonatomic) TVHProductViewController *productViewController; // @synthesize productViewController=_productViewController;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *rentalExpirationUpdateTimer; // @synthesize rentalExpirationUpdateTimer=_rentalExpirationUpdateTimer;
@property(retain, nonatomic) TVHKMediaItem *movie; // @synthesize movie=_movie;
@property(readonly, nonatomic) TVHMoviesInfoCenter *moviesInfoCenter; // @synthesize moviesInfoCenter=_moviesInfoCenter;
- (void)_updateUserInterfaceStyleOverrideWithBackgroundImageInfo:(id)arg1;	// IMP=0x0000000100071fe4
- (struct CGSize)_genreMovieImageSize;	// IMP=0x0000000100071f7c
- (void)_updateProductViewControllerContentSectionItems;	// IMP=0x0000000100071760
- (void)_updateProductViewControllerFooterView;	// IMP=0x00000001000711b8
- (struct CGSize)_movieImageSize;	// IMP=0x0000000100071144
- (void)_updateProductViewControllerBannerView;	// IMP=0x0000000100070b30
- (void)_updateWithFetchControllerResultSet:(id)arg1;	// IMP=0x0000000100070a0c
- (id)_footerViewController;	// IMP=0x00000001000709b8
- (id)_contributorsViewController;	// IMP=0x0000000100070964
- (id)_genreMoviesViewController;	// IMP=0x0000000100070910
- (_Bool)_isRental;	// IMP=0x0000000100070898
- (void)_playMovie:(id)arg1;	// IMP=0x00000001000707d4
- (void)_playButtonSelected;	// IMP=0x0000000100070788
- (void)_updatePlayButton;	// IMP=0x000000010007044c
- (id)_moviesFetchContext;	// IMP=0x0000000100070440
- (void)_stopRentalExpirationUpdateTimer;	// IMP=0x000000010007036c
- (void)_startRentalExpirationUpdateTimer;	// IMP=0x00000001000700e4
- (unsigned long long)_rentalExpirationUpdateTimerInterval;	// IMP=0x000000010006ffc0
- (void)productInfoViewDidSelectContentDescription:(id)arg1;	// IMP=0x000000010006feb4
- (void)mediaEntitiesShelfViewController:(id)arg1 didPlayMediaEntity:(id)arg2;	// IMP=0x000000010006fea4
- (void)mediaEntitiesShelfViewController:(id)arg1 didSelectMediaEntity:(id)arg2;	// IMP=0x000000010006fd78
- (void)mediaEntitiesShelfViewController:(id)arg1 configureLockup:(id)arg2 forMediaEntity:(id)arg3;	// IMP=0x000000010006fcc4
- (void)contributorsShelfViewController:(id)arg1 didSelectContributor:(id)arg2;	// IMP=0x000000010006fbcc
- (void)moviesInfoCenterDidChange:(id)arg1;	// IMP=0x000000010006fbc0
- (void)mediaEntitiesFetchViewController:(id)arg1 purgeSourceMediaEntityBackgroundImagesForContentViewController:(id)arg2;	// IMP=0x000000010006fb80
- (void)mediaEntitiesFetchViewController:(id)arg1 updateContentViewController:(id)arg2 withSourceMediaEntity:(id)arg3 sourceMediaEntityBackgroundImageInfo:(id)arg4;	// IMP=0x000000010006fb00
- (void)mediaEntitiesFetchViewController:(id)arg1 updateContentViewController:(id)arg2 withFetchControllerResultSet:(id)arg3;	// IMP=0x000000010006fac8
- (id)mediaEntitiesFetchViewController:(id)arg1 contentViewControllerWithFetchControllerResultSet:(id)arg2 sourceMediaEntity:(id)arg3 sourceMediaEntityBackgroundImageInfo:(id)arg4;	// IMP=0x000000010006f904
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010006f8a0
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010006f83c
- (id)preferredFocusEnvironments;	// IMP=0x000000010006f790
- (void)dealloc;	// IMP=0x000000010006f734
- (id)initWithMovie:(id)arg1 mediaLibrary:(id)arg2 moviesFetchContext:(id)arg3 moviesInfoCenter:(id)arg4;	// IMP=0x000000010006f408
- (id)initWithMediaLibrary:(id)arg1 fetchRequests:(id)arg2 mode:(unsigned long long)arg3 sourceMediaEntity:(id)arg4 sourceMediaEntitiesFetchContext:(id)arg5;	// IMP=0x000000010006f380

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

