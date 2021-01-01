/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BWFigCaptureSynchronizedStreamsGroup, NSArray, NSDictionary, BWFigVideoCaptureStream;

@interface BWFigVideoCaptureSynchronizedStreamsGroup : NSObject {

	BWFigCaptureSynchronizedStreamsGroup* _synchronizedStreamsGroup;
	NSArray* _streams;
	NSArray* _portTypes;
	NSDictionary* _cameraViewMatricesByPortType;
	NSDictionary* _cameraPoseMatricesByPortType;
	NSDictionary* _baseZoomFactorsByPortType;
	NSDictionary* _clientBaseZoomFactorsByPortType;
	BOOL _readOnly;
	BOOL _atomicMasterSlaveReconfigurationSupported;
	BOOL _masterConfigurationSupported;
	BWFigVideoCaptureStream* _currentMasterStream;
	NSDictionary* _currentSlaveConfigurationsByPortType;
	BOOL _sensorToOutputSkippingEnabled;
	int _maximumNumberOfSlaveStreamsWithoutFrameSkipping;
	int _maximumNumberOfEnabledSlaveTimeMachines;
	BWFigVideoCaptureStream* _cameraControlsStatisticsMasterStream;
	BOOL _statsMasterHasBeenSet;

}

@property (nonatomic,readonly) BWFigCaptureSynchronizedStreamsGroup * syncGroup;                            //@synthesize synchronizedStreamsGroup=_synchronizedStreamsGroup - In the implementation block
@property (nonatomic,readonly) NSArray * portTypes;                                                         //@synthesize portTypes=_portTypes - In the implementation block
@property (nonatomic,readonly) BOOL minimumMasterToSlaveFrameRateRatioSupported; 
@property (nonatomic,readonly) BOOL maximumNumberOfSlaveStreamsWithoutFrameSkippingSupported; 
@property (nonatomic,readonly) NSDictionary * clientBaseZoomFactorsByPortType;                              //@synthesize clientBaseZoomFactorsByPortType=_clientBaseZoomFactorsByPortType - In the implementation block
@property (nonatomic,copy) NSDictionary * baseZoomFactorsByPortType;                                        //@synthesize baseZoomFactorsByPortType=_baseZoomFactorsByPortType - In the implementation block
@property (nonatomic,readonly) BWFigVideoCaptureStream * cameraControlsStatisticsMasterStream;              //@synthesize cameraControlsStatisticsMasterStream=_cameraControlsStatisticsMasterStream - In the implementation block
+(void)initialize;
-(void)dealloc;
-(BWFigCaptureSynchronizedStreamsGroup *)syncGroup;
-(NSArray *)portTypes;
-(int)_getViewAndPoseMatrices;
-(int)_computeBaseZoomFactorsWithOverrides:(id)arg1 ;
-(id)_slaveConfigurationForStream:(id)arg1 ;
-(BOOL)maximumNumberOfSlaveStreamsWithoutFrameSkippingSupported;
-(id)_worldPortType;
-(id)initWithSynchronizedStreamsGroup:(id)arg1 activeStreams:(id)arg2 readOnly:(BOOL)arg3 baseZoomFactorOverrides:(id)arg4 error:(int*)arg5 ;
-(void)setBaseZoomFactorsByPortType:(NSDictionary *)arg1 ;
-(id)cameraViewMatrixForPortType:(id)arg1 ;
-(id)cameraPoseMatrixForPortType:(id)arg1 ;
-(BOOL)minimumMasterToSlaveFrameRateRatioSupported;
-(int)setMasterStream:(id)arg1 allStreams:(id)arg2 ;
-(int)setCameraControlsStatisticsMasterStream:(BWFigVideoCaptureStream *)arg1 ;
-(unsigned)minimumMasterToSlaveFrameRateRatio;
-(void)setMinimumMasterToSlaveFrameRateRatio:(unsigned)arg1 ;
-(void)setMaximumNumberOfSlaveStreamsWithoutFrameSkipping:(int)arg1 ;
-(void)setMaximumNumberOfEnabledSlaveTimeMachines:(int)arg1 ;
-(NSDictionary *)baseZoomFactorsByPortType;
-(NSDictionary *)clientBaseZoomFactorsByPortType;
-(BWFigVideoCaptureStream *)cameraControlsStatisticsMasterStream;
@end

