//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

#import "SATVConsentViewControllerDataSource-Protocol.h"
#import "SATVConsentViewControllerDelegate-Protocol.h"

@class NSString, OBPrivacyLinkController;

@interface SATVDiagnosticsViewController : TVSKViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    OBPrivacyLinkController *_privacyLink;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000001000350f0
@property(retain, nonatomic) OBPrivacyLinkController *privacyLink; // @synthesize privacyLink=_privacyLink;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_enableDiagnostics:(_Bool)arg1;	// IMP=0x000000010003502c
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x0000000100034fa8
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x0000000100034f24
- (id)footerButtonViewForConsentViewController:(id)arg1;	// IMP=0x0000000100034f0c
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x0000000100034e8c
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x0000000100034e0c
- (id)subtitleTextForConsentViewController:(id)arg1;	// IMP=0x0000000100034d8c
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x0000000100034d0c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100034cb8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100034c60
- (void)viewDidLoad;	// IMP=0x0000000100034b58
- (id)init;	// IMP=0x0000000100034ad0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

