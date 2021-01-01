/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:19 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, CSRemoteRecordClientDelegate;
@class NSObject;

@interface CSRemoteRecordClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<CSRemoteRecordClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSRemoteRecordClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<CSRemoteRecordClientDelegate>)delegate;
-(void)setDelegate:(id<CSRemoteRecordClientDelegate>)arg1 ;
-(BOOL)isConnected;
-(BOOL)isRecording;
-(id)voiceTriggerEventInfo;
-(BOOL)waitingForConnection:(double)arg1 error:(id*)arg2 ;
-(BOOL)startRecordingWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)stopRecording:(id*)arg1 ;
-(BOOL)didPlayEndpointBeep;
-(BOOL)hasPendingTwoShotBeep;
@end

