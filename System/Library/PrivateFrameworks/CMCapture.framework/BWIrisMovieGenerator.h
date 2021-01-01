/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <CMCapture/CMCapture-Structs.h>
@class NSMutableArray, NSObject, BWIrisStillImageMovieMetadataCache, BWVideoOrientationTimeMachine, BWLimitedGMErrorLogger;

@interface BWIrisMovieGenerator : NSObject {

	BOOL _sourceIsFrontFacingCamera;
	BOOL _sampleReferenceMoviesEnabled;
	SCD_Struct_BW7 _masterMovieDuration;
	OpaqueCMByteStreamRef _byteStream;
	OpaqueFigFormatReaderRef _masterMovieReader;
	BOOL _masterMovieParsingComplete;
	BOOL _vitalInputStreamHasBeenForcedOff;
	int _streamForcedOffErrorCode;
	long long _masterMovieAudioExtractionID;
	SCD_Struct_BW7 _actualMovieStartTime;
	OpaqueFigSimpleMutexRef _movieInfoAndCallbacksMutex;
	NSMutableArray* _movieInfoAndCallbacks;
	int _numberOfPendingReferenceMovies;
	NSObject*<OS_dispatch_queue> _movieGenerationQueue;
	BOOL _suspended;
	BWIrisStillImageMovieMetadataCache* _irisStillImageMovieMetadataCache;
	BWVideoOrientationTimeMachine* _videoOrientationTimeMachine;
	BWLimitedGMErrorLogger* _limitedGMErrorLogger;

}

@property (assign) BOOL suspended; 
@property (readonly) int numberOfPendingReferenceMovies; 
@property (assign,nonatomic) SCD_Struct_BW7 actualMovieStartTime;              //@synthesize actualMovieStartTime=_actualMovieStartTime - In the implementation block
@property (assign) BOOL vitalInputStreamHasBeenForcedOff;                      //@synthesize vitalInputStreamHasBeenForcedOff=_vitalInputStreamHasBeenForcedOff - In the implementation block
@property (assign) int streamForcedOffErrorCode;                               //@synthesize streamForcedOffErrorCode=_streamForcedOffErrorCode - In the implementation block
+(void)initialize;
+(BOOL)_addNewMetadataTrackToAssetWriter:(OpaqueFigAssetWriterRef)arg1 forTrackTimeScale:(int)arg2 yieldingTrackID:(int*)arg3 ;
-(void)dealloc;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)suspended;
-(BOOL)flush;
-(id)initWithReadableByteStream:(OpaqueCMByteStreamRef)arg1 metadataByteStream:(OpaqueCMByteStreamRef)arg2 forFrontFacingCamera:(BOOL)arg3 sampleReferenceMoviesEnabled:(BOOL)arg4 movieGenerationQueue:(id)arg5 irisStillImageMovieMetadataCache:(id)arg6 videoOrientationTimeMachine:(id)arg7 ;
-(BOOL)_generateIrisMovies:(BOOL)arg1 ;
-(void)_cancelAllPendingIrisMoviesWithError:(int)arg1 ;
-(int)_doIrisMovieParsing:(BOOL)arg1 ;
-(void)_findIrisShortestTrackDuration:(SCD_Struct_BW7*)arg1 audioTrackDuration:(SCD_Struct_BW7*)arg2 flush:(BOOL)arg3 ;
-(id)_completedMovieInfoAndCallbacksForShortestTrackDuration:(SCD_Struct_BW7)arg1 audioTrackDuration:(SCD_Struct_BW7)arg2 flush:(BOOL)arg3 ;
-(BOOL)_generateCompletedIrisMovies:(id)arg1 ;
-(SCD_Struct_BW7)_determineMasterMovieStartTimeForInfo:(id)arg1 ;
-(int)_generateRefMovieForInfo:(id)arg1 movieLevelMetadata:(id)arg2 generateMetadataMovie:(BOOL)arg3 ;
-(int)_getAdjustedRefMovieStartTime:(SCD_Struct_BW7)arg1 adjustedRefMovieStartTimeOut:(SCD_Struct_BW7*)arg2 ;
-(int)_getAdjustedRefMovieEndTime:(SCD_Struct_BW7)arg1 adjustedRefMovieEndTimeOut:(SCD_Struct_BW7*)arg2 ;
-(id)initWithReadableByteStream:(OpaqueCMByteStreamRef)arg1 forFrontFacingCamera:(BOOL)arg2 sampleReferenceMoviesEnabled:(BOOL)arg3 movieGenerationQueue:(id)arg4 irisStillImageMovieMetadataCache:(id)arg5 videoOrientationTimeMachine:(id)arg6 ;
-(void)writeMovieWithInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)parseAdditionalFragments;
-(BOOL)flushAsync;
-(void)updateOverCaptureQualityScoresForMoviesEndingBefore:(SCD_Struct_BW7)arg1 fromMetadataRingBuffer:(id)arg2 ;
-(int)numberOfPendingReferenceMovies;
-(SCD_Struct_BW7)actualMovieStartTime;
-(void)setActualMovieStartTime:(SCD_Struct_BW7)arg1 ;
-(BOOL)vitalInputStreamHasBeenForcedOff;
-(void)setVitalInputStreamHasBeenForcedOff:(BOOL)arg1 ;
-(int)streamForcedOffErrorCode;
-(void)setStreamForcedOffErrorCode:(int)arg1 ;
@end

