/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GKPath, NSArray;

@interface GKGoal : NSObject <NSCopying> {

	int _type;
	GKPath* _path;
	NSArray* _obstacles;
	NSArray* _agents;
	double _time;
	float _angle;
	float _distance;
	float _speed;
	BOOL _forward;

}
+(id)goalToSeekAgent:(id)arg1 ;
+(id)goalToFleeAgent:(id)arg1 ;
+(id)goalToAvoidObstacles:(id)arg1 maxPredictionTime:(double)arg2 ;
+(id)goalToAvoidAgents:(id)arg1 maxPredictionTime:(double)arg2 ;
+(id)goalToSeparateFromAgents:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3 ;
+(id)goalToAlignWithAgents:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3 ;
+(id)goalToCohereWithAgents:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3 ;
+(id)goalToReachTargetSpeed:(float)arg1 ;
+(id)goalToWander:(float)arg1 ;
+(id)goalToInterceptAgent:(id)arg1 maxPredictionTime:(double)arg2 ;
+(id)goalToFollowPath:(id)arg1 maxPredictionTime:(double)arg2 forward:(BOOL)arg3 ;
+(id)goalToStayOnPath:(id)arg1 maxPredictionTime:(double)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copy;
-(id)init;
-(float)speed;
-(BOOL)isTargetSpeedGoal;
-(3)getForce:(double)arg1 agent:(id)arg2 ;
-(id)initToSeekAgent:(id)arg1 ;
-(id)initToFleeAgent:(id)arg1 ;
-(id)initToAvoidObstacles:(id)arg1 maxPredictionTime:(double)arg2 ;
-(id)initToAvoidAgents:(id)arg1 maxPredictionTime:(double)arg2 ;
-(id)initToSeparateFromAgents:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3 ;
-(id)initToAlignWithAgents:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3 ;
-(id)initToCohereWithAgents:(id)arg1 maxDistance:(float)arg2 maxAngle:(float)arg3 ;
-(id)initToReachTargetSpeed:(float)arg1 ;
-(id)initToWander:(float)arg1 ;
-(id)initToInterceptAgent:(id)arg1 maxPredictionTime:(double)arg2 ;
-(id)initToFollowPath:(id)arg1 maxPredictionTime:(double)arg2 forward:(BOOL)arg3 ;
-(id)initToStayOnPath:(id)arg1 maxPredictionTime:(double)arg2 ;
@end

