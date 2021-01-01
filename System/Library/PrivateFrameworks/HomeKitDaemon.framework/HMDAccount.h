/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMerging.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMDBackingStoreModelBackedObjectProtocol.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue, HMDAccountManager;
@class NSUUID, NSObject, HMFUnfairLock, NSSet, NSMutableSet, HMDAccountIdentifier, HMDDevice, NSArray, NSString, HMDAccountHandle, CNContact;

@interface HMDAccount : HMFObject <HMFLogging, HMFMerging, HMDBackingStoreObjectProtocol, HMDBackingStoreModelBackedObjectProtocol, NSFastEnumeration, NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _queue;
	HMFUnfairLock* _lock;
	NSSet* _handles;
	NSMutableSet* _devices;
	HMDAccountIdentifier* _identifier;
	id<HMDAccountManager> _manager;

}

@property (getter=isCurrentAccount,readonly) BOOL currentAccount; 
@property (readonly) HMDDevice * currentDevice; 
@property (copy,readonly) NSArray * identities; 
@property (__weak) id<HMDAccountManager> manager;                                //@synthesize manager=_manager - In the implementation block
@property (copy,readonly) NSString * destination; 
@property (copy,readonly) HMDAccountHandle * primaryHandle; 
@property (copy,readonly) NSString * senderCorrelationIdentifier; 
@property (getter=isAuthenticated,readonly) BOOL authenticated; 
@property (readonly) BOOL shouldCache; 
@property (copy,readonly) HMDAccountIdentifier * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * name; 
@property (copy,readonly) CNContact * contact; 
@property (copy,readonly) NSArray * handles; 
@property (copy,readonly) NSArray * devices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Class modelClass; 
@property (nonatomic,copy,readonly) NSUUID * modelIdentifier; 
@property (nonatomic,copy,readonly) NSUUID * modelParentIdentifier; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)accountWithHandle:(id)arg1 ;
+(id)accountWithDestination:(id)arg1 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_HM10*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HMDAccountIdentifier *)identifier;
-(id<HMDAccountManager>)manager;
-(NSArray *)identities;
-(NSArray *)handles;
-(NSString *)destination;
-(id)shortDescription;
-(void)addHandle:(id)arg1 ;
-(BOOL)isAuthenticated;
-(NSArray *)devices;
-(HMDDevice *)currentDevice;
-(void)setManager:(id<HMDAccountManager>)arg1 ;
-(CNContact *)contact;
-(void)setHandles:(NSArray *)arg1 ;
-(BOOL)shouldCache;
-(void)addDevice:(id)arg1 ;
-(NSUUID *)modelIdentifier;
-(NSString *)senderCorrelationIdentifier;
-(Class)modelClass;
-(BOOL)isEqualToAccount:(id)arg1 ;
-(id)initWithObjectModel:(id)arg1 ;
-(id)logIdentifier;
-(id)attributeDescriptions;
-(BOOL)mergeObject:(id)arg1 ;
-(BOOL)shouldMergeObject:(id)arg1 ;
-(void)removeDevice:(id)arg1 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(BOOL)isCurrentAccount;
-(id)deviceForHandle:(id)arg1 ;
-(HMDAccountHandle *)primaryHandle;
-(id)initWithIdentifier:(id)arg1 handles:(id)arg2 devices:(id)arg3 ;
-(id)deviceForIdentifier:(id)arg1 ;
-(BOOL)isRelatedToAccount:(id)arg1 ;
-(id)modelBackedObjects;
-(NSUUID *)modelParentIdentifier;
-(id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(void)removeHandle:(id)arg1 ;
-(id)accountHandleWithModelIdentifier:(id)arg1 ;
-(id)deviceWithModelIdentifier:(id)arg1 ;
-(id)currentDeviceModelsWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
@end

