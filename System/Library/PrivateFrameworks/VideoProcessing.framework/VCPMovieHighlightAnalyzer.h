/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@class NSArray, NSMutableArray;

@interface VCPMovieHighlightAnalyzer : NSObject {

	NSArray* _junkResults;
	NSArray* _qualityResults;
	NSArray* _faceResults;
	NSArray* _saliencyResults;
	NSArray* _actionResults;
	NSArray* _subtleMotionResults;
	NSArray* _voiceResults;
	NSArray* _featureResults;
	NSArray* _humanActionResults;
	NSArray* _humanPoseResults;
	NSArray* _cameraMotionResults;
	NSArray* _keyFrameResults;
	NSArray* _sceneResults;
	NSArray* _orientationResults;
	NSMutableArray* _expressionSegments;
	NSMutableArray* _internalResults;
	NSMutableArray* _internalConstraintResults;
	CGSize _frameSize;
	float _maxDurationInSeconds;
	BOOL _isLivePhoto;
	BOOL _verbose;
	BOOL _hadFlash;
	BOOL _hadZoom;

}
-(id)results;
-(id)initWithAnalysisType:(unsigned long long)arg1 isLivePhoto:(BOOL)arg2 hadFlash:(BOOL)arg3 hadZoom:(BOOL)arg4 ;
-(void)setMaxHighlightDuration:(float)arg1 ;
-(int)prepareRequiredQualityResult:(id)arg1 junkDetectionResult:(id)arg2 descriptorResult:(id)arg3 faceResult:(id)arg4 saliencyResult:(id)arg5 actionResult:(id)arg6 subtleMotionResult:(id)arg7 voiceResult:(id)arg8 keyFrameResult:(id)arg9 sceneResults:(id)arg10 humanActionResults:(id)arg11 humanPoseResults:(id)arg12 cameraMotionResults:(id)arg13 orientationResults:(id)arg14 frameSize:(CGSize)arg15 ;
-(int)generateHighlights;
-(id)movieSummary;
-(int)generateInitialSegments;
-(int)computeHighlightScoreWithConstraint;
-(SCD_Struct_VC17)computeQualityTrimFor:(SCD_Struct_VC17)arg1 withKeyFrame:(BOOL)arg2 ;
-(SCD_Struct_VC17)computeActionFaceTrimFor:(SCD_Struct_VC17)arg1 ;
-(SCD_Struct_VC17)computeSteadyTranslationTrimFor:(SCD_Struct_VC17)arg1 ;
-(BOOL)checkCameraZoom:(SCD_Struct_VC17)arg1 ;
-(void)generateExpressionSegments:(SCD_Struct_VC17)arg1 ;
-(float)analyzeOverallQuality:(SCD_Struct_VC17)arg1 ;
-(id)pickKeyFramesInRange:(SCD_Struct_VC17)arg1 ;
-(CGRect)computeBestPlaybackCrop:(SCD_Struct_VC17)arg1 ;
-(float)junkScoreForTimerange:(SCD_Struct_VC17)arg1 ;
-(float)qualityScoreForTimerange:(SCD_Struct_VC17)arg1 ;
-(void)SetKeyFramesForSegments:(id)arg1 ;
-(float)computeExpressionScoreInTimerange:(SCD_Struct_VC17)arg1 ;
-(float)computeActionScoreInTimerange:(SCD_Struct_VC17)arg1 ;
-(float)computeVoiceScoreInTimeRange:(SCD_Struct_VC17)arg1 ;
-(int)pickHighlightsFrom:(id)arg1 ;
-(void)searchFeatureVectorOfSegment:(id)arg1 ;
-(void)computeHighlightScoreOfSegment:(id)arg1 ;
-(int)evaluateSegment:(id)arg1 ;
-(BOOL)addSegment:(id)arg1 ;
-(float)computeHumanActionScoreInTimerange:(SCD_Struct_VC17)arg1 ;
-(float)computeHumanPoseScoreInTimerange:(SCD_Struct_VC17)arg1 ;
-(float)actionScoreForTimerange:(SCD_Struct_VC17)arg1 ;
-(float)subtleMotionScoreForTimerange:(SCD_Struct_VC17)arg1 ;
-(float)expressionScoreForTimerange:(SCD_Struct_VC17)arg1 ;
-(float)voiceScoreForTimerange:(SCD_Struct_VC17)arg1 ;
-(float)cameraMotionScoreForTimerange:(SCD_Struct_VC17)arg1 ;
-(float)visualPleasingScoreForTimerange:(SCD_Struct_VC17)arg1 ;
-(float)computeHighlightScoreOfRange:(SCD_Struct_VC17)arg1 ;
-(void)mergeShortSegments;
-(void)mergeSimilarSegments;
@end

