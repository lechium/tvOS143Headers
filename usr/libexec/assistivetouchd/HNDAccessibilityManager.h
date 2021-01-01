//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AXElementFetcherDelegate-Protocol.h"
#import "AXElementFetcherObserver-Protocol.h"
#import "HNDAccessibilityManagerProtocol-Protocol.h"

@class AXDispatchTimer, AXElement, AXElementFetcher, AXElementGroup, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HNDAccessibilityManager : NSObject <AXElementFetcherDelegate, AXElementFetcherObserver, HNDAccessibilityManagerProtocol>
{
    NSObject<OS_dispatch_queue> *_appTransitionQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_ignoredTouchRegionsQueue;	// 16 = 0x10
    NSMutableDictionary *_pauseCountsByPid;	// 24 = 0x18
    _Bool _isPausingScanning;	// 32 = 0x20
    _Bool _initialized;	// 33 = 0x21
    struct __AXObserver *_observer;	// 40 = 0x28
    AXDispatchTimer *_elementFetchQueueTimer;	// 48 = 0x30
    AXElementFetcher *_elementFetcher;	// 56 = 0x38
    NSString *_springboardActionIdentifier;	// 64 = 0x40
    NSMutableArray *_accessibilityObservers;	// 72 = 0x48
    NSDate *_lastAppTransitionTime;	// 80 = 0x50
    AXElementGroup *_rootScannerGroup;	// 88 = 0x58
    AXElement *_axOrbPreviewWindow;	// 96 = 0x60
    NSArray *_currentApplications;	// 104 = 0x68
    NSArray *_ignoredTouchRegions;	// 112 = 0x70
    NSArray *__testingElements;	// 120 = 0x78
}

+ (void)_clearExistingSharedManager;	// IMP=0x0000000100050400
+ (id)_existingSharedManager;	// IMP=0x00000001000503f4
+ (id)sharedManager;	// IMP=0x000000010004b32c
- (void).cxx_destruct;	// IMP=0x0000000100050508
@property(retain, nonatomic, setter=_setTestingElements:) NSArray *_testingElements; // @synthesize _testingElements=__testingElements;
@property(retain, nonatomic) NSArray *ignoredTouchRegions; // @synthesize ignoredTouchRegions=_ignoredTouchRegions;
@property(retain, nonatomic) NSArray *currentApplications; // @synthesize currentApplications=_currentApplications;
@property(nonatomic) _Bool initialized; // @synthesize initialized=_initialized;
@property(nonatomic) _Bool isPausingScanning; // @synthesize isPausingScanning=_isPausingScanning;
@property(retain, nonatomic) AXElement *axOrbPreviewWindow; // @synthesize axOrbPreviewWindow=_axOrbPreviewWindow;
@property(retain, nonatomic) AXElementGroup *rootScannerGroup; // @synthesize rootScannerGroup=_rootScannerGroup;
@property(retain, nonatomic) NSDate *lastAppTransitionTime; // @synthesize lastAppTransitionTime=_lastAppTransitionTime;
@property(retain, nonatomic) NSMutableArray *accessibilityObservers; // @synthesize accessibilityObservers=_accessibilityObservers;
@property(retain, nonatomic) NSString *springboardActionIdentifier; // @synthesize springboardActionIdentifier=_springboardActionIdentifier;
@property(retain, nonatomic) AXElementFetcher *elementFetcher; // @synthesize elementFetcher=_elementFetcher;
@property(retain, nonatomic) AXDispatchTimer *elementFetchQueueTimer; // @synthesize elementFetchQueueTimer=_elementFetchQueueTimer;
@property(nonatomic) struct __AXObserver *observer; // @synthesize observer=_observer;
- (void)fetcher:(id)arg1 mediaDidBegin:(struct __CFData *)arg2;	// IMP=0x00000001000503e4
- (void)fetcher:(id)arg1 screenWillChange:(struct __CFData *)arg2;	// IMP=0x00000001000503d4
- (void)fetcher:(id)arg1 applicationWasActivated:(id)arg2;	// IMP=0x00000001000503c4
- (void)fetcher:(id)arg1 updateElementVisuals:(id)arg2;	// IMP=0x00000001000503b4
- (void)fetcher:(id)arg1 nativeFocusElementDidChange:(id)arg2;	// IMP=0x00000001000503a4
- (void)fetcher:(id)arg1 didFetchElementsForEvent:(unsigned long long)arg2 foundNewElements:(_Bool)arg3;	// IMP=0x000000010004fcc0
- (void)fetcher:(id)arg1 willFetchElementsForEvent:(unsigned long long)arg2 fromApplications:(id)arg3;	// IMP=0x000000010004fbac
- (void)fetcher:(id)arg1 didScheduleFetchEvent:(unsigned long long)arg2;	// IMP=0x000000010004fb70
- (_Bool)isSystemSleeping:(id)arg1;	// IMP=0x000000010004fb1c
- (struct CGRect)screenFrame:(id)arg1;	// IMP=0x000000010004fb08
- (void)userDidPerformSwitchAction;	// IMP=0x000000010004f984
- (void)speechEnabledDidChange;	// IMP=0x000000010004f92c
- (void)groupingEnabledDidChange;	// IMP=0x000000010004f8b8
- (long long)_hndAccessibilityEventForFetchEvent:(unsigned long long)arg1;	// IMP=0x000000010004f830
- (id)scannerElementMatchingElement:(id)arg1;	// IMP=0x000000010004f72c
- (id)lastKeyboardElement;	// IMP=0x000000010004f538
- (id)firstKeyboardItem;	// IMP=0x000000010004f464
- (id)previousItemForScanningFromItem:(id)arg1 didWrap:(_Bool *)arg2;	// IMP=0x000000010004f450
- (id)nextItemForScanningFromItem:(id)arg1 didWrap:(_Bool *)arg2;	// IMP=0x000000010004f43c
- (id)_itemForScanningFromItem:(id)arg1 inDirection:(_Bool)arg2 didWrap:(_Bool *)arg3;	// IMP=0x000000010004f0e0
- (id)lastItemForScanningWithElementCommunity:(id)arg1;	// IMP=0x000000010004f0d0
- (id)firstItemForScanningWithElementCommunity:(id)arg1;	// IMP=0x000000010004f0c0
- (id)_itemForScanningWithElementCommunity:(id)arg1 useFirst:(_Bool)arg2;	// IMP=0x000000010004ee30
- (id)scrollViewsForAction:(int)arg1 elementsToScroll:(id *)arg2;	// IMP=0x000000010004e9f0
- (id)elementsForMatchingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010004e730
- (id)scrollViewsForAction:(int)arg1;	// IMP=0x000000010004e720
- (id)firstResponder;	// IMP=0x000000010004e5dc
- (id)findGroupableMatchingGroupable:(id)arg1;	// IMP=0x000000010004e55c
- (id)elementAtPoint:(struct CGPoint)arg1;	// IMP=0x000000010004e490
- (id)rootKeyboardGroup;	// IMP=0x000000010004e43c
- (id)lastScannerGroupable;	// IMP=0x000000010004e388
- (id)firstScannerGroupable;	// IMP=0x000000010004e2d4
- (id)lastScannerElement;	// IMP=0x000000010004e258
- (id)firstScannerElement;	// IMP=0x000000010004e1dc
- (id)nativeFocusElement;	// IMP=0x000000010004e188
- (id)elements;	// IMP=0x000000010004e134
- (void)_handleResumeForPid:(int)arg1;	// IMP=0x000000010004dcec
- (void)_handlePauseForPid:(int)arg1;	// IMP=0x000000010004d6e0
- (id)_currentAppPids;	// IMP=0x000000010004d4f4
- (id)_pauseReasonForPid:(int)arg1;	// IMP=0x000000010004d4bc
- (void)_requestResumeScanning;	// IMP=0x000000010004d368
- (void)_requestPauseScanning;	// IMP=0x000000010004d214
- (void)_handleRefreshEvent:(long long)arg1 data:(id)arg2;	// IMP=0x000000010004d208
- (void)_handleKeyboardPopupAppeared;	// IMP=0x000000010004d1f4
- (void)_handleScrolledByPage;	// IMP=0x000000010004d1e0
- (void)_handleScreenLocked;	// IMP=0x000000010004d1cc
- (void)_handleScreenChanged;	// IMP=0x000000010004d1b8
- (void)_handleAnnouncementNotification:(id)arg1;	// IMP=0x000000010004d048
- (void)_handleOrientationChanged;	// IMP=0x000000010004d034
- (void)_handleAlertAppeared;	// IMP=0x000000010004d020
- (void)_handleLayoutChanged;	// IMP=0x000000010004d00c
- (_Bool)willFetchElements;	// IMP=0x000000010004cfc0
- (_Bool)isFetchingElements;	// IMP=0x000000010004cf74
- (void)refreshElements;	// IMP=0x000000010004cf34
- (_Bool)hasZeroElements;	// IMP=0x000000010004ce60
- (_Bool)applicationIsRTL;	// IMP=0x000000010004cdc4
- (_Bool)frontmostAppMayBeLoading;	// IMP=0x000000010004cd24
- (void)_handleSystemServerDied;	// IMP=0x000000010004cc40
- (void)_handleFirstResponderChanged;	// IMP=0x000000010004cc2c
- (void)_observeNotifications:(_Bool)arg1;	// IMP=0x000000010004ca4c
- (_Bool)_isElementInIgnoredTouchRegions:(id)arg1;	// IMP=0x000000010004c6bc
- (void)_initializeAccessibility;	// IMP=0x000000010004c0cc
- (void)_enableApplicationAccessibility:(_Bool)arg1;	// IMP=0x000000010004c07c
- (void)_notifyObserversMediaDidBegin:(struct __CFData *)arg1;	// IMP=0x000000010004bf34
- (void)_notifyObserversScreenWillChange:(struct __CFData *)arg1;	// IMP=0x000000010004bdec
- (void)_notifyObserversApplicationWasActivated:(id)arg1;	// IMP=0x000000010004bc90
- (void)_notifyObserversUpdateElementVisuals:(id)arg1;	// IMP=0x000000010004bb34
- (void)_notifyObserversNativeFocusElementDidChange:(id)arg1;	// IMP=0x000000010004b9d8
- (void)_notifyObserversDidFetchElementsForEvent:(long long)arg1 foundNewElements:(_Bool)arg2;	// IMP=0x000000010004b888
- (void)_notifyObserversWillFetchElementsForEvent:(long long)arg1;	// IMP=0x000000010004b740
- (void)_notifyObserversDidScheduleFetchEvent:(long long)arg1;	// IMP=0x000000010004b5f8
- (void)_notifyObserversDidReceiveEvent:(long long)arg1 data:(id)arg2;	// IMP=0x000000010004b494
- (void)removeObserver:(id)arg1;	// IMP=0x000000010004b428
- (void)addObserver:(id)arg1;	// IMP=0x000000010004b3b0
- (void)_initialize;	// IMP=0x000000010004ad78
- (void)dealloc;	// IMP=0x000000010004ac8c
- (_Bool)_elementFetchingRequired;	// IMP=0x000000010004ac28
@property(readonly, nonatomic) _Bool _isSpeechEnabled;
@property(readonly, nonatomic) _Bool _isScannerEnabled;
@property(readonly, nonatomic) _Bool _isGroupingEnabled;
- (id)orbPreviewWindow;	// IMP=0x000000010004aab4
- (void)updateCachedOrbPreviewWindow:(id)arg1;	// IMP=0x000000010004a98c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
