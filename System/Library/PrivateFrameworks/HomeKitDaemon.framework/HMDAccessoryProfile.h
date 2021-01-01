/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDBulletinIdentifiers.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/HMFDumpState.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class HMFMessageDispatcher, NSObject, NSUUID, HMDAccessory, NSArray, NSString, NSSet;

@interface HMDAccessoryProfile : HMFObject <HMDBulletinIdentifiers, HMDHomeMessageReceiver, HMFDumpState, HMFLogging, NSSecureCoding> {

	HMFMessageDispatcher* _msgDispatcher;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSUUID* _uniqueIdentifier;
	HMDAccessory* _accessory;
	NSArray* _services;
	NSString* _logIdentifier;

}

@property (nonatomic,copy,readonly) NSString * contextID; 
@property (nonatomic,copy,readonly) NSUUID * contextSPIUniqueIdentifier; 
@property (readonly) NSString * logIdentifier;                                                //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                        //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HMFMessageDispatcher * msgDispatcher;                          //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * uniqueIdentifier;                                //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (__weak,readonly) HMDAccessory * accessory;                                         //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) NSArray * services;                                            //@synthesize services=_services - In the implementation block
@property (copy,readonly) NSSet * messageReceiverChildren; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSString *)contextID;
-(NSArray *)services;
-(HMDAccessory *)accessory;
-(id)dumpState;
-(NSString *)logIdentifier;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)unconfigure;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)registerForMessages;
-(NSUUID *)contextSPIUniqueIdentifier;
-(id)runtimeState;
-(void)removeCloudData;
-(void)configureWithMessageDispatcher:(id)arg1 configurationTracker:(id)arg2 ;
-(id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 services:(id)arg3 workQueue:(id)arg4 ;
-(void)handleInitialState;
-(id)initWithAccessory:(id)arg1 uniqueIdentifier:(id)arg2 services:(id)arg3 ;
-(id)findServiceWithType:(id)arg1 ;
@end

