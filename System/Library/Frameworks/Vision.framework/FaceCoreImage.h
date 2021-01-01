/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Vision.framework/libfaceCore.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <libfaceCore.dylib/libfaceCore.dylib-Structs.h>
@interface FaceCoreImage : NSObject {

	char* _rawDataBuffer;
	char* _alignedDataBuffer;
	BOOL _freeWhenDone;
	unsigned long long _width;
	unsigned long long _height;
	unsigned long long _bytesPerRow;

}

@property (readonly) unsigned long long width;                    //@synthesize width=_width - In the implementation block
@property (readonly) unsigned long long height;                   //@synthesize height=_height - In the implementation block
@property (readonly) unsigned long long bytesPerRow;              //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (readonly) char* alignedImageData; 
-(void)dealloc;
-(unsigned long long)width;
-(unsigned long long)height;
-(unsigned long long)bytesPerRow;
-(id)initWithCGImage:(CGImageRef)arg1 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 ;
-(char*)alignedImageData;
-(id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 buffer:(void*)arg4 freeWhenDone:(BOOL)arg5 ;
@end

