/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _TtC3VFX8VFXScene, UIColor;

@interface VFX.VFXRenderer : NSObject {

	 scene;
	 renderer;
	 texture;
	 depthTexture;
	 backgroundColor;

}

@property (retain,nonatomic) _TtC3VFX8VFXScene * scene; 
@property (retain,nonatomic) id<MTLTexture> texture; 
@property (retain,nonatomic) id<MTLTexture> depthTexture; 
@property (retain,nonatomic) UIColor * backgroundColor; 
-(id)init;
-(void)setTexture:(id<MTLTexture>)arg1 ;
-(id<MTLTexture>)texture;
-(_TtC3VFX8VFXScene *)scene;
-(void)setScene:(_TtC3VFX8VFXScene *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)initWithCommandQueue:(id)arg1 ;
-(void)encodeWithCommandBuffer:(id)arg1 ;
-(id<MTLTexture>)depthTexture;
-(void)setDepthTexture:(id<MTLTexture>)arg1 ;
@end
