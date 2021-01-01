/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLDevice;
@class _TtC3VFX11VFXRenderer;

@interface ARUICelebrationsRenderer : NSObject {

	id<MTLDevice> _device;
	_TtC3VFX11VFXRenderer* _renderer;

}
-(id)initWithDevice:(id)arg1 commandQueue:(id)arg2 ;
-(void)renderCelebrationsForRings:(id)arg1 withCommandBuffer:(id)arg2 intoTexture:(id)arg3 withContext:(id)arg4 ;
-(BOOL)_needsCelebrationRenderPassOn:(id)arg1 ;
@end

