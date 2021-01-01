/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MPSCore/MPSCore-Structs.h>
#import <libobjc.A.dylib/MTLComputeCommandEncoder.h>

@protocol MTLComputeCommandEncoder, MTLComputePipelineState;
@class MPSCommandBuffer, NSString;

@interface MPSPredicatedCommandEncoder : NSObject <MTLComputeCommandEncoder> {

	MPSCommandBuffer* _owningMPSCommandBuffer;
	id<MTLComputeCommandEncoder> _originalCommandEncoder;
	MPSDevice* _mpsDevice;
	id<MTLComputePipelineState> _userBoundPipelineState;
	UserBufferBindingData_s* _userBinding1;
	UserBufferBindingData_s* _userBinding2;
	UserBufferBindingData_s* _userBinding3;

}

@property (nonatomic,readonly) id<MTLComputeCommandEncoder> computeCommandEncoder;              //@synthesize originalCommandEncoder=_originalCommandEncoder - In the implementation block
@property (readonly) unsigned long long dispatchType; 
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)predicatedEncoderWithMPSCommandBuffer:(id)arg1 commandEncoder:(id)arg2 mpsDevice:(MPSDevice*)arg3 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(void)dealloc;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3 ;
-(id<MTLComputeCommandEncoder>)computeCommandEncoder;
-(void)setComputePipelineState:(id)arg1 ;
-(void)dispatchThreadgroups:(SCD_Struct_MP0)arg1 threadsPerThreadgroup:(SCD_Struct_MP0)arg2 ;
-(void)setBytes:(const void*)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2 ;
-(id)initWithMPSCommandBuffer:(id)arg1 commandEncoder:(id)arg2 mpsDevice:(MPSDevice*)arg3 ;
-(void)dispatchThreads:(SCD_Struct_MP0)arg1 threadsPerThreadgroup:(SCD_Struct_MP0)arg2 ;
@end

