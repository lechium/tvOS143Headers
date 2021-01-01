/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Espresso/Espresso-Structs.h>
@class NSDictionary;

@interface EspressoANEIOSurface : NSObject {

	NSDictionary* params_dict;
	vector<Espresso::ANERuntimeEngine::surface_and_buffer, std::__1::allocator<Espresso::ANERuntimeEngine::surface_and_buffer> >* multiple_buffer_io_surfaces;
	BOOL created_with_lazy_iosurface;
	BOOL ane_surface_use_cvpixelbuffer;
	unsigned long long width;
	unsigned long long height;
	unsigned long long rowBytes;
	unsigned pixelFormat;
	shared_ptr<Espresso::blob<unsigned char, 1> >* _external_storage_blob_for_aliasing_mem;

}

@property (assign,nonatomic) shared_ptr<Espresso::blob<unsigned char external_storage_blob_for_aliasing_mem;              //@synthesize external_storage_blob_for_aliasing_mem=_external_storage_blob_for_aliasing_mem - In the implementation block
-(void)cleanup;
-(IOSurfaceRef)ioSurfaceForMultiBufferFrame:(unsigned long long)arg1 ;
-(id)ane_io_surfaceForMultiBufferFrame:(unsigned long long)arg1 ;
-(void)doNonLazyAllocation:(id)arg1 ;
-(id)initWithIOSurfaceProperties:(id)arg1 ;
-(void)resizeForMultipleAsyncBuffers:(unsigned long long)arg1 ;
-(BOOL)checkIfMatches:(CVBufferRef)arg1 ;
-(BOOL)checkIfMatchesIOSurface:(IOSurfaceRef)arg1 ;
-(IOSurfaceRef)createIOSurfaceWithExtraProperties:(id)arg1 ;
-(void)lazilyAutoCreateSurfaceForFrame:(unsigned long long)arg1 ;
-(IOSurfaceRef)ioSurfaceForMultiBufferFrameNoLazyForTesting:(unsigned long long)arg1 ;
-(void)setExternalStorage:(unsigned long long)arg1 ioSurface:(IOSurfaceRef)arg2 ;
-(void)restoreInternalStorage:(unsigned long long)arg1 ;
-(void)restoreInternalStorageForAllMultiBufferFrames;
-(id)metalBufferWithDevice:(id)arg1 multiBufferFrame:(unsigned long long)arg2 ;
-(unsigned long long)nFrames;
-(shared_ptr<Espresso::blob<unsigned char)external_storage_blob_for_aliasing_mem;
-(void)setExternal_storage_blob_for_aliasing_mem:(shared_ptr<Espresso::blob<unsigned char)arg1 ;
@end

