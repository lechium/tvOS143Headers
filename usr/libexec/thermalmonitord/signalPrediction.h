//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MLModel;

@interface signalPrediction : NSObject
{
    MLModel *_model;	// 8 = 0x8
}

+ (void)loadContentsOfURL:(id)arg1 configuration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000010003ea04
+ (void)loadWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000010003e9b4
+ (id)URLOfModelInThisBundle;	// IMP=0x000000010003e798
@property(readonly, nonatomic) MLModel *model; // @synthesize model=_model;
- (id)predictionsFromInputs:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000010003ec44
- (id)predictionFromTemp:(double)arg1 temp1:(double)arg2 temp2:(double)arg3 temp3:(double)arg4 power:(double)arg5 power1:(double)arg6 power2:(double)arg7 power3:(double)arg8 error:(id *)arg9;	// IMP=0x000000010003eb98
- (id)predictionFromFeatures:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000010003eb2c
- (id)predictionFromFeatures:(id)arg1 error:(id *)arg2;	// IMP=0x000000010003eadc
- (id)initWithContentsOfURL:(id)arg1 configuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000010003e964
- (id)initWithContentsOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000010003e914
- (id)initWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x000000010003e8c0
- (id)init;	// IMP=0x000000010003e880
- (id)initWithMLModel:(id)arg1;	// IMP=0x000000010003e830

@end

