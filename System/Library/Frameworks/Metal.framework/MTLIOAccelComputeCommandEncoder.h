/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLIOAccelCommandEncoder.h>

@interface MTLIOAccelComputeCommandEncoder : MTLIOAccelCommandEncoder
-(void)updateFence:(id)arg1 ;
-(void)waitForFence:(id)arg1 ;
-(unsigned long long)getType;
-(void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(BOOL)arg3 ;
-(id)getComputePipelineState;
-(void*)getBufferContentsAtIndex:(unsigned long long)arg1 ;
-(void)setEmulationBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(void)setEmulationTextures:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)setEmulationSamplerStates:(const id*)arg1 withRange:(NSRange)arg2 ;
-(void)memoryBarrierWithScope:(unsigned long long)arg1 ;
-(void)bindEmulationArguments;
-(void)useResource:(id)arg1 usage:(unsigned long long)arg2 ;
-(void)useResources:(const id*)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 ;
-(void)useHeap:(id)arg1 ;
-(void)useHeaps:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)memoryBarrierWithResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)executeCommandsInBuffer:(id)arg1 withRange:(NSRange)arg2 ;
-(void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3 ;
@end

