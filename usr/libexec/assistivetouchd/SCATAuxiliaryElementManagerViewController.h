//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCATCustomFocusingView_ViewControllerSupport-Protocol.h"

@class NSString;

@interface SCATAuxiliaryElementManagerViewController : UIViewController <SCATCustomFocusingView_ViewControllerSupport>
{
    _Bool _transitioningToOrFromActive;	// 8 = 0x8
}

@property(nonatomic, getter=isTransitioningToOrFromActive) _Bool transitioningToOrFromActive; // @synthesize transitioningToOrFromActive=_transitioningToOrFromActive;
- (_Bool)_elementContainsAllSubviewsOfView:(id)arg1 view:(id)arg2;	// IMP=0x000000010007b454
- (void)updateCustomFocusingViewStateForViewsWithElement:(id)arg1;	// IMP=0x000000010007b074
- (id)viewsRequiringStateUpdate;	// IMP=0x000000010007b06c
- (void)updateWithContextElement:(id)arg1;	// IMP=0x000000010007b068
- (void)viewDidLoad;	// IMP=0x000000010007b014
- (void)loadView;	// IMP=0x000000010007afc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

