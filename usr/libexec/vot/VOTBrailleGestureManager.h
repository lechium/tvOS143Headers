//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VOTGesturedTextInputManager.h"

#import "BKSAccelerometerDelegate-Protocol.h"
#import "VOTBrailleGestureTranslatorDelegate-Protocol.h"
#import "VOTGesturedTextInputManagerRequiredMethods-Protocol.h"

@class AXDispatchTimer, BKSAccelerometer, NSArray, NSDictionary, NSMutableDictionary, NSString, VOTBrailleGestureSpellingSuggestionHandler, VOTBrailleGestureTranslator, VOTTextMovementManager;
@protocol BSInvalidatable, VOTBrailleGestureManagerDelegate;

@interface VOTBrailleGestureManager : VOTGesturedTextInputManager <VOTBrailleGestureTranslatorDelegate, BKSAccelerometerDelegate, VOTGesturedTextInputManagerRequiredMethods>
{
    VOTBrailleGestureTranslator *_gestureTranslator;	// 8 = 0x8
    VOTBrailleGestureSpellingSuggestionHandler *_spellingSuggestionHandler;	// 16 = 0x10
    BKSAccelerometer *_accelerometer;	// 24 = 0x18
    NSMutableDictionary *_allTouchLocationsByIdentifier;	// 32 = 0x20
    NSMutableDictionary *_firstTouchLocationsByIdentifier;	// 40 = 0x28
    _Bool _shouldUpdateDotPositions;	// 48 = 0x30
    _Bool _exploring;	// 49 = 0x31
    _Bool _splitting;	// 50 = 0x32
    _Bool _didMoveFingersTooFarForInput;	// 51 = 0x33
    _Bool _didAnnounceExplorationMode;	// 52 = 0x34
    _Bool _didAnnounceBrailleTypingProperties;	// 53 = 0x35
    _Bool _didStartFullGesture;	// 54 = 0x36
    _Bool _didEnterInvalidGesture;	// 55 = 0x37
    id <VOTBrailleGestureManagerDelegate> _brailleGestureManagerDelegate;	// 56 = 0x38
    long long _typingMode;	// 64 = 0x40
    long long _keyboardOrientation;	// 72 = 0x48
    NSString *_lastPrintBrailleCharacter;	// 80 = 0x50
    NSDictionary *_lastTouchLocationsByIdentifier;	// 88 = 0x58
    AXDispatchTimer *_speakingDelayTimer;	// 96 = 0x60
    AXDispatchTimer *_brailleTypingPropertiesAnnouncementTimer;	// 104 = 0x68
    AXDispatchTimer *_warningTonesTimer;	// 112 = 0x70
    AXDispatchTimer *_lockScreenDimmingTimer;	// 120 = 0x78
    AXDispatchTimer *_logBSIUsageTimer;	// 128 = 0x80
    id <BSInvalidatable> _disableIdleTimerAssertion;	// 136 = 0x88
    VOTTextMovementManager *_movementManager;	// 144 = 0x90
    NSArray *_calibrationStartTouchPoints;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000001000fc864
@property(retain, nonatomic) NSArray *calibrationStartTouchPoints; // @synthesize calibrationStartTouchPoints=_calibrationStartTouchPoints;
@property(retain, nonatomic) VOTTextMovementManager *movementManager; // @synthesize movementManager=_movementManager;
@property(retain, nonatomic) id <BSInvalidatable> disableIdleTimerAssertion; // @synthesize disableIdleTimerAssertion=_disableIdleTimerAssertion;
@property(retain, nonatomic) AXDispatchTimer *logBSIUsageTimer; // @synthesize logBSIUsageTimer=_logBSIUsageTimer;
@property(retain, nonatomic) AXDispatchTimer *lockScreenDimmingTimer; // @synthesize lockScreenDimmingTimer=_lockScreenDimmingTimer;
@property(nonatomic) _Bool didEnterInvalidGesture; // @synthesize didEnterInvalidGesture=_didEnterInvalidGesture;
@property(nonatomic) _Bool didStartFullGesture; // @synthesize didStartFullGesture=_didStartFullGesture;
@property(retain, nonatomic) AXDispatchTimer *warningTonesTimer; // @synthesize warningTonesTimer=_warningTonesTimer;
@property(retain, nonatomic) AXDispatchTimer *brailleTypingPropertiesAnnouncementTimer; // @synthesize brailleTypingPropertiesAnnouncementTimer=_brailleTypingPropertiesAnnouncementTimer;
@property(retain, nonatomic) AXDispatchTimer *speakingDelayTimer; // @synthesize speakingDelayTimer=_speakingDelayTimer;
@property(retain, nonatomic) NSDictionary *lastTouchLocationsByIdentifier; // @synthesize lastTouchLocationsByIdentifier=_lastTouchLocationsByIdentifier;
@property(copy, nonatomic) NSString *lastPrintBrailleCharacter; // @synthesize lastPrintBrailleCharacter=_lastPrintBrailleCharacter;
@property(nonatomic) long long keyboardOrientation; // @synthesize keyboardOrientation=_keyboardOrientation;
@property(nonatomic) _Bool didAnnounceBrailleTypingProperties; // @synthesize didAnnounceBrailleTypingProperties=_didAnnounceBrailleTypingProperties;
@property(nonatomic) _Bool didAnnounceExplorationMode; // @synthesize didAnnounceExplorationMode=_didAnnounceExplorationMode;
@property(nonatomic) _Bool didMoveFingersTooFarForInput; // @synthesize didMoveFingersTooFarForInput=_didMoveFingersTooFarForInput;
@property(nonatomic, getter=isSplitting) _Bool splitting; // @synthesize splitting=_splitting;
@property(nonatomic, getter=isExploring) _Bool exploring; // @synthesize exploring=_exploring;
@property(nonatomic) _Bool shouldUpdateDotPositions; // @synthesize shouldUpdateDotPositions=_shouldUpdateDotPositions;
@property(nonatomic) long long typingMode; // @synthesize typingMode=_typingMode;
@property(nonatomic) __weak id <VOTBrailleGestureManagerDelegate> brailleGestureManagerDelegate; // @synthesize brailleGestureManagerDelegate=_brailleGestureManagerDelegate;
- (void)accelerometer:(id)arg1 didChangeDeviceOrientation:(long long)arg2;	// IMP=0x00000001000fc4e8
- (void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6;	// IMP=0x00000001000fc4e4
- (void)_cancelWarningTones;	// IMP=0x00000001000fc48c
- (void)_playWarningTones:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000fc20c
- (void)_playWarningTone;	// IMP=0x00000001000fc194
- (void)_playBonk;	// IMP=0x00000001000fc11c
- (id)_outputRequestForText:(id)arg1 hint:(id)arg2 useKeyboardLanguage:(_Bool)arg3 shouldQueue:(_Bool)arg4 isInsert:(_Bool)arg5 isSuggestion:(_Bool)arg6 isDelete:(_Bool)arg7 speakLiterally:(_Bool)arg8 otherLanguage:(id)arg9;	// IMP=0x00000001000fbc1c
- (void)_speakText:(id)arg1 hint:(id)arg2 useKeyboardLanguage:(_Bool)arg3 shouldQueue:(_Bool)arg4 isInsert:(_Bool)arg5 isSuggestion:(_Bool)arg6 isDelete:(_Bool)arg7 speakLiterally:(_Bool)arg8 otherLanguage:(id)arg9;	// IMP=0x00000001000fbb3c
- (void)_speakText:(id)arg1 hint:(id)arg2;	// IMP=0x00000001000fbacc
- (void)_speakText:(id)arg1 useKeyboardLanguage:(_Bool)arg2 shouldQueue:(_Bool)arg3 isInsert:(_Bool)arg4 isDelete:(_Bool)arg5 speakLiterally:(_Bool)arg6;	// IMP=0x00000001000fba84
- (void)_speakText:(id)arg1 useKeyboardLanguage:(_Bool)arg2 shouldQueue:(_Bool)arg3;	// IMP=0x00000001000fba6c
- (void)_speakText:(id)arg1 useKeyboardLanguage:(_Bool)arg2;	// IMP=0x00000001000fba5c
- (void)_flashInsertedTextIfAllowed:(id)arg1;	// IMP=0x00000001000fb9b8
- (void)_updateBrailleUI;	// IMP=0x00000001000fb874
- (void)_handleTouchPoints:(id)arg1;	// IMP=0x00000001000fb1c0
- (_Bool)_handleCarriageReturnSwipe;	// IMP=0x00000001000fb120
- (id)_languageCodeForSpeakingAndBrailleTranslation;	// IMP=0x00000001000faeac
- (id)_languageCodeForSpellChecking;	// IMP=0x00000001000fae48
- (id)_languageCodeForBrailleTable;	// IMP=0x00000001000fad78
- (void)_handleTranslateImmediately;	// IMP=0x00000001000fabc8
- (void)_handleChangeBrailleMode:(_Bool)arg1;	// IMP=0x00000001000fa780
- (id)_printBrailleForTouchPoints:(id)arg1;	// IMP=0x00000001000fa67c
- (void)_inputBrailleFromSeriesOfTouchPoints:(id)arg1;	// IMP=0x00000001000fa604
- (void)_inputBrailleFromTouchPoints:(id)arg1;	// IMP=0x00000001000fa544
- (_Bool)_isAdjustTextSegmentTypeEvent:(id)arg1;	// IMP=0x00000001000fa480
- (_Bool)_isAdjustTextSegmentEvent:(id)arg1;	// IMP=0x00000001000fa3bc
- (_Bool)_isSelectEvent:(id)arg1;	// IMP=0x00000001000fa2f8
- (_Bool)_isCarriageReturnSwipeEvent:(id)arg1;	// IMP=0x00000001000fa29c
- (_Bool)_isToggleLockedConfigurationEvent:(id)arg1;	// IMP=0x00000001000fa240
- (_Bool)_isTranslateImmediatelyEvent:(id)arg1;	// IMP=0x00000001000fa1e4
- (_Bool)_isPreviousBrailleModeEvent:(id)arg1;	// IMP=0x00000001000fa188
- (_Bool)_isNextBrailleModeEvent:(id)arg1;	// IMP=0x00000001000fa12c
- (void)_scheduleExploringModeIfNeeded;	// IMP=0x00000001000f9f84
- (void)_updateDotNumberCirclesForPrintBraille:(id)arg1;	// IMP=0x00000001000f9e20
- (id)_newBrailleInput;	// IMP=0x00000001000f9db8
- (long long)valueChangeOriginator;	// IMP=0x00000001000f9db0
- (void)_handleFingersOnScreen:(id)arg1 didAddOrRemoveFingers:(_Bool)arg2;	// IMP=0x00000001000f97e8
- (void)_cleanUpTouchesIncludingCalibrationStartPoints:(_Bool)arg1;	// IMP=0x00000001000f96dc
- (_Bool)_handleAllFingersLifted;	// IMP=0x00000001000f9408
- (void)_handleCalibrationTimeout;	// IMP=0x00000001000f9358
- (id)_spokenStringForPrintBraille:(id)arg1 useLongForm:(_Bool)arg2;	// IMP=0x00000001000f90f8
- (id)_spokenStringForPrintBraille:(id)arg1;	// IMP=0x00000001000f90e8
- (void)_enumerateDotNumbersForPrintBraille:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000f8f8c
- (void)_speakPrintBrailleForExploration;	// IMP=0x00000001000f8d08
- (void)_calibrateWithTouchPoints:(id)arg1;	// IMP=0x00000001000f8c5c
- (id)_stringWithFirstPart:(id)arg1 secondPart:(id)arg2;	// IMP=0x00000001000f8bf4
- (void)_endExploringDotPatterns;	// IMP=0x00000001000f8ba8
- (void)_beginExploringDotPatterns;	// IMP=0x00000001000f8af0
- (id)_touchPointsForCalibrationGivenFirstPoints:(id)arg1 lastPoints:(id)arg2;	// IMP=0x00000001000f8a5c
- (_Bool)_isCalibrationEndPattern:(id)arg1;	// IMP=0x00000001000f89d8
- (_Bool)_isCalibrationStartPattern:(id)arg1;	// IMP=0x00000001000f8954
- (_Bool)_patternIncludesEveryFinger:(id)arg1;	// IMP=0x00000001000f88a8
- (_Bool)_deviceSupportsMoreThanFiveTouches;	// IMP=0x00000001000f88a4
- (_Bool)_requiresLaTeXInput;	// IMP=0x00000001000f878c
- (_Bool)_shouldUseContractedBraille;	// IMP=0x00000001000f8774
- (_Bool)_hasContractedBraillePreference;	// IMP=0x00000001000f871c
- (_Bool)_canUseContractedBraille;	// IMP=0x00000001000f86d0
- (void)_updateShouldUseContractedBraille;	// IMP=0x00000001000f8674
- (void)_updateBrailleTypingPropertiesAndDelayAnnouncement:(_Bool)arg1 forUnlockConfiguration:(_Bool)arg2;	// IMP=0x00000001000f8180
- (void)_updateBrailleTypingPropertiesAndDelayAnnouncement:(_Bool)arg1;	// IMP=0x00000001000f8170
- (void)_announceBrailleTypingPropertiesIncludingOrientation:(_Bool)arg1 typingMode:(_Bool)arg2 brailleMode:(_Bool)arg3 forUnlockConfiguration:(_Bool)arg4;	// IMP=0x00000001000f7e10
- (id)_descriptionForCurrentBrailleMode;	// IMP=0x00000001000f7d1c
- (void)_appendOrientationToAnnouncement:(id)arg1;	// IMP=0x00000001000f79b0
- (unsigned long long)_numberOfDots;	// IMP=0x00000001000f7984
- (_Bool)_shouldUseEightDotBraille;	// IMP=0x00000001000f790c
- (void)eventFactoryDidBeginSplitGesture:(id)arg1;	// IMP=0x00000001000f7860
- (id)hintForAppLaunch;	// IMP=0x00000001000f7844
- (_Bool)shouldAllowRotorEvents;	// IMP=0x00000001000f7814
- (void)didInputWordBackspace;	// IMP=0x00000001000f77fc
- (void)didInputBackspace;	// IMP=0x00000001000f77b4
- (_Bool)performCustomWordBackspace;	// IMP=0x00000001000f75a0
- (_Bool)performCustomBackspace;	// IMP=0x00000001000f7408
- (void)applyPreviousSuggestionToElement:(id)arg1;	// IMP=0x00000001000f73f8
- (void)applyNextSuggestionToElement:(id)arg1;	// IMP=0x00000001000f73e8
- (void)_applySuggestionToElement:(id)arg1 direction:(long long)arg2;	// IMP=0x00000001000f71d8
- (void)_outputChosenSuggestion:(id)arg1;	// IMP=0x00000001000f7108
- (void)_insertCurrentSelectedSuggestion:(id)arg1;	// IMP=0x00000001000f6fec
- (_Bool)performNextBrailleTableCommand;	// IMP=0x00000001000f6eec
- (_Bool)isNextBrailleTableEvent:(id)arg1;	// IMP=0x00000001000f6e90
- (_Bool)performNextKeyboardLanguage;	// IMP=0x00000001000f6e40
- (_Bool)isNextKeyboardLanguageEvent:(id)arg1;	// IMP=0x00000001000f6de4
- (_Bool)isLaunchAppEvent:(id)arg1;	// IMP=0x00000001000f6d48
- (_Bool)isPreviousSuggestionEvent:(id)arg1;	// IMP=0x00000001000f6cec
- (_Bool)isNextSuggestionEvent:(id)arg1;	// IMP=0x00000001000f6c90
- (_Bool)isWordBackspaceEvent:(id)arg1;	// IMP=0x00000001000f6c34
- (_Bool)isBackspaceEvent:(id)arg1;	// IMP=0x00000001000f6bd8
- (_Bool)isSpaceEvent:(id)arg1;	// IMP=0x00000001000f6b7c
- (_Bool)isReturnKeyEvent:(id)arg1;	// IMP=0x00000001000f6b20
@property(readonly, nonatomic) unsigned long long mode;
- (_Bool)_handleAdjustTextSegmentTypeEvent:(id)arg1;	// IMP=0x00000001000f6988
- (_Bool)_shouldReverseDots;	// IMP=0x00000001000f6934
- (void)updateWithString:(id)arg1;	// IMP=0x00000001000f68a0
- (void)_handleWordBreak:(id)arg1;	// IMP=0x00000001000f67bc
- (void)sendCarriageReturnForElement:(id)arg1;	// IMP=0x00000001000f6714
- (void)pressReturnKeyForElement:(id)arg1;	// IMP=0x00000001000f6514
- (void)inputSpaceForElement:(id)arg1;	// IMP=0x00000001000f62cc
- (_Bool)processTouchLocations:(id)arg1 isFirstTouch:(_Bool)arg2;	// IMP=0x00000001000f6100
- (_Bool)processTapWithFingerCount:(unsigned long long)arg1;	// IMP=0x00000001000f60f8
- (_Bool)processEvent:(id)arg1;	// IMP=0x00000001000f5bb8
- (void)clearCurrentString;	// IMP=0x00000001000f5b60
- (void)setActive:(_Bool)arg1;	// IMP=0x00000001000f54ac
- (void)dealloc;	// IMP=0x00000001000f5438
- (id)init;	// IMP=0x00000001000f52b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
