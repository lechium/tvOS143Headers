//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBSiriDataSharingOptInOfferViewControllerDelegate-Protocol.h"
#import "PBSiriOptInOfferViewControllerDelegate-Protocol.h"

@class NSString, UINavigationController;

@interface PBSiriOptInViewController : UIViewController <PBSiriDataSharingOptInOfferViewControllerDelegate, PBSiriOptInOfferViewControllerDelegate>
{
    long long _mode;	// 8 = 0x8
    CDUnknownBlockType _dismissalCompletion;	// 16 = 0x10
    UINavigationController *_navigationController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000001000b9088
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(copy, nonatomic) CDUnknownBlockType dismissalCompletion; // @synthesize dismissalCompletion=_dismissalCompletion;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
- (_Bool)_shouldOfferSiri;	// IMP=0x00000001000b8f08
- (_Bool)_shouldOfferDataSharing;	// IMP=0x00000001000b8e88
- (_Bool)_shouldOnlyOfferDataSharing;	// IMP=0x00000001000b8e44
- (void)_updateSiriDataSharingOptInSettingsWithOptInStatus:(unsigned long long)arg1;	// IMP=0x00000001000b8ddc
- (void)_updateSiriOptInSettingsWithOptedIn:(_Bool)arg1;	// IMP=0x00000001000b8d08
- (void)_dismissViewControllerWithValue:(_Bool)arg1;	// IMP=0x00000001000b8b74
- (void)siriDataSharingOptInOfferViewController:(id)arg1 didCompleteOptIn:(_Bool)arg2;	// IMP=0x00000001000b8aa0
- (void)siriDataSharingOptInOfferViewControllerDidNotCompleteOptIn:(id)arg1;	// IMP=0x00000001000b89bc
- (void)siriOptInOfferViewController:(id)arg1 didCompleteOptIn:(_Bool)arg2;	// IMP=0x00000001000b8858
- (void)siriOptInOfferViewControllerDidNotCompleteOptIn:(id)arg1;	// IMP=0x00000001000b87ec
- (id)preferredFocusEnvironments;	// IMP=0x00000001000b87a4
- (void)viewDidLoad;	// IMP=0x00000001000b84bc
- (void)dealloc;	// IMP=0x00000001000b83f0
- (id)initWithMode:(long long)arg1;	// IMP=0x00000001000b8304

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

