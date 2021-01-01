/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CSStartOfSpeechDetectorDelegate;
@interface CSStartOfSpeechDetector : NSObject {

	id<CSStartOfSpeechDetectorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSStartOfSpeechDetectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CSStartOfSpeechDetectorDelegate>)delegate;
-(void)setDelegate:(id<CSStartOfSpeechDetectorDelegate>)arg1 ;
-(void)endAudio;
-(void)resetForNewRequest;
-(void)addAudio:(id)arg1 numSamples:(unsigned long long)arg2 ;
-(id)initWithConfig:(id)arg1 samplingRate:(unsigned long long)arg2 minSpeechFrames:(unsigned long long)arg3 numLeadingFrames:(unsigned long long)arg4 delegate:(id)arg5 ;
@end
