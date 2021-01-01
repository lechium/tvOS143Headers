/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
@interface ARUIRingUniforms : NSObject {

	SCD_Struct_AR6 _vertexAttributes;
	SCD_Struct_AR7 _uniforms;

}

@property (nonatomic,readonly) SCD_Struct_AR6 vertexAttributes;              //@synthesize vertexAttributes=_vertexAttributes - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AR7 uniforms;                      //@synthesize uniforms=_uniforms - In the implementation block
-(SCD_Struct_AR6)vertexAttributes;
-(SCD_Struct_AR7)uniforms;
-(void*)vertexAttributesBytes;
-(void*)uniformsBytes;
-(id)initWithRing:(id)arg1 inContext:(id)arg2 ;
-(void)_updateVertexAttributesWithRing:(id)arg1 inContext:(id)arg2 ;
-(void)_updateUniformsWithRing:(id)arg1 inContext:(id)arg2 ;
@end

