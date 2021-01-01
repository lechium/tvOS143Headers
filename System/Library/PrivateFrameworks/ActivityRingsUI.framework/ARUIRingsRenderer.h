/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLBuffer;
@class ARUIRingUniformsCache;

@interface ARUIRingsRenderer : NSObject {

	id<MTLBuffer> _vertexPositionsBuffer;
	id<MTLBuffer> _indexBuffer;
	unsigned long long _indexCount;
	ARUIRingUniformsCache* _cache;

}
-(id)initWithDevice:(id)arg1 ;
-(void)clearCaches;
-(void)beginRenderingWithCommandEncoder:(id)arg1 ;
-(void)renderRings:(id)arg1 intoContext:(id)arg2 withCommandEncoder:(id)arg3 forState:(id)arg4 ;
-(void)_renderEntireRings:(id)arg1 intoContext:(id)arg2 withCommandEncoder:(id)arg3 forState:(id)arg4 ;
-(void)_renderRingsFollowingPercent:(id)arg1 intoContext:(id)arg2 withCommandEncoder:(id)arg3 forState:(id)arg4 ;
@end

