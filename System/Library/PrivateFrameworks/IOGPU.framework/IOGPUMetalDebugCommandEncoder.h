/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IOGPU.framework/IOGPU
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IOGPU/IOGPU-Structs.h>
#import <Metal/_MTLDebugCommandEncoder.h>

@class MTLResourceList;

@interface IOGPUMetalDebugCommandEncoder : _MTLDebugCommandEncoder {

	void* _kernelCommandBufferCurrent;
	void* _kernelCommandBufferEnd;
	IOGPUResourceList* _resourceList;
	MTLResourceList* _api_resourceList;

}
-(void)dealloc;
-(void)kprintfBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)endEncoding;
-(id)initWithCommandBuffer:(id)arg1 ;
-(void)IOLogBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(void)restartDebugPass;
-(void*)reserveKernelCommandBufferSpace:(unsigned long long)arg1 ;
-(unsigned)addDebugResourceListInfo:(IOGPUResourceInfo*)arg1 flag:(unsigned)arg2 ;
-(void)debugBytes:(const char*)arg1 length:(unsigned long long)arg2 output_type:(unsigned)arg3 ;
-(void)addAPIResource:(id)arg1 ;
@end

