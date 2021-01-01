//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVSetupKit/TVSKViewController.h>

#import "SATVConsentViewControllerDataSource-Protocol.h"
#import "SATVConsentViewControllerDelegate-Protocol.h"

@class NSString, OBPrivacyFlow;

@interface SATVPrivacyViewController : TVSKViewController <SATVConsentViewControllerDelegate, SATVConsentViewControllerDataSource>
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    OBPrivacyFlow *_privacyFlow;	// 16 = 0x10
}

+ (id)new;	// IMP=0x0000000100037be4
- (void).cxx_destruct;	// IMP=0x0000000100038218
@property(readonly, nonatomic) OBPrivacyFlow *privacyFlow; // @synthesize privacyFlow=_privacyFlow;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)_acknowledge;	// IMP=0x0000000100038170
- (void)consentViewControllerDidSelectFooter:(id)arg1;	// IMP=0x00000001000380ec
- (void)consentViewControllerDidSelectDissent:(id)arg1;	// IMP=0x00000001000380e8
- (void)consentViewControllerDidSelectConsent:(id)arg1;	// IMP=0x00000001000380dc
- (id)footerButtonTextForConsentViewController:(id)arg1;	// IMP=0x000000010003805c
- (id)dissentButtonTextForConsentViewController:(id)arg1;	// IMP=0x0000000100038054
- (id)consentButtonTextForConsentViewController:(id)arg1;	// IMP=0x0000000100037fd4
- (id)subtitleTextForConsentViewController:(id)arg1;	// IMP=0x0000000100037f54
- (id)titleTextForConsentViewController:(id)arg1;	// IMP=0x0000000100037f3c
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000100037ee8
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000100037e90
- (void)viewDidLoad;	// IMP=0x0000000100037d78
- (id)initWithPrivacyBundleIdentifier:(id)arg1;	// IMP=0x0000000100037cb0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100037c78
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000100037c40
- (id)init;	// IMP=0x0000000100037c08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
