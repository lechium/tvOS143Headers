/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class MRImageManager, NSString, MRTexture, NSDictionary, NSMutableDictionary, EAGLContext;

@interface MRImage : NSObject {

	MRImageManager* mImageManager;
	unsigned mWidth;
	unsigned mHeight;
	MRImage* mRefImage;
	NSString* mImageBufferKey;
	MRTexture* mTexture;
	unsigned mPixelFormat;
	float mCenterX;
	float mCenterY;
	float mScale;
	float mRotationAngle;
	NSString* mFilterID;
	NSDictionary* mShader;
	int mClampMode;
	double mSourceTimeStamp;
	double mRenderTime;
	int mRetainByUserCount;
	float mColor[4];
	IOSurfaceRef mIOSurface;
	CVBufferRef mCVPixelBuffer;
	CGContextRef mCGContext;
	CGColorSpaceRef mColorspace;
	void** mDatas[3];
	unsigned mDataSize;
	unsigned mDataRowBytes;
	unsigned mDataWidth;
	unsigned mDataHeight;
	unsigned char mOrientation;
	NSString* mLabel;
	NSMutableDictionary* mUserData;
	CVBufferRef mCVTexture;
	unsigned mFlags;

}

@property (readonly) MRTexture * texture; 
@property (readonly) MRTexture * textureIfExists; 
@property (retain) NSDictionary * shader; 
@property (readonly) int retainByUserCount; 
@property (assign,nonatomic) float centerX; 
@property (assign,nonatomic) float centerY; 
@property (assign,nonatomic) float scale; 
@property (assign,nonatomic) float rotationAngle; 
@property (assign,nonatomic) BOOL usesBackgroundColorAsBorderColor; 
@property (readonly) BOOL usesMipmapping; 
@property (assign,nonatomic) BOOL mipmapFiltersNearest; 
@property (assign,nonatomic) BOOL hasKenBurns; 
@property (assign,nonatomic) BOOL scaleWasFixedForTargetAspectRatio; 
@property (nonatomic,copy) NSString * filterID; 
@property (assign,nonatomic) double sourceTimeStamp; 
@property (assign,nonatomic) double renderTime; 
@property (readonly) NSString * imageBufferKey; 
@property (readonly) MRImageManager * imageManager; 
@property (nonatomic,readonly) unsigned width; 
@property (nonatomic,readonly) unsigned height; 
@property (nonatomic,readonly) unsigned pixelFormat; 
@property (nonatomic,readonly) BOOL isMonochromatic; 
@property (nonatomic,readonly) BOOL isYUV; 
@property (nonatomic,readonly) unsigned textureName; 
@property (nonatomic,readonly) unsigned textureTarget; 
@property (nonatomic,readonly) EAGLContext * updateGLContext; 
@property (assign,nonatomic) int clampMode; 
@property (nonatomic,readonly) BOOL hasKBOrShader; 
@property (nonatomic,readonly) BOOL isPremultiplied; 
@property (assign,nonatomic) BOOL filtersNearest; 
@property (assign,nonatomic) BOOL preservesAspectRatio; 
@property (nonatomic,readonly) BOOL isOpaque; 
@property (nonatomic,copy) NSString * label; 
@property (readonly) NSMutableDictionary * userData; 
@property (nonatomic,readonly) double aspectRatio; 
@property (nonatomic,readonly) BOOL isEmpty; 
-(id)init;
-(void)dealloc;
-(void)finalize;
-(BOOL)isEmpty;
-(void)cleanup;
-(float)scale;
-(NSString *)label;
-(unsigned)width;
-(unsigned)height;
-(unsigned)pixelFormat;
-(void)setLabel:(NSString *)arg1 ;
-(void)setScale:(float)arg1 ;
-(MRTexture *)texture;
-(BOOL)isOpaque;
-(id)initWithImage:(id)arg1 ;
-(double)aspectRatio;
-(float)centerX;
-(float)centerY;
-(NSString *)filterID;
-(id)initWithTexture:(id)arg1 ;
-(NSMutableDictionary *)userData;
-(unsigned)textureTarget;
-(void)setCenterX:(float)arg1 ;
-(void)setCenterY:(float)arg1 ;
-(MRImageManager *)imageManager;
-(float)rotationAngle;
-(void)setRotationAngle:(float)arg1 ;
-(double)renderTime;
-(BOOL)isPremultiplied;
-(void)setShader:(NSDictionary *)arg1 ;
-(NSDictionary *)shader;
-(unsigned)textureName;
-(void)setFilterID:(NSString *)arg1 ;
-(void)setClampMode:(int)arg1 ;
-(void)releaseByUser;
-(id)retainByUser;
-(void)getMatrix:(float)arg1 forReferenceAspectRatio:(float)arg2 ;
-(int)clampMode;
-(BOOL)filtersNearest;
-(BOOL)usesMipmapping;
-(BOOL)mipmapFiltersNearest;
-(void)setOnContext:(id)arg1 onTextureUnit:(unsigned long long)arg2 withReferenceAspectRatio:(float)arg3 state:(SCD_Struct_MR9*)arg4 ;
-(BOOL)preservesAspectRatio;
-(void)unsetOnContext:(id)arg1 onTextureUnit:(unsigned long long)arg2 state:(const SCD_Struct_MR9*)arg3 ;
-(id)insertingInCollection;
-(CGSize)relativeSizeInContextPixelSize:(CGSize)arg1 ;
-(BOOL)scaleWasFixedForTargetAspectRatio;
-(BOOL)hasKenBurns;
-(void)setUsesBackgroundColorAsBorderColor:(BOOL)arg1 ;
-(void)removingFromCollection;
-(id)retainedByUserImage;
-(void)setPreservesAspectRatio:(BOOL)arg1 ;
-(BOOL)isMonochromatic;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 size:(CGSize)arg2 orientation:(long long)arg3 imageBufferKey:(id)arg4 imageManager:(id)arg5 ;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 size:(CGSize)arg2 orientation:(long long)arg3 imageManager:(id)arg4 ;
-(id)initWithCGContext:(CGContextRef)arg1 size:(CGSize)arg2 imageManager:(id)arg3 ;
-(NSString *)imageBufferKey;
-(void)kenburnsMatrix:(float)arg1 forReferenceAspectRatio:(float)arg2 ;
-(BOOL)isYUV;
-(EAGLContext *)updateGLContext;
-(MRTexture *)textureIfExists;
-(id)initWithSize:(CGSize)arg1 andColor:(const float*)arg2 imageBufferKey:(id)arg3 imageManager:(id)arg4 options:(id)arg5 ;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 imageBufferKey:(id)arg2 imageManager:(id)arg3 ;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 imageManager:(id)arg2 ;
-(id)initWithCGImage:(CGImageRef)arg1 textureSize:(CGSize)arg2 orientation:(long long)arg3 imageBufferKey:(id)arg4 imageManager:(id)arg5 monochromatic:(BOOL)arg6 ;
-(id)initWithCGImage:(CGImageRef)arg1 textureSize:(CGSize)arg2 orientation:(long long)arg3 imageManager:(id)arg4 monochromatic:(BOOL)arg5 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 size:(CGSize)arg2 orientation:(long long)arg3 imageBufferKey:(id)arg4 imageManager:(id)arg5 monochromatic:(BOOL)arg6 ;
-(id)initWithCVPixelBuffer:(CVBufferRef)arg1 size:(CGSize)arg2 orientation:(long long)arg3 imageManager:(id)arg4 monochromatic:(BOOL)arg5 ;
-(id)initWithCVTexture:(CVBufferRef)arg1 size:(CGSize)arg2 orientation:(long long)arg3 imageManager:(id)arg4 monochromatic:(BOOL)arg5 ;
-(id)initWithCGContext:(CGContextRef)arg1 imageManager:(id)arg2 ;
-(id)retainedByUserImageWithShader:(id)arg1 ;
-(BOOL)usesBackgroundColorAsBorderColor;
-(void)setFiltersNearest:(BOOL)arg1 ;
-(void)generateMipmap;
-(void)setMipmapFiltersNearest:(BOOL)arg1 ;
-(void)setHasKenBurns:(BOOL)arg1 ;
-(void)setScaleWasFixedForTargetAspectRatio:(BOOL)arg1 ;
-(BOOL)hasKBOrShader;
-(void)addOverlayForROI:(id)arg1 ;
-(void)uploadCGImage:(CGImageRef)arg1 toTextureRect:(CGRect)arg2 ;
-(double)sourceTimeStamp;
-(void)setSourceTimeStamp:(double)arg1 ;
-(void)setRenderTime:(double)arg1 ;
-(int)retainByUserCount;
@end

