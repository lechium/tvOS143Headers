//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AXSSInterDeviceConnectionListener-Protocol.h"
#import "HNDAccessibilityManagerObserver-Protocol.h"
#import "SCATActionHandlerDelegate-Protocol.h"
#import "SCATActionHandlerUIDelegate-Protocol.h"
#import "SCATAlternateKeysManagerDelegate-Protocol.h"
#import "SCATAppleTVRemoteDelegate-Protocol.h"
#import "SCATCandidateBarManagerDelegate-Protocol.h"
#import "SCATCursorManagerDelegate-Protocol.h"
#import "SCATDisplaySource-Protocol.h"
#import "SCATDriverDelegate-Protocol.h"
#import "SCATElementNavigationControllerDelegate-Protocol.h"
#import "SCATGestureProviderDelegate-Protocol.h"
#import "SCATInputControllerDelegate-Protocol.h"
#import "SCATMenuDelegate-Protocol.h"
#import "SCATMenuObserver-Protocol.h"
#import "SCATPointPickerDelegate-Protocol.h"

@class AXDispatchTimer, AXOutputManager, AXSSInterDeviceCommunicator, AXSwitchRecipe, AXUpdateElementVisualsCoalescer, HNDAccessibilityManager, HNDScannerAutoscroller, NSMutableSet, NSString, SCATActionHandler, SCATAlternateKeysManager, SCATAppleTVRemote, SCATAutomaticDriver, SCATCandidateBarManager, SCATCursorManager, SCATDriver, SCATDwellDriver, SCATElementManager, SCATElementNavigationController, SCATFocusContext, SCATGestureProvider, SCATInputController, SCATManualDriver, SCATMenu, SCATPointPicker, SCATScrollViewPickerManager;
@protocol OS_dispatch_queue, SCATElement, SCATScannerManagerDelegate;

@interface SCATScannerManager : NSObject <SCATDriverDelegate, HNDAccessibilityManagerObserver, SCATInputControllerDelegate, SCATMenuDelegate, SCATMenuObserver, SCATGestureProviderDelegate, SCATPointPickerDelegate, SCATCursorManagerDelegate, SCATAlternateKeysManagerDelegate, SCATActionHandlerDelegate, SCATActionHandlerUIDelegate, SCATCandidateBarManagerDelegate, SCATAppleTVRemoteDelegate, AXSSInterDeviceConnectionListener, SCATElementNavigationControllerDelegate, SCATDisplaySource>
{
    _Bool _isLoaded;	// 8 = 0x8
    _Bool _shouldUseCameraPointPicker;	// 9 = 0x9
    _Bool _forceDisableScreenLock;	// 10 = 0xa
    _Bool _didSetFocusContextForResume;	// 11 = 0xb
    _Bool _didPauseForReasonsToDisableScanning;	// 12 = 0xc
    AXOutputManager *_outputManager;	// 16 = 0x10
    SCATCursorManager *_cursorManager;	// 24 = 0x18
    AXDispatchTimer *_beginScanningTimer;	// 32 = 0x20
    HNDScannerAutoscroller *_autoscroller;	// 40 = 0x28
    SCATInputController *_inputController;	// 48 = 0x30
    SCATGestureProvider *_gestureProvider;	// 56 = 0x38
    SCATAppleTVRemote *_appleTVRemote;	// 64 = 0x40
    SCATMenu *_menu;	// 72 = 0x48
    SCATPointPicker *_pointPicker;	// 80 = 0x50
    SCATElementNavigationController *_elementNavController;	// 88 = 0x58
    SCATManualDriver *_manualScanningDriver;	// 96 = 0x60
    SCATAutomaticDriver *_autoScanningDriver;	// 104 = 0x68
    SCATDriver *_activeScannerDriver;	// 112 = 0x70
    SCATElementManager *_activeElementManager;	// 120 = 0x78
    id <SCATScannerManagerDelegate> _delegate;	// 128 = 0x80
    SCATActionHandler *_selectActionHandler;	// 136 = 0x88
    HNDAccessibilityManager *_testAxManager;	// 144 = 0x90
    SCATAlternateKeysManager *_alternateKeysManager;	// 152 = 0x98
    SCATScrollViewPickerManager *_scrollViewPickerManager;	// 160 = 0xa0
    SCATCandidateBarManager *_candidateBarManager;	// 168 = 0xa8
    SCATDwellDriver *_dwellScanningDriver;	// 176 = 0xb0
    AXUpdateElementVisualsCoalescer *_updateElementVisualsCoalescer;	// 184 = 0xb8
    SCATActionHandler *_activateActionHandler;	// 192 = 0xc0
    SCATFocusContext *_focusContextForResume;	// 200 = 0xc8
    NSMutableSet *_reasonsToDisableScanning;	// 208 = 0xd0
    AXSwitchRecipe *_currentRecipe;	// 216 = 0xd8
    long long _itemMenuState;	// 224 = 0xe0
    long long _currentAction;	// 232 = 0xe8
    AXSSInterDeviceCommunicator *_interDeviceCommunicator;	// 240 = 0xf0
    NSObject<OS_dispatch_queue> *_managedConfigurationQueue;	// 248 = 0xf8
}

+ (void)updateElementCacheScheme;	// IMP=0x00000001000af808
+ (id)sharedManager;	// IMP=0x00000001000af79c
- (void).cxx_destruct;	// IMP=0x00000001000ba48c
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *managedConfigurationQueue; // @synthesize managedConfigurationQueue=_managedConfigurationQueue;
@property(retain, nonatomic) AXSSInterDeviceCommunicator *interDeviceCommunicator; // @synthesize interDeviceCommunicator=_interDeviceCommunicator;
@property(nonatomic) long long currentAction; // @synthesize currentAction=_currentAction;
@property(nonatomic) long long itemMenuState; // @synthesize itemMenuState=_itemMenuState;
@property(retain, nonatomic) AXSwitchRecipe *currentRecipe; // @synthesize currentRecipe=_currentRecipe;
@property(nonatomic) _Bool didPauseForReasonsToDisableScanning; // @synthesize didPauseForReasonsToDisableScanning=_didPauseForReasonsToDisableScanning;
@property(retain, nonatomic) NSMutableSet *reasonsToDisableScanning; // @synthesize reasonsToDisableScanning=_reasonsToDisableScanning;
@property(nonatomic) _Bool didSetFocusContextForResume; // @synthesize didSetFocusContextForResume=_didSetFocusContextForResume;
@property(retain, nonatomic) SCATFocusContext *focusContextForResume; // @synthesize focusContextForResume=_focusContextForResume;
@property(nonatomic) _Bool forceDisableScreenLock; // @synthesize forceDisableScreenLock=_forceDisableScreenLock;
@property(retain, nonatomic) SCATActionHandler *activateActionHandler; // @synthesize activateActionHandler=_activateActionHandler;
@property(retain, nonatomic) AXUpdateElementVisualsCoalescer *updateElementVisualsCoalescer; // @synthesize updateElementVisualsCoalescer=_updateElementVisualsCoalescer;
@property(retain, nonatomic) SCATDwellDriver *dwellScanningDriver; // @synthesize dwellScanningDriver=_dwellScanningDriver;
@property(retain, nonatomic) SCATCandidateBarManager *candidateBarManager; // @synthesize candidateBarManager=_candidateBarManager;
@property(retain, nonatomic) SCATScrollViewPickerManager *scrollViewPickerManager; // @synthesize scrollViewPickerManager=_scrollViewPickerManager;
@property(retain, nonatomic) SCATAlternateKeysManager *alternateKeysManager; // @synthesize alternateKeysManager=_alternateKeysManager;
@property(retain, nonatomic) HNDAccessibilityManager *testAxManager; // @synthesize testAxManager=_testAxManager;
@property(readonly, nonatomic) _Bool shouldUseCameraPointPicker; // @synthesize shouldUseCameraPointPicker=_shouldUseCameraPointPicker;
@property(retain, nonatomic) SCATActionHandler *selectActionHandler; // @synthesize selectActionHandler=_selectActionHandler;
@property(nonatomic) __weak id <SCATScannerManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCATElementManager *activeElementManager; // @synthesize activeElementManager=_activeElementManager;
@property(retain, nonatomic) SCATDriver *activeScannerDriver; // @synthesize activeScannerDriver=_activeScannerDriver;
@property(retain, nonatomic) SCATAutomaticDriver *autoScanningDriver; // @synthesize autoScanningDriver=_autoScanningDriver;
@property(retain, nonatomic) SCATManualDriver *manualScanningDriver; // @synthesize manualScanningDriver=_manualScanningDriver;
@property(retain, nonatomic) SCATElementNavigationController *elementNavController; // @synthesize elementNavController=_elementNavController;
@property(retain, nonatomic) SCATPointPicker *pointPicker; // @synthesize pointPicker=_pointPicker;
@property(retain, nonatomic) SCATMenu *menu; // @synthesize menu=_menu;
@property(retain, nonatomic) SCATAppleTVRemote *appleTVRemote; // @synthesize appleTVRemote=_appleTVRemote;
@property(retain, nonatomic) SCATGestureProvider *gestureProvider; // @synthesize gestureProvider=_gestureProvider;
@property(retain, nonatomic) SCATInputController *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) HNDScannerAutoscroller *autoscroller; // @synthesize autoscroller=_autoscroller;
@property(retain, nonatomic) AXDispatchTimer *beginScanningTimer; // @synthesize beginScanningTimer=_beginScanningTimer;
@property(retain, nonatomic) SCATCursorManager *cursorManager; // @synthesize cursorManager=_cursorManager;
@property(retain, nonatomic) AXOutputManager *outputManager; // @synthesize outputManager=_outputManager;
- (void)showUIContext:(_Bool)arg1;	// IMP=0x00000001000ba048
- (void)hidUIContext:(_Bool)arg1;	// IMP=0x00000001000b9e64
- (_Bool)isUIContextHidden;	// IMP=0x00000001000b9d90
- (id)scatFrontCursorUIContext;	// IMP=0x00000001000b9d34
- (id)scatBackCursorUIContext;	// IMP=0x00000001000b9cd8
- (id)scatUIContext;	// IMP=0x00000001000b9c7c
- (void)presentPostScanningMenuForElementNavigationController:(id)arg1;	// IMP=0x00000001000b9c34
- (_Bool)candidateBarManager:(id)arg1 hasValidTypingCandidates:(id)arg2;	// IMP=0x00000001000b9bbc
- (id)_typingCandidates;	// IMP=0x00000001000b9b14
- (void)alternateKeysManager:(id)arg1 didSelectAlternateKey:(id)arg2;	// IMP=0x00000001000b9a60
- (id)focusContextForActionHandler:(id)arg1;	// IMP=0x00000001000b99f8
- (void)actionHandlerDidCancelPendingAction:(id)arg1;	// IMP=0x00000001000b99e8
- (void)actionHandlerDidFireAction:(id)arg1;	// IMP=0x00000001000b959c
- (_Bool)actionHandler:(id)arg1 shouldActImmediatelyOnActionCount:(unsigned long long)arg2;	// IMP=0x00000001000b94f4
- (void)finishScanningAppleTVRemote:(id)arg1;	// IMP=0x00000001000b94f0
- (id)_focusContextAtPoint:(struct CGPoint)arg1;	// IMP=0x00000001000b9404
- (_Bool)pointPicker:(id)arg1 pauseForNumberOfCycles:(unsigned long long)arg2;	// IMP=0x00000001000b93b0
- (void)pointPickerDidFinishSweeping:(id)arg1;	// IMP=0x00000001000b93ac
- (void)pointPicker:(id)arg1 didSweepOutOfFocusContext:(id)arg2 isRefiningPoint:(_Bool)arg3;	// IMP=0x00000001000b9360
- (void)pointPicker:(id)arg1 didSweepIntoFocusContext:(id)arg2 isRefiningPoint:(_Bool)arg3;	// IMP=0x00000001000b9290
- (void)pointPicker:(id)arg1 didPickPoint:(struct CGPoint)arg2;	// IMP=0x00000001000b8f24
- (void)didChooseCreateCustomGestureFromGestureProvider:(id)arg1;	// IMP=0x00000001000b8e70
- (void)gestureProvider:(id)arg1 shouldResetScanningFromElement:(id)arg2;	// IMP=0x00000001000b8d94
- (id)contentViewForGestureProvider:(id)arg1;	// IMP=0x00000001000b8d88
- (void)gestureProvider:(id)arg1 didShowFingers:(_Bool)arg2;	// IMP=0x00000001000b8d84
- (void)shouldEndScanningGestureProvider:(id)arg1;	// IMP=0x00000001000b8d3c
- (void)shouldStartScanningGestureProvider:(id)arg1;	// IMP=0x00000001000b8cf4
- (void)menuDidUpdateTipObject:(id)arg1;	// IMP=0x00000001000b8cf0
- (void)menuDidFinishTransition:(id)arg1;	// IMP=0x00000001000b8c90
- (void)menuWillBeginTransition:(id)arg1;	// IMP=0x00000001000b8c48
- (void)menuDidDisappear:(id)arg1;	// IMP=0x00000001000b89cc
- (void)menuDidAppear:(id)arg1;	// IMP=0x00000001000b89c8
- (void)menuWillAppear:(id)arg1;	// IMP=0x00000001000b89c4
- (void)menu:(id)arg1 showSysdiagnoseDisplayString:(id)arg2;	// IMP=0x00000001000b89b4
- (id)interDeviceCommunicatorForMenu:(id)arg1;	// IMP=0x00000001000b89a8
- (void)returnControlToMasterDevice:(id)arg1;	// IMP=0x00000001000b8968
- (_Bool)canReturnControlToMasterDevice:(id)arg1;	// IMP=0x00000001000b891c
- (void)searchForControllableDevicesWithMenu:(id)arg1;	// IMP=0x00000001000b88dc
- (_Bool)canSearchForControllableDevicesWithMenu:(id)arg1;	// IMP=0x00000001000b8890
- (void)menu:(id)arg1 showScrollViewPickerForScrollViews:(id)arg2 elementsToScroll:(id)arg3 scrollAction:(int)arg4;	// IMP=0x00000001000b8754
- (_Bool)shouldShowAppWideScrollActionsInMenu:(id)arg1;	// IMP=0x00000001000b8748
- (void)menu:(id)arg1 setItemMenuState:(long long)arg2;	// IMP=0x00000001000b8738
- (long long)itemMenuStateForMenu:(id)arg1;	// IMP=0x00000001000b872c
- (_Bool)shouldAddItemSpecificMenuOptionsToMenu:(id)arg1;	// IMP=0x00000001000b8720
- (_Bool)_isPostScanningMenu:(id)arg1;	// IMP=0x00000001000b86e0
- (void)menu:(id)arg1 activateRecipe:(id)arg2;	// IMP=0x00000001000b86d0
- (id)exitActionElementForFingersInMenu:(id)arg1;	// IMP=0x00000001000b867c
- (void)didPressScreenChangingButtonInMenu:(id)arg1;	// IMP=0x00000001000b8634
- (id)gesturesSheetForMenu:(id)arg1;	// IMP=0x00000001000b85e0
- (id)menu:(id)arg1 tapAndHoldContextItemForSheet:(id)arg2;	// IMP=0x00000001000b8558
- (id)menu:(id)arg1 tapContextItemForSheet:(id)arg2;	// IMP=0x00000001000b84d0
- (struct CGRect)menu:(id)arg1 rectToClearForFingersWithGestureSheet:(_Bool)arg2;	// IMP=0x00000001000b8454
- (void)menu:(id)arg1 showTypingCandidates:(id)arg2;	// IMP=0x00000001000b83e8
- (void)menu:(id)arg1 showAlternateKeysForKey:(id)arg2;	// IMP=0x00000001000b837c
- (void)inputController:(id)arg1 didReceivePoint:(struct CGPoint)arg2;	// IMP=0x00000001000b8324
- (void)performSysdiagnoseForInputController:(id)arg1;	// IMP=0x00000001000b8190
- (id)userInterfaceClientForInputController:(id)arg1;	// IMP=0x00000001000b8134
- (void)inputController:(id)arg1 didReceiveRecipeHoldAtPoint:(struct CGPoint)arg2 isDown:(_Bool)arg3;	// IMP=0x00000001000b80c0
- (void)inputController:(id)arg1 didReceiveRecipeActionForMappingAtIndex:(unsigned long long)arg2 isLongPressAction:(_Bool)arg3;	// IMP=0x00000001000b7dd4
- (void)inputController:(id)arg1 didReceiveAction:(long long)arg2;	// IMP=0x00000001000b7334
- (void)didEndLongPressForInputController:(id)arg1;	// IMP=0x00000001000b7260
- (void)didBeginLongPressForInputController:(id)arg1;	// IMP=0x00000001000b71c4
- (void)accessibilityManagerShouldResumeScanning:(id)arg1;	// IMP=0x00000001000b71b0
- (void)accessibilityManagerShouldPauseScanning:(id)arg1;	// IMP=0x00000001000b719c
- (void)_updateElementVisuals;	// IMP=0x00000001000b7004
- (void)accessibilityManager:(id)arg1 mediaDidBegin:(struct __CFData *)arg2;	// IMP=0x00000001000b6ff8
- (void)_waitForApplication:(id)arg1;	// IMP=0x00000001000b6c04
- (void)accessibilityManager:(id)arg1 applicationWasActivated:(id)arg2;	// IMP=0x00000001000b6a80
- (void)accessibilityManager:(id)arg1 updateElementVisuals:(id)arg2;	// IMP=0x00000001000b6a40
- (void)accessibilityManager:(id)arg1 nativeFocusElementDidChange:(id)arg2;	// IMP=0x00000001000b6898
- (void)accessibilityManager:(id)arg1 didFetchElementsForEvent:(long long)arg2 foundNewElements:(_Bool)arg3;	// IMP=0x00000001000b64b8
- (void)_updateMenuAfterElementFetch;	// IMP=0x00000001000b6220
- (void)handleAnnouncement:(id)arg1;	// IMP=0x00000001000b611c
- (int)_validatedSelectBehaviorForCurrentSelectBehavior:(int)arg1 replacementElement:(id)arg2;	// IMP=0x00000001000b60d8
- (void)accessibilityManager:(id)arg1 willFetchElementsForEvent:(long long)arg2;	// IMP=0x00000001000b60d4
- (void)accessibilityManager:(id)arg1 didScheduleFetchEvent:(long long)arg2;	// IMP=0x00000001000b60d0
- (void)accessibilityManager:(id)arg1 screenWillChange:(struct __CFData *)arg2;	// IMP=0x00000001000b6088
- (void)accessibilityManager:(id)arg1 didReceiveEvent:(long long)arg2 data:(id)arg3;	// IMP=0x00000001000b5e50
- (_Bool)cursorManagerShouldHideMenuCursor:(id)arg1;	// IMP=0x00000001000b5e04
- (void)actionHandlerForUI:(id)arg1 willPerformDelayedActionOnContext:(id)arg2 withCount:(unsigned long long)arg3;	// IMP=0x00000001000b5ca0
- (void)actionHandlerForUIWillFireAction:(id)arg1;	// IMP=0x00000001000b5bb4
- (void)actionHandlerForUIDidCancelPendingAction:(id)arg1;	// IMP=0x00000001000b5ac8
- (unsigned long long)minimumPointPickerNumberOfCyclesForDriver:(id)arg1;	// IMP=0x00000001000b5ab4
- (void)driver:(id)arg1 indicateDwellScanningWillAbort:(_Bool)arg2;	// IMP=0x00000001000b59f8
- (void)driverDidBecomeActive:(id)arg1 didChange:(_Bool)arg2;	// IMP=0x00000001000b5944
- (void)driverDidBecomeInactive:(id)arg1;	// IMP=0x00000001000b58ec
- (void)driverDidPause:(id)arg1;	// IMP=0x00000001000b5894
- (void)driver:(id)arg1 didFocusOnContext:(id)arg2 oldContext:(id)arg3;	// IMP=0x00000001000b5700
- (void)_driver:(id)arg1 outputAudioForContext:(id)arg2;	// IMP=0x00000001000b52c8
- (void)driver:(id)arg1 willFocusOnContext:(id)arg2;	// IMP=0x00000001000b52c4
- (id)activeElementManagerForDriver:(id)arg1;	// IMP=0x00000001000b52b8
- (void)highlightAsPotentialSlaveForDeviceWithName:(id)arg1;	// IMP=0x00000001000b5150
- (void)_disableUserInterfaceClientForPotentialSlave;	// IMP=0x00000001000b5100
- (void)didBecomeIdle;	// IMP=0x00000001000b50c0
- (void)didDisconnectAsSlave;	// IMP=0x00000001000b501c
- (void)didDisconnectAsMasterFromDeviceWithName:(id)arg1;	// IMP=0x00000001000b4f0c
- (void)didConnectAsSlaveWithSettings:(id)arg1;	// IMP=0x00000001000b4d9c
- (void)didConnectAsMasterToDeviceWithName:(id)arg1;	// IMP=0x00000001000b4c94
- (_Bool)canAdvertise;	// IMP=0x00000001000b4a78
- (void)_handleVolumeUpAction;	// IMP=0x00000001000b4a30
- (void)_handleTripleClickAction;	// IMP=0x00000001000b49e8
- (void)_handleDictationAction;	// IMP=0x00000001000b4984
- (void)_handleForceTouchAction;	// IMP=0x00000001000b4794
- (void)_handleVolumeDownAction;	// IMP=0x00000001000b474c
- (void)_handleSiriAction;	// IMP=0x00000001000b4704
- (void)_handleControlCenterAction;	// IMP=0x00000001000b46bc
- (void)_handleNotificationCenterAction;	// IMP=0x00000001000b4674
- (void)_handleHomeAction;	// IMP=0x00000001000b4618
- (void)_handleAppSwitcherAction;	// IMP=0x00000001000b45d0
- (void)_setCurrentRecipe:(id)arg1 shouldShowAlert:(_Bool)arg2;	// IMP=0x00000001000b4284
- (void)_applyLaunchRecipeUUID;	// IMP=0x00000001000b4058
- (void)_exitRecipeOnTimeout;	// IMP=0x00000001000b3fd4
- (void)_resetRecipeTimeoutIfApplicable;	// IMP=0x00000001000b3e3c
- (void)_showSimpleBannerWithText:(id)arg1;	// IMP=0x00000001000b3da4
- (void)_updateScanningStyle;	// IMP=0x00000001000b3d14
- (_Bool)shouldBypassShowingMenuForElement:(id)arg1;	// IMP=0x00000001000b3c54
- (_Bool)activateElement:(id)arg1;	// IMP=0x00000001000b3a04
- (void)useFocusContextOnResume:(id)arg1;	// IMP=0x00000001000b39cc
- (_Bool)_shouldIgnoreAllScannerControlMessages;	// IMP=0x00000001000b397c
- (void)removeReasonToDisableScanning:(id)arg1;	// IMP=0x00000001000b36c8
- (void)addReasonToDisableScanning:(id)arg1;	// IMP=0x00000001000b32f8
- (void)pauseScanningWithScreenLockDisabled:(_Bool)arg1;	// IMP=0x00000001000b322c
- (void)pauseScanning;	// IMP=0x00000001000b321c
- (void)endScanning;	// IMP=0x00000001000b3188
- (void)resumeScanning;	// IMP=0x00000001000b2fdc
- (void)_beginOrContinueScanningWithFocusContext:(id)arg1 shouldBegin:(_Bool)arg2;	// IMP=0x00000001000b2c14
- (void)continueScanningWithFocusContext:(id)arg1;	// IMP=0x00000001000b2c04
- (void)beginScanningWithFocusContext:(id)arg1;	// IMP=0x00000001000b2bf4
@property(readonly, nonatomic) _Bool isInactive;
@property(readonly, nonatomic) _Bool isPaused;
@property(readonly, nonatomic) _Bool isActive;
- (id)axManager;	// IMP=0x00000001000b2a8c
@property(readonly, nonatomic) id <SCATElement> currentElement;
@property(readonly, nonatomic) SCATFocusContext *currentFocusContext;
- (_Bool)isSystemSleeping;	// IMP=0x00000001000b2990
@property(readonly, nonatomic) _Bool isLandscape;
@property(readonly, nonatomic) unsigned long long immediateSelectActionCount;
@property(readonly, nonatomic) _Bool isUsingPointMode;
- (_Bool)isSwitchWithSource:(id)arg1;	// IMP=0x00000001000b2850
@property(readonly, nonatomic) _Bool isSpeechEnabled;
@property(readonly, nonatomic) _Bool areSoundEffectsEnabled;
@property(readonly, nonatomic) long long scanningMode;
@property(readonly, nonatomic) _Bool isGroupingEnabled;
@property(readonly, nonatomic) _Bool isAutoscanEnabled;
- (void)_updateAudioSessionState;	// IMP=0x00000001000b24f4
- (void)_deactivateAudioSession;	// IMP=0x00000001000b2470
- (_Bool)_isScannerControlledByDriver:(id)arg1;	// IMP=0x00000001000b23f8
- (void)_updateActiveElementManager:(CDUnknownBlockType)arg1;	// IMP=0x00000001000b2384
- (void)_updateActiveElementManager;	// IMP=0x00000001000b2374
- (id)_primaryElementManagerForScannerState;	// IMP=0x00000001000b2048
- (id)_elementManagerForScannerState;	// IMP=0x00000001000b1e84
- (void)setActiveElementManager:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000b1a18
- (id)_driverForScannerState;	// IMP=0x00000001000b194c
@property(readonly, nonatomic) _Bool isControllingOtherDevice;
@property(readonly, nonatomic) _Bool isHandlingInterDeviceCommunication;
@property(readonly, nonatomic) _Bool isLoaded;
@property(readonly, copy) NSString *description;
- (void)unloadScanner;	// IMP=0x00000001000b1060
- (void)loadScanner;	// IMP=0x00000001000afb74
- (void)_performAccessibilityValidations;	// IMP=0x00000001000afb70
- (void)handleUSBMFiDeviceConnected;	// IMP=0x00000001000afa78
- (void)_setUSBRMPreferenceDisabled;	// IMP=0x00000001000afa14
- (_Bool)_userHasDisabledUSBRM;	// IMP=0x00000001000af9b0
- (void)dealloc;	// IMP=0x00000001000af950
- (id)init;	// IMP=0x00000001000af874

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

