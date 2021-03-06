//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBInstanceDependable-Protocol.h"
#import "PBOpenAppTransitionObserver-Protocol.h"
#import "PBOpenAppTransitioner-Protocol.h"
#import "TVSSerialTransactionManagerObserver-Protocol.h"

@class NSHashTable, NSMutableArray, NSMutableOrderedSet, NSString, PBOpenAppTransition, TVSConcurrentTransactionManager, TVSSerialTransactionManager;

@interface PBDefaultOpenAppTransitioner : NSObject <PBOpenAppTransitionObserver, TVSSerialTransactionManagerObserver, PBOpenAppTransitioner, PBInstanceDependable>
{
    TVSSerialTransactionManager *_foregroundOpenAppTransactionManager;	// 8 = 0x8
    TVSConcurrentTransactionManager *_backgroundOpenAppTransactionManager;	// 16 = 0x10
    NSHashTable *_openAppObservers;	// 24 = 0x18
    NSMutableArray *_coldBootQueuedTransitions;	// 32 = 0x20
    NSMutableOrderedSet *_deepLinkingAppHistory;	// 40 = 0x28
    PBOpenAppTransition *_activeTransition;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x000000010008e8a8
+ (id)dependencyDescription;	// IMP=0x000000010008e7f0
- (void).cxx_destruct;	// IMP=0x00000001000918a8
@property(retain, nonatomic) PBOpenAppTransition *activeTransition; // @synthesize activeTransition=_activeTransition;
@property(readonly, nonatomic) NSMutableOrderedSet *deepLinkingAppHistory; // @synthesize deepLinkingAppHistory=_deepLinkingAppHistory;
@property(readonly, nonatomic) NSMutableArray *coldBootQueuedTransitions; // @synthesize coldBootQueuedTransitions=_coldBootQueuedTransitions;
@property(readonly, nonatomic) NSHashTable *openAppObservers; // @synthesize openAppObservers=_openAppObservers;
@property(readonly, nonatomic) TVSConcurrentTransactionManager *backgroundOpenAppTransactionManager; // @synthesize backgroundOpenAppTransactionManager=_backgroundOpenAppTransactionManager;
@property(readonly, nonatomic) TVSSerialTransactionManager *foregroundOpenAppTransactionManager; // @synthesize foregroundOpenAppTransactionManager=_foregroundOpenAppTransactionManager;
- (void)transactionManager:(id)arg1 didInterruptTransaction:(id)arg2 forTransaction:(id)arg3;	// IMP=0x00000001000915e8
- (void)transactionManager:(id)arg1 willInterruptTransaction:(id)arg2 forTransaction:(id)arg3;	// IMP=0x0000000100091360
- (void)transactionManager:(id)arg1 didCompleteTransaction:(id)arg2;	// IMP=0x0000000100090e3c
- (void)transactionManager:(id)arg1 willBeginTransaction:(id)arg2;	// IMP=0x0000000100090c08
- (void)openAppTransition:(id)arg1 willReportSystemCompletionWithError:(id)arg2;	// IMP=0x0000000100090b34
- (void)openAppTransitionWillStartAnimation:(id)arg1;	// IMP=0x0000000100090970
- (void)openAppTransition:(id)arg1 willLaunchProcess:(id)arg2;	// IMP=0x0000000100090780
- (void)_handleDeepLinkingForTransaction:(id)arg1;	// IMP=0x000000010009009c
- (void)_deactivateSceneHandle:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010008fb44
- (void)_deactivateFocusedAppWithOptions:(id)arg1;	// IMP=0x000000010008f6f4
- (void)_addOpenAppTransitionIfPossible:(id)arg1;	// IMP=0x000000010008ef84
- (void)removeObserver:(id)arg1;	// IMP=0x000000010008ef1c
- (void)addObserver:(id)arg1;	// IMP=0x000000010008eeb4
- (void)handleFocusedAppRequestDeactivationFromFailure:(_Bool)arg1;	// IMP=0x000000010008ed78
- (void)addOpenAppTransition:(id)arg1;	// IMP=0x000000010008ed10
@property(readonly, nonatomic, getter=isTransitioning) _Bool transitioning;
- (id)init;	// IMP=0x000000010008e9a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

