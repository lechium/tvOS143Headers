/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HMBCloudZone.h>

@class NSSet, NSMutableSet, NSArray;

@interface HMDNetworkRouterFirewallRuleCloudZone : HMBCloudZone {

	BOOL _useAnonymousRequests;
	NSSet* _modifiedRecordIDsFromLastPull;
	NSMutableSet* _uncommittedModifiedRecordIDsFromLastPull;
	NSSet* _watchedRecordIDs;
	NSArray* _signatureVerificationPublicKeys;

}

@property (nonatomic,readonly) BOOL useAnonymousRequests;                                          //@synthesize useAnonymousRequests=_useAnonymousRequests - In the implementation block
@property (nonatomic,readonly) NSSet * watchedRecordIDs;                                           //@synthesize watchedRecordIDs=_watchedRecordIDs - In the implementation block
@property (nonatomic,readonly) NSArray * signatureVerificationPublicKeys;                          //@synthesize signatureVerificationPublicKeys=_signatureVerificationPublicKeys - In the implementation block
@property (nonatomic,retain) NSSet * modifiedRecordIDsFromLastPull;                                //@synthesize modifiedRecordIDsFromLastPull=_modifiedRecordIDsFromLastPull - In the implementation block
@property (nonatomic,retain) NSMutableSet * uncommittedModifiedRecordIDsFromLastPull;              //@synthesize uncommittedModifiedRecordIDsFromLastPull=_uncommittedModifiedRecordIDsFromLastPull - In the implementation block
+(unsigned long long)__maxSizeFromPreferenceWithKey:(id)arg1 defaultValue:(unsigned long long)arg2 ;
+(unsigned long long)__maxSizeForCKRecordString;
+(id)__createBaseAccessoryIdentifierFromRecord:(id)arg1 error:(id*)arg2 ;
+(id)__calculateDigestDataFromRecord:(id)arg1 dataKey:(id)arg2 dataAssetKey:(id)arg3 maxDataSize:(unsigned long long)arg4 error:(id*)arg5 ;
+(id)__getSignatureDataFromRecord:(id)arg1 signatureKey:(id)arg2 signatureAssetKey:(id)arg3 maxSignatureSize:(unsigned long long)arg4 error:(id*)arg5 ;
+(BOOL)__verifyDigestDataAgainstSignatureFromRecord:(id)arg1 digestData:(id)arg2 signatureData:(id)arg3 signatureVerificationPublicKeys:(id)arg4 error:(id*)arg5 ;
+(id)__getDataFromRecord:(id)arg1 dataKey:(id)arg2 dataAssetKey:(id)arg3 maxDataSize:(unsigned long long)arg4 error:(id*)arg5 ;
+(unsigned long long)__maxSizeForCKRecordNetworkDeclarations;
+(unsigned long long)__maxSizeForCKRecordNetworkDeclarationsSignature;
+(BOOL)__verifyDataFromRecord:(id)arg1 signatureVerificationPublicKeys:(id)arg2 dataKey:(id)arg3 dataAssetKey:(id)arg4 maxDataSize:(unsigned long long)arg5 signatureKey:(id)arg6 signatureAssetKey:(id)arg7 maxSignatureSize:(unsigned long long)arg8 baseAccessoryIdentifier:(id*)arg9 data:(id*)arg10 error:(id*)arg11 ;
+(BOOL)verifyNetworkDeclarationsFromRecord:(id)arg1 signatureVerificationPublicKeys:(id)arg2 baseAccessoryIdentifier:(id*)arg3 data:(id*)arg4 error:(id*)arg5 ;
+(unsigned long long)__maxSizeForCKRecordPairedMetadata;
+(unsigned long long)__maxSizeForCKRecordPairedMetadataSignature;
+(BOOL)verifyNetworkDeclarationsFromRecord:(id)arg1 signatureVerificationPublicKeys:(id)arg2 error:(id*)arg3 ;
-(id)attributeDescriptions;
-(NSArray *)signatureVerificationPublicKeys;
-(id)decodeModelFrom:(id)arg1 recordSource:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)__fetchZoneChangesWithFetchInfo:(id)arg1 ;
-(void)startUpWithLocalZone:(id)arg1 ;
-(BOOL)useAnonymousRequests;
-(NSMutableSet *)uncommittedModifiedRecordIDsFromLastPull;
-(NSSet *)watchedRecordIDs;
-(NSSet *)modifiedRecordIDsFromLastPull;
-(void)setModifiedRecordIDsFromLastPull:(NSSet *)arg1 ;
-(void)setUncommittedModifiedRecordIDsFromLastPull:(NSMutableSet *)arg1 ;
-(void)__recordChanged:(id)arg1 fetchInfo:(id)arg2 ;
-(void)__recordDeleted:(id)arg1 recordType:(id)arg2 fetchInfo:(id)arg3 ;
-(void)__zoneChangeTokensUpdated:(id)arg1 fetchInfo:(id)arg2 ;
-(void)__zoneFetchCompletedWithChangeToken:(id)arg1 error:(id)arg2 moreComing:(BOOL)arg3 fetchInfo:(id)arg4 ;
-(void)__zoneChangesCompleted:(id)arg1 fetchInfo:(id)arg2 ;
-(void)__noteUpdatedRecordID:(id)arg1 ;
-(BOOL)__commitLocalChanges:(id)arg1 error:(id*)arg2 ;
-(void)__finalizeUpdatedRecordIDs;
-(BOOL)__canRecoverFromError:(id)arg1 fetchInfo:(id)arg2 ;
-(void)__retryFetchWithFetchInfo:(id)arg1 ;
-(id)initWithCloudDatabase:(id)arg1 state:(id)arg2 useAnonymousRequests:(BOOL)arg3 watchedRecordIDs:(id)arg4 signatureVerificationPublicKeys:(id)arg5 ;
-(id)performCloudPullWithFetchToken:(id)arg1 options:(id)arg2 ;
@end

