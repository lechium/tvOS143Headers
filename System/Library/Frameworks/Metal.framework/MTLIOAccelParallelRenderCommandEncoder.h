/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/_MTLParallelRenderCommandEncoder.h>

@interface MTLIOAccelParallelRenderCommandEncoder : _MTLParallelRenderCommandEncoder
-(void)setLabel:(id)arg1 ;
-(unsigned long long)getType;
-(void)pushDebugGroup:(id)arg1 ;
-(void)popDebugGroup;
-(void)endEncoding;
-(id)initWithCommandBuffer:(id)arg1 renderPassDescriptor:(id)arg2 ;
-(BOOL)isMemorylessRender;
@end
