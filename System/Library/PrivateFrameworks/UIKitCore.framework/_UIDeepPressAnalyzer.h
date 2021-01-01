/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class _UIVelocityIntegrator;

@interface _UIDeepPressAnalyzer : NSObject {

	_UIVelocityIntegrator* _touchForceIntegrator;
	_UIVelocityIntegrator* _locationIntegrator;

}

@property (nonatomic,retain) _UIVelocityIntegrator * touchForceIntegrator;                 //@synthesize touchForceIntegrator=_touchForceIntegrator - In the implementation block
@property (nonatomic,retain) _UIVelocityIntegrator * locationIntegrator;                   //@synthesize locationIntegrator=_locationIntegrator - In the implementation block
@property (getter=isDeepPressLikely,nonatomic,readonly) BOOL deepPressLikely; 
-(id)init;
-(void)analyzeTouches:(id)arg1 ;
-(void)setTouchForceIntegrator:(_UIVelocityIntegrator *)arg1 ;
-(void)setLocationIntegrator:(_UIVelocityIntegrator *)arg1 ;
-(double)_touchForceFromTouches:(id)arg1 ;
-(void)analyzeTouchForce:(double)arg1 centroidAtLocation:(CGPoint)arg2 ;
-(_UIVelocityIntegrator *)touchForceIntegrator;
-(_UIVelocityIntegrator *)locationIntegrator;
-(BOOL)isDeepPressLikely;
@end

