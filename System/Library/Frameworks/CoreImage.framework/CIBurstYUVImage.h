/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreImage/CoreImage-Structs.h>
@interface CIBurstYUVImage : NSObject {

	char* Ybuffer;
	char* Cbuffer;
	int width;
	int height;
	int bytesPerRow;
	CFDataRef dataPtr;
	CVBufferRef pixelBuffer;
	IOSurfaceRef ioSurf;

}

@property (assign) int width; 
@property (assign) int height; 
@property (assign) int bytesPerRow; 
@property (assign) char* Ybuffer; 
@property (assign) char* Cbuffer; 
-(void)dealloc;
-(int)width;
-(int)height;
-(int)bytesPerRow;
-(void)setWidth:(int)arg1 ;
-(void)setHeight:(int)arg1 ;
-(void)setBytesPerRow:(int)arg1 ;
-(char*)Ybuffer;
-(id)initWithCGImage:(CGImageRef)arg1 maxDimension:(int)arg2 ;
-(char*)Cbuffer;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 maxDimension:(int)arg2 ;
-(void)convertRGBAToYUV420:(char*)arg1 rgbaBytesPerRow:(int)arg2 ;
-(id)initWithCIImage:(id)arg1 ctx:(id)arg2 maxDimension:(int)arg3 ;
-(CVBufferRef)pixelBuffer;
-(void)setYbuffer:(char*)arg1 ;
-(void)setCbuffer:(char*)arg1 ;
@end

