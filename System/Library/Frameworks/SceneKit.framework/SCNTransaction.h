/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SceneKit/SceneKit-Structs.h>
@interface SCNTransaction : NSObject
+(void)lock;
+(void)unlock;
+(void)setValue:(id)arg1 forKey:(id)arg2 ;
+(void)setCompletionBlock:(/*^block*/id)arg1 ;
+(id)valueForKey:(id)arg1 ;
+(/*^block*/id)completionBlock;
+(void)begin;
+(void)commit;
+(unsigned)currentState;
+(void)flush;
+(double)animationDuration;
+(void)setAnimationDuration:(double)arg1 ;
+(id)animationTimingFunction;
+(void)setAnimationTimingFunction:(id)arg1 ;
+(BOOL)disableActions;
+(void)setDisableActions:(BOOL)arg1 ;
+(void)postCommandWithContext:(C3DSceneRef)arg1 object:(id)arg2 applyBlock:(/*^block*/id)arg3 ;
+(BOOL)immediateMode;
+(void)setImmediateMode:(BOOL)arg1 ;
+(void)postCommandWithContext:(C3DSceneRef)arg1 object:(id)arg2 keyPath:(id)arg3 applyBlock:(/*^block*/id)arg4 ;
+(void)commitImmediate;
+(void)postCommandWithContext:(C3DSceneRef)arg1 object:(id)arg2 key:(id)arg3 applyBlock:(/*^block*/id)arg4 ;
+(void)setImmediateModeRestrictedContext:(C3DSceneRef)arg1 ;
+(C3DSceneRef)immediateModeRestrictedContext;
+(void)checkUncommittedTransactions;
-(void)lock;
-(void)unlock;
-(void)begin;
-(void)commit;
-(void)flush;
-(double)animationDuration;
-(void)setAnimationDuration:(double)arg1 ;
-(id)animationTimingFunction;
-(void)setAnimationTimingFunction:(id)arg1 ;
-(BOOL)disableActions;
-(void)setDisableActions:(BOOL)arg1 ;
@end
