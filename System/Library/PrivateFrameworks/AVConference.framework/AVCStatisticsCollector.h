/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVConference/AVConference-Structs.h>
@class NSMutableDictionary, NSDictionary, VCRateControlBandwidthEstimatorMap, VCRateControlOWRDEstimator, VCStatisticsHistory, VCStatisticsCollectorQueue, VCRateControlServerBag;

@interface AVCStatisticsCollector : NSObject {

	NSMutableDictionary* _statistics;
	tagVCStatisticsCollection* _statisticsCollection;
	NSMutableDictionary* _statisticChangeHandlerDictionary;
	NSDictionary* _statisticChangeHandlerDictionaryCache;
	BOOL _isStatisticChangeHandlerDictionaryModified;
	VCRateControlBandwidthEstimatorMap* _bandwidthEstimatorMap;
	VCRateControlOWRDEstimator* _owrdEstimator;
	VCStatisticsHistory* _history;
	VCStatisticsCollectorQueue* _queue;
	int _forceQueueWaitTimeMs;
	double _previousProcessTime;
	unsigned _radioAccessTechnology;
	unsigned _mode;
	BOOL _useExternalThread;
	unsigned _sharedEstimatedBandwidth;
	unsigned _sharedEstimatedBandwidthUncapped;
	unsigned _sharedRemoteEstimatedBandwidth;
	unsigned _maxVideoLocalBurstyLoss;
	unsigned _maxAudioLocalBurstyLoss;
	unsigned _remotePacketReceivedAudio;
	unsigned _remotePacketReceivedVideo;
	unsigned _estimatedBandwidthCap;
	unsigned _expectedBitrate;
	unsigned char _mediaControlInfoFECFeedbackVersion;
	BOOL _fastSuddenBandwidthDetectionEnabled;
	VCRateControlServerBag* _serverBag;
	double _packetReceivedOWRD;
	opaque_pthread_rwlock_t _statisticsCollectionLock;

}

@property (assign,nonatomic) unsigned radioAccessTechnology;                                //@synthesize radioAccessTechnology=_radioAccessTechnology - In the implementation block
@property (assign,nonatomic) unsigned mode;                                                 //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) unsigned sharedEstimatedBandwidth;                           //@synthesize sharedEstimatedBandwidth=_sharedEstimatedBandwidth - In the implementation block
@property (nonatomic,readonly) unsigned sharedEstimatedBandwidthUncapped;                   //@synthesize sharedEstimatedBandwidthUncapped=_sharedEstimatedBandwidthUncapped - In the implementation block
@property (nonatomic,readonly) unsigned sharedRemoteEstimatedBandwidth;                     //@synthesize sharedRemoteEstimatedBandwidth=_sharedRemoteEstimatedBandwidth - In the implementation block
@property (assign,nonatomic) unsigned estimatedBandwidthCap;                                //@synthesize estimatedBandwidthCap=_estimatedBandwidthCap - In the implementation block
@property (assign,nonatomic) unsigned expectedBitrate;                                      //@synthesize expectedBitrate=_expectedBitrate - In the implementation block
@property (assign,nonatomic) unsigned char mediaControlInfoFECFeedbackVersion;              //@synthesize mediaControlInfoFECFeedbackVersion=_mediaControlInfoFECFeedbackVersion - In the implementation block
@property (assign,nonatomic) BOOL fastSuddenBandwidthDetectionEnabled;                      //@synthesize fastSuddenBandwidthDetectionEnabled=_fastSuddenBandwidthDetectionEnabled - In the implementation block
@property (nonatomic,retain) VCRateControlServerBag * serverBag;                            //@synthesize serverBag=_serverBag - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setMode:(unsigned)arg1 ;
-(void)start;
-(void)stop;
-(unsigned)mode;
-(unsigned)radioAccessTechnology;
-(void)setStatistics:(id)arg1 ;
-(VCRateControlServerBag *)serverBag;
-(void)setRadioAccessTechnology:(unsigned)arg1 ;
-(id)initForSimulation:(BOOL)arg1 useExternalThread:(BOOL)arg2 ;
-(void)setServerBag:(VCRateControlServerBag *)arg1 ;
-(void)setVCStatistics:(SCD_Struct_AV33)arg1 ;
-(void)registerStatisticsChangeHandlerWithType:(int)arg1 handler:(/*^block*/id)arg2 ;
-(void)unregisterAllStatisticsChangeHandlers;
-(unsigned)sharedRemoteEstimatedBandwidth;
-(unsigned)sharedEstimatedBandwidthUncapped;
-(unsigned)sharedEstimatedBandwidth;
-(unsigned char)mediaControlInfoFECFeedbackVersion;
-(void)setEstimatedBandwidthCap:(unsigned)arg1 ;
-(void)setExpectedBitrate:(unsigned)arg1 ;
-(void)enableBWELogDump:(void*)arg1 ;
-(void)setFastSuddenBandwidthDetectionEnabled:(BOOL)arg1 ;
-(unsigned)estimatedBandwidthCap;
-(unsigned)expectedBitrate;
-(SCD_Struct_AV33)getVCStatisticsWithType:(int)arg1 time:(double)arg2 ;
-(void)processVCStatisticsInternal:(SCD_Struct_AV33)arg1 ;
-(BOOL)shouldProcessAtTime:(double)arg1 ;
-(void)drainAndProcessVCStatistics:(SCD_Struct_AV33)arg1 ;
-(void)addStatisticsHistory:(SCD_Struct_AV33*)arg1 ;
-(void)computeOtherStatistics:(SCD_Struct_AV33*)arg1 ;
-(void)addEntriesFromStatistics:(SCD_Struct_AV33)arg1 ;
-(void)updateStatisticChangeHandlerDictionaryCache;
-(void)updateMaxLocalBurstyLoss:(unsigned)arg1 isAudio:(BOOL)arg2 ;
-(void)updatePacketReceivedCount:(SCD_Struct_AV33*)arg1 ;
-(void)computeBWEstimation:(SCD_Struct_AV33*)arg1 ;
-(void)recordRemoteEstimatedBandwidthForLargeFrameInfo:(SCD_Struct_AV33*)arg1 ;
-(void)updateLocalEstimatedBandwidth;
-(void)computeOWRDEstimation:(SCD_Struct_AV33*)arg1 ;
-(void)addPacketLossInfo:(SCD_Struct_AV33*)arg1 ;
-(void)addActualBitrateInfo:(SCD_Struct_AV33*)arg1 ;
-(void)addRoundTripTimeInfo:(SCD_Struct_AV33*)arg1 ;
-(void)addMostBurstyLossInfo:(SCD_Struct_AV33*)arg1 ;
-(id)getStatistics:(id)arg1 ;
-(void)setMediaControlInfoFECFeedbackVersion:(unsigned char)arg1 ;
-(BOOL)fastSuddenBandwidthDetectionEnabled;
@end
