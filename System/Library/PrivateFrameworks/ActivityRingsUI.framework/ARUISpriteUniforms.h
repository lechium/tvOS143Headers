/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
@interface ARUISpriteUniforms : NSObject {

	SCD_Struct_AR1 _uniforms;
	SCD_Struct_AR3 _vertexAttributes;

}

@property (nonatomic,readonly) SCD_Struct_AR3 vertexAttributes;              //@synthesize vertexAttributes=_vertexAttributes - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AR1 uniforms;                      //@synthesize uniforms=_uniforms - In the implementation block
-(SCD_Struct_AR3)vertexAttributes;
-(SCD_Struct_AR1)uniforms;
-(void)_updateVertexAttributesWithSprite:(id)arg1 inContet:(id)arg2 ;
-(void)_updateUniformsWithSprite:(id)arg1 ;
-(id)initWithSprite:(id)arg1 inContext:(id)arg2 ;
-(void*)vertexAttributesBytes;
-(void*)uniformsBytes;
@end

