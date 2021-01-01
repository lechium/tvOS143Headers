/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreImage/CoreImage-Structs.h>
@class CIBlendKernel;

@interface CIRenderDestination : NSObject {

	void* _priv;

}

@property (readonly) unsigned long long width; 
@property (readonly) unsigned long long height; 
@property (assign) unsigned long long alphaMode; 
@property (getter=isFlipped) BOOL flipped; 
@property (getter=isDithered) BOOL dithered; 
@property (getter=isClamped) BOOL clamped; 
@property (assign,nonatomic) CGColorSpaceRef colorSpace; 
@property (nonatomic,retain) CIBlendKernel * blendKernel; 
@property (assign) BOOL blendsInDestinationColorSpace; 
+(int)_crashed_because_nonaddressable_memory_was_passed_to_initWithBitmapData:(void*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 format:(int)arg5 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)label;
-(unsigned long long)width;
-(unsigned long long)height;
-(id)surface;
-(void)setLabel:(id)arg1 ;
-(int)format;
-(BOOL)isCompressed;
-(BOOL)isFlipped;
-(void)setFlipped:(BOOL)arg1 ;
-(CGColorSpaceRef)colorSpace;
-(void)setColorSpace:(CGColorSpaceRef)arg1 ;
-(CIRenderDestinationInternal*)_internalRepresentation;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 ;
-(void)setAlphaMode:(unsigned long long)arg1 ;
-(void)setClamped:(BOOL)arg1 ;
-(id)initWithGLTexture:(unsigned)arg1 target:(unsigned)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 ;
-(id)initWithMTLTexture:(id)arg1 commandBuffer:(id)arg2 ;
-(id)initWithIOSurface:(id)arg1 ;
-(id)initWithBitmapData:(void*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 format:(int)arg5 ;
-(id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned long long)arg3 commandBuffer:(id)arg4 mtlTextureProvider:(/*^block*/id)arg5 ;
-(void)setBlendKernel:(CIBlendKernel *)arg1 ;
-(RenderDestination*)_internalRenderDestination;
-(id)_initWithInternalRenderDestination:(RenderDestination*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 format:(int)arg4 colorspace:(CGColorSpaceRef)arg5 ;
-(void)_set_YCC_matrix:(int)arg1 fullRange:(BOOL)arg2 deep:(BOOL)arg3 isFloat:(float)arg4 ;
-(void)setCompressed:(BOOL)arg1 ;
-(RenderTask*)_render:(Image*)arg1 withContext:(Context*)arg2 ;
-(id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned)arg3 colorSpace:(CGColorSpaceRef)arg4 pixelBufferProvider:(/*^block*/id)arg5 ;
-(id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 pixelFormat:(unsigned)arg3 colorSpace:(CGColorSpaceRef)arg4 surfaceProvider:(/*^block*/id)arg5 ;
-(unsigned long long)alphaMode;
-(BOOL)isDithered;
-(void)setDithered:(BOOL)arg1 ;
-(int)ditherDepth;
-(BOOL)isClamped;
-(CIBlendKernel *)blendKernel;
-(BOOL)blendsInDestinationColorSpace;
-(void)setBlendsInDestinationColorSpace:(BOOL)arg1 ;
-(id)imageRepresentation;
@end

