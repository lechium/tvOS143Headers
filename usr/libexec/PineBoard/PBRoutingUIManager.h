//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBInstanceDependable-Protocol.h"
#import "PBOpenAppTransitionerObserver-Protocol.h"
#import "PBScreenSaverManagerObserver-Protocol.h"
#import "PBSystemOverlayControllerDelegate-Protocol.h"
#import "PBSystemOverlayUIProvider-Protocol.h"
#import "PBSystemUIManaging-Protocol.h"

@class NSHashTable, NSString, PBSystemOverlayController, UIViewController;

@interface PBRoutingUIManager : NSObject <PBSystemOverlayUIProvider, PBSystemOverlayControllerDelegate, PBScreenSaverManagerObserver, PBOpenAppTransitionerObserver, PBInstanceDependable, PBSystemUIManaging>
{
    NSHashTable *_pendingDismissalHandlers;	// 8 = 0x8
    UIViewController *_routingViewController;	// 16 = 0x10
    PBSystemOverlayController *_overlayController;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000100227c28
+ (id)dependencyDescription;	// IMP=0x0000000100227a48
- (void).cxx_destruct;	// IMP=0x0000000100228ecc
@property(readonly, nonatomic) PBSystemOverlayController *overlayController; // @synthesize overlayController=_overlayController;
@property(retain, nonatomic) UIViewController *routingViewController; // @synthesize routingViewController=_routingViewController;
@property(readonly, nonatomic) NSHashTable *pendingDismissalHandlers; // @synthesize pendingDismissalHandlers=_pendingDismissalHandlers;
- (void)screenSaverManagerDidPresentScreenSaver:(id)arg1;	// IMP=0x0000000100228d28
- (void)overlayController:(id)arg1 didDismissSession:(id)arg2;	// IMP=0x0000000100228c64
- (void)overlayController:(id)arg1 didPresentSession:(id)arg2;	// IMP=0x0000000100228ba0
- (void)appTransitioner:(id)arg1 willBeginAppTransition:(id)arg2;	// IMP=0x0000000100228a04
- (void)prepareUIForSystemOverlayPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010022869c
- (_Bool)dismissRoutingUI;	// IMP=0x0000000100228334
- (void)activateRoutingUIForReason:(unsigned long long)arg1 options:(id)arg2 dismissalHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100228154
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (void)dealloc;	// IMP=0x0000000100228080
- (id)init;	// IMP=0x0000000100227d28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

