/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreImage/CoreImage-Structs.h>
@interface CIBilateralGridHash : NSObject {

	int _n_dims;
	int _width;
	int _height;
	int _sigma_s;
	int _sigma_r_luma;
	int _sigma_r_chroma;
	unsigned long long _max_hash_table_size;
	unsigned _hash_table_size;
	BGHashMapContextRef _hash_map;
	SCD_Struct_CI2* _hash_table;
	unsigned* _hash_matrix_data;
	unsigned* _blur_indices;
	unsigned* _coord_indices;
	unsigned* _coord_table;
	unsigned* _coord_indices_off;
	unsigned* _interp_indices;
	unsigned* _interp_table;
	char* _interp_pad;

}
-(void)dealloc;
-(void)clear;
-(int)width;
-(int)height;
-(int)_computeBilateralSpaceYCC444:(IOSurfaceRef)arg1 region:(CGRect)arg2 cropRect:(CGRect)arg3 sigma_s:(int)arg4 sigma_r_luma:(int)arg5 sigma_r_chroma:(int)arg6 ;
-(void)_computeBlurIndices;
-(void)_computeCoordIndices;
-(void)_computeInterpIndices;
-(int)_createWithSurface:(IOSurfaceRef)arg1 region:(CGRect)arg2 cropRect:(CGRect)arg3 sigma_s:(int)arg4 sigma_r_luma:(int)arg5 sigma_r_chroma:(int)arg6 ;
-(int)countVertices;
-(int)countDims;
-(int)_addHashKeyAtX:(int)arg1 Y:(int)arg2 key:(unsigned long long)arg3 isKeyExist:(BOOL*)arg4 ;
-(BOOL)_hashMapFindKey:(unsigned long long)arg1 to:(unsigned*)arg2 ;
-(void)_hashMapAddKey:(unsigned long long)arg1 andValue:(unsigned)arg2 ;
-(int)sigma_s;
-(int)sigma_r_luma;
-(int)sigma_r_chroma;
-(id)initWithWidth:(int)arg1 height:(int)arg2 maxHashTableSize:(unsigned long long)arg3 ;
-(int)createWithSurface:(IOSurfaceRef)arg1 region:(CGRect)arg2 cropRect:(CGRect)arg3 sigma_s:(int)arg4 sigma_r_luma:(int)arg5 sigma_r_chroma:(int)arg6 ;
-(void)splat:(CVBufferRef)arg1 pout:(float*)arg2 ;
-(void)splat_w_mul_x:(CVBufferRef)arg1 inPixelBuffer:(CVBufferRef)arg2 pout:(float*)arg3 ;
-(void)slice:(const float*)arg1 outPixelBuffer:(CVBufferRef)arg2 ;
-(void)slice_trilinear:(IOSurfaceRef)arg1 pin:(const float*)arg2 pout:(CVBufferRef)arg3 ;
-(void)blur:(const float*)arg1 pout:(float*)arg2 ;
-(void)normalize:(const float*)arg1 pout:(float*)arg2 ;
-(void)normalize_blur:(const float*)arg1 pout:(float*)arg2 ;
-(void)splat_ones:(float*)arg1 ;
-(void)blur_ones:(float*)arg1 ;
-(void)blur_n:(float*)arg1 ;
-(const unsigned*)blur_indices:(int)arg1 n_blur_indices:(int*)arg2 ;
-(const void*)hash_table;
-(const unsigned*)hash_matrix;
-(const unsigned*)blur_table;
-(const unsigned*)coord_indices;
-(const unsigned*)coord_table;
-(const unsigned*)interp_indices;
-(const unsigned*)interp_table;
-(const char*)interp_pad;
@end

