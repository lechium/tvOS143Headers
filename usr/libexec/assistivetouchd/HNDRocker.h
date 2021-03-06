//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HNDView.h"

#import "HNDRockerButtonDataSource-Protocol.h"

@class AXAssertion, AXAssistiveTouchLayoutView, AXDispatchTimer, AXPIFingerView, CADisplayLink, HNDRockerButton, HNDVolumeBar, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIImageView, UIView, UIVisualEffectView;
@protocol HNDRockerProtocol;

@interface HNDRocker : HNDView <HNDRockerButtonDataSource>
{
    int _state;	// 12 = 0xc
    NSMutableArray *_stackState;	// 16 = 0x10
    NSMutableArray *_rockerItems;	// 24 = 0x18
    HNDRockerButton *_selectedButton;	// 32 = 0x20
    HNDRockerButton *_backButton;	// 40 = 0x28
    long long _selectedButtonIndex;	// 48 = 0x30
    int _backgroundType;	// 56 = 0x38
    AXPIFingerView *_middleCircle;	// 64 = 0x40
    _Bool _isFullMenuVisible;	// 72 = 0x48
    _Bool _isNubbitVisible;	// 73 = 0x49
    _Bool _useCircle;	// 74 = 0x4a
    double _progress;	// 80 = 0x50
    _Bool _sentRockers;	// 88 = 0x58
    _Bool _linkRunning;	// 89 = 0x59
    CADisplayLink *_rockerLink;	// 96 = 0x60
    double _startInterval;	// 104 = 0x68
    AXDispatchTimer *_homeButtonDismissTimer;	// 112 = 0x70
    int _style;	// 120 = 0x78
    _Bool _nubbitDimmed;	// 124 = 0x7c
    AXDispatchTimer *_nubbitFadeTimer;	// 128 = 0x80
    UIImageView *_nubbitForeground;	// 136 = 0x88
    _Bool _animatingNubbit;	// 144 = 0x90
    AXDispatchTimer *_volumeHideTimer;	// 152 = 0x98
    AXDispatchTimer *_volumeUpdateTimer;	// 160 = 0xa0
    HNDVolumeBar *_volumeBar;	// 168 = 0xa8
    UIVisualEffectView *_backdropView;	// 176 = 0xb0
    UIView *_maskImageView;	// 184 = 0xb8
    _Bool _activatedOrbAction;	// 192 = 0xc0
    AXAssistiveTouchLayoutView *_layoutView;	// 200 = 0xc8
    HNDRockerButton *_tripleClickButton;	// 208 = 0xd0
    _Bool _orbActionThresholdReached;	// 216 = 0xd8
    struct CGPoint _windowDownStartPoint;	// 224 = 0xe0
    double _farthestTrackingDistance;	// 240 = 0xf0
    _Bool _shouldIgnoreNextHome;	// 248 = 0xf8
    _Bool _shouldForciblyHideBackButtonForAnimation;	// 249 = 0xf9
    id <HNDRockerProtocol> _rockerDelegate;	// 256 = 0x100
    NSString *_lastMenuItemActivated;	// 264 = 0x108
    AXAssertion *_disableDashBoardGesturesAssertion;	// 272 = 0x110
    NSArray *_backButtonConstraints;	// 280 = 0x118
    NSArray *_sideAppMoreRockerItems;	// 288 = 0x120
    NSMutableArray *_initialItems;	// 296 = 0x128
    NSMutableArray *_touchItems;	// 304 = 0x130
    NSMutableArray *_hardwareItems;	// 312 = 0x138
    NSMutableArray *_rotateItems;	// 320 = 0x140
    NSMutableArray *_moreItems;	// 328 = 0x148
    NSMutableArray *_scrollItems;	// 336 = 0x150
    NSMutableArray *_dwellItems;	// 344 = 0x158
    HNDRockerButton *_sideAppButton;	// 352 = 0x160
    HNDRockerButton *_gesturesButton;	// 360 = 0x168
    HNDRockerButton *_reachabilityButton;	// 368 = 0x170
    HNDRockerButton *_speakScreenButton;	// 376 = 0x178
    HNDRockerButton *_toggleDockButton;	// 384 = 0x180
    HNDRockerButton *_appSwitcherButton;	// 392 = 0x188
    HNDRockerButton *_moreButton;	// 400 = 0x190
    NSArray *_dockSpecificButtons;	// 408 = 0x198
    NSMutableDictionary *_buttonsByMedusaGesture;	// 416 = 0x1a0
}

+ (struct CGSize)nubbitSize;	// IMP=0x000000010003d398
+ (struct CGSize)initialRockerSize;	// IMP=0x000000010003d354
- (void).cxx_destruct;	// IMP=0x0000000100044930
@property(retain, nonatomic) NSMutableDictionary *buttonsByMedusaGesture; // @synthesize buttonsByMedusaGesture=_buttonsByMedusaGesture;
@property(retain, nonatomic) NSArray *dockSpecificButtons; // @synthesize dockSpecificButtons=_dockSpecificButtons;
@property(retain, nonatomic) HNDRockerButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) HNDRockerButton *appSwitcherButton; // @synthesize appSwitcherButton=_appSwitcherButton;
@property(retain, nonatomic) HNDRockerButton *toggleDockButton; // @synthesize toggleDockButton=_toggleDockButton;
@property(retain, nonatomic) HNDRockerButton *speakScreenButton; // @synthesize speakScreenButton=_speakScreenButton;
@property(retain, nonatomic) HNDRockerButton *reachabilityButton; // @synthesize reachabilityButton=_reachabilityButton;
@property(retain, nonatomic) HNDRockerButton *gesturesButton; // @synthesize gesturesButton=_gesturesButton;
@property(retain, nonatomic) HNDRockerButton *sideAppButton; // @synthesize sideAppButton=_sideAppButton;
@property(retain, nonatomic) NSMutableArray *dwellItems; // @synthesize dwellItems=_dwellItems;
@property(retain, nonatomic) NSMutableArray *scrollItems; // @synthesize scrollItems=_scrollItems;
@property(retain, nonatomic) NSMutableArray *moreItems; // @synthesize moreItems=_moreItems;
@property(retain, nonatomic) NSMutableArray *rotateItems; // @synthesize rotateItems=_rotateItems;
@property(retain, nonatomic) NSMutableArray *hardwareItems; // @synthesize hardwareItems=_hardwareItems;
@property(retain, nonatomic) NSMutableArray *touchItems; // @synthesize touchItems=_touchItems;
@property(retain, nonatomic) NSMutableArray *initialItems; // @synthesize initialItems=_initialItems;
@property(retain, nonatomic) NSArray *sideAppMoreRockerItems; // @synthesize sideAppMoreRockerItems=_sideAppMoreRockerItems;
@property(nonatomic) _Bool shouldForciblyHideBackButtonForAnimation; // @synthesize shouldForciblyHideBackButtonForAnimation=_shouldForciblyHideBackButtonForAnimation;
@property(retain, nonatomic) NSArray *backButtonConstraints; // @synthesize backButtonConstraints=_backButtonConstraints;
@property(nonatomic) _Bool shouldIgnoreNextHome; // @synthesize shouldIgnoreNextHome=_shouldIgnoreNextHome;
@property(retain, nonatomic) AXAssertion *disableDashBoardGesturesAssertion; // @synthesize disableDashBoardGesturesAssertion=_disableDashBoardGesturesAssertion;
@property(retain, nonatomic) NSString *lastMenuItemActivated; // @synthesize lastMenuItemActivated=_lastMenuItemActivated;
@property(nonatomic) __weak id <HNDRockerProtocol> rockerDelegate; // @synthesize rockerDelegate=_rockerDelegate;
@property(nonatomic) int style; // @synthesize style=_style;
- (void)didMoveToWindow;	// IMP=0x000000010004456c
- (CDStruct_d2b197d1)rockerButtonGuttersForRockerButton:(id)arg1;	// IMP=0x0000000100044468
- (id)accessibilityIdentifier;	// IMP=0x0000000100044458
- (id)accessibilityHint;	// IMP=0x000000010004444c
- (id)accessibilityLabel;	// IMP=0x0000000100044440
- (id)accessibilityPath;	// IMP=0x0000000100044344
- (_Bool)isAccessibilityElement;	// IMP=0x00000001000442f4
- (_Bool)accessibilityPerformEscape;	// IMP=0x000000010004428c
- (void)setNubbitVisible:(_Bool)arg1;	// IMP=0x0000000100044204
- (void)transitionNubbitToMenu:(struct CGPoint)arg1 concurrentAnimation:(CDUnknownBlockType)arg2 animationCompleted:(CDUnknownBlockType)arg3;	// IMP=0x00000001000438d4
- (void)transitionMenuToNubbit:(struct CGPoint)arg1 changeAlpha:(_Bool)arg2 animate:(_Bool)arg3;	// IMP=0x0000000100043198
- (void)highlightNubbit;	// IMP=0x00000001000430b8
- (void)fadeNubbit;	// IMP=0x0000000100042f44
- (void)_resetVisibility:(_Bool)arg1;	// IMP=0x0000000100042ea4
- (void)_updateNubbitFadedProperties;	// IMP=0x0000000100042ddc
- (void)_initializeNubbit;	// IMP=0x0000000100042c48
- (void)didFailToFloatApp;	// IMP=0x0000000100042bfc
- (void)didFailToPinApp;	// IMP=0x0000000100042bb0
- (void)setFullMenuVisible:(_Bool)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x0000000100042808
- (_Bool)isFullMenuVisible;	// IMP=0x00000001000427f8
- (struct CGPoint)onScreenLocation;	// IMP=0x0000000100042718
- (void)_homeButton:(_Bool)arg1;	// IMP=0x0000000100042714
- (void)_orientationPressed:(id)arg1;	// IMP=0x00000001000426f8
- (void)_shakePressed;	// IMP=0x0000000100042640
- (void)_ringerPressed:(_Bool)arg1;	// IMP=0x00000001000424b0
- (void)_rotationLockPressed;	// IMP=0x00000001000423c4
- (void)_mutePressed;	// IMP=0x000000010004237c
- (void)_volumeDown:(_Bool)arg1;	// IMP=0x00000001000422c8
- (void)_volumeUp:(_Bool)arg1;	// IMP=0x0000000100042214
- (void)showVolumeDisplayImmediately;	// IMP=0x000000010004219c
- (void)_updateVolumeDisplay;	// IMP=0x0000000100042080
- (void)_lockButton:(_Bool)arg1;	// IMP=0x0000000100041fc8
- (void)_sideAppMorePressed:(id)arg1;	// IMP=0x0000000100041fac
- (void)_sideAppPressed:(id)arg1;	// IMP=0x0000000100041f90
- (void)_morePressed:(id)arg1;	// IMP=0x0000000100041f74
- (void)_hardwareButtonPressed:(id)arg1;	// IMP=0x0000000100041f58
- (void)_handleTouch:(long long)arg1;	// IMP=0x0000000100041e58
- (void)_toggleAppSwitcher;	// IMP=0x0000000100041ddc
- (void)_armApplePay;	// IMP=0x0000000100041d60
- (void)_dockPressed;	// IMP=0x0000000100041ce4
- (void)_rebootDevicePressed;	// IMP=0x0000000100041c58
- (void)_reachabilityPressed;	// IMP=0x0000000100041bcc
- (void)_speakScreenPressed;	// IMP=0x0000000100041bc8
- (void)_sysdiagnosePressed;	// IMP=0x0000000100041af4
- (void)_commandAndControlPressed;	// IMP=0x0000000100041a68
- (void)_sosPressed;	// IMP=0x000000010004194c
- (void)_spotlightPressed:(id)arg1;	// IMP=0x0000000100041830
- (void)_disableUserInterfaceClient;	// IMP=0x00000001000417e0
- (void)_showBannerWithText:(id)arg1;	// IMP=0x00000001000416e0
- (void)_screenshotPressed;	// IMP=0x000000010004163c
- (void)_controlCenterPressed;	// IMP=0x0000000100041540
- (void)_notificationCenterPressed;	// IMP=0x0000000100041444
- (void)_tripleClickHomePressed;	// IMP=0x00000001000413a0
- (void)_siriButtonPressed;	// IMP=0x00000001000412fc
- (void)_voiceControlPressed;	// IMP=0x0000000100041258
- (void)updateForegroundImageForAction:(id)arg1;	// IMP=0x0000000100041254
- (void)_layoutForegroundImageView;	// IMP=0x0000000100041194
- (void)_scrollPressed:(id)arg1 fromButtonPress:(_Bool)arg2 vertical:(_Bool)arg3 forward:(_Bool)arg4 max:(_Bool)arg5;	// IMP=0x0000000100041058
- (void)_pinchPressed:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x0000000100040f28
- (void)_dragAndDropPressed:(id)arg1 fromButtonPress:(_Bool)arg2 dragMenu:(_Bool)arg3;	// IMP=0x0000000100040d1c
- (void)_doubleTapPressed:(id)arg1 fromButtonPress:(_Bool)arg2;	// IMP=0x0000000100040c2c
- (void)_tapPressed:(id)arg1 fromButtonPress:(_Bool)arg2;	// IMP=0x0000000100040b3c
- (void)_longPressPressed:(id)arg1 fromButtonPress:(_Bool)arg2;	// IMP=0x0000000100040a54
- (void)_orbPressed:(id)arg1 fromButtonPress:(_Bool)arg2;	// IMP=0x000000010004096c
- (struct CGPoint)_initialPointForGesture;	// IMP=0x00000001000407e0
- (void)_applePayButtonPressed:(id)arg1;	// IMP=0x00000001000407d4
- (void)_pushMenuItemsFromSender:(id)arg1;	// IMP=0x00000001000407b0
- (void)_scrollPressed:(id)arg1;	// IMP=0x0000000100040794
- (void)_gesturesPressed:(id)arg1;	// IMP=0x0000000100040778
- (void)_customsPressed:(id)arg1;	// IMP=0x000000010004075c
- (id)animationEndButtonForButtonTag:(int)arg1;	// IMP=0x0000000100040658
- (void)_loadMenuItems:(_Bool)arg1 viewForCenteringAtStart:(id)arg2 goBackwards:(_Bool)arg3 originalState:(int)arg4 shouldUpdateKeyboardFocusIfNeeded:(_Bool)arg5;	// IMP=0x0000000100040064
- (void)_loadMenuItems:(_Bool)arg1 viewForCenteringAtStart:(id)arg2 goBackwards:(_Bool)arg3 originalState:(int)arg4;	// IMP=0x0000000100040054
- (void)_updateKeyboardFocusIfNeeded;	// IMP=0x0000000100040008
- (void)_resetHoverCircleLocation;	// IMP=0x000000010003ff78
- (void)setUseCircleMode:(_Bool)arg1;	// IMP=0x000000010003ff68
- (void)_layoutButtonsWithViewForCenteringAtStart:(id)arg1 includingBackButton:(_Bool)arg2;	// IMP=0x000000010003f540
- (id)_rockerItemsByLocation;	// IMP=0x000000010003f3ac
- (_Bool)customizationMapAllowInstanceActivation:(id)arg1;	// IMP=0x000000010003f23c
- (void)showNubbitPressedState:(_Bool)arg1;	// IMP=0x000000010003f21c
- (void)activateMenuItemUp:(id)arg1 fromButtonPress:(_Bool)arg2;	// IMP=0x000000010003e564
- (void)activateMenuItemDown:(id)arg1 fromButtonPress:(_Bool)arg2;	// IMP=0x000000010003e3f0
- (void)_layoutMenuItems:(_Bool)arg1 oldRockers:(id)arg2 viewForCenteringAtStart:(id)arg3 shouldUpdateKeyboardFocusIfNeeded:(_Bool)arg4;	// IMP=0x000000010003df2c
- (void)_layoutMenuItemsInReverse:(_Bool)arg1 oldRockers:(id)arg2 animateToIcon:(id)arg3 shouldUpdateKeyboardFocusIfNeeded:(_Bool)arg4;	// IMP=0x000000010003d8ec
- (void)_centerBackButtonToView:(id)arg1;	// IMP=0x000000010003d650
- (void)_addNewButtonsToView;	// IMP=0x000000010003d4a4
- (void)_setBackgroundWithType:(int)arg1;	// IMP=0x000000010003d3c8
- (void)_loadFavoritesMenuItems;	// IMP=0x000000010003c990
- (void)_addFavoriteBoxPressed;	// IMP=0x000000010003c854
- (void)_customGesturePressed:(id)arg1 fromButtonPress:(_Bool)arg2;	// IMP=0x000000010003c770
- (void)_loadHardwareMenuItems;	// IMP=0x000000010003c164
- (void)_setRotationLockIcon:(id)arg1;	// IMP=0x000000010003c090
- (void)updateRotationLockSwitch;	// IMP=0x000000010003bfdc
- (void)updateRingerSwitch;	// IMP=0x000000010003bf04
- (void)_setRingerSwitchIcon:(id)arg1;	// IMP=0x000000010003be68
- (void)_loadScrollMenuItems;	// IMP=0x000000010003bba0
- (void)_loadRotateMenuItems;	// IMP=0x000000010003b630
- (void)_loadGesturesMenuItems;	// IMP=0x000000010003afb4
- (void)_assignLocationsToRockerItems;	// IMP=0x000000010003ae2c
- (void)_loadMoreMenuItems;	// IMP=0x000000010003a828
- (void)_loadInitialMenuItems;	// IMP=0x000000010003a774
- (void)_preloadInitialMenuItems;	// IMP=0x000000010003a548
- (id)_rockerButtonForLocation:(id)arg1 buttonType:(id)arg2;	// IMP=0x0000000100037960
- (void)updateRockersForSubstantialTransition;	// IMP=0x00000001000376c0
- (void)handleRealUpEvent:(struct CGPoint)arg1 maxOrb:(double)arg2;	// IMP=0x0000000100037574
- (void)resetOrbAction;	// IMP=0x0000000100037558
- (void)handleRealMoveEvent:(struct CGPoint)arg1 maxOrb:(double)arg2 currentForce:(double)arg3;	// IMP=0x00000001000373b0
- (_Bool)isAnimatingNubbit;	// IMP=0x00000001000373a0
- (void)handleRealDownEvent:(struct CGPoint)arg1;	// IMP=0x00000001000372ac
- (void)performPress:(int)arg1 type:(int)arg2 source:(int)arg3;	// IMP=0x00000001000371fc
- (void)_goBackInMenuState:(int)arg1;	// IMP=0x0000000100036fec
- (void)showVolumeBar:(_Bool)arg1 withProgress:(double)arg2;	// IMP=0x00000001000369b0
- (void)volumeChanged;	// IMP=0x0000000100036934
- (void)modalizeMenu:(_Bool)arg1 modalButton:(id)arg2;	// IMP=0x0000000100036930
- (void)hoveredTo:(struct CGPoint)arg1;	// IMP=0x0000000100036924
- (void)_updateSelectedButtonWithPoint:(struct CGPoint)arg1;	// IMP=0x0000000100036854
- (void)_updateSelectedButton;	// IMP=0x00000001000367dc
- (id)_rockerHitTest:(struct CGPoint)arg1;	// IMP=0x00000001000365d8
- (_Bool)_angleIndicatesReturnToCenter:(double)arg1;	// IMP=0x000000010003641c
- (void)_highlightRockerButtonAtAngle:(double)arg1;	// IMP=0x0000000100036364
- (long long)_indexForAngle:(double)arg1;	// IMP=0x00000001000361e8
- (_Bool)_includeRingerButtonInHardware;	// IMP=0x00000001000361c4
- (_Bool)_replaceRingerWithOrientationLock;	// IMP=0x0000000100036158
- (void)_updateProgress:(id)arg1;	// IMP=0x0000000100035f4c
- (void)_updateBackButtonVisibility;	// IMP=0x0000000100035ee0
- (_Bool)_backButtonShouldBeHidden;	// IMP=0x0000000100035e98
- (int)state;	// IMP=0x0000000100035e88
- (void)showMiddleCircle:(_Bool)arg1;	// IMP=0x0000000100035e6c
- (void)_siriPrefsChanged:(id)arg1;	// IMP=0x0000000100035e5c
- (void)dealloc;	// IMP=0x0000000100035e00
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000100035034
- (_Bool)_usesCircularNubbit;	// IMP=0x0000000100035030

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

