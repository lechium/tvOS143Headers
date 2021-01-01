/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNPhysicsBehavior.h>

@class SCNPhysicsBody, NSArray, SCNPhysicsWorld;

@interface SCNPhysicsVehicle : SCNPhysicsBehavior {

	SCNPhysicsBody* _chassisBody;
	NSArray* _wheels;
	SCNPhysicsWorld* _world;
	btRaycastVehicle* _vehicle;
	double _speedKmHour;

}

@property (nonatomic,readonly) double speedInKilometersPerHour; 
@property (nonatomic,readonly) NSArray * wheels; 
@property (nonatomic,readonly) SCNPhysicsBody * chassisBody; 
+(BOOL)supportsSecureCoding;
+(id)vehicleWithChassisBody:(id)arg1 wheels:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_update;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)physicsWorld;
-(void)_addToPhysicsWorld:(id)arg1 ;
-(void)_willRemoveFromPhysicsWorld:(id)arg1 ;
-(void)_handleCreateIfNeeded:(BOOL)arg1 ;
-(BOOL)hasReferenceToPhysicsBody:(id)arg1 ;
-(btRaycastVehicle*)btVehicle;
-(void)applyEngineForce:(double)arg1 forWheelAtIndex:(long long)arg2 ;
-(void)setSteeringAngle:(double)arg1 forWheelAtIndex:(long long)arg2 ;
-(void)applyBrakingForce:(double)arg1 forWheelAtIndex:(long long)arg2 ;
-(double)speedInKilometersPerHour;
-(NSArray *)wheels;
-(SCNPhysicsBody *)chassisBody;
-(void)_initializeWheelsArray;
-(id)initWithChassisBody:(id)arg1 wheels:(id)arg2 ;
-(void)_createWheel:(id)arg1 ;
-(id)wheelAtIndex:(unsigned long long)arg1 ;
-(void)_customDecodingOfSCNPhysicsVehicle:(id)arg1 ;
@end

