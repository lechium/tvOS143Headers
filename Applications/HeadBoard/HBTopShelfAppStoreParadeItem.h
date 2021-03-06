//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HBTopShelfParadeItem.h"

#import "PBSAppInfoControllerObserver-Protocol.h"

@class HBTopShelfInstallApplicationAction, HBTopShelfInstallingApplicationAction, NSString, PBSAppInfoController;

@interface HBTopShelfAppStoreParadeItem : HBTopShelfParadeItem <PBSAppInfoControllerObserver>
{
    _Bool _observingApplicationInstalls;	// 8 = 0x8
    HBTopShelfInstallApplicationAction *_installApplicationAction;	// 16 = 0x10
    HBTopShelfInstallingApplicationAction *_installingApplicationAction;	// 24 = 0x18
    PBSAppInfoController *_appInfoController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000010002b9a4
@property(nonatomic, getter=isObservingApplicationInstalls) _Bool observingApplicationInstalls; // @synthesize observingApplicationInstalls=_observingApplicationInstalls;
@property(retain, nonatomic) PBSAppInfoController *appInfoController; // @synthesize appInfoController=_appInfoController;
@property(retain, nonatomic) HBTopShelfInstallingApplicationAction *installingApplicationAction; // @synthesize installingApplicationAction=_installingApplicationAction;
@property(retain, nonatomic) HBTopShelfInstallApplicationAction *installApplicationAction; // @synthesize installApplicationAction=_installApplicationAction;
- (id)_lazyInstallingApplicationAction;	// IMP=0x000000010002b868
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000010002b74c
- (void)appInfoController:(id)arg1 didUpdate:(id)arg2;	// IMP=0x000000010002b254
- (void)_updatePrimaryAction;	// IMP=0x000000010002ab90
- (void)_didPerformAction:(id)arg1 withSuccess:(_Bool)arg2;	// IMP=0x000000010002aad4
- (void)_willPerformAction:(id)arg1;	// IMP=0x000000010002a9fc
- (void)stopObservingApplicationInstalls;	// IMP=0x000000010002a8c0
- (void)startObservingApplicationInstalls;	// IMP=0x000000010002a784
- (void)dealloc;	// IMP=0x000000010002a714
- (id)initWithTopShelfAppStoreCarouselItem:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x000000010002a57c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

