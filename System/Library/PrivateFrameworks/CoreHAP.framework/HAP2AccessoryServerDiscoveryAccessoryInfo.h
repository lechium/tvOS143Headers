/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAP2LoggingObject.h>

@class HAPDeviceID, NSDictionary;

@interface HAP2AccessoryServerDiscoveryAccessoryInfo : HAP2LoggingObject {

	HAPDeviceID* _deviceID;
	NSDictionary* _rawDiscoveryInfo;

}

@property (nonatomic,readonly) HAPDeviceID * deviceID;                       //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) NSDictionary * rawDiscoveryInfo;              //@synthesize rawDiscoveryInfo=_rawDiscoveryInfo - In the implementation block
+(id)new;
-(id)init;
-(HAPDeviceID *)deviceID;
-(NSDictionary *)rawDiscoveryInfo;
-(id)initWithDeviceID:(id)arg1 rawDiscoveryInfo:(id)arg2 ;
@end

