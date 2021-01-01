/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextRecognition/TextRecognition-Structs.h>
#import <libobjc.A.dylib/CREngine.h>

@class CRPerformanceStatistics, CRNeuralTextDetector, CRNeuralTextRecognizer, NSDictionary, NSString;

@interface CREngineAccurate : NSObject <CREngine> {

	BOOL _shouldCancel;
	CRPerformanceStatistics* _detectorStats;
	CRPerformanceStatistics* _postProcStats;
	CRPerformanceStatistics* _recognizerStats;
	CRPerformanceStatistics* _detectorInferenceStats;
	CRPerformanceStatistics* _recognizerInferenceStats;
	CRPerformanceStatistics* _recognizerDecodingStats;
	CRNeuralTextDetector* _ocrDetector;
	CRNeuralTextRecognizer* _ocrRecognizer;
	NSDictionary* _options;
	unsigned long long _revision;

}

@property (retain) CRNeuralTextDetector * ocrDetector;                              //@synthesize ocrDetector=_ocrDetector - In the implementation block
@property (retain) CRNeuralTextRecognizer * ocrRecognizer;                          //@synthesize ocrRecognizer=_ocrRecognizer - In the implementation block
@property (retain) NSDictionary * options;                                          //@synthesize options=_options - In the implementation block
@property (assign) unsigned long long revision;                                     //@synthesize revision=_revision - In the implementation block
@property (assign) BOOL shouldCancel;                                               //@synthesize shouldCancel=_shouldCancel - In the implementation block
@property (retain) CRPerformanceStatistics * detectorStats;                         //@synthesize detectorStats=_detectorStats - In the implementation block
@property (retain) CRPerformanceStatistics * postProcStats;                         //@synthesize postProcStats=_postProcStats - In the implementation block
@property (retain) CRPerformanceStatistics * recognizerStats;                       //@synthesize recognizerStats=_recognizerStats - In the implementation block
@property (retain) CRPerformanceStatistics * detectorInferenceStats;                //@synthesize detectorInferenceStats=_detectorInferenceStats - In the implementation block
@property (retain) CRPerformanceStatistics * recognizerInferenceStats;              //@synthesize recognizerInferenceStats=_recognizerInferenceStats - In the implementation block
@property (retain) CRPerformanceStatistics * recognizerDecodingStats;               //@synthesize recognizerDecodingStats=_recognizerDecodingStats - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) float mediumConfidenceThreshold; 
@property (readonly) float highConfidenceThreshold; 
+(id)supportedLanguagesForRevision:(long long)arg1 error:(id*)arg2 ;
+(double)_normalizeScoreForFeature:(id)arg1 ;
-(void)cancel;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)setRevision:(unsigned long long)arg1 ;
-(unsigned long long)revision;
-(CGSize)smallestImageSizeForTextWithRelativeHeight:(double)arg1 originalImageSize:(CGSize)arg2 ;
-(BOOL)shouldCancel;
-(void)setShouldCancel:(BOOL)arg1 ;
-(CRPerformanceStatistics *)detectorStats;
-(CRPerformanceStatistics *)postProcStats;
-(float)mediumConfidenceThreshold;
-(float)highConfidenceThreshold;
-(id)textRecognizerResultsForTextFeatures:(id)arg1 image:(id)arg2 ;
-(id)textDetectorResultsForImage:(id)arg1 error:(id*)arg2 ;
-(id)textResultsInImage:(id)arg1 options:(id)arg2 withProgressHandler:(/*^block*/id)arg3 error:(id*)arg4 ;
-(CRPerformanceStatistics *)recognizerStats;
-(CRPerformanceStatistics *)recognizerInferenceStats;
-(CRPerformanceStatistics *)recognizerDecodingStats;
-(CRPerformanceStatistics *)detectorInferenceStats;
-(void)setDetectorStats:(CRPerformanceStatistics *)arg1 ;
-(void)setPostProcStats:(CRPerformanceStatistics *)arg1 ;
-(void)setOcrDetector:(CRNeuralTextDetector *)arg1 ;
-(void)setOcrRecognizer:(CRNeuralTextRecognizer *)arg1 ;
-(CRNeuralTextDetector *)ocrDetector;
-(CRNeuralTextRecognizer *)ocrRecognizer;
-(void)setDetectorInferenceStats:(CRPerformanceStatistics *)arg1 ;
-(void)setRecognizerInferenceStats:(CRPerformanceStatistics *)arg1 ;
-(void)setRecognizerDecodingStats:(CRPerformanceStatistics *)arg1 ;
-(void)setRecognizerStats:(CRPerformanceStatistics *)arg1 ;
-(id)_titleTextFeatureFromFeatures:(id)arg1 imageWidth:(unsigned long long)arg2 imageHeight:(unsigned long long)arg3 ;
@end

