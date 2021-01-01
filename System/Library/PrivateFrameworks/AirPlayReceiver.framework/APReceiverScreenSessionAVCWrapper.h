/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AirPlayReceiver/AirPlayReceiver-Structs.h>
#import <libobjc.A.dylib/AVCVideoStreamDelegate.h>
#import <libobjc.A.dylib/AVCVideoDataOutputDelegate.h>
#import <libobjc.A.dylib/AVCRemoteVideoClientDelegate.h>
#import <libobjc.A.dylib/AVCQoSMonitorDelegate.h>

@protocol OS_dispatch_semaphore;
@class CALayer, AVCVideoStream, AVCMediaStreamConfig, AVCRemoteVideoClient, AVCVideoDataOutput, AVCQoSMonitor, AVCMediaStreamNegotiator, NSObject, NSString;

@interface APReceiverScreenSessionAVCWrapper : NSObject <AVCVideoStreamDelegate, AVCVideoDataOutputDelegate, AVCRemoteVideoClientDelegate, AVCQoSMonitorDelegate> {

	CALayer* _remoteVideoLayer;
	AVCVideoStream* _avcVideoStream;
	AVCMediaStreamConfig* _videoStreamConfig;
	AVCMediaStreamConfig* _videoStreamConfigHDR;
	AVCRemoteVideoClient* _remoteVideoClient;
	AVCVideoDataOutput* _videoDataOutput;
	AVCQoSMonitor* _avcQoSMonitor;
	AVCMediaStreamNegotiator* _avcMediaStreamNegotiator;
	AVCMediaStreamNegotiator* _avcMediaStreamNegotiatorHDR;
	OpaqueAPReceiverScreenSinkRef _frameSink;
	unsigned char _allowP2P;
	unsigned char _setQoS;
	/*function pointer*/void* _frameHandler;
	void* _frameHandlerContext;
	OpaqueAPReceiverStatsCollectorRef _statsCollector;
	void* _eventWeakContext;
	/*function pointer*/void* _eventHandleFailed;
	/*function pointer*/void* _eventHandleStats;
	NSObject*<OS_dispatch_semaphore> _completionSemaphore;
	unsigned char _isSubFrameEnabled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(int)start;
-(int)stop;
-(void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2 ;
-(void)videoDataOutput:(id)arg1 didReceiveFrame:(opaqueCMSampleBufferRef)arg2 videoAttributes:(SCD_Struct_AP8)arg3 ;
-(void)videoDataOutputServerDidDie:(id)arg1 ;
-(void)videoDataOutput:(id)arg1 videoDidPause:(BOOL)arg2 ;
-(void)videoDataOutput:(id)arg1 mediaDidStall:(BOOL)arg2 ;
-(void)videoDataOutput:(id)arg1 videoDidSuspend:(BOOL)arg2 ;
-(void)videoDataOutputDidBecomeInvalid:(id)arg1 ;
-(void)qosMonitorServerDidDie:(id)arg1 ;
-(void)qosMonitor:(id)arg1 didReceiveReport:(id)arg2 streamToken:(long long)arg3 ;
-(void)streamDidServerDie:(id)arg1 ;
-(void)stream:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3 ;
-(void)streamDidStop:(id)arg1 ;
-(id)initWithNegotiationData:(id)arg1 presentationMode:(unsigned char)arg2 hdrMode:(CFStringRef)arg3 frameHandler:(/*function pointer*/void*)arg4 frameHandlerContext:(void*)arg5 eventHandlers:(SCD_Struct_AP11*)arg6 statsCollector:(OpaqueAPReceiverStatsCollectorRef)arg7 error:(int*)arg8 ;
-(int)startWithNWConnectionClientID:(unsigned char)arg1 remoteVideoLayer:(id)arg2 writeKey:(id)arg3 readKey:(id)arg4 hdrMode:(CFStringRef)arg5 presentationMode:(unsigned char)arg6 ;
-(void)stopAndSuspend;
-(int)restartWithPresentationMode:(unsigned char)arg1 hdrMode:(CFStringRef)arg2 negotiationData:(id)arg3 ;
-(unsigned)convertCodec:(long long)arg1 ;
-(unsigned long long)convertHDRMode:(CFStringRef)arg1 ;
-(int)initAVCMediaStreamNegotiatorWithNegotiationData:(id)arg1 presentationMode:(unsigned char)arg2 hdrMode:(CFStringRef)arg3 ;
-(int)createVideoStreamConfig:(id*)arg1 withDirection:(long long)arg2 writeKey:(id)arg3 readKey:(id)arg4 presentationMode:(unsigned char)arg5 ;
-(int)getClientUniquePID:(unsigned long long*)arg1 ;
-(id)negotiationDataForPresentationMode:(unsigned char)arg1 ;
-(void)handleFailureWithError:(int)arg1 ;
-(id)createRemoteVideoClientWithLayer:(id)arg1 ;
-(double)angleForOrientation:(int)arg1 ;
@end

