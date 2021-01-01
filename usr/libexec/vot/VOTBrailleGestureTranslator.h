//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VOTBrailleGesturePatternRecognitionEngineDelegate-Protocol.h"

@class BRLTTranslationService, NSMutableString, NSString, VOTBrailleGesturePatternRecognitionEngine;
@protocol VOTBrailleGestureTranslatorDelegate;

@interface VOTBrailleGestureTranslator : NSObject <VOTBrailleGesturePatternRecognitionEngineDelegate>
{
    VOTBrailleGesturePatternRecognitionEngine *_recognitionEngine;	// 8 = 0x8
    NSMutableString *_brailleBuffer;	// 16 = 0x10
    _Bool _active;	// 24 = 0x18
    _Bool _shouldUseContractedBraille;	// 25 = 0x19
    _Bool _unitTesting;	// 26 = 0x1a
    id <VOTBrailleGestureTranslatorDelegate> _delegate;	// 32 = 0x20
    long long _typingMode;	// 40 = 0x28
    BRLTTranslationService *_translationService;	// 48 = 0x30
    struct CGSize _keyboardSize;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000010002cd08
@property(retain, nonatomic) BRLTTranslationService *translationService; // @synthesize translationService=_translationService;
@property(readonly, nonatomic) struct CGSize keyboardSize; // @synthesize keyboardSize=_keyboardSize;
@property(readonly, nonatomic) long long typingMode; // @synthesize typingMode=_typingMode;
@property(nonatomic, getter=isUnitTesting) _Bool unitTesting; // @synthesize unitTesting=_unitTesting;
@property(nonatomic) _Bool shouldUseContractedBraille; // @synthesize shouldUseContractedBraille=_shouldUseContractedBraille;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak id <VOTBrailleGestureTranslatorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)textForBraille:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x000000010002c9c8
- (void)clearBrailleBuffer;	// IMP=0x000000010002c930
- (_Bool)_shouldUseEightDotBraille;	// IMP=0x000000010002c920
- (void)_resetTranslator;	// IMP=0x000000010002c6a0
- (_Bool)areDotNumberPositionsCalibrated;	// IMP=0x000000010002c690
- (void)savePersistentGestureData;	// IMP=0x000000010002c680
- (void)calibrateWithTouchPoints:(id)arg1;	// IMP=0x000000010002c600
- (id)dotNumberPositions;	// IMP=0x000000010002c5f0
- (void)setTypingMode:(long long)arg1 keyboardSize:(struct CGSize)arg2 shouldUseEightDotBraille:(_Bool)arg3 shouldReverseDots:(_Bool)arg4;	// IMP=0x000000010002c5e0
- (id)printBrailleForInput:(id)arg1 error:(id *)arg2;	// IMP=0x000000010002c3ac
- (void)didPressReturnKey;	// IMP=0x000000010002c340
- (void)didInputBackspace;	// IMP=0x000000010002c298
- (_Bool)performBrailleBufferBackspace:(id *)arg1;	// IMP=0x000000010002c154
- (void)didInputSpace;	// IMP=0x000000010002c0e8
- (id)translateExistingInputWithMode:(unsigned long long)arg1;	// IMP=0x000000010002c004
- (id)_trimCommonPrefixWithString:(id)arg1 fromString:(id)arg2;	// IMP=0x000000010002bf58
- (id)translatedTextForPrintBraille:(id)arg1 mode:(unsigned long long)arg2;	// IMP=0x000000010002b750
- (id)translatedTextOfBufferWithMode:(unsigned long long)arg1;	// IMP=0x000000010002b73c
- (id)popLastBrailleCellFromBuffer;	// IMP=0x000000010002b644
- (void)addPrintBrailleToBuffer:(id)arg1 language:(id)arg2;	// IMP=0x000000010002b5a4
- (id)printBrailleForAllTouchPointsInInput:(id)arg1 shouldLearn:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000010002b34c
- (id)init;	// IMP=0x000000010002b168

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
