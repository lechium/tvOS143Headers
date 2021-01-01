/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HMObjectMerge.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMFUnfairLock, NSUUID, _HMContext, HMAccessory, HMHome, NSArray, NSString;

@interface _HMAccessoryProfile : NSObject <HMObjectMerge, HMFMessageReceiver, NSSecureCoding> {

	HMFUnfairLock* _lock;
	NSUUID* _uniqueIdentifier;
	_HMContext* _context;
	HMAccessory* _accessory;
	HMHome* _home;
	NSUUID* _profileUniqueIdentifier;
	NSArray* _services;

}

@property (nonatomic,readonly) _HMContext * context;                                          //@synthesize context=_context - In the implementation block
@property (nonatomic,__weak,readonly) HMAccessory * accessory;                                //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,__weak,readonly) HMHome * home;                                          //@synthesize home=_home - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * profileUniqueIdentifier;                         //@synthesize profileUniqueIdentifier=_profileUniqueIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * services;                                            //@synthesize services=_services - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                     //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(_HMContext *)context;
-(NSArray *)services;
-(HMHome *)home;
-(HMAccessory *)accessory;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(void)_unconfigureContext;
-(void)_unconfigure;
-(NSUUID *)profileUniqueIdentifier;
-(void)_registerNotificationHandlers;
-(void)handleRuntimeStateUpdate:(id)arg1 ;
-(void)__configureWithContext:(id)arg1 accessory:(id)arg2 ;
-(id)initWithUUID:(id)arg1 services:(id)arg2 ;
@end

