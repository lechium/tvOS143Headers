//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, VOTBrailleGestureHalfPattern;

@interface VOTBrailleGestureDataRepository : NSObject
{
    NSString *_recordedDriftsFilePath;	// 8 = 0x8
    NSString *_calibratedDotPositionsFilePath;	// 16 = 0x10
    long long _typingMode;	// 24 = 0x18
    struct CGSize _keyboardSize;	// 32 = 0x20
    _Bool _shouldUseEightDotBraille;	// 48 = 0x30
    _Bool _areDotNumberPositionsCalibrated;	// 49 = 0x31
    VOTBrailleGestureHalfPattern *_leftDotPositions;	// 56 = 0x38
    VOTBrailleGestureHalfPattern *_rightDotPositions;	// 64 = 0x40
    NSMutableArray *_leftDrifts;	// 72 = 0x48
    NSMutableArray *_rightDrifts;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000001000ea6cc
@property(retain, nonatomic) NSMutableArray *rightDrifts; // @synthesize rightDrifts=_rightDrifts;
@property(retain, nonatomic) NSMutableArray *leftDrifts; // @synthesize leftDrifts=_leftDrifts;
@property(retain, nonatomic) VOTBrailleGestureHalfPattern *rightDotPositions; // @synthesize rightDotPositions=_rightDotPositions;
@property(retain, nonatomic) VOTBrailleGestureHalfPattern *leftDotPositions; // @synthesize leftDotPositions=_leftDotPositions;
- (void)_loadAllDataFromFiles;	// IMP=0x00000001000e9e4c
- (id)_loadDataFromFile:(id)arg1;	// IMP=0x00000001000e9d78
- (void)_repairFileProtectionClassOnPathIfNecessary:(id)arg1;	// IMP=0x00000001000e9b1c
- (id)_arrayOfDictionariesFromPointValues:(id)arg1;	// IMP=0x00000001000e9998
- (id)_mutableArrayOfPointValuesFromDictionaries:(id)arg1;	// IMP=0x00000001000e9814
- (id)_mutableArrayOfZeroPointValues:(unsigned long long)arg1;	// IMP=0x00000001000e9758
- (void)_generateInitialData;	// IMP=0x00000001000e9734
- (void)_generateScreenAwayInitialData;	// IMP=0x00000001000e9468
- (void)_getMiddleDotsForSixDotTableTopInitialDataForLeft:(struct CGPoint *)arg1 right:(struct CGPoint *)arg2 angleFromXAxisToLineOfHand:(double)arg3 topLeftDot:(struct CGPoint)arg4;	// IMP=0x00000001000e93ec
- (void)_getEightDotTableTopMiddleLeftDot:(struct CGPoint *)arg1 middleRightDot:(struct CGPoint *)arg2 bottomLeftDot:(struct CGPoint *)arg3 bottomRightDot:(struct CGPoint *)arg4 angleFromXAxisToLineOfHand:(double)arg5 topLeftDot:(struct CGPoint)arg6;	// IMP=0x00000001000e9320
- (void)_generateTableTopInitialData;	// IMP=0x00000001000e8e4c
- (id)_recordedDriftsFilePath;	// IMP=0x00000001000e8d68
- (id)_calibratedDotPositionsFilePath;	// IMP=0x00000001000e8c84
- (id)_gestureDataDirectory;	// IMP=0x00000001000e8a74
- (id)_filenameSuffix;	// IMP=0x00000001000e89f0
- (void)_deleteCalibratedData;	// IMP=0x00000001000e88a8
- (void)_resetLearnedData;	// IMP=0x00000001000e8720
- (unsigned long long)_totalNumberOfDots;	// IMP=0x00000001000e8708
- (id)_adjustPointValue:(id)arg1 withDrift:(struct CGPoint)arg2;	// IMP=0x00000001000e86a8
- (struct CGPoint)_averageRightDrift;	// IMP=0x00000001000e8640
- (struct CGPoint)_averageLeftDrift;	// IMP=0x00000001000e85d8
- (struct CGPoint)_averageRecentDriftFromDrifts:(id)arg1;	// IMP=0x00000001000e851c
- (void)_removeInstanceOfDriftFromArray:(id)arg1;	// IMP=0x00000001000e844c
- (void)_addInstanceOfDrift:(struct CGPoint)arg1 toArray:(id)arg2 forPattern:(id)arg3;	// IMP=0x00000001000e828c
- (struct CGPoint)_driftOfHalfPattern:(id)arg1 relativeToDotPositions:(id)arg2;	// IMP=0x00000001000e7ff8
- (struct CGPoint)_driftByAddingDisplacementOfPointValue:(id)arg1 fromPointValue:(id)arg2 toDrift:(struct CGPoint)arg3;	// IMP=0x00000001000e7f2c
- (_Bool)areDotNumberPositionsCalibrated;	// IMP=0x00000001000e7f24
- (void)calibrateWithDotNumberPositions:(id)arg1;	// IMP=0x00000001000e7af8
- (_Bool)_allDotsAreOnScreen:(id)arg1 withDrift:(struct CGPoint)arg2;	// IMP=0x00000001000e7890
- (void)_appendDots:(id)arg1 toPositionsArray:(id)arg2 withDrift:(struct CGPoint)arg3;	// IMP=0x00000001000e7700
- (void)_orderedLeftDots:(id *)arg1 rightDots:(id *)arg2;	// IMP=0x00000001000e75f8
- (id)dotNumberPositions;	// IMP=0x00000001000e750c
- (_Bool)saveDrift;	// IMP=0x00000001000e71fc
- (void)removeDriftAddedByPattern:(id)arg1;	// IMP=0x00000001000e6fb8
- (void)updateDriftWithPattern:(id)arg1;	// IMP=0x00000001000e6be8
- (id)halfPatternsForNumberOfDots:(unsigned long long)arg1 side:(unsigned long long)arg2;	// IMP=0x00000001000e6824
- (id)initWithTypingMode:(long long)arg1 keyboardSize:(struct CGSize)arg2 shouldUseEightDotBraille:(_Bool)arg3;	// IMP=0x00000001000e67a0

@end

