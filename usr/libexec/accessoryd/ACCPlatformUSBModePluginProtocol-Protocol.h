//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ACCPlatformPluginProtocol-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString;

@protocol ACCPlatformUSBModePluginProtocol <NSObject, ACCPlatformPluginProtocol>
- (int)USBModeForEndpointUUID:(NSString *)arg1;
- (int)USBModeForConnectionUUID:(NSString *)arg1;
- (_Bool)setUSBMode:(int)arg1 forEndpointUUID:(NSString *)arg2;
- (_Bool)setUSBMode:(int)arg1 forConnectionUUID:(NSString *)arg2;
@end

