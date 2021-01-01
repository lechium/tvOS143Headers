/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVMediaDataRequesterConsumer.h>
#import <AVFCore/AVQueuedSampleBufferRenderingInternal.h>
#import <AVFCore/AVQueuedSampleBufferRendering.h>

@class AVSampleBufferAudioRendererInternal, NSError, NSString;

@interface AVSampleBufferAudioRenderer : NSObject <AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal, AVQueuedSampleBufferRendering> {

	AVSampleBufferAudioRendererInternal* _audioRendererInternal;

}

@property (nonatomic,readonly) long long status; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy) NSString * audioOutputDeviceUniqueID; 
@property (nonatomic,copy) NSString * audioTimePitchAlgorithm; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (retain,readonly) OpaqueCMTimebaseRef timebase; 
@property (getter=isReadyForMoreMediaData,readonly) BOOL readyForMoreMediaData; 
+(id)sampleBufferAudioRenderer;
-(id)init;
-(void)dealloc;
-(NSError *)error;
-(long long)status;
-(void)flush;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(BOOL)isMuted;
-(void)setMuted:(BOOL)arg1 ;
-(OpaqueCMTimebaseRef)timebase;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(BOOL)isReadyForMoreMediaData;
-(NSString *)audioTimePitchAlgorithm;
-(NSString *)audioOutputDeviceUniqueID;
-(void)setAudioOutputDeviceUniqueID:(NSString *)arg1 ;
-(void)stopRequestingMediaData;
-(int)_initializeTimebase;
-(int)_installNotificationHandlers;
-(void)_uninstallNotificationHandlers;
-(void)_transitionToStatus:(long long)arg1 error:(id)arg2 ;
-(void)_transitionToFailedStatusWithOSStatus:(int)arg1 ;
-(void)copyFigSampleBufferAudioRenderer:(OpaqueFigSampleBufferAudioRenderer*)arg1 ;
-(BOOL)setRenderSynchronizer:(id)arg1 error:(id*)arg2 ;
-(void)enqueueSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_triggerMediaRequestCallback;
-(void)_wasFlushedAutomaticallyAtTime:(SCD_Struct_AV6)arg1 ;
-(void)flushFromSourceTime:(SCD_Struct_AV6)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

