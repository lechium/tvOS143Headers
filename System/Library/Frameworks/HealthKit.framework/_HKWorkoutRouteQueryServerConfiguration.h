/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:21 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKQueryServerConfiguration.h>

@class HKWorkoutRoute;

@interface _HKWorkoutRouteQueryServerConfiguration : HKQueryServerConfiguration {

	HKWorkoutRoute* _workoutRoute;

}

@property (nonatomic,retain) HKWorkoutRoute * workoutRoute;              //@synthesize workoutRoute=_workoutRoute - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setWorkoutRoute:(HKWorkoutRoute *)arg1 ;
-(HKWorkoutRoute *)workoutRoute;
@end

