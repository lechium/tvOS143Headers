//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TVHOneUpViewDataSource-Protocol.h"
#import "TVHOneUpViewDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, TVHKMediaLibrary, TVHOneUpView;

@interface TVHPhotosOneUpViewController : UIViewController <TVHOneUpViewDataSource, TVHOneUpViewDelegate>
{
    _Bool _oneUpViewRequiresReload;	// 8 = 0x8
    TVHKMediaLibrary *_mediaLibrary;	// 16 = 0x10
    NSArray *_mediaItems;	// 24 = 0x18
    long long _focusedMediaItemIndex;	// 32 = 0x20
    NSMutableDictionary *_imageProxyByImageIdentifier;	// 40 = 0x28
    TVHOneUpView *_oneUpView;	// 48 = 0x30
    long long _lastCreatedImageViewIndex;	// 56 = 0x38
}

+ (id)new;	// IMP=0x000000010009581c
- (void).cxx_destruct;	// IMP=0x00000001000975fc
@property(nonatomic) long long lastCreatedImageViewIndex; // @synthesize lastCreatedImageViewIndex=_lastCreatedImageViewIndex;
@property(nonatomic) _Bool oneUpViewRequiresReload; // @synthesize oneUpViewRequiresReload=_oneUpViewRequiresReload;
@property(retain, nonatomic) TVHOneUpView *oneUpView; // @synthesize oneUpView=_oneUpView;
@property(retain, nonatomic) NSMutableDictionary *imageProxyByImageIdentifier; // @synthesize imageProxyByImageIdentifier=_imageProxyByImageIdentifier;
@property(nonatomic) long long focusedMediaItemIndex; // @synthesize focusedMediaItemIndex=_focusedMediaItemIndex;
@property(copy, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property(readonly, nonatomic) TVHKMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
- (void)_updateWithMediaItems:(id)arg1 startIndex:(long long)arg2 changeSet:(id)arg3;	// IMP=0x000000010009731c
- (void)_configureOneUpViewWithNewIndexByOldIndexMap:(id)arg1;	// IMP=0x00000001000970c8
- (void)_configureImageView:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000100096fe4
- (_Bool)_isReloadOneUpViewRequiredForChangeSet:(id)arg1;	// IMP=0x0000000100096f1c
- (id)_mediaItemAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100096e90
- (unsigned long long)_totalNumberOfMediaEntites;	// IMP=0x0000000100096e44
- (void)_preloadImageProxiesAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100096c74
- (id)_imageProxyForIndex:(unsigned long long)arg1 forCaching:(_Bool)arg2;	// IMP=0x0000000100096828
- (void)_updateCachedImageProxiesWithMediaItems:(id)arg1 changeSet:(id)arg2;	// IMP=0x0000000100096358
- (void)_cancelImageProxyLoadForImageIdentifier:(id)arg1;	// IMP=0x00000001000962b8
- (void)_cancelImageProxyLoadAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100096238
- (void)_startLoadingImageProxyAtIndex:(unsigned long long)arg1;	// IMP=0x0000000100096134
- (void)oneUpView:(id)arg1 didPlayItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100095f6c
- (void)oneUpView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100095e5c
- (void)oneUpView:(id)arg1 didFocusItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100095e1c
- (long long)oneUpView:(id)arg1 contentModeForItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100095e14
- (id)oneUpView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000100095d90
- (long long)numberOfItemsInOneupView:(id)arg1;	// IMP=0x0000000100095d84
- (void)loadView;	// IMP=0x0000000100095bb4
- (void)updateWithMediaItems:(id)arg1 andChangeSet:(id)arg2;	// IMP=0x0000000100095b60
- (id)initWithMediaItems:(id)arg1 mediaLibrary:(id)arg2 startIndex:(long long)arg3;	// IMP=0x0000000100095a50
- (id)initWithMediaItems:(id)arg1 mediaLibrary:(id)arg2;	// IMP=0x00000001000959f0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100095968
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000958e0
- (id)init;	// IMP=0x0000000100095858

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

