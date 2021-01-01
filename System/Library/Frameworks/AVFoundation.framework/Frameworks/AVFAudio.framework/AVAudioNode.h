/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFAudio/AVFAudio-Structs.h>
@class AVAudioEngine, AVAudioTime, AUAudioUnit;

@interface AVAudioNode : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) AVAudioNodeImplBase* impl; 
@property (nonatomic,readonly) AVAudioEngine * engine; 
@property (nonatomic,readonly) unsigned long long numberOfInputs; 
@property (nonatomic,readonly) unsigned long long numberOfOutputs; 
@property (nonatomic,readonly) AVAudioTime * lastRenderTime; 
@property (nonatomic,readonly) AUAudioUnit * AUAudioUnit; 
@property (nonatomic,readonly) double latency; 
@property (nonatomic,readonly) double outputPresentationLatency; 
-(id)init;
-(void)dealloc;
-(void)reset;
-(AVAudio3DPoint)position;
-(void)setPosition:(AVAudio3DPoint)arg1 ;
-(double)latency;
-(void)setRate:(float)arg1 ;
-(float)rate;
-(OpaqueAudioComponentInstanceRef)audioUnit;
-(void)didAttachToEngine:(id)arg1 ;
-(void)didDetachFromEngine:(id)arg1 error:(id*)arg2 ;
-(float)pan;
-(void)setPan:(float)arg1 ;
-(long long)renderingAlgorithm;
-(void)setRenderingAlgorithm:(long long)arg1 ;
-(long long)sourceMode;
-(void)setSourceMode:(long long)arg1 ;
-(long long)pointSourceInHeadMode;
-(void)setPointSourceInHeadMode:(long long)arg1 ;
-(float)reverbBlend;
-(void)setReverbBlend:(float)arg1 ;
-(float)obstruction;
-(void)setObstruction:(float)arg1 ;
-(float)occlusion;
-(void)setOcclusion:(float)arg1 ;
-(id)destinationForMixer:(id)arg1 bus:(unsigned long long)arg2 ;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(AVAudioNodeImplBase*)impl;
-(id)initWithImpl:(AVAudioNodeImplBase*)arg1 ;
-(BOOL)resetImpl:(AVAudioNodeImplBase*)arg1 ;
-(id)outputFormatForBus:(unsigned long long)arg1 ;
-(BOOL)setOutputFormat:(id)arg1 forBus:(unsigned long long)arg2 ;
-(id)inputFormatForBus:(unsigned long long)arg1 ;
-(BOOL)setInputFormat:(id)arg1 forBus:(unsigned long long)arg2 ;
-(id)nameForInputBus:(unsigned long long)arg1 ;
-(id)nameForOutputBus:(unsigned long long)arg1 ;
-(id)clock;
-(AVAudioTime *)lastRenderTime;
-(double)outputPresentationLatency;
-(AVAudioEngine *)engine;
-(unsigned long long)numberOfInputs;
-(unsigned long long)numberOfOutputs;
-(void)setNumberOfInputs:(unsigned long long)arg1 ;
-(void)setNumberOfOutputs:(unsigned long long)arg1 ;
-(void)installTapOnBus:(unsigned long long)arg1 bufferSize:(unsigned)arg2 format:(id)arg3 block:(/*^block*/id)arg4 ;
-(void)removeTapOnBus:(unsigned long long)arg1 ;
-(AUAudioUnit *)AUAudioUnit;
@end
