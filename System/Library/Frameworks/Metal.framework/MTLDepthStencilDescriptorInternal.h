/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLDepthStencilDescriptor.h>

@interface MTLDepthStencilDescriptorInternal : MTLDepthStencilDescriptor {

	MTLDepthStencilDescriptorPrivate _private;

}

@property (readonly) const MTLDepthStencilDescriptorPrivate* depthStencilPrivate; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(id)frontFaceStencil;
-(id)backFaceStencil;
-(const MTLDepthStencilDescriptorPrivate*)depthStencilPrivate;
-(unsigned long long)depthCompareFunction;
-(void)setDepthCompareFunction:(unsigned long long)arg1 ;
-(BOOL)isDepthWriteEnabled;
-(void)setDepthWriteEnabled:(BOOL)arg1 ;
-(void)setFrontFaceStencil:(id)arg1 ;
-(void)setBackFaceStencil:(id)arg1 ;
@end

