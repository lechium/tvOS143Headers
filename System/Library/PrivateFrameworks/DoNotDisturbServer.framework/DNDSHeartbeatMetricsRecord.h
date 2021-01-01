/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/DNDSHeartbeatMetricsProtocol.h>

@class NSNumber, NSString;

@interface DNDSHeartbeatMetricsRecord : NSObject <DNDSHeartbeatMetricsProtocol> {

	BOOL _enabled;
	BOOL _manuallyEnabled;
	NSNumber* _numberOfSessions;
	NSNumber* _numberOfManualSessions;
	BOOL _enabledFromControlCenterPhone;
	BOOL _enabledFromControlCenterWatch;
	BOOL _enabledForOneHour;
	BOOL _enabledUntilEvening;
	BOOL _enabledUntilMorning;
	BOOL _enabledAtLocation;
	BOOL _enabledDuringEvent;
	BOOL _enabledDrivingMode;
	BOOL _enabledSleepMode;

}

@property (nonatomic,readonly) BOOL enabled;                                        //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) BOOL manuallyEnabled;                                //@synthesize manuallyEnabled=_manuallyEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * numberOfSessions;                    //@synthesize numberOfSessions=_numberOfSessions - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * numberOfManualSessions;              //@synthesize numberOfManualSessions=_numberOfManualSessions - In the implementation block
@property (nonatomic,readonly) BOOL enabledFromControlCenterPhone;                  //@synthesize enabledFromControlCenterPhone=_enabledFromControlCenterPhone - In the implementation block
@property (nonatomic,readonly) BOOL enabledFromControlCenterWatch;                  //@synthesize enabledFromControlCenterWatch=_enabledFromControlCenterWatch - In the implementation block
@property (nonatomic,readonly) BOOL enabledForOneHour;                              //@synthesize enabledForOneHour=_enabledForOneHour - In the implementation block
@property (nonatomic,readonly) BOOL enabledUntilEvening;                            //@synthesize enabledUntilEvening=_enabledUntilEvening - In the implementation block
@property (nonatomic,readonly) BOOL enabledUntilMorning;                            //@synthesize enabledUntilMorning=_enabledUntilMorning - In the implementation block
@property (nonatomic,readonly) BOOL enabledAtLocation;                              //@synthesize enabledAtLocation=_enabledAtLocation - In the implementation block
@property (nonatomic,readonly) BOOL enabledDuringEvent;                             //@synthesize enabledDuringEvent=_enabledDuringEvent - In the implementation block
@property (nonatomic,readonly) BOOL enabledDrivingMode;                             //@synthesize enabledDrivingMode=_enabledDrivingMode - In the implementation block
@property (nonatomic,readonly) BOOL enabledSleepMode;                               //@synthesize enabledSleepMode=_enabledSleepMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3 ;
+(id)newWithDictionaryRepresentation:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(BOOL)enabled;
-(id)dictionaryRepresentation;
-(id)_initWithRecord:(id)arg1 ;
-(NSNumber *)numberOfSessions;
-(NSNumber *)numberOfManualSessions;
-(BOOL)manuallyEnabled;
-(BOOL)enabledFromControlCenterPhone;
-(BOOL)enabledFromControlCenterWatch;
-(BOOL)enabledForOneHour;
-(BOOL)enabledUntilEvening;
-(BOOL)enabledUntilMorning;
-(BOOL)enabledAtLocation;
-(BOOL)enabledDuringEvent;
-(BOOL)enabledDrivingMode;
-(BOOL)enabledSleepMode;
-(id)_initWithEnabled:(BOOL)arg1 manuallyEnabled:(BOOL)arg2 numberOfSessions:(id)arg3 numberOfManualSessions:(id)arg4 enabledFromControlCenterPhone:(BOOL)arg5 enabledFromControlCenterWatch:(BOOL)arg6 enabledForOneHour:(BOOL)arg7 enabledUntilEvening:(BOOL)arg8 enabledUntilMorning:(BOOL)arg9 enabledAtLocation:(BOOL)arg10 enabledDuringEvent:(BOOL)arg11 enabledDrivingMode:(BOOL)arg12 enabledSleepMode:(BOOL)arg13 ;
@end

