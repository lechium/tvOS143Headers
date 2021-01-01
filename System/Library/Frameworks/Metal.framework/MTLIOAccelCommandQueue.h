/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/_MTLCommandQueue.h>

@protocol MTLDevice;
@class MTLIOAccelDevice;

@interface MTLIOAccelCommandQueue : _MTLCommandQueue {

	IOAccelCommandQueueRef _commandQueue;
	MTLIOAccelDevice*<MTLDevice> _device;
	unsigned long long _priority;
	unsigned long long _backgroundPriority;

}

@property (readonly) id<MTLDevice> device;              //@synthesize device=_device - In the implementation block
-(void)dealloc;
-(void)setLabel:(id)arg1 ;
-(id<MTLDevice>)device;
-(id)initWithDevice:(id)arg1 descriptor:(id)arg2 ;
-(BOOL)_setGPUPriority:(unsigned long long)arg1 backgroundPriority:(unsigned long long)arg2 ;
-(void)setCompletionQueue:(id)arg1 ;
-(unsigned long long)getGPUPriority;
-(BOOL)setGPUPriority:(unsigned long long)arg1 ;
-(BOOL)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
-(unsigned long long)getBackgroundGPUPriority;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 ;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
-(void)submitCommandBuffers:(const id*)arg1 count:(unsigned long long)arg2 ;
@end
