/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CSAudioDecoderDelegate;
#import <SpeakerRecognition/SpeakerRecognition-Structs.h>
@interface CSAudioDecoder : NSObject {

	OpaqueAudioConverterRef _decoder;
	AudioStreamBasicDescription _inASBD;
	AudioStreamBasicDescription _outASBD;
	id<CSAudioDecoderDelegate> _delegate;

}

@property (__weak) id<CSAudioDecoderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)speexDecoder;
+(id)opusDecoder;
-(id<CSAudioDecoderDelegate>)delegate;
-(void)setDelegate:(id<CSAudioDecoderDelegate>)arg1 ;
-(id)initWithInASBD:(AudioStreamBasicDescription)arg1 outASBD:(AudioStreamBasicDescription)arg2 ;
-(void)addPackets:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 remoteVAD:(id)arg3 timestamp:(unsigned long long)arg4 receivedNumChannels:(unsigned)arg5 ;
@end

