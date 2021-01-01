/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDCloudCache, HMDCloudZone, NSUUID, HMDBackingStoreCacheGroup, NSMutableDictionary, NSString, HMDCloudRecord, CKRecordID;

@interface HMDCloudGroup : HMFObject <HMFLogging> {

	BOOL _doRecordsExistInCache;
	HMDCloudCache* _cache;
	HMDCloudZone* _cloudZone;
	NSUUID* _ownerID;
	NSUUID* _identifier;
	HMDBackingStoreCacheGroup* _backingStoreGroup;
	NSMutableDictionary* _objectIDToRecordNameMap;

}

@property (nonatomic,readonly) NSString * rootRecordName; 
@property (nonatomic,retain) HMDBackingStoreCacheGroup * backingStoreGroup;                //@synthesize backingStoreGroup=_backingStoreGroup - In the implementation block
@property (nonatomic,readonly) NSUUID * parentIdentifier; 
@property (nonatomic,readonly) NSUUID * rootRecordObjectID; 
@property (nonatomic,readonly) NSMutableDictionary * objectIDToRecordNameMap;              //@synthesize objectIDToRecordNameMap=_objectIDToRecordNameMap - In the implementation block
@property (nonatomic,readonly) HMDCloudRecord * rootRecord; 
@property (assign,nonatomic,__weak) HMDCloudCache * cache;                                 //@synthesize cache=_cache - In the implementation block
@property (assign,nonatomic,__weak) HMDCloudZone * cloudZone;                              //@synthesize cloudZone=_cloudZone - In the implementation block
@property (nonatomic,readonly) CKRecordID * privateZoneRootRecordID; 
@property (nonatomic,readonly) NSUUID * ownerID;                                           //@synthesize ownerID=_ownerID - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                        //@synthesize identifier=_identifier - In the implementation block
@property (readonly) BOOL doRecordsExistInCache; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
+(id)logCategory;
+(void)createGroupWithRootRecordName:(id)arg1 owner:(id)arg2 subscriptionName:(id)arg3 cloudZone:(id)arg4 completion:(/*^block*/id)arg5 ;
-(NSString *)description;
-(id)init;
-(NSUUID *)identifier;
-(HMDCloudCache *)cache;
-(id)shortDescription;
-(HMDCloudRecord *)rootRecord;
-(NSUUID *)parentIdentifier;
-(void)setCache:(HMDCloudCache *)arg1 ;
-(NSUUID *)ownerID;
-(void)addCloudRecord:(id)arg1 ;
-(id)logIdentifier;
-(void)cloudRecordWithObjectID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setCloudZone:(HMDCloudZone *)arg1 ;
-(HMDCloudZone *)cloudZone;
-(NSString *)rootRecordName;
-(void)updateCloudRecord:(id)arg1 ;
-(id)cloudRecordWithObjectID:(id)arg1 ;
-(BOOL)doRecordsExistInCache;
-(id)cloudRecordWithName:(id)arg1 ;
-(BOOL)isRootRecord:(id)arg1 ;
-(void)fetchCloudRecordMap:(/*^block*/id)arg1 ;
-(void)cloudRecordWithObjectIDs:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)rootRecordModelObject;
-(void)deleteCloudRecord:(id)arg1 ;
-(BOOL)isRootRecordName:(id)arg1 ;
-(id)initWithBackingStoreCacheGroup:(id)arg1 cloudZone:(id)arg2 ;
-(void)rootRecordCompletionHandler:(/*^block*/id)arg1 ;
-(void)cloudRecordWithNames:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cloudRecordWithName:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)__cloudRecordWithObjectID:(id)arg1 ;
-(void)cloudRecordsForParentID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)allDescendentsCloudRecordsForParentID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(HMDBackingStoreCacheGroup *)backingStoreGroup;
-(CKRecordID *)privateZoneRootRecordID;
-(void)updateCloudRecord:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)deleteCloudRecordNames:(id)arg1 ;
-(NSUUID *)rootRecordObjectID;
-(void)_cloudRecordsForParentIDs:(id)arg1 recursive:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setBackingStoreGroup:(HMDBackingStoreCacheGroup *)arg1 ;
-(NSMutableDictionary *)objectIDToRecordNameMap;
@end

