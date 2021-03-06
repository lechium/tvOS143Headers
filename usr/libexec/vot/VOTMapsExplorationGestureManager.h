//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VOTGesturedTextInputManager.h"

#import "VOTGesturedTextInputManagerRequiredMethods-Protocol.h"

@class NSArray;
@protocol VOTMapsExplorationGestureManagerDelegate;

@interface VOTMapsExplorationGestureManager : VOTGesturedTextInputManager <VOTGesturedTextInputManagerRequiredMethods>
{
    NSArray *_explorationSegments;	// 8 = 0x8
    long long _currentIndex;	// 16 = 0x10
    long long _selectionIndex;	// 24 = 0x18
    double _movedAngle;	// 32 = 0x20
    double _lastAngle;	// 40 = 0x28
    _Bool _recentlyMoved;	// 48 = 0x30
    struct CGPoint _currentLocation;	// 56 = 0x38
    struct CGPoint _currentCenter;	// 72 = 0x48
    id <VOTMapsExplorationGestureManagerDelegate> _mapsExplorationGestureManagerDelegate;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000100053ef0
@property(nonatomic) __weak id <VOTMapsExplorationGestureManagerDelegate> mapsExplorationGestureManagerDelegate; // @synthesize mapsExplorationGestureManagerDelegate=_mapsExplorationGestureManagerDelegate;
- (_Bool)isWordBackspaceEvent:(id)arg1;	// IMP=0x0000000100053eb4
- (_Bool)isSpaceEvent:(id)arg1;	// IMP=0x0000000100053eac
- (_Bool)isReturnKeyEvent:(id)arg1;	// IMP=0x0000000100053ea4
- (_Bool)isPreviousSuggestionEvent:(id)arg1;	// IMP=0x0000000100053e9c
- (_Bool)isNextSuggestionEvent:(id)arg1;	// IMP=0x0000000100053e94
- (_Bool)isNextBrailleTableEvent:(id)arg1;	// IMP=0x0000000100053e8c
- (_Bool)isNextKeyboardLanguageEvent:(id)arg1;	// IMP=0x0000000100053e84
- (_Bool)isLaunchAppEvent:(id)arg1;	// IMP=0x0000000100053e7c
- (_Bool)isBackspaceEvent:(id)arg1;	// IMP=0x0000000100053e74
- (void)applyPreviousSuggestionToElement:(id)arg1;	// IMP=0x0000000100053e70
- (void)applyNextSuggestionToElement:(id)arg1;	// IMP=0x0000000100053e6c
- (_Bool)processTouchLocations:(id)arg1 isFirstTouch:(_Bool)arg2;	// IMP=0x0000000100053e64
- (_Bool)processTapWithFingerCount:(unsigned long long)arg1;	// IMP=0x0000000100053e5c
- (void)_playSound:(id)arg1;	// IMP=0x0000000100053dec
- (void)_speakText:(id)arg1 doesNotInterrupt:(_Bool)arg2 cannotBeInterrupted:(_Bool)arg3;	// IMP=0x0000000100053d3c
- (long long)indexForPoint:(struct CGPoint)arg1;	// IMP=0x0000000100053ac8
- (void)processTouch:(struct CGPoint)arg1;	// IMP=0x0000000100053974
- (id)explorationSegmentsForRoadsWithAngles:(id)arg1;	// IMP=0x0000000100053658
- (_Bool)processEvent:(id)arg1;	// IMP=0x000000010005343c
- (_Bool)handleVerbosityChangeIncreasing:(_Bool)arg1;	// IMP=0x00000001000533b0
- (_Bool)handleSelection;	// IMP=0x0000000100053154
- (_Bool)handleTracking:(struct CGPoint)arg1;	// IMP=0x0000000100052f68
- (void)setActive:(_Bool)arg1;	// IMP=0x0000000100052dc8
- (void)endExploration;	// IMP=0x0000000100052d88
- (void)beginExploration;	// IMP=0x0000000100052d04
- (_Bool)explorationIsPending;	// IMP=0x0000000100052cb8
- (_Bool)explorationIsActive;	// IMP=0x0000000100052c6c
- (id)currentIntersectionInformation;	// IMP=0x0000000100052c18
- (void)updateCurrentLocation;	// IMP=0x0000000100052bc8
- (void)updateExplorationSegments;	// IMP=0x0000000100052a98
- (id)currentMap;	// IMP=0x0000000100052958
- (id)init;	// IMP=0x0000000100052844

@end

