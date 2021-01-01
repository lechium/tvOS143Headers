//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "PBSViewServicePresenter-Protocol.h"
#import "TVNPRoutingMainViewControllerDelegate-Protocol.h"

@class NSObject, NSString, TVNPGroupableRoutingController;
@protocol OS_dispatch_group;

@interface TVNPRoutingHostViewController : UIViewController <PBSViewServicePresenter, TVNPRoutingMainViewControllerDelegate>
{
    _Bool _presentationEnded;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_initialFetchGroup;	// 16 = 0x10
    TVNPGroupableRoutingController *_routingController;	// 24 = 0x18
}

+ (id)_remoteViewControllerInterface;	// IMP=0x0000000100005b88
+ (id)_exportedInterface;	// IMP=0x0000000100005a88
- (void).cxx_destruct;	// IMP=0x0000000100005c3c
@property(nonatomic) _Bool presentationEnded; // @synthesize presentationEnded=_presentationEnded;
@property(readonly, nonatomic) TVNPGroupableRoutingController *routingController; // @synthesize routingController=_routingController;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *initialFetchGroup; // @synthesize initialFetchGroup=_initialFetchGroup;
- (void)viewControllerDidRequestDismissal:(id)arg1 cancelled:(_Bool)arg2;	// IMP=0x0000000100005ba4
- (void)viewServiceEndPresentationWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005948
- (void)viewServiceHandleMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100005944
- (void)viewServiceBeginPresentationWithOptions:(id)arg1;	// IMP=0x0000000100005640
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000001000053e4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

