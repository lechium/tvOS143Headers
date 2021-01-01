/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMDHomeRemoteNotification : HMFObject <HMFLogging> {

	NSString* _updateIdentifier;
	id _value;
	NSString* _accessoryUUID;
	NSString* _serviceInstanceID;
	NSString* _characteristicInstanceID;

}

@property (nonatomic,readonly) NSString * accessoryUUID;                         //@synthesize accessoryUUID=_accessoryUUID - In the implementation block
@property (nonatomic,readonly) NSString * serviceInstanceID;                     //@synthesize serviceInstanceID=_serviceInstanceID - In the implementation block
@property (nonatomic,readonly) NSString * characteristicInstanceID;              //@synthesize characteristicInstanceID=_characteristicInstanceID - In the implementation block
@property (nonatomic,readonly) NSString * updateIdentifier;                      //@synthesize updateIdentifier=_updateIdentifier - In the implementation block
@property (nonatomic,readonly) id value;                                         //@synthesize value=_value - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(NSString *)description;
-(id)value;
-(NSString *)updateIdentifier;
-(NSString *)accessoryUUID;
-(id)logIdentifier;
-(NSString *)serviceInstanceID;
-(NSString *)characteristicInstanceID;
-(BOOL)matchesCharacterisitic:(id)arg1 ;
-(BOOL)matchesAccessoryUUID:(id)arg1 serviceInstanceID:(id)arg2 characteristicInstanceID:(id)arg3 ;
-(id)initWithAccessoryUUID:(id)arg1 serviceInstanceID:(id)arg2 characteristicInstanceID:(id)arg3 updateIdentifier:(id)arg4 value:(id)arg5 ;
@end

