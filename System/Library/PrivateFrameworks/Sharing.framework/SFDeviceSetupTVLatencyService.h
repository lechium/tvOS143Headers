/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class SFService, SFSession, TVLAudioLatencyEstimator, NSObject;

@interface SFDeviceSetupTVLatencyService : NSObject {

	BOOL _eventFinalDelivered;
	BOOL _finished;
	BOOL _invalidateCalled;
	BOOL _invalidateDone;
	SFService* _sfService;
	SFSession* _sfSession;
	TVLAudioLatencyEstimator* _tvLatencyEstimator;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	/*^block*/id _progressHandler;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy) id progressHandler;                                        //@synthesize progressHandler=_progressHandler - In the implementation block
-(id)init;
-(void)invalidate;
-(void)_invalidate;
-(void)activate;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(void)_sfServiceStart;
-(void)_handleSessionEnded:(id)arg1 ;
-(void)_handleSessionStarted:(id)arg1 ;
-(void)_handleFinishRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_handleTVLatencyProgressEvent:(unsigned long long)arg1 info:(id)arg2 ;
-(void)_handleTVLatencyRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_reportProgress:(unsigned)arg1 info:(id)arg2 ;
-(void)sendSetupAction:(unsigned)arg1 info:(id)arg2 responseHandler:(/*^block*/id)arg3 ;
@end
