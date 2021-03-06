/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCore/AVOutputDeviceDescription.h>

@class NSString;

@interface AVClusterComponentOutputDeviceDescription : NSObject <AVOutputDeviceDescription> {

	NSString* _deviceID;
	NSString* _deviceName;
	long long _deviceType;
	long long _deviceSubType;
	BOOL _isClusterLeader;

}

@property (nonatomic,readonly) NSString * deviceName;                //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSString * deviceID;                  //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) long long deviceType;                 //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) long long deviceSubType;              //@synthesize deviceSubType=_deviceSubType - In the implementation block
@property (nonatomic,readonly) BOOL isClusterLeader;                 //@synthesize isClusterLeader=_isClusterLeader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)deviceName;
-(NSString *)deviceID;
-(long long)deviceType;
-(long long)deviceSubType;
-(BOOL)isClusterLeader;
-(id)initWithDeviceID:(id)arg1 deviceName:(id)arg2 deviceSubType:(long long)arg3 isClusterLeader:(BOOL)arg4 ;
@end

