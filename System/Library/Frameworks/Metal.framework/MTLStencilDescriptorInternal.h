/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLStencilDescriptor.h>

@interface MTLStencilDescriptorInternal : MTLStencilDescriptor {

	MTLStencilDescriptorPrivate _private;

}

@property (readonly) const MTLStencilDescriptorPrivate* stencilPrivate; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(unsigned)writeMask;
-(void)setWriteMask:(unsigned)arg1 ;
-(const MTLStencilDescriptorPrivate*)stencilPrivate;
-(unsigned long long)stencilCompareFunction;
-(void)setStencilCompareFunction:(unsigned long long)arg1 ;
-(unsigned long long)stencilFailureOperation;
-(void)setStencilFailureOperation:(unsigned long long)arg1 ;
-(unsigned long long)depthFailureOperation;
-(void)setDepthFailureOperation:(unsigned long long)arg1 ;
-(unsigned long long)depthStencilPassOperation;
-(void)setDepthStencilPassOperation:(unsigned long long)arg1 ;
-(unsigned)readMask;
-(void)setReadMask:(unsigned)arg1 ;
@end

