/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLBufferLayoutDescriptor.h>

@interface MTLBufferLayoutDescriptorInternal : MTLBufferLayoutDescriptor {

	unsigned long long _stride;
	unsigned long long _stepFunction;
	unsigned long long _instanceStepRate;

}
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(unsigned long long)stride;
-(unsigned long long)stepFunction;
-(unsigned long long)stepRate;
-(void)setStride:(unsigned long long)arg1 ;
-(void)setStepFunction:(unsigned long long)arg1 ;
-(void)setStepRate:(unsigned long long)arg1 ;
@end

