/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXGPayloadTexture.h>
#import <libobjc.A.dylib/PXGMetalSpriteTexture.h>

@protocol MTLTexture;
@class PXGCaptureSpritePayload, PXGColorProgram, NSIndexSet, NSString;

@interface PXGMetalCaptureSpriteTexture : PXGPayloadTexture <PXGMetalSpriteTexture> {

	long long _renderPipelineIndex;
	id<MTLTexture> _texture;
	const SCD_Struct_PX52* _spriteGeometries;
	CGRect _captureRect;

}

@property (nonatomic,copy,readonly) PXGCaptureSpritePayload * payload; 
@property (assign,nonatomic) CGRect captureRect;                                    //@synthesize captureRect=_captureRect - In the implementation block
@property (nonatomic,retain) id<MTLTexture> texture;                                //@synthesize texture=_texture - In the implementation block
@property (assign,nonatomic) const SCD_Struct_PX52* spriteGeometries;               //@synthesize spriteGeometries=_spriteGeometries - In the implementation block
@property (nonatomic,readonly) id<MTLTexture> chromaTexture; 
@property (nonatomic,readonly) PXGColorProgram * colorProgram; 
@property (assign,nonatomic) long long renderPipelineIndex;                         //@synthesize renderPipelineIndex=_renderPipelineIndex - In the implementation block
@property (nonatomic,readonly) BOOL isAtlas; 
@property (nonatomic,readonly) BOOL isCaptureTexture; 
@property (nonatomic,readonly) int shaderFlags; 
@property (nonatomic,readonly) unsigned spriteCount; 
@property (nonatomic,readonly) NSIndexSet * spriteIndexes; 
@property (nonatomic,readonly) long long estimatedByteSize; 
@property (nonatomic,readonly) int presentationType; 
@property (nonatomic,readonly) CGImageRef imageRepresentation; 
@property (nonatomic,readonly) CGSize pixelSize; 
@property (nonatomic,readonly) BOOL isOpaque; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTexture:(id<MTLTexture>)arg1 ;
-(id<MTLTexture>)texture;
-(BOOL)isOpaque;
-(PXGCaptureSpritePayload *)payload;
-(void)getTextureInfos:({?=}*)arg1 forSpriteIndexes:(unsigned*)arg2 geometries:(const SCD_Struct_PX106*)arg3 spriteStyles:(const SCD_Struct_PX83*)arg4 spriteInfos:(const SCD_Struct_PX15*)arg5 screenScale:(double)arg6 count:(unsigned)arg7 ;
-(const SCD_Struct_PX52*)spriteGeometries;
-(id)initWithPayload:(id)arg1 presentationType:(int)arg2 ;
-(int)shaderFlags;
-(void)prepareForRender:(long long)arg1 ;
-(void)cleanupAfterRender:(long long)arg1 ;
-(id<MTLTexture>)chromaTexture;
-(PXGColorProgram *)colorProgram;
-(long long)renderPipelineIndex;
-(void)setRenderPipelineIndex:(long long)arg1 ;
-(BOOL)isAtlas;
-(BOOL)isCaptureTexture;
-(CGRect)captureRect;
-(void)setCaptureRect:(CGRect)arg1 ;
-(void)setSpriteGeometries:(const SCD_Struct_PX52*)arg1 ;
@end
