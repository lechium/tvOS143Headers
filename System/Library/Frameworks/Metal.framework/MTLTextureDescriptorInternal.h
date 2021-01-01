/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Metal.framework/Metal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Metal/Metal-Structs.h>
#import <Metal/MTLTextureDescriptor.h>

@interface MTLTextureDescriptorInternal : MTLTextureDescriptor {

	MTLTextureDescriptorPrivate _private;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)depth;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned long long)pixelFormat;
-(unsigned long long)protectionOptions;
-(unsigned long long)storageMode;
-(unsigned long long)mipmapLevelCount;
-(unsigned long long)arrayLength;
-(unsigned long long)textureType;
-(unsigned long long)cpuCacheMode;
-(unsigned long long)hazardTrackingMode;
-(unsigned long long)resourceOptions;
-(unsigned long long)sampleCount;
-(unsigned long long)usage;
-(BOOL)allowGPUOptimizedContents;
-(SCD_Struct_MT39)swizzle;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(void)setPixelFormat:(unsigned long long)arg1 ;
-(void)setProtectionOptions:(unsigned long long)arg1 ;
-(void)setWidth:(unsigned long long)arg1 ;
-(void)setHeight:(unsigned long long)arg1 ;
-(void)setArrayLength:(unsigned long long)arg1 ;
-(void)setTextureType:(unsigned long long)arg1 ;
-(void)setDepth:(unsigned long long)arg1 ;
-(void)setMipmapLevelCount:(unsigned long long)arg1 ;
-(void)setSampleCount:(unsigned long long)arg1 ;
-(void)setResourceOptions:(unsigned long long)arg1 ;
-(void)setUsage:(unsigned long long)arg1 ;
-(void)setSwizzle:(SCD_Struct_MT39)arg1 ;
-(void)setAllowGPUOptimizedContents:(BOOL)arg1 ;
-(void)setStorageMode:(unsigned long long)arg1 ;
-(unsigned long long)rotation;
-(unsigned long long)compressionMode;
-(BOOL)forceResourceIndex;
-(void)setForceResourceIndex:(BOOL)arg1 ;
-(unsigned long long)resourceIndex;
-(void)setResourceIndex:(unsigned long long)arg1 ;
-(void)setCpuCacheMode:(unsigned long long)arg1 ;
-(void)setHazardTrackingMode:(unsigned long long)arg1 ;
-(unsigned long long)textureUsage;
-(void)setTextureUsage:(unsigned long long)arg1 ;
-(void)setRotation:(unsigned long long)arg1 ;
-(void)setSwizzleKey:(unsigned)arg1 ;
-(unsigned)swizzleKey;
-(void)setWriteSwizzleEnabled:(BOOL)arg1 ;
-(BOOL)writeSwizzleEnabled;
-(void)setCompressionMode:(unsigned long long)arg1 ;
-(BOOL)framebufferOnly;
-(void)setFramebufferOnly:(BOOL)arg1 ;
-(void)setIsDrawable:(BOOL)arg1 ;
-(BOOL)isDrawable;
-(const MTLTextureDescriptorPrivate*)descriptorPrivate;
-(BOOL)validateWithDevice:(id)arg1 ;
@end

