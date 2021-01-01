/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MLFeatureProvider.h>

@class MLMultiArray, NSSet;

@interface SNVGGishBeepModelOutput : NSObject <MLFeatureProvider> {

	MLMultiArray* _input_1;
	MLMultiArray* _Confidence;
	MLMultiArray* _Detected;
	MLMultiArray* _detectedHistoryOut;

}

@property (nonatomic,retain) MLMultiArray * input_1;                         //@synthesize input_1=_input_1 - In the implementation block
@property (nonatomic,retain) MLMultiArray * Confidence;                      //@synthesize Confidence=_Confidence - In the implementation block
@property (nonatomic,retain) MLMultiArray * Detected;                        //@synthesize Detected=_Detected - In the implementation block
@property (nonatomic,retain) MLMultiArray * detectedHistoryOut;              //@synthesize detectedHistoryOut=_detectedHistoryOut - In the implementation block
@property (nonatomic,readonly) NSSet * featureNames; 
-(void)setConfidence:(MLMultiArray *)arg1 ;
-(id)featureValueForName:(id)arg1 ;
-(NSSet *)featureNames;
-(void)setDetected:(MLMultiArray *)arg1 ;
-(id)initWithInput_1:(id)arg1 Confidence:(id)arg2 Detected:(id)arg3 detectedHistoryOut:(id)arg4 ;
-(MLMultiArray *)input_1;
-(void)setInput_1:(MLMultiArray *)arg1 ;
-(MLMultiArray *)Confidence;
-(MLMultiArray *)Detected;
-(MLMultiArray *)detectedHistoryOut;
-(void)setDetectedHistoryOut:(MLMultiArray *)arg1 ;
@end

