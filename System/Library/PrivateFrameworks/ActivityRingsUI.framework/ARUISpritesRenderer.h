/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLBuffer;
@class ARUISpriteRenderState, ARUISpriteUniformsCache;

@interface ARUISpritesRenderer : NSObject {

	id<MTLBuffer> _spriteVertexBuffer;
	id<MTLBuffer> _spriteIndexBuffer;
	unsigned long long _numIndicies;
	ARUISpriteRenderState* _spriteRenderState;
	ARUISpriteUniformsCache* _cache;

}
+(void)clearCaches;
-(id)initWithDevice:(id)arg1 library:(id)arg2 ;
-(id)initWithDeviceSPI:(id)arg1 librarySPI:(id)arg2 ;
-(void)renderSpriteSheet:(id)arg1 intoContext:(id)arg2 withCommandEncoder:(id)arg3 ;
-(void)_sharedInitWithDevice:(id)arg1 ;
@end
