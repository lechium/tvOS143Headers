//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBSViewServicePresenter-Protocol.h"
#import "TVNPOdeonMainViewControllerDelegate-Protocol.h"

@class NSString, TVNPOdeonMainViewController;

@interface TVNPOdeonHostViewController : UIViewController <PBSViewServicePresenter, TVNPOdeonMainViewControllerDelegate>
{
    TVNPOdeonMainViewController *_odeonViewController;	// 8 = 0x8
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0000000100019374
+ (id)_exportedInterface;	// IMP=0x000000010001925c
- (void).cxx_destruct;	// IMP=0x00000001000194c0
@property(retain, nonatomic) TVNPOdeonMainViewController *odeonViewController; // @synthesize odeonViewController=_odeonViewController;
- (void)viewControllerDidRequestDismissal:(id)arg1 odeonEnabled:(_Bool)arg2;	// IMP=0x0000000100019424
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000191b0
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x0000000100019044

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

