/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDynamicBehavior.h>

@class NSMutableDictionary, NSArray;

@interface UIPushBehavior : UIDynamicBehavior {

	double _angle;
	double _magnitude;
	BOOL _active;
	long long _mode;
	CGVector _forceVector;
	double _timeInterval;
	NSMutableDictionary* _targetPoints;
	int _i;

}

@property (nonatomic,copy,readonly) NSArray * items; 
@property (nonatomic,readonly) long long mode; 
@property (assign,nonatomic) BOOL active; 
@property (assign,nonatomic) double angle; 
@property (assign,nonatomic) double magnitude; 
@property (assign,nonatomic) CGVector pushDirection; 
+(BOOL)_isPrimitiveBehavior;
-(id)description;
-(id)init;
-(void)removeItem:(id)arg1 ;
-(long long)mode;
-(NSArray *)items;
-(void)addItem:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)active;
-(double)angle;
-(void)setAngle:(double)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(void)_step;
-(double)magnitude;
-(void)setMagnitude:(double)arg1 ;
-(void)setPushDirection:(CGVector)arg1 ;
-(id)initWithItems:(id)arg1 mode:(long long)arg2 ;
-(void)setTargetPoint:(CGPoint)arg1 forItem:(id)arg2 ;
-(void)setXComponent:(double)arg1 yComponent:(double)arg2 ;
-(void)_associate;
-(void)_dissociate;
-(void)setAngle:(double)arg1 magnitude:(double)arg2 ;
-(double)yComponent;
-(double)xComponent;
-(void)setXComponent:(double)arg1 ;
-(void)setYComponent:(double)arg1 ;
-(CGPoint)targetPointForItem:(id)arg1 ;
-(UIOffset)targetOffsetFromCenterForItem:(id)arg1 ;
-(void)setTargetOffsetFromCenter:(UIOffset)arg1 forItem:(id)arg2 ;
-(CGVector)pushDirection;
@end

