//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

#import "SATVConsentViewControllerDataSource-Protocol.h"
#import "SATVConsentViewControllerDelegate-Protocol.h"

@class NSString, OBPrivacyLinkController;

@interface SATVSiriDiagnosticsViewController : TVSKViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    OBPrivacyLinkController *_privacyLink;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000010001e714
@property(retain, nonatomic) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_enableSiriDiagnostics:(_Bool)arg1;	// IMP=0x000000010001e650
- (void)consentViewControllerDidSelectFooter:(id)arg1;	// IMP=0x000000010001e598
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x000000010001e588
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x000000010001e578
- (id)footerButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010001e4f8
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010001e478
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010001e3f8
- (id)subtitleTextForConsentViewController:(id)arg1;	// IMP=0x000000010001e378
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x000000010001e2f8
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000010001e290
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000010001e238
- (void)viewDidLoad;	// IMP=0x000000010001e108
- (id)init;	// IMP=0x000000010001e080

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

