/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HMDBackingStoreCacheZone, NSString, CKServerChangeToken, CKRecordZoneSubscription;

@interface HMDBackingStoreCacheGroup : HMFObject {

	long long _groupID;
	HMDBackingStoreCacheZone* _zone;
	NSString* _rootRecordName;
	CKServerChangeToken* _serverChangeToken;
	NSString* _subscriptionName;
	NSString* _owner;
	CKRecordZoneSubscription* _subscription;

}

@property (assign) long long groupID;                                     //@synthesize groupID=_groupID - In the implementation block
@property (retain) CKServerChangeToken * serverChangeToken;               //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (retain) CKRecordZoneSubscription * subscription;               //@synthesize subscription=_subscription - In the implementation block
@property (__weak,readonly) HMDBackingStoreCacheZone * zone;              //@synthesize zone=_zone - In the implementation block
@property (readonly) NSString * rootRecordName;                           //@synthesize rootRecordName=_rootRecordName - In the implementation block
@property (readonly) NSString * subscriptionName;                         //@synthesize subscriptionName=_subscriptionName - In the implementation block
@property (readonly) NSString * owner;                                    //@synthesize owner=_owner - In the implementation block
-(HMDBackingStoreCacheZone *)zone;
-(void)setSubscription:(CKRecordZoneSubscription *)arg1 ;
-(CKRecordZoneSubscription *)subscription;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)serverChangeToken;
-(NSString *)owner;
-(long long)groupID;
-(void)setGroupID:(long long)arg1 ;
-(id)dumpDebug;
-(NSString *)rootRecordName;
-(NSString *)subscriptionName;
-(id)initWithGroupID:(long long)arg1 zone:(id)arg2 rootRecord:(id)arg3 serverChangeToken:(id)arg4 subscriptionName:(id)arg5 owner:(id)arg6 subscription:(id)arg7 ;
@end

