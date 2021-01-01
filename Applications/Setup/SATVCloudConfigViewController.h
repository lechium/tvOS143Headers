//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

#import "SATVConsentViewControllerDataSource-Protocol.h"
#import "SATVConsentViewControllerDelegate-Protocol.h"

@class NSString;

@interface SATVCloudConfigViewController : TVSKViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000100012310
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_obliterate;	// IMP=0x0000000100012234
- (void)_leaveRemoteManagementAndErase;	// IMP=0x0000000100011df8
- (void)_showEraseDeviceAlert;	// IMP=0x0000000100011b9c
- (void)showLeaveRemoteManagementAlert;	// IMP=0x0000000100011940
- (void)_presentEraseAlertWithTitle:(id)arg1 message:(id)arg2 eraseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000001000116d4
- (void)_applyConfiguration:(_Bool)arg1;	// IMP=0x0000000100011610
- (id)_aboutText;	// IMP=0x000000010001103c
- (_Bool)consentViewControllerCanSelectDissent:(id)arg1;	// IMP=0x0000000100010fe8
- (void)consentViewControllerDidSelectAuxiliary:(id)arg1;	// IMP=0x0000000100010fdc
- (void)consentViewControllerDidSelectFooter:(id)arg1;	// IMP=0x0000000100010eb8
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x0000000100010e34
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x0000000100010db0
- (id)auxiliaryButtonTextForConsentViewController:(id)arg1;	// IMP=0x0000000100010cdc
- (id)footnoteTextForConsentViewController:(id)arg1;	// IMP=0x0000000100010b90
- (id)footerButtonTextForConsentViewController:(id)arg1;	// IMP=0x0000000100010b10
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x00000001000109ec
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x00000001000108c4
- (id)subtitleTextForConsentViewController:(id)arg1;	// IMP=0x000000010001070c
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x000000010001068c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000100010618
- (void)viewDidLoad;	// IMP=0x0000000100010510
- (void)autoAdvance;	// IMP=0x0000000100010500

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
