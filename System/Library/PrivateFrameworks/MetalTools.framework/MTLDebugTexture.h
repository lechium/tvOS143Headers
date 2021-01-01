/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsTexture.h>
#import <libobjc.A.dylib/MTLDebugResourcePurgeable.h>

@class MTLDebugDevice, MTLDebugResource;

@interface MTLDebugTexture : MTLToolsTexture <MTLDebugResourcePurgeable> {

	MTLPixelFormatInfo _pixelFormatInfo;
	MTLDebugDevice* _debugDevice;
	unsigned long long _usageRequired;
	atomic<int> _purgeableStateToken;
	BOOL _purgeableStateHasBeenSet;
	mutex _subViewUseLock;
	BOOL _isLinearTexture;
	MTLDebugResource* _common;
	unsigned long long _offset;
	unsigned long long _bytesPerRow;
	unsigned long long _bytesPerImage;
	unsigned long long _plane;
	unordered_map<SubView, unsigned long, SubView::hash_t, SubView::equal_t, std::__1::allocator<std::__1::pair<const SubView, unsigned long> > >* _activeSubViews;

}

@property (nonatomic,readonly) MTLDebugResource * common;                       //@synthesize common=_common - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;                       //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesPerRow;                  //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (nonatomic,readonly) unsigned long long bytesPerImage;                //@synthesize bytesPerImage=_bytesPerImage - In the implementation block
@property (nonatomic,readonly) unsigned long long plane;                        //@synthesize plane=_plane - In the implementation block
@property (assign,nonatomic) unordered_map<SubView activeSubViews;              //@synthesize activeSubViews=_activeSubViews - In the implementation block
@property (nonatomic,readonly) BOOL isLinearTexture;                            //@synthesize isLinearTexture=_isLinearTexture - In the implementation block
-(id)description;
-(void)dealloc;
-(unsigned long long)bytesPerRow;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(BOOL)doesAliasAllResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasAnyResources:(const id*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)doesAliasResource:(id)arg1 ;
-(void)makeAliasable;
-(id)heap;
-(void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 bytesPerImage:(unsigned long long)arg3 fromRegion:(SCD_Struct_MT108)arg4 mipmapLevel:(unsigned long long)arg5 slice:(unsigned long long)arg6 ;
-(void)replaceRegion:(SCD_Struct_MT108)arg1 mipmapLevel:(unsigned long long)arg2 slice:(unsigned long long)arg3 withBytes:(const void*)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6 ;
-(void)getBytes:(void*)arg1 bytesPerRow:(unsigned long long)arg2 fromRegion:(SCD_Struct_MT108)arg3 mipmapLevel:(unsigned long long)arg4 ;
-(void)replaceRegion:(SCD_Struct_MT108)arg1 mipmapLevel:(unsigned long long)arg2 withBytes:(const void*)arg3 bytesPerRow:(unsigned long long)arg4 ;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 ;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(NSRange)arg3 slices:(NSRange)arg4 ;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(NSRange)arg3 slices:(NSRange)arg4 swizzle:(SCD_Struct_MT59)arg5 ;
-(unsigned long long)offset;
-(id)newCompressedTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 level:(unsigned long long)arg3 slice:(unsigned long long)arg4 ;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 resourceIndex:(unsigned long long)arg2 ;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(NSRange)arg3 slices:(NSRange)arg4 resourceIndex:(unsigned long long)arg5 ;
-(id)newTextureViewWithPixelFormat:(unsigned long long)arg1 textureType:(unsigned long long)arg2 levels:(NSRange)arg3 slices:(NSRange)arg4 swizzle:(SCD_Struct_MT59)arg5 resourceIndex:(unsigned long long)arg6 ;
-(unsigned long long)bytesPerImage;
-(MTLDebugResource *)common;
-(unsigned long long)plane;
-(id)initWithBaseTexture:(id)arg1 device:(id)arg2 buffer:(id)arg3 offset:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5 ;
-(id)initWithBaseTexture:(id)arg1 device:(id)arg2 buffer:(id)arg3 offset:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5 bytesPerImage:(unsigned long long)arg6 ;
-(void)lockPurgeableState;
-(void)unlockPurgeableState;
-(BOOL)purgeableStateValidForRendering;
-(void)addUsedRenderTarget:(unsigned long long)arg1 slices:(NSRange)arg2 ;
-(void)removeUsedRenderTarget:(unsigned long long)arg1 slices:(NSRange)arg2 ;
-(BOOL)requireUsage:(unsigned long long)arg1 ;
-(id)initWithBaseTexture:(id)arg1 device:(id)arg2 ;
-(id)initWithBaseTexture:(id)arg1 device:(id)arg2 plane:(unsigned long long)arg3 ;
-(id)initWithBaseTexture:(id)arg1 heap:(id)arg2 device:(id)arg3 ;
-(id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 ;
-(id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 pixelFormat:(unsigned long long)arg4 ;
-(id)initWithBaseTexture:(id)arg1 device:(id)arg2 texture:(id)arg3 pixelFormat:(unsigned long long)arg4 textureType:(unsigned long long)arg5 levels:(NSRange)arg6 slices:(NSRange)arg7 ;
-(BOOL)_resourceHasMemory;
-(unordered_map<SubView)activeSubViews;
-(void)setActiveSubViews:(unordered_map<SubView)arg1 ;
-(BOOL)isLinearTexture;
@end

