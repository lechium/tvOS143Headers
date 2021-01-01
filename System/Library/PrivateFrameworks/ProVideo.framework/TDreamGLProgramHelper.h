/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray;

@interface TDreamGLProgramHelper : NSObject {

	NSMutableArray* attributes;
	NSMutableArray* uniforms;
	unsigned program;
	unsigned vertShader;
	unsigned fragShader;
	BOOL _initialized;

}

@property (assign,nonatomic) BOOL initialized;              //@synthesize initialized=_initialized - In the implementation block
-(void)dealloc;
-(BOOL)initialized;
-(void)use;
-(void)addAttribute:(id)arg1 ;
-(BOOL)link;
-(void)setInitialized:(BOOL)arg1 ;
-(unsigned)uniformIndex:(id)arg1 ;
-(BOOL)compileShader:(unsigned*)arg1 type:(unsigned)arg2 string:(id)arg3 ;
-(id)logForOpenGLObject:(unsigned)arg1 infoCallback:(/*function pointer*/void*)arg2 logFunc:(/*function pointer*/void*)arg3 ;
-(id)initWithVertexShaderString:(id)arg1 fragmentShaderString:(id)arg2 ;
-(unsigned)attributeIndex:(id)arg1 ;
-(id)vertexShaderLog;
-(id)fragmentShaderLog;
-(id)programLog;
@end

