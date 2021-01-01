/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <DoNotDisturbServer/DNDSDailyHeartbeatMetricsRecord.h>
#import <libobjc.A.dylib/DNDSMutableHeartbeatMetricsProtocol.h>

@class NSNumber, NSString;

@interface DNDSMutableDailyHeartbeatMetricsRecord : DNDSDailyHeartbeatMetricsRecord <DNDSMutableHeartbeatMetricsProtocol>

@property (nonatomic,copy) NSNumber * dayOfWeek; 
@property (assign,nonatomic) BOOL enabled; 
@property (assign,nonatomic) BOOL manuallyEnabled; 
@property (nonatomic,copy) NSNumber * numberOfSessions; 
@property (nonatomic,copy) NSNumber * numberOfManualSessions; 
@property (assign,nonatomic) BOOL enabledFromControlCenterPhone; 
@property (assign,nonatomic) BOOL enabledFromControlCenterWatch; 
@property (assign,nonatomic) BOOL enabledForOneHour; 
@property (assign,nonatomic) BOOL enabledUntilEvening; 
@property (assign,nonatomic) BOOL enabledUntilMorning; 
@property (assign,nonatomic) BOOL enabledAtLocation; 
@property (assign,nonatomic) BOOL enabledDuringEvent; 
@property (assign,nonatomic) BOOL enabledDrivingMode; 
@property (assign,nonatomic) BOOL enabledSleepMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDayOfWeek:(NSNumber *)arg1 ;
-(void)setManuallyEnabled:(BOOL)arg1 ;
-(void)setNumberOfSessions:(NSNumber *)arg1 ;
-(void)setNumberOfManualSessions:(NSNumber *)arg1 ;
-(void)setEnabledFromControlCenterPhone:(BOOL)arg1 ;
-(void)setEnabledFromControlCenterWatch:(BOOL)arg1 ;
-(void)setEnabledForOneHour:(BOOL)arg1 ;
-(void)setEnabledUntilEvening:(BOOL)arg1 ;
-(void)setEnabledAtLocation:(BOOL)arg1 ;
-(void)setEnabledDuringEvent:(BOOL)arg1 ;
-(void)setEnabledDrivingMode:(BOOL)arg1 ;
-(void)setEnabledSleepMode:(BOOL)arg1 ;
@end

