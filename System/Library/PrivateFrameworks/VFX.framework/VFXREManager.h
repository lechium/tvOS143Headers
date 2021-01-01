/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VFX.framework/VFX
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VFXREManager : NSObject {

	 entityManager;
	 rootEntity;
	 cameraEntity;
	 device;
	 lock;
	 remappingTable;
	 registeredBindings;
	 transientDrawCall;

}

@property (readonly,nonatomic) float deltaTime; 
-(id)init;
-(void)clear;
-(float)deltaTime;
-(id)generateMaterialsAndReturnError:(id*)arg1 ;
-(/*^block*/id)recycleBuffersGetCompletion;
-(void)setRootEntityTransform:::;
-(void)setCameraEntityTransformProjection:::::::;
-(void)withPointerToValueAtPath:(id)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithDevice:(id)arg1 modelManager:(id)arg2 ;
-(BOOL)loadWithUrl:(id)arg1 loadScriptSymbols:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)registerBindingWithPath:(id)arg1 type:(id)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
-(void)unregisterBindingWithPath:(id)arg1 ;
-(void)tick:(void*)arg1 ;
-(void)forEachDrawCall:(/*^block*/id)arg1 ;
@end

