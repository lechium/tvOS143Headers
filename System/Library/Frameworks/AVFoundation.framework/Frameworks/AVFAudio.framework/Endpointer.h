/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol Endpointer <NSObject>
@property (assign) int endpointMode; 
@property (assign) double startWaitTime; 
@property (assign) double interspeechWaitTime; 
@property (assign) double endWaitTime; 
@optional
-(BOOL)configureWithSampleRate:(double)arg1 andFrameRate:(unsigned)arg2;
-(BOOL)configureWithASBD:(AudioStreamBasicDescription*)arg1 andFrameRate:(unsigned)arg2;

@required
-(void)reset;
-(int)getStatus:(AudioQueueBuffer*)arg1;
-(int)endpointMode;
-(void)setEndpointMode:(int)arg1;
-(double)startWaitTime;
-(void)setStartWaitTime:(double)arg1;
-(double)interspeechWaitTime;
-(void)setInterspeechWaitTime:(double)arg1;
-(double)endWaitTime;
-(void)setEndWaitTime:(double)arg1;

@end

