//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ACCPlatformPluginProtocol-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString;

@protocol ACCPlatformPowerPluginProtocol <NSObject, ACCPlatformPluginProtocol>
- (unsigned int)accessoryPowerModeCurrentLimitInmA:(int)arg1 forConnectionUUID:(NSString *)arg2;
- (unsigned int)accessoryChargingCurrentInmA:(NSString *)arg1;
- (_Bool)resetAccessoryBaseCurrent:(NSString *)arg1;
- (_Bool)setAccessoryUsedCurrent:(unsigned int)arg1 forConnectionUUID:(NSString *)arg2;
- (_Bool)setAccessoryRequestedCurrent:(unsigned int)arg1 forConnectionUUID:(NSString *)arg2;
- (_Bool)isBatteryPackModeEnabled:(NSString *)arg1;
- (_Bool)setBatteryPackMode:(_Bool)arg1 forConnectionUUID:(NSString *)arg2;
- (_Bool)isPowerDuringSleepEnabled:(NSString *)arg1;
- (_Bool)setPowerDuringSleepEnabled:(_Bool)arg1 forConnectionUUID:(NSString *)arg2;
- (_Bool)isPowerDuringSleepSupported:(NSString *)arg1;
- (unsigned int)USBChargingVoltageInmV:(NSString *)arg1;
- (unsigned int)sleepPowerCurrentLimitInmA:(NSString *)arg1;
- (int)CableType:(NSString *)arg1;
- (unsigned int)USBCurrentLimitOffsetInmA:(NSString *)arg1;
- (unsigned int)USBCurrentLimitBaseInmA:(NSString *)arg1;
- (unsigned int)USBCurrentLimitInmA:(NSString *)arg1;
- (_Bool)setUSBCurrentLimitBase:(unsigned int)arg1 forConnectionUUID:(NSString *)arg2;
- (_Bool)setUSBCurrentOffset:(int)arg1 forConnectionUUID:(NSString *)arg2;
- (_Bool)configureAccessoryPowerMode:(int)arg1 forConnectionUUID:(NSString *)arg2;
@end

