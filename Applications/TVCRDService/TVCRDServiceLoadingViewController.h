//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBSViewServicePresenter-Protocol.h"

@class NSString;

@interface TVCRDServiceLoadingViewController : UIViewController <PBSViewServicePresenter>
{
}

+ (id)_remoteViewControllerInterface;	// IMP=0x00000001000057b0
+ (id)_exportedInterface;	// IMP=0x00000001000056b0
- (void)_menuPressed:(id)arg1;	// IMP=0x0000000100005860
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005590
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x0000000100005460
- (void)viewDidLoad;	// IMP=0x0000000100004880

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

