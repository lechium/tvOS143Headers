/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsFunction.h>

@interface MTLGPUDebugFunction : MTLToolsFunction {

	mutex argumentLayoutsMutex;
	unordered_map<unsigned int, std::__1::unique_ptr<GPUDebugArgumentEncoderLayout, std::__1::default_delete<GPUDebugArgumentEncoderLayout> >, std::__1::hash<unsigned int>, std::__1::equal_to<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::unique_ptr<GPUDebugArgumentEncoderLayout, std::__1::default_delete<GPUDebugArgumentEncoderLayout> > > > >* argumentLayouts;

}
+(id)newFunctionWithFunction:(id)arg1 library:(id)arg2 ;
+(id)internalStructTypeFromUserStructType:(id)arg1 ;
+(id)internalArrayTypeFromUserArrayType:(id)arg1 ;
+(id)convertUserType:(id)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 binaryArchives:(id)arg3 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 pipelineLibrary:(id)arg3 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 pipelineLibrary:(id)arg2 ;
-(id)initWithFunction:(id)arg1 library:(id)arg2 ;
-(id)newArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2 pipelineLibrary:(id)arg3 binaryArchives:(id)arg4 ;
@end

