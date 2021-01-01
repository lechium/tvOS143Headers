/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FxTimingAPI_v3 <FxTimingAPI_v2>
@required
-(void)frameDuration:(/*function pointer*/void**)arg1;
-(void)sampleDuration:(/*function pointer*/void**)arg1;
-(void)startFxTimeForEffect:(/*function pointer*/void**)arg1;
-(void)durationFxTimeForEffect:(/*function pointer*/void**)arg1;
-(void)startFxTimeOfInputAToTransition:(/*function pointer*/void**)arg1;
-(void)startFxTimeOfInputBToTransition:(/*function pointer*/void**)arg1;
-(void)durationFxTimeOfInputAToTransition:(/*function pointer*/void**)arg1;
-(void)durationFxTimeOfInputBToTransition:(/*function pointer*/void**)arg1;
-(void)startFxTimeOfInputToFilter:(/*function pointer*/void**)arg1;
-(void)durationFxTimeOfInputToFilter:(/*function pointer*/void**)arg1;
-(void)startFxTime:(/*function pointer*/void**)arg1 ofImageParam:(unsigned)arg2;
-(void)durationFxTime:(/*function pointer*/void**)arg1 ofImageParm:(unsigned)arg2;
-(void)inPointFxTimeOfTimelineForEffect:(/*function pointer*/void**)arg1;
-(void)outPointFxTimeOfTimelineForEffect:(/*function pointer*/void**)arg1;
-(void)timelineFxTime:(/*function pointer*/void**)arg1 fromInputTime:(/*function pointer*/void**)arg2;
-(void)timelineFxTime:(/*function pointer*/void**)arg1 fromInputATime:(/*function pointer*/void**)arg2;
-(void)timelineFxTime:(/*function pointer*/void**)arg1 fromInputBTime:(/*function pointer*/void**)arg2;
-(void)timelineFxTime:(/*function pointer*/void**)arg1 fromImageTime:(/*function pointer*/void**)arg2 forParmId:(unsigned)arg3;
-(void)inputFxTime:(/*function pointer*/void**)arg1 fromTimelineTime:(/*function pointer*/void**)arg2;
-(void)inputAFxTime:(/*function pointer*/void**)arg1 fromTimelineTime:(/*function pointer*/void**)arg2;
-(void)inputBFxTime:(/*function pointer*/void**)arg1 fromTimelineTime:(/*function pointer*/void**)arg2;
-(void)imageFxTime:(/*function pointer*/void**)arg1 forParmId:(unsigned)arg2 fromTimelineTime:(/*function pointer*/void**)arg3;

@end

