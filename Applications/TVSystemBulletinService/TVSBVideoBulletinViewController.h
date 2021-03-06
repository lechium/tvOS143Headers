//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TVSBBulletinViewController.h"

#import "HMCameraStreamControlDelegate-Protocol.h"

@class NSDictionary, NSString, TVCSHomeManager, TVSBVideoBulletinCameraContentView;

@interface TVSBVideoBulletinViewController : TVSBBulletinViewController <HMCameraStreamControlDelegate>
{
    _Bool _homeFetched;	// 8 = 0x8
    CDUnknownBlockType _prepareCompletion;	// 16 = 0x10
    TVCSHomeManager *_homeManager;	// 24 = 0x18
    NSDictionary *_messageDictionary;	// 32 = 0x20
    TVSBVideoBulletinCameraContentView *_contentView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000010000965c
@property(nonatomic) _Bool homeFetched; // @synthesize homeFetched=_homeFetched;
@property(retain, nonatomic) TVSBVideoBulletinCameraContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSDictionary *messageDictionary; // @synthesize messageDictionary=_messageDictionary;
@property(retain, nonatomic) TVCSHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(copy, nonatomic) CDUnknownBlockType prepareCompletion; // @synthesize prepareCompletion=_prepareCompletion;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000010000947c
- (id)_videoBulletinView;	// IMP=0x0000000100009470
- (void)configureCameraViewForBulletinView:(id)arg1;	// IMP=0x0000000100008d08
- (id)_cameraProfileWithName:(id)arg1 home:(id)arg2 room:(id)arg3;	// IMP=0x0000000100008b48
- (void)_configureVideoBulletinView:(id)arg1 forBulletin:(id)arg2 forUpdate:(_Bool)arg3;	// IMP=0x0000000100007fbc
- (void)updateBulletinView:(id)arg1 forBulletin:(id)arg2;	// IMP=0x0000000100007f54
- (id)bulletinViewForBulletin:(id)arg1;	// IMP=0x0000000100007ea4
- (void)prepareWithBulletin:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007e34
- (void)bulletinServiceEndPresentationWithReason:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007ccc
- (void)bulletinServiceToggleSize;	// IMP=0x0000000100007be4
- (void)bulletinServiceEndUserInteraction;	// IMP=0x0000000100007b68
- (void)bulletinServiceBeginUserInteraction;	// IMP=0x0000000100007a60
- (void)dealloc;	// IMP=0x00000001000079f4
- (id)init;	// IMP=0x0000000100007940

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

