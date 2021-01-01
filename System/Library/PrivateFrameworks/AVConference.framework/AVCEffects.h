/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class AVConferenceXPCClient, NSObject;

@interface AVCEffects : NSObject {

	id _delegate;
	AVConferenceXPCClient* _connection;
	NSObject*<OS_dispatch_queue> _avConferenceEffectsQueue;
	int _mode;
	BOOL _isEffectsApplied;
	BOOL _isFaceMeshTrackingEnabled;
	int _effectType;
	opaqueVCRemoteImageQueueRef _receiverQueue;
	CVBufferRef _lastReceivedPixelBuffer;
	CVBufferRef _lastReceivedDepthBuffer;

}

@property (assign,nonatomic) id<AVCEffectsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int mode;                                     //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) int effectType;                               //@synthesize effectType=_effectType - In the implementation block
-(void)dealloc;
-(id<AVCEffectsDelegate>)delegate;
-(void)setDelegate:(id<AVCEffectsDelegate>)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(id)initWithDelegate:(id)arg1 ;
-(int)effectType;
-(void)registerBlocksForNotifications;
-(BOOL)setupRemoteReceiverQueueWithSenderQueue:(id)arg1 ;
-(void)deregisterBlocksForNotifications;
-(void)remoteQueueOperationHandlerWithError:(int)arg1 operation:(FigRemoteOperation*)arg2 ;
-(void)avcVideoFrameDidRelease:(id)arg1 ;
-(void)setEffectType:(int)arg1 ;
-(void)encodeProcessedVideoFrame:(id)arg1 ;
@end

