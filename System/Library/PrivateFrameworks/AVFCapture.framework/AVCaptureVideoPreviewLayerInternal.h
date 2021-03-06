/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AVFCapture/AVFCapture-Structs.h>
@class NSString, AVCaptureSession, AVCaptureConnection, NSObject, CALayer, AVWeakReference, NSArray;

@interface AVCaptureVideoPreviewLayerInternal : NSObject {

	NSString* sinkID;
	AVCaptureSession* session;
	AVCaptureConnection* connection;
	OpaqueFigCaptureSessionRef figCaptureSession;
	NSObject*<OS_dispatch_queue> figCaptureSessionSyncQueue;
	CALayer* sublayer;
	CGSize sensorSize;
	NSString* sensorToPreviewVTScalingMode;
	unsigned imageQueueSlot;
	CGSize previewSize;
	double previewRotationDegrees;
	NSString* gravity;
	BOOL disableActions;
	AVWeakReference* weakReference;
	long long orientation;
	BOOL automaticallyAdjustsMirroring;
	BOOL mirrored;
	BOOL isPresentationLayer;
	BOOL visible;
	BOOL isPaused;
	BOOL chromaNoiseReductionEnabled;
	int changeSeed;
	CGAffineTransform captureDeviceTransform;
	double rollAdjustment;
	BOOL depthDataDeliverySupported;
	BOOL depthDataDeliveryEnabled;
	BOOL filterRenderingEnabled;
	BOOL unoptimizedFilterRenderingEnabled;
	NSArray* videoPreviewFilters;
	double oddScreenWidth;
	double oddScreenScale;

}
@end

