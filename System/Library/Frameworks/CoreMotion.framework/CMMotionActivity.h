/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@class NSDate;

@interface CMMotionActivity : CMLogItem {

	CLMotionActivity fState;

}

@property (getter=isVehicleConnected,nonatomic,readonly) BOOL vehicleConnected; 
@property (getter=isVehicleWifiHint,nonatomic,readonly) BOOL vehicleWifiHint; 
@property (getter=isVehicleGpsHint,nonatomic,readonly) BOOL vehicleGpsHint; 
@property (getter=isVehicleBasebandHint,nonatomic,readonly) BOOL vehicleBasebandHint; 
@property (getter=isVehicleMotionHint,nonatomic,readonly) BOOL vehicleMotionHint; 
@property (getter=isVehicleBTHint,nonatomic,readonly) BOOL vehicleBTHint; 
@property (nonatomic,readonly) long long confidence; 
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) BOOL unknown; 
@property (nonatomic,readonly) BOOL stationary; 
@property (nonatomic,readonly) BOOL walking; 
@property (nonatomic,readonly) BOOL running; 
@property (nonatomic,readonly) BOOL automotive; 
@property (nonatomic,readonly) BOOL cycling; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)confidence;
-(NSDate *)startDate;
-(BOOL)running;
-(BOOL)stationary;
-(id)initWithMotionActivity:(CLMotionActivity)arg1 ;
-(BOOL)unknown;
-(BOOL)walking;
-(BOOL)automotive;
-(BOOL)cycling;
-(BOOL)isVehicleConnected;
-(BOOL)isVehicleWifiHint;
-(BOOL)isVehicleGpsHint;
-(BOOL)isVehicleBasebandHint;
-(BOOL)isVehicleMotionHint;
-(BOOL)isVehicleBTHint;
-(CLMotionActivity*)motionActivity;
@end
