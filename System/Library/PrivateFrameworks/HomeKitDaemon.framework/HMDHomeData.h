/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSArray, NSUUID, NSString, HMDApplicationData, HMDAccount;

@interface HMDHomeData : HMFObject <NSCopying, NSMutableCopying> {

	NSArray* _homes;
	NSArray* _accessories;
	NSUUID* _primaryHomeUUID;
	NSUUID* _lastCurrentHomeUUID;
	long long _schemaVersion;
	long long _dataVersion;
	NSUUID* _dataTag;
	NSArray* _UUIDsOfRemovedHomes;
	NSArray* _cloudZones;
	NSArray* _incomingInvitations;
	NSString* _currentDevice;
	NSArray* _pendingReasonSaved;
	NSArray* _pendingUserManagementOperations;
	NSArray* _unprocessedOperationIdentifiers;
	HMDApplicationData* _applicationData;
	long long _residentEnabledState;
	HMDAccount* _account;
	NSArray* _remoteAccounts;
	BOOL _accessAllowedWhenLocked;

}

@property (assign,nonatomic) long long dataVersion;                                         //@synthesize dataVersion=_dataVersion - In the implementation block
@property (nonatomic,copy,readonly) NSArray * homes;                                        //@synthesize homes=_homes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * accessories;                                  //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * primaryHomeUUID;                               //@synthesize primaryHomeUUID=_primaryHomeUUID - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * lastCurrentHomeUUID;                           //@synthesize lastCurrentHomeUUID=_lastCurrentHomeUUID - In the implementation block
@property (nonatomic,readonly) long long schemaVersion;                                     //@synthesize schemaVersion=_schemaVersion - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * dataTag;                                       //@synthesize dataTag=_dataTag - In the implementation block
@property (nonatomic,copy,readonly) NSArray * UUIDsOfRemovedHomes;                          //@synthesize UUIDsOfRemovedHomes=_UUIDsOfRemovedHomes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * cloudZones;                                   //@synthesize cloudZones=_cloudZones - In the implementation block
@property (nonatomic,copy,readonly) NSArray * incomingInvitations;                          //@synthesize incomingInvitations=_incomingInvitations - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentDevice;                               //@synthesize currentDevice=_currentDevice - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pendingReasonSaved;                           //@synthesize pendingReasonSaved=_pendingReasonSaved - In the implementation block
@property (nonatomic,copy,readonly) NSArray * pendingUserManagementOperations;              //@synthesize pendingUserManagementOperations=_pendingUserManagementOperations - In the implementation block
@property (nonatomic,copy,readonly) NSArray * unprocessedOperationIdentifiers;              //@synthesize unprocessedOperationIdentifiers=_unprocessedOperationIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) HMDApplicationData * applicationData;                   //@synthesize applicationData=_applicationData - In the implementation block
@property (nonatomic,readonly) long long residentEnabledState;                              //@synthesize residentEnabledState=_residentEnabledState - In the implementation block
@property (nonatomic,readonly) HMDAccount * account;                                        //@synthesize account=_account - In the implementation block
@property (nonatomic,copy,readonly) NSArray * remoteAccounts;                               //@synthesize remoteAccounts=_remoteAccounts - In the implementation block
@property (nonatomic,readonly) BOOL accessAllowedWhenLocked;                                //@synthesize accessAllowedWhenLocked=_accessAllowedWhenLocked - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(long long)schemaVersion;
-(NSString *)currentDevice;
-(long long)dataVersion;
-(void)setDataVersion:(long long)arg1 ;
-(HMDAccount *)account;
-(HMDApplicationData *)applicationData;
-(NSArray *)remoteAccounts;
-(NSArray *)homes;
-(NSArray *)accessories;
-(NSArray *)pendingUserManagementOperations;
-(NSUUID *)primaryHomeUUID;
-(NSArray *)cloudZones;
-(NSUUID *)lastCurrentHomeUUID;
-(NSUUID *)dataTag;
-(NSArray *)UUIDsOfRemovedHomes;
-(NSArray *)incomingInvitations;
-(NSArray *)pendingReasonSaved;
-(NSArray *)unprocessedOperationIdentifiers;
-(long long)residentEnabledState;
-(BOOL)accessAllowedWhenLocked;
@end

