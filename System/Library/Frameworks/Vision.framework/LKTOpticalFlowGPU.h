/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/LKTOpticalFlow.h>

@protocol MTLCommandQueue, MTLComputePipelineState, MTLTexture, MTLBuffer;
@class LKTMetalContext;

@interface LKTOpticalFlowGPU : LKTOpticalFlow {

	LKTMetalContext* _mtlContext;
	id<MTLCommandQueue> _commandQueue;
	id<MTLComputePipelineState> _computePipelines[9];
	unsigned long long _maxThreadExecutionWidth;
	CGSize _pyramid_size[10];
	id<MTLTexture> _I_tex[2][10];
	id<MTLTexture> _I_u32_alias_tex[2][10];
	CVBufferRef _G0_pxbuf;
	CVBufferRef _G1_pxbuf;
	id<MTLTexture> _G0_tex[10];
	id<MTLTexture> _G1_tex[10];
	CVBufferRef _C0_pxbuf;
	CVBufferRef _C1_pxbuf;
	id<MTLTexture> _C0_tex[10];
	id<MTLTexture> _C1_tex[10];
	id<MTLBuffer> _Adiagb_buf[2];
	id<MTLBuffer> _Ixy_buf[2];
	CVBufferRef _w_pxbuf;
	id<MTLTexture> _w_tex[10];
	_CVBuffer* _uv_pxbuf[2];
	id<MTLTexture> _uv_tex[2][10];
	id<MTLTexture> _uv_u32_alias_tex[2][10];
	int _current_frame_index;
	id<MTLTexture> _uv_tex_user_ref;

}
-(void)dealloc;
-(void)waitUntilCompleted;
-(id)initWithMetalContext:(id)arg1 width:(int)arg2 height:(int)arg3 numScales:(int)arg4 ;
-(BOOL)setOutputUV:(CVBufferRef)arg1 error:(id*)arg2 ;
-(BOOL)estimateFlowFromReference:(CVBufferRef)arg1 target:(CVBufferRef)arg2 error:(id*)arg3 ;
-(BOOL)estimateFlowStream:(CVBufferRef)arg1 error:(id*)arg2 ;
-(void)_initMemory:(int)arg1 height:(int)arg2 numScales:(int)arg3 ;
-(void)_setupPipelines;
-(BOOL)_setupBufferAndReturnError:(id*)arg1 ;
-(void)_computeOpticalFlow;
-(BOOL)_createImagePyramidWithCommandBuffer:(id)arg1 in_pixelbuf:(CVBufferRef)arg2 I_idx:(int)arg3 error:(id*)arg4 ;
-(void)_zeroFlowWithCommandBuffer:(id)arg1 uv_tex:(id)arg2 ;
-(void)_downscale2XWithCommandBuffer:(id)arg1 in_u32_alias_tex:(id)arg2 out_u32_alias_tex:(id)arg3 ;
-(void)_computeFeaturesWithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3 ;
-(void)_computeFeaturesDerivativesWithCommandBuffer:(id)arg1 in_tex:(id)arg2 out_tex:(id)arg3 ;
-(void)_doSolverWithCommandBuffer:(id)arg1 scale:(int)arg2 scale_xy_inv:(id)arg3 coeff:(id)arg4 in_uv_tex:(id)arg5 ;
-(void)_doNLRegularizationWithCommandBuffer:(id)arg1 in_uv_tex:(id)arg2 join_tex:(id)arg3 w_tex:(id)arg4 out_uv_tex:(id)arg5 ;
@end

