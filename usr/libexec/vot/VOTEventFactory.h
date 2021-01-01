//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCRCGestureFactoryCallback-Protocol.h"
#import "VOTBrailleGestureManagerDelegate-Protocol.h"
#import "VOTElementUpdateProtocol-Protocol.h"
#import "VOTGestureKeyboardDelegate-Protocol.h"
#import "VOTGesturedTextInputManagerDelegate-Protocol.h"

@class AXDispatchTimer, AXEventProcessor, AXEventRepresentation, NSArray, NSMutableArray, NSRecursiveLock, NSString, SCRCGestureFactory, SCRCTargetSelectorTimer, SCRCThreadKey, VOTBrailleGestureManager, VOTClickAndHoldButtonInterceptor, VOTDirectInteractionKeyboardManager, VOTElement, VOTEvent, VOTGestureEvent, VOTMapsExplorationGestureManager, VOTSimpleClickButtonInterceptor;
@protocol VOTDirectTouchManagementProtocol, VOTElementManagementProtocol, VOTEventFactoryCallbackProtocol, VOTRotorManagementProtocol;

@interface VOTEventFactory : NSObject <VOTBrailleGestureManagerDelegate, VOTGesturedTextInputManagerDelegate, VOTElementUpdateProtocol, VOTGestureKeyboardDelegate, SCRCGestureFactoryCallback>
{
    SCRCGestureFactory *_gestureFactory;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    unsigned long long _edgePanGestureState;	// 24 = 0x18
    struct CGPoint _edgePanGestureStartPoint;	// 32 = 0x20
    double _edgePanGestureStartTime;	// 48 = 0x30
    struct CGPoint _edgePanGesturePausePoint;	// 56 = 0x38
    SCRCTargetSelectorTimer *_edgePanGestureSpeakHintTimer;	// 72 = 0x48
    long long _direction;	// 80 = 0x50
    long long _rotorSoundZone;	// 88 = 0x58
    long long _continuityZone;	// 96 = 0x60
    double _startPinchDistance;	// 104 = 0x68
    long long _fingerCount;	// 112 = 0x70
    double _travelDistance;	// 120 = 0x78
    struct CGPoint _tapHoldOffset;	// 128 = 0x80
    struct CGPoint _sonificationScrubbingPreviousLocation;	// 144 = 0x90
    _Bool _canPlayBoundaryFeedback;	// 160 = 0xa0
    VOTGestureEvent *_lastDownEvent;	// 168 = 0xa8
    SCRCThreadKey *_threadKey;	// 176 = 0xb0
    NSRecursiveLock *_currentElementLock;	// 184 = 0xb8
    VOTElement *_currentElement;	// 192 = 0xc0
    VOTElement *_firstResponder;	// 200 = 0xc8
    double _lastEdgePressTime;	// 208 = 0xd0
    double _lastEchoTime;	// 216 = 0xd8
    double _rotateStartTime;	// 224 = 0xe0
    long long _rotateDirection;	// 232 = 0xe8
    SCRCTargetSelectorTimer *_tapHoldTimer;	// 240 = 0xf0
    SCRCTargetSelectorTimer *_elementSummaryTimer;	// 248 = 0xf8
    SCRCTargetSelectorTimer *_twoFingerHoldTimer;	// 256 = 0x100
    SCRCTargetSelectorTimer *_threeFingerHoldTimer;	// 264 = 0x108
    SCRCTargetSelectorTimer *_memorizeSoundTimer;	// 272 = 0x110
    SCRCTargetSelectorTimer *_systemControlLocationTimer;	// 280 = 0x118
    double _currentTouchForce;	// 288 = 0x120
    double _previewFingerStartingForce;	// 296 = 0x128
    struct CGPoint _previewFingerLocation;	// 304 = 0x130
    NSMutableArray *_previewFingerContextId;	// 320 = 0x140
    _Bool _isInPreview;	// 328 = 0x148
    double _previewStartTime;	// 336 = 0x150
    double _previewPopDelayTime;	// 344 = 0x158
    _Bool _isPreviewPinned;	// 352 = 0x160
    long long _currentOrbGestureMode;	// 360 = 0x168
    struct CGPoint _nativeSlidingOffset;	// 368 = 0x170
    struct CGPoint _nativeSlidingCenter;	// 384 = 0x180
    double _lastTwoFingerSlideTime;	// 400 = 0x190
    double _oldVolumeChangeDistance;	// 408 = 0x198
    double _volumeChangeDistance;	// 416 = 0x1a0
    SCRCTargetSelectorTimer *_volumeChangeTimer;	// 424 = 0x1a8
    SCRCTargetSelectorTimer *_wakeTapTimer;	// 432 = 0x1b0
    unsigned long long _watchWakeTapCount;	// 440 = 0x1b8
    double _lastWatchWakeUpTime;	// 448 = 0x1c0
    struct __AXObserver *_axEventObserver;	// 456 = 0x1c8
    VOTGestureEvent *_currentGestureEvent;	// 464 = 0x1d0
    NSArray *_directInteractionElements;	// 472 = 0x1d8
    NSString *_zoomListenerIdentifier;	// 480 = 0x1e0
    struct {
        long long direction;
        unsigned long long count;
        double continuityDistance;
        double distanceTraveled;
        struct CGPoint firstCountPoint;
    } _zigzag;	// 488 = 0x1e8
    double _lastNativeSlideCancel;	// 536 = 0x218
    NSMutableArray *_tapAndHoldContextIds;	// 544 = 0x220
    long long _tapAndHoldFingerType;	// 552 = 0x228
    VOTElement *_tapAndHoldScribbleElement;	// 560 = 0x230
    struct CGPoint _systemControlStartPoint;	// 568 = 0x238
    int _systemControlPosition;	// 584 = 0x248
    _Bool _systemControlActivated;	// 588 = 0x24c
    double _systemControlStartSwipeTime;	// 592 = 0x250
    double _systemControlFingerDownFollowupTime;	// 600 = 0x258
    double _lastScrollEventTime;	// 608 = 0x260
    long long _currentAccumulatedScroll;	// 616 = 0x268
    _Bool _scrollWheelIsActive;	// 624 = 0x270
    struct {
        _Bool tapAndHoldMode;
        _Bool tapAndHoldModeContextless;
        _Bool tapAndHoldOffsetNeedsUpdate;
        _Bool orbMode;
        _Bool firedElementSummaryTimer;
        _Bool rotating;
        _Bool memorizingData;
        _Bool twoFingerTapAndSlide;
        _Bool threeFingerTapAndSlide;
        _Bool splitSlide;
        _Bool handwritingOnly;
        _Bool didPlayStartLabelSound;
        _Bool sendingToDirectTouch;
        _Bool sendingToNativeSlide;
        _Bool gestureSawDownEvent;
        _Bool allowingSystemGesturePassthrough;
        _Bool hasSentFirstTrackingEventForGesture;
        _Bool sonificationScrubbingMode;
    } _flags;	// 625 = 0x271
    double _gestureKeyboardShiftLockStartTime;	// 648 = 0x288
    VOTBrailleGestureManager *_brailleGestureManager;	// 656 = 0x290
    VOTMapsExplorationGestureManager *_mapsExplorationGestureManager;	// 664 = 0x298
    VOTClickAndHoldButtonInterceptor *_playButtonInterceptor;	// 672 = 0x2a0
    VOTSimpleClickButtonInterceptor *_selectButtonInterceptor;	// 680 = 0x2a8
    VOTSimpleClickButtonInterceptor *_menuButtonInterceptor;	// 688 = 0x2b0
    struct {
        _Bool tapDown;
        _Bool tapMoved;
        _Bool tapUp;
        _Bool heldDown;
        _Bool heldUp;
    } _audioAccButtonStates[3];	// 696 = 0x2b8
    unsigned long long _audioAccTapCount;	// 712 = 0x2c8
    double _audioAccLastDownTime;	// 720 = 0x2d0
    double _audioAccLastTapTime;	// 728 = 0x2d8
    _Bool _audioAccHoldSent;	// 736 = 0x2e0
    unsigned long long _currentSoundButton;	// 744 = 0x2e8
    unsigned long long _pendingSoundButton;	// 752 = 0x2f0
    unsigned long long _audioAccTouchGeneration;	// 760 = 0x2f8
    unsigned long long _audioAccPendingGeneration;	// 768 = 0x300
    AXEventRepresentation *_audioAccTapDownEventForRepost;	// 776 = 0x308
    AXEventRepresentation *_audioAccHeldEventForRepost;	// 784 = 0x310
    AXEventRepresentation *_audioAccHeldUpEventForRepost;	// 792 = 0x318
    AXEventRepresentation *_audioAccTapUpEventForRepost;	// 800 = 0x320
    SCRCTargetSelectorTimer *_audioAccTapTimer;	// 808 = 0x328
    struct __IOHIDEventSystemClient *_audioAccIOSystemPostBackClient;	// 816 = 0x330
    _Bool _nowPlayingState;	// 824 = 0x338
    unsigned long long _splitSlideFingerCount;	// 832 = 0x340
    id <VOTElementManagementProtocol> _elementManager;	// 840 = 0x348
    id <VOTRotorManagementProtocol> _rotorManager;	// 848 = 0x350
    id <VOTDirectTouchManagementProtocol> _directTouchManager;	// 856 = 0x358
    id <VOTEventFactoryCallbackProtocol> _delegate;	// 864 = 0x360
    AXDispatchTimer *_handwritingCaptureTimer;	// 872 = 0x368
    VOTDirectInteractionKeyboardManager *_directInteractionKeyboardManager;	// 880 = 0x370
    AXEventProcessor *_eventProcessor;	// 888 = 0x378
    VOTElement *_lastTouchedDirectTouchElement;	// 896 = 0x380
    VOTEvent *_lastGestureEvent;	// 904 = 0x388
}

+ (void)_updateZoomFrame:(struct CGRect)arg1;	// IMP=0x00000001000c79a0
+ (void)initialize;	// IMP=0x00000001000c4bc8
- (void).cxx_destruct;	// IMP=0x00000001000d3d28
@property(retain, nonatomic) VOTEvent *lastGestureEvent; // @synthesize lastGestureEvent=_lastGestureEvent;
@property(retain, nonatomic) VOTElement *lastTouchedDirectTouchElement; // @synthesize lastTouchedDirectTouchElement=_lastTouchedDirectTouchElement;
@property(retain, nonatomic) AXEventProcessor *eventProcessor; // @synthesize eventProcessor=_eventProcessor;
@property(readonly, nonatomic) VOTDirectInteractionKeyboardManager *directInteractionKeyboardManager; // @synthesize directInteractionKeyboardManager=_directInteractionKeyboardManager;
@property(retain, nonatomic, setter=_setHandwritingCaptureTimer:) AXDispatchTimer *_handwritingCaptureTimer; // @synthesize _handwritingCaptureTimer;
@property(nonatomic) __weak id <VOTEventFactoryCallbackProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <VOTDirectTouchManagementProtocol> directTouchManager; // @synthesize directTouchManager=_directTouchManager;
@property(nonatomic) __weak id <VOTRotorManagementProtocol> rotorManager; // @synthesize rotorManager=_rotorManager;
@property(nonatomic) __weak id <VOTElementManagementProtocol> elementManager; // @synthesize elementManager=_elementManager;
- (void)brailleGestureManager:(id)arg1 unsetForcedOrientationAndAnnounce:(_Bool)arg2;	// IMP=0x00000001000d3c10
- (void)brailleGestureManager:(id)arg1 setForcedOrientation:(long long)arg2 shouldAnnounce:(_Bool)arg3;	// IMP=0x00000001000d3bc4
- (void)gesturedTextInputManager:(id)arg1 accessCurrentGesturedTextInputElement:(CDUnknownBlockType)arg2;	// IMP=0x00000001000d3b54
- (void)gesturedTextInputManager:(id)arg1 moveToElementMatchingRotorType:(long long)arg2 inDirection:(long long)arg3;	// IMP=0x00000001000d3afc
- (id)votActionForEdgePanGestureState:(unsigned long long)arg1;	// IMP=0x00000001000d3ab8
- (double)_edgePanGestureStartThreshold;	// IMP=0x00000001000d3a64
- (void)_updateCurrentElementOrbGestureMode;	// IMP=0x00000001000d3854
- (_Bool)_shouldDismissPreviewOnLift;	// IMP=0x00000001000d3810
- (void)_liftPreviewFinger;	// IMP=0x00000001000d36a0
- (void)_switchToTrackingMode;	// IMP=0x00000001000d33f0
- (void)_simulatePeekAndSwitchToTapHoldMode;	// IMP=0x00000001000d2ecc
- (void)_simulatePop;	// IMP=0x00000001000d2cac
- (void)_reducePreviewFingerStartingForce:(double)arg1;	// IMP=0x00000001000d2af4
- (void)_simulatePreviewActionGesture;	// IMP=0x00000001000d28f0
- (_Bool)_isPreviewElementSelected;	// IMP=0x00000001000d2874
- (void)directInteractionModeStatus:(_Bool)arg1;	// IMP=0x00000001000d2778
@property(readonly, nonatomic) _Bool tapAndHoldMode; // @dynamic tapAndHoldMode;
@property(readonly, nonatomic) unsigned long long fingerCount; // @dynamic fingerCount;
- (void)_setFingerCount:(unsigned long long)arg1;	// IMP=0x00000001000d2750
@property(readonly, nonatomic) struct CGPoint fingerPosition; // @dynamic fingerPosition;
- (void)_handleEventWithData:(id)arg1;	// IMP=0x00000001000d24e4
- (void)_convertZoomRecordToDeviceRecord:(id)arg1;	// IMP=0x00000001000d2338
- (struct CGPoint)_convertZoomPointToDevicePoint:(struct CGPoint)arg1;	// IMP=0x00000001000d2284
- (struct CGRect)_convertFrame:(struct CGRect)arg1 toPortraitFromOrientation:(long long)arg2;	// IMP=0x00000001000d2174
- (struct CGPoint)convertDevicePointToZoomedPoint:(struct CGPoint)arg1;	// IMP=0x00000001000d1fbc
- (void)_handleKeyboardVisibilityChanged:(id)arg1;	// IMP=0x00000001000d1f20
- (void)_handleElementPreviewNotification:(id)arg1;	// IMP=0x00000001000d1ea8
- (void)_endSonificationScrubbingMode;	// IMP=0x00000001000d1ea4
- (void)_handleSonificationScrubbingPositionChanged;	// IMP=0x00000001000d1ea0
- (void)_beginSonificationScrubbingMode;	// IMP=0x00000001000d1e9c
- (_Bool)_canScribbleWithElement:(id)arg1;	// IMP=0x00000001000d1e3c
- (void)_liftFromTapAndHoldAndResetFingers:(_Bool)arg1;	// IMP=0x00000001000d1d68
- (void)_markTapAndHoldOffsetAsDirty;	// IMP=0x00000001000d1cdc
- (void)_scheduleUpdateScribbleTapAndHoldModeOffset;	// IMP=0x00000001000d1c40
- (void)_cancelUpdateScribbleTapAndHoldModeOffset;	// IMP=0x00000001000d1bac
- (void)_endScribbleTapAndHoldMode;	// IMP=0x00000001000d1a90
- (void)_startScribbleTapAndHoldModeTimeout;	// IMP=0x00000001000d19f4
- (void)_cancelScribbleTapAndHoldModeTimeout;	// IMP=0x00000001000d1960
- (void)_processTapAndHoldMode:(id)arg1;	// IMP=0x00000001000d1590
- (void)_processIdle:(struct CGPoint)arg1;	// IMP=0x00000001000d147c
- (void)_touchLiftAtPoint:(struct CGPoint)arg1;	// IMP=0x00000001000d1244
- (void)_touchDragAtPoint:(struct CGPoint)arg1 withForce:(double)arg2 altitude:(double)arg3 azimuth:(double)arg4;	// IMP=0x00000001000d0fa8
- (void)_touchDownAtPoint:(struct CGPoint)arg1 withForce:(double)arg2 altitude:(double)arg3 azimuth:(double)arg4;	// IMP=0x00000001000d0d0c
- (void)_contextlessTouchWithHandType:(unsigned int)arg1 location:(struct CGPoint)arg2 force:(double)arg3 altitude:(double)arg4 azimuth:(double)arg5;	// IMP=0x00000001000d0a04
- (void)_threeFingerHoldFired;	// IMP=0x00000001000d0994
- (void)_twoFingerHoldFired;	// IMP=0x00000001000d0990
- (void)_startTouchDownForTapAndHoldActionWithCenter:(id)arg1 force:(id)arg2 altitude:(id)arg3 azimuth:(id)arg4;	// IMP=0x00000001000d083c
- (struct CGPoint)_startPointForScribbleWithElement:(id)arg1 originalStartPoint:(struct CGPoint)arg2;	// IMP=0x00000001000d07c0
- (struct CGPoint)_updateTapAndHoldLocationDataForElement:(id)arg1;	// IMP=0x00000001000d03dc
- (void)_tapHoldFired:(id)arg1;	// IMP=0x00000001000cfb10
- (_Bool)_tapAndHoldModeIsForScribble;	// IMP=0x00000001000cfb00
- (void)_edgePanGestureSpeakHintTimerFired;	// IMP=0x00000001000cfa44
- (void)_stopMemorizingSession;	// IMP=0x00000001000cf954
- (void)_startLabelElementSoundPlay;	// IMP=0x00000001000cf8a8
- (void)firstResponderDidUpdate:(id)arg1;	// IMP=0x00000001000cf758
- (void)currentElementDidUpdate:(id)arg1;	// IMP=0x00000001000cf6e8
- (_Bool)directInteractionGestureInProgress;	// IMP=0x00000001000cf6e0
- (void)directInteractionElementsUpdated:(id)arg1;	// IMP=0x00000001000cf6a8
- (void)_cancelTapAndHold:(struct CGPoint)arg1 forScribble:(_Bool)arg2;	// IMP=0x00000001000cf3cc
- (void)_cancelTapAndHold:(struct CGPoint)arg1;	// IMP=0x00000001000cf3bc
- (void)_cancelTapAndHoldWithValue:(id)arg1;	// IMP=0x00000001000cf384
- (void)cancelTapAndHold:(struct CGPoint)arg1;	// IMP=0x00000001000cf310
- (void)_outputElementSummaryFired;	// IMP=0x00000001000cf2a4
@property(nonatomic) long long orientation; // @dynamic orientation;
- (void)_beginNativeSliding:(id)arg1;	// IMP=0x00000001000cf110
- (void)startTapAndHoldMode:(_Bool)arg1;	// IMP=0x00000001000cf0b8
- (id)currentElement;	// IMP=0x00000001000cf0a0
- (void)_commitDeferredZoomInfoIfAppropriate;	// IMP=0x00000001000cf080
- (void)_commitDeferredZoomInfo;	// IMP=0x00000001000cf020
- (void)_processGestureEvent:(id)arg1;	// IMP=0x00000001000ccdc4
- (void)_playFeedbackForGestureState:(unsigned long long)arg1 gestureComplete:(_Bool)arg2;	// IMP=0x00000001000ccdc0
- (void)_transitionToGestureState:(unsigned long long)arg1 playHaptic:(_Bool)arg2;	// IMP=0x00000001000ccc14
- (void)_transitionToGestureState:(unsigned long long)arg1;	// IMP=0x00000001000ccc04
- (id)_updateEdgePanGestureForState:(long long)arg1;	// IMP=0x00000001000cc5d4
- (double)_edgeGestureScaleFactor:(_Bool)arg1;	// IMP=0x00000001000cc570
- (_Bool)_willStartEdgePanGestureForEvent:(id)arg1;	// IMP=0x00000001000cc314
- (_Bool)_handleOrbEvent:(id)arg1;	// IMP=0x00000001000cc30c
- (id)_touchLocationsForGestureEvent:(id)arg1;	// IMP=0x00000001000cc060
- (void)updateOrientation;	// IMP=0x00000001000cc020
- (_Bool)_gestureEventIsInvalid:(id)arg1;	// IMP=0x00000001000cbf84
- (_Bool)directTouchElementsPresent;	// IMP=0x00000001000cbf5c
- (_Bool)_handleDirectInteractionEvent:(id)arg1;	// IMP=0x00000001000cb6ec
- (_Bool)_shouldUseGesturedTextInputManager;	// IMP=0x00000001000cb6b0
- (struct CGPoint)adjustedPointForFactoryPoint:(struct CGPoint)arg1 forOrientation:(long long)arg2;	// IMP=0x00000001000cb67c
- (void)gestureTappingCallbackWithFactory:(id)arg1;	// IMP=0x00000001000ca3f4
- (_Bool)_isStylusGesture;	// IMP=0x00000001000ca3a0
- (id)_handleGestureKeyboardTappingCallback:(unsigned long long)arg1 fingerCount:(unsigned long long)arg2 isDown:(_Bool)arg3 originalLocation:(struct CGPoint)arg4 convertedLocation:(struct CGPoint)arg5;	// IMP=0x00000001000ca1a0
- (void)gestureFactoryDidBeginSplitGesture:(id)arg1;	// IMP=0x00000001000ca118
- (void)gestureSplitTappingCallbackWithFactory:(id)arg1;	// IMP=0x00000001000ca00c
- (_Bool)shouldBlockSplitTapGestureWithFactory:(id)arg1;	// IMP=0x00000001000ca004
- (_Bool)_updateFingersInSystemControlLocation:(struct CGPoint)arg1 fingerCount:(unsigned long long)arg2 isLift:(_Bool)arg3;	// IMP=0x00000001000c9c28
- (struct CGPoint)_averagePointForLastDownEvent;	// IMP=0x00000001000c9a54
- (void)_resetSystemControlStatus;	// IMP=0x00000001000c9a04
- (void)_sendSystemControlEvent:(id)arg1;	// IMP=0x00000001000c9924
- (int)_systemControlPosition:(struct CGPoint)arg1 fingerCount:(unsigned long long)arg2;	// IMP=0x00000001000c9740
- (void)_systemControlLocationTimer;	// IMP=0x00000001000c9684
- (void)_volumeChangeTimer;	// IMP=0x00000001000c956c
- (void)_gestureTrackingCallbackWithFactory:(id)arg1 isHandlingSystemControlEvent:(_Bool)arg2;	// IMP=0x00000001000c91ac
- (void)_updateFirstnessOfTrackingEvent:(id)arg1;	// IMP=0x00000001000c9144
- (_Bool)_isEdgePressSupportedAtPosition:(struct CGPoint)arg1;	// IMP=0x00000001000c909c
- (_Bool)_shouldAttemptTracking;	// IMP=0x00000001000c9010
- (_Bool)_isTapAndHoldPending;	// IMP=0x00000001000c8fcc
- (void)gestureTrackingCallbackWithFactory:(id)arg1;	// IMP=0x00000001000c8fbc
- (void)gestureGutterUpCallbackWithFactory:(id)arg1;	// IMP=0x00000001000c8fb8
- (void)processEvent:(id)arg1;	// IMP=0x00000001000c8d94
- (_Bool)processEventAsGesturedTextInput:(id)arg1;	// IMP=0x00000001000c8cf8
- (id)_currentGesturedTextInputManager;	// IMP=0x00000001000c8ce4
- (id)_currentGesturedTextInputManagerAndCommandResolver:(id)arg1 forCommandResolver:(_Bool)arg2;	// IMP=0x00000001000c89fc
- (id)_commandResolver;	// IMP=0x00000001000c8974
- (void)_handleSOSMedicalIDShown;	// IMP=0x00000001000c88f0
- (int)_registerForAXNotifications:(_Bool)arg1;	// IMP=0x00000001000c8828
- (_Bool)registerForEvents;	// IMP=0x00000001000c81bc
- (void)unregisterForEvents;	// IMP=0x00000001000c8138
- (void)resetEventFactory;	// IMP=0x00000001000c8128
- (void)_handleRotorChangedNotification:(id)arg1;	// IMP=0x00000001000c7eec
- (void)dealloc;	// IMP=0x00000001000c7cac
- (void)shutdown;	// IMP=0x00000001000c7c3c
- (void)_registerForZoomListener;	// IMP=0x00000001000c79c4
- (void)_registerForIOHIDUsage;	// IMP=0x00000001000c7630
- (void)nowPlayingChanged:(id)arg1;	// IMP=0x00000001000c75a0
- (void)_audioAccProcessTapUpdates;	// IMP=0x00000001000c7080
- (void)_audioAccAnnounceButton;	// IMP=0x00000001000c6ba8
- (void)_audioAccPostEvent:(id)arg1 withButton:(unsigned long long)arg2 timeOffset:(double)arg3;	// IMP=0x00000001000c6a8c
- (void)_audioAccPostEvent:(id)arg1 withButton:(unsigned long long)arg2;	// IMP=0x00000001000c6a7c
- (_Bool)_audioAccessoryEventFilter:(id)arg1;	// IMP=0x00000001000c6684
- (_Bool)_atvEventFilter:(id)arg1;	// IMP=0x00000001000c6300
- (id)_preprocessEventForSimulator:(id)arg1;	// IMP=0x00000001000c613c
- (void)_handleIOHIDEvent:(id)arg1;	// IMP=0x00000001000c5974
- (id)_denormalizeEventRepresentation:(id)arg1;	// IMP=0x00000001000c595c
- (void)_wakeTapFired;	// IMP=0x00000001000c5874
- (_Bool)shouldSnarfEventForTapWakeGesture:(id)arg1;	// IMP=0x00000001000c57bc
- (void)_updateTapSpeedFromPreferences;	// IMP=0x00000001000c56d4
- (id)init;	// IMP=0x00000001000c4c34
- (_Bool)mapsExplorationInputActive;	// IMP=0x00000001000c4bb0
- (id)_mapsExplorationGestureManager;	// IMP=0x00000001000c4b58
@property(readonly, nonatomic) _Bool brailleInputActive;
- (id)_brailleGestureManager;	// IMP=0x00000001000c4adc
- (id)gestureFactory;	// IMP=0x00000001000c4ad4
- (void)setGestureFactory:(id)arg1;	// IMP=0x00000001000c4ac8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

