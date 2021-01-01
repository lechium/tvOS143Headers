/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class _TtC3VFX8VFXScene;

@interface VFXREScene : NSObject {

	 scene;
	 transientDrawCall;
	 rootEntity;
	 cameraEntity;
	 device;
	 lock;
	 remappingTable;

}

@property (retain,nonatomic) _TtC3VFX8VFXScene * scene; 
@property (retain,nonatomic) id transientDrawCall; 
@property (readonly,nonatomic) void* opaqueECS; 
@property (readonly,nonatomic) float deltaTime; 
-(id)init;
-(void)clear;
-(_TtC3VFX8VFXScene *)scene;
-(void)setScene:(_TtC3VFX8VFXScene *)arg1 ;
-(float)deltaTime;
-(void)tick;
-(id)transientDrawCall;
-(void)setTransientDrawCall:(id)arg1 ;
-(void*)opaqueECS;
-(id)initWithDevice:(id)arg1 model:(id)arg2 ;
-(id)initWithDevice:(id)arg1 contentsOf:(id)arg2 error:(id*)arg3 ;
-(id)generateMaterialsAndReturnError:(id*)arg1 ;
-(void)copyBindingValueWithObjectName:(id)arg1 bindingName:(id)arg2 action:(long long)arg3 storageGetterBlock:(/*^block*/id)arg4 ;
-(/*^block*/id)recycleBuffersGetCompletion;
-(void)setRootEntityTransform:::;
-(void)setCameraEntityTransformProjection:::::::;
@end
