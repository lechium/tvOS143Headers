/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKTaskConfiguration.h>

@class HKDevice, HKWorkoutConfiguration, HKQuantity, NSUUID;

@interface HKWorkoutBuilderConfiguration : HKTaskConfiguration {

	BOOL _shouldCollectWorkoutEvents;
	BOOL _requiresRecovery;
	HKDevice* _device;
	HKWorkoutConfiguration* _workoutConfiguration;
	unsigned long long _goalType;
	HKQuantity* _goal;
	NSUUID* _associatedSessionUUID;

}

@property (nonatomic,copy) HKDevice * device;                                          //@synthesize device=_device - In the implementation block
@property (nonatomic,copy) HKWorkoutConfiguration * workoutConfiguration;              //@synthesize workoutConfiguration=_workoutConfiguration - In the implementation block
@property (assign,nonatomic) unsigned long long goalType;                              //@synthesize goalType=_goalType - In the implementation block
@property (nonatomic,copy) HKQuantity * goal;                                          //@synthesize goal=_goal - In the implementation block
@property (nonatomic,copy) NSUUID * associatedSessionUUID;                             //@synthesize associatedSessionUUID=_associatedSessionUUID - In the implementation block
@property (assign,nonatomic) BOOL shouldCollectWorkoutEvents;                          //@synthesize shouldCollectWorkoutEvents=_shouldCollectWorkoutEvents - In the implementation block
@property (assign,nonatomic) BOOL requiresRecovery;                                    //@synthesize requiresRecovery=_requiresRecovery - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKDevice *)device;
-(void)setDevice:(HKDevice *)arg1 ;
-(NSUUID *)associatedSessionUUID;
-(void)setWorkoutConfiguration:(HKWorkoutConfiguration *)arg1 ;
-(void)setGoalType:(unsigned long long)arg1 ;
-(void)setGoal:(HKQuantity *)arg1 ;
-(HKWorkoutConfiguration *)workoutConfiguration;
-(unsigned long long)goalType;
-(HKQuantity *)goal;
-(BOOL)requiresRecovery;
-(void)setRequiresRecovery:(BOOL)arg1 ;
-(void)setAssociatedSessionUUID:(NSUUID *)arg1 ;
-(void)setShouldCollectWorkoutEvents:(BOOL)arg1 ;
-(BOOL)shouldCollectWorkoutEvents;
@end

