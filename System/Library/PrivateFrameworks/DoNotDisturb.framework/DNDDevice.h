/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturb/DoNotDisturb-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface DNDDevice : NSObject <NSCopying> {

	unsigned long long _deviceClass;
	unsigned long long _deviceCapabilities;

}

@property (nonatomic,readonly) unsigned long long deviceClass;                     //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,readonly) unsigned long long deviceCapabilities;              //@synthesize deviceCapabilities=_deviceCapabilities - In the implementation block
+(id)currentDevice;
+(id)deviceWithClass:(unsigned long long)arg1 deviceCapabilities:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(unsigned long long)deviceClass;
-(unsigned long long)deviceCapabilities;
-(id)_initWithClass:(unsigned long long)arg1 deviceCapabilities:(unsigned long long)arg2 ;
@end
