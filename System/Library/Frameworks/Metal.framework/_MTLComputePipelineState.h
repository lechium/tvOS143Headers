/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/MTLComputePipelineState.h>

@protocol MTLDevice;
@class NSString, MTLIndirectArgumentBufferEmulationData, MTLDebugInstrumentationData;

@interface _MTLComputePipelineState : NSObject <MTLComputePipelineState> {

	NSString* _label;
	id<MTLDevice> _device;
	MTLIndirectArgumentBufferEmulationData* _iabEmulationData;
	MTLDebugInstrumentationData* _debugInstrumentationData;
	BOOL _supportIndirectCommandBuffers;
	long long _textureWriteRoundingMode;
	unsigned long long _resourceIndex;
	unsigned long long _gpuAddress;

}

@property (readonly) NSString * label;                                                               //@synthesize label=_label - In the implementation block
@property (readonly) id<MTLDevice> device;                                                           //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) MTLIndirectArgumentBufferEmulationData * IABEmulationData;              //@synthesize iabEmulationData=_iabEmulationData - In the implementation block
@property (nonatomic,retain) MTLDebugInstrumentationData * debugInstrumentationData;                 //@synthesize debugInstrumentationData=_debugInstrumentationData - In the implementation block
@property (readonly) unsigned long long uniqueIdentifier; 
@property (readonly) long long textureWriteRoundingMode; 
@property (nonatomic,readonly) unsigned long long resourceIndex;                                     //@synthesize resourceIndex=_resourceIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long gpuAddress;                                        //@synthesize gpuAddress=_gpuAddress - In the implementation block
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (readonly) unsigned long long threadExecutionWidth; 
@property (readonly) unsigned long long staticThreadgroupMemoryLength; 
@property (readonly) BOOL supportIndirectCommandBuffers; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(unsigned long long)uniqueIdentifier;
-(NSString *)label;
-(id<MTLDevice>)device;
-(unsigned long long)gpuAddress;
-(MTLIndirectArgumentBufferEmulationData *)IABEmulationData;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned long long)resourceIndex;
-(BOOL)supportIndirectCommandBuffers;
-(long long)textureWriteRoundingMode;
-(long long)textureWriteFPRoundingMode;
-(id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2 ;
-(id)functionPointerHandleWithFunction:(id)arg1 ;
-(id)functionPointerHandlesWithFunctions:(id)arg1 range:(NSRange)arg2 ;
-(void)setIABEmulationData:(MTLIndirectArgumentBufferEmulationData *)arg1 ;
-(MTLDebugInstrumentationData *)debugInstrumentationData;
-(void)setDebugInstrumentationData:(MTLDebugInstrumentationData *)arg1 ;
@end

