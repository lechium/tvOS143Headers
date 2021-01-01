/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPArchiveRecordsRequest, CKDPAssetUploadTokenRetrieveRequest, CKDPBundlesForContainerRequest, CKDPDeleteContainerRequest, CKDPFetchArchivedRecordsRequest, CKDPCodeFunctionInvokeRequest, CKDPRequestOperationHeader, CKDPMarkAssetBrokenRequest, CKDPNotificationMarkReadRequest, CKDPNotificationSyncRequest, CKDPQueryRetrieveRequest, CKDPRecordDeleteRequest, CKDPRecordResolveTokenRequest, CKDPRecordRetrieveChangesRequest, CKDPRecordRetrieveRequest, CKDPRecordRetrieveVersionsRequest, CKDPRecordSaveRequest, CKDPOperation, CKDPSetBadgeCountRequest, CKDPShareAcceptRequest, CKDPShareVettingInitiateRequest, CKDPSubscriptionCreateRequest, CKDPSubscriptionDeleteRequest, CKDPSubscriptionRetrieveRequest, CKDPTokenRegistrationRequest, CKDPTokenUnregistrationRequest, CKDPUpdateMissingAssetStatusRequest, CKDPUserAvailableQuotaRequest, CKDPUserPrivacySettingsBatchLookupRequest, CKDPUserPrivacySettingsResetRequest, CKDPUserPrivacySettingsRetrieveRequest, CKDPUserPrivacySettingsUpdateRequest, CKDPUserQueryRequest, CKDPUserRetrieveRequest, CKDPWebAuthTokenRetrieveRequest, CKDPZoneDeleteRequest, CKDPZoneRetrieveChangesRequest, CKDPZoneRetrieveRequest, CKDPZoneSaveRequest;

@interface CKDPRequestOperation : PBCodable <NSCopying> {

	CKDPArchiveRecordsRequest* _archiveRecordsRequest;
	CKDPAssetUploadTokenRetrieveRequest* _assetUploadTokenRetrieveRequest;
	CKDPBundlesForContainerRequest* _bundlesForContainerRequest;
	CKDPDeleteContainerRequest* _deleteContainerRequest;
	CKDPFetchArchivedRecordsRequest* _fetchArchivedRecordsRequest;
	CKDPCodeFunctionInvokeRequest* _functionInvokeRequest;
	CKDPRequestOperationHeader* _header;
	CKDPMarkAssetBrokenRequest* _markAssetBrokenRequest;
	CKDPNotificationMarkReadRequest* _notificationMarkReadRequest;
	CKDPNotificationSyncRequest* _notificationSyncRequest;
	CKDPQueryRetrieveRequest* _queryRetrieveRequest;
	CKDPRecordDeleteRequest* _recordDeleteRequest;
	CKDPRecordResolveTokenRequest* _recordResolveTokenRequest;
	CKDPRecordRetrieveChangesRequest* _recordRetrieveChangesRequest;
	CKDPRecordRetrieveRequest* _recordRetrieveRequest;
	CKDPRecordRetrieveVersionsRequest* _recordRetrieveVersionsRequest;
	CKDPRecordSaveRequest* _recordSaveRequest;
	CKDPOperation* _request;
	CKDPSetBadgeCountRequest* _setBadgeCountRequest;
	CKDPShareAcceptRequest* _shareAcceptRequest;
	CKDPShareVettingInitiateRequest* _shareVettingInitiateRequest;
	CKDPSubscriptionCreateRequest* _subscriptionCreateRequest;
	CKDPSubscriptionDeleteRequest* _subscriptionDeleteRequest;
	CKDPSubscriptionRetrieveRequest* _subscriptionRetrieveRequest;
	CKDPTokenRegistrationRequest* _tokenRegistrationRequest;
	CKDPTokenUnregistrationRequest* _tokenUnregistrationRequest;
	CKDPUpdateMissingAssetStatusRequest* _updateMissingAssetStatusRequest;
	CKDPUserAvailableQuotaRequest* _userAvailableQuotaRequest;
	CKDPUserPrivacySettingsBatchLookupRequest* _userPrivacySettingsBatchLookupRequest;
	CKDPUserPrivacySettingsResetRequest* _userPrivacySettingsResetRequest;
	CKDPUserPrivacySettingsRetrieveRequest* _userPrivacySettingsRetrieveRequest;
	CKDPUserPrivacySettingsUpdateRequest* _userPrivacySettingsUpdateRequest;
	CKDPUserQueryRequest* _userQueryRequest;
	CKDPUserRetrieveRequest* _userRetrieveRequest;
	CKDPWebAuthTokenRetrieveRequest* _webAuthTokenRetrieveRequest;
	CKDPZoneDeleteRequest* _zoneDeleteRequest;
	CKDPZoneRetrieveChangesRequest* _zoneRetrieveChangesRequest;
	CKDPZoneRetrieveRequest* _zoneRetrieveRequest;
	CKDPZoneSaveRequest* _zoneSaveRequest;

}

@property (nonatomic,readonly) BOOL hasShareVettingInitiateRequest; 
@property (nonatomic,retain) CKDPShareVettingInitiateRequest * shareVettingInitiateRequest; 
@property (nonatomic,readonly) BOOL hasZoneSaveRequest; 
@property (nonatomic,retain) CKDPZoneSaveRequest * zoneSaveRequest; 
@property (nonatomic,readonly) BOOL hasZoneRetrieveRequest; 
@property (nonatomic,retain) CKDPZoneRetrieveRequest * zoneRetrieveRequest; 
@property (nonatomic,readonly) BOOL hasZoneDeleteRequest; 
@property (nonatomic,retain) CKDPZoneDeleteRequest * zoneDeleteRequest; 
@property (nonatomic,readonly) BOOL hasZoneRetrieveChangesRequest; 
@property (nonatomic,retain) CKDPZoneRetrieveChangesRequest * zoneRetrieveChangesRequest; 
@property (nonatomic,readonly) BOOL hasRecordSaveRequest; 
@property (nonatomic,retain) CKDPRecordSaveRequest * recordSaveRequest; 
@property (nonatomic,readonly) BOOL hasRecordRetrieveRequest; 
@property (nonatomic,retain) CKDPRecordRetrieveRequest * recordRetrieveRequest; 
@property (nonatomic,readonly) BOOL hasRecordRetrieveVersionsRequest; 
@property (nonatomic,retain) CKDPRecordRetrieveVersionsRequest * recordRetrieveVersionsRequest; 
@property (nonatomic,readonly) BOOL hasRecordRetrieveChangesRequest; 
@property (nonatomic,retain) CKDPRecordRetrieveChangesRequest * recordRetrieveChangesRequest; 
@property (nonatomic,readonly) BOOL hasRecordDeleteRequest; 
@property (nonatomic,retain) CKDPRecordDeleteRequest * recordDeleteRequest; 
@property (nonatomic,readonly) BOOL hasRecordResolveTokenRequest; 
@property (nonatomic,retain) CKDPRecordResolveTokenRequest * recordResolveTokenRequest; 
@property (nonatomic,readonly) BOOL hasFetchArchivedRecordsRequest; 
@property (nonatomic,retain) CKDPFetchArchivedRecordsRequest * fetchArchivedRecordsRequest; 
@property (nonatomic,readonly) BOOL hasUserAvailableQuotaRequest; 
@property (nonatomic,retain) CKDPUserAvailableQuotaRequest * userAvailableQuotaRequest; 
@property (nonatomic,readonly) BOOL hasUserRetrieveRequest; 
@property (nonatomic,retain) CKDPUserRetrieveRequest * userRetrieveRequest; 
@property (nonatomic,readonly) BOOL hasQueryRetrieveRequest; 
@property (nonatomic,retain) CKDPQueryRetrieveRequest * queryRetrieveRequest; 
@property (nonatomic,readonly) BOOL hasAssetUploadTokenRetrieveRequest; 
@property (nonatomic,retain) CKDPAssetUploadTokenRetrieveRequest * assetUploadTokenRetrieveRequest; 
@property (nonatomic,readonly) BOOL hasDeleteContainerRequest; 
@property (nonatomic,retain) CKDPDeleteContainerRequest * deleteContainerRequest; 
@property (nonatomic,readonly) BOOL hasBundlesForContainerRequest; 
@property (nonatomic,retain) CKDPBundlesForContainerRequest * bundlesForContainerRequest; 
@property (nonatomic,readonly) BOOL hasWebAuthTokenRetrieveRequest; 
@property (nonatomic,retain) CKDPWebAuthTokenRetrieveRequest * webAuthTokenRetrieveRequest; 
@property (nonatomic,readonly) BOOL hasUpdateMissingAssetStatusRequest; 
@property (nonatomic,retain) CKDPUpdateMissingAssetStatusRequest * updateMissingAssetStatusRequest; 
@property (nonatomic,readonly) BOOL hasShareAcceptRequest; 
@property (nonatomic,retain) CKDPShareAcceptRequest * shareAcceptRequest; 
@property (nonatomic,readonly) BOOL hasFunctionInvokeRequest; 
@property (nonatomic,retain) CKDPCodeFunctionInvokeRequest * functionInvokeRequest; 
@property (nonatomic,readonly) BOOL hasSubscriptionCreateRequest; 
@property (nonatomic,retain) CKDPSubscriptionCreateRequest * subscriptionCreateRequest; 
@property (nonatomic,readonly) BOOL hasSubscriptionRetrieveRequest; 
@property (nonatomic,retain) CKDPSubscriptionRetrieveRequest * subscriptionRetrieveRequest; 
@property (nonatomic,readonly) BOOL hasSubscriptionDeleteRequest; 
@property (nonatomic,retain) CKDPSubscriptionDeleteRequest * subscriptionDeleteRequest; 
@property (nonatomic,readonly) BOOL hasArchiveRecordsRequest; 
@property (nonatomic,retain) CKDPArchiveRecordsRequest * archiveRecordsRequest; 
@property (nonatomic,readonly) BOOL hasMarkAssetBrokenRequest; 
@property (nonatomic,retain) CKDPMarkAssetBrokenRequest * markAssetBrokenRequest; 
@property (nonatomic,readonly) BOOL hasUserQueryRequest; 
@property (nonatomic,retain) CKDPUserQueryRequest * userQueryRequest; 
@property (nonatomic,readonly) BOOL hasUserPrivacySettingsUpdateRequest; 
@property (nonatomic,retain) CKDPUserPrivacySettingsUpdateRequest * userPrivacySettingsUpdateRequest; 
@property (nonatomic,readonly) BOOL hasUserPrivacySettingsResetRequest; 
@property (nonatomic,retain) CKDPUserPrivacySettingsResetRequest * userPrivacySettingsResetRequest; 
@property (nonatomic,readonly) BOOL hasUserPrivacySettingsBatchLookupRequest; 
@property (nonatomic,retain) CKDPUserPrivacySettingsBatchLookupRequest * userPrivacySettingsBatchLookupRequest; 
@property (nonatomic,readonly) BOOL hasUserPrivacySettingsRetrieveRequest; 
@property (nonatomic,retain) CKDPUserPrivacySettingsRetrieveRequest * userPrivacySettingsRetrieveRequest; 
@property (nonatomic,readonly) BOOL hasTokenRegistrationRequest; 
@property (nonatomic,retain) CKDPTokenRegistrationRequest * tokenRegistrationRequest; 
@property (nonatomic,readonly) BOOL hasTokenUnregistrationRequest; 
@property (nonatomic,retain) CKDPTokenUnregistrationRequest * tokenUnregistrationRequest; 
@property (nonatomic,readonly) BOOL hasSetBadgeCountRequest; 
@property (nonatomic,retain) CKDPSetBadgeCountRequest * setBadgeCountRequest; 
@property (nonatomic,readonly) BOOL hasNotificationSyncRequest; 
@property (nonatomic,retain) CKDPNotificationSyncRequest * notificationSyncRequest; 
@property (nonatomic,readonly) BOOL hasNotificationMarkReadRequest; 
@property (nonatomic,retain) CKDPNotificationMarkReadRequest * notificationMarkReadRequest; 
@property (nonatomic,readonly) BOOL hasHeader; 
@property (nonatomic,retain) CKDPRequestOperationHeader * header;                                                            //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) CKDPOperation * request;                                                                        //@synthesize request=_request - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(CKDPOperation *)request;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRequest:(CKDPOperation *)arg1 ;
-(BOOL)hasRequest;
-(CKDPRequestOperationHeader *)header;
-(void)setHeader:(CKDPRequestOperationHeader *)arg1 ;
-(BOOL)hasHeader;
-(void)setAssetUploadTokenRetrieveRequest:(CKDPAssetUploadTokenRetrieveRequest *)arg1 ;
-(CKDPAssetUploadTokenRetrieveRequest *)assetUploadTokenRetrieveRequest;
-(void)setQueryRetrieveRequest:(CKDPQueryRetrieveRequest *)arg1 ;
-(CKDPQueryRetrieveRequest *)queryRetrieveRequest;
-(void)setShareVettingInitiateRequest:(CKDPShareVettingInitiateRequest *)arg1 ;
-(CKDPShareVettingInitiateRequest *)shareVettingInitiateRequest;
-(void)setRecordResolveTokenRequest:(CKDPRecordResolveTokenRequest *)arg1 ;
-(CKDPRecordResolveTokenRequest *)recordResolveTokenRequest;
-(void)setZoneSaveRequest:(CKDPZoneSaveRequest *)arg1 ;
-(void)setZoneRetrieveRequest:(CKDPZoneRetrieveRequest *)arg1 ;
-(void)setZoneDeleteRequest:(CKDPZoneDeleteRequest *)arg1 ;
-(void)setZoneRetrieveChangesRequest:(CKDPZoneRetrieveChangesRequest *)arg1 ;
-(void)setRecordSaveRequest:(CKDPRecordSaveRequest *)arg1 ;
-(void)setRecordRetrieveRequest:(CKDPRecordRetrieveRequest *)arg1 ;
-(void)setRecordRetrieveVersionsRequest:(CKDPRecordRetrieveVersionsRequest *)arg1 ;
-(void)setRecordRetrieveChangesRequest:(CKDPRecordRetrieveChangesRequest *)arg1 ;
-(void)setRecordDeleteRequest:(CKDPRecordDeleteRequest *)arg1 ;
-(void)setFetchArchivedRecordsRequest:(CKDPFetchArchivedRecordsRequest *)arg1 ;
-(void)setDeleteContainerRequest:(CKDPDeleteContainerRequest *)arg1 ;
-(void)setUserAvailableQuotaRequest:(CKDPUserAvailableQuotaRequest *)arg1 ;
-(void)setBundlesForContainerRequest:(CKDPBundlesForContainerRequest *)arg1 ;
-(void)setWebAuthTokenRetrieveRequest:(CKDPWebAuthTokenRetrieveRequest *)arg1 ;
-(void)setUpdateMissingAssetStatusRequest:(CKDPUpdateMissingAssetStatusRequest *)arg1 ;
-(void)setSubscriptionCreateRequest:(CKDPSubscriptionCreateRequest *)arg1 ;
-(void)setSubscriptionRetrieveRequest:(CKDPSubscriptionRetrieveRequest *)arg1 ;
-(void)setSubscriptionDeleteRequest:(CKDPSubscriptionDeleteRequest *)arg1 ;
-(void)setUserRetrieveRequest:(CKDPUserRetrieveRequest *)arg1 ;
-(void)setUserQueryRequest:(CKDPUserQueryRequest *)arg1 ;
-(void)setUserPrivacySettingsRetrieveRequest:(CKDPUserPrivacySettingsRetrieveRequest *)arg1 ;
-(void)setUserPrivacySettingsUpdateRequest:(CKDPUserPrivacySettingsUpdateRequest *)arg1 ;
-(void)setUserPrivacySettingsResetRequest:(CKDPUserPrivacySettingsResetRequest *)arg1 ;
-(void)setUserPrivacySettingsBatchLookupRequest:(CKDPUserPrivacySettingsBatchLookupRequest *)arg1 ;
-(void)setShareAcceptRequest:(CKDPShareAcceptRequest *)arg1 ;
-(void)setTokenRegistrationRequest:(CKDPTokenRegistrationRequest *)arg1 ;
-(void)setTokenUnregistrationRequest:(CKDPTokenUnregistrationRequest *)arg1 ;
-(void)setSetBadgeCountRequest:(CKDPSetBadgeCountRequest *)arg1 ;
-(void)setNotificationSyncRequest:(CKDPNotificationSyncRequest *)arg1 ;
-(void)setNotificationMarkReadRequest:(CKDPNotificationMarkReadRequest *)arg1 ;
-(void)setArchiveRecordsRequest:(CKDPArchiveRecordsRequest *)arg1 ;
-(void)setMarkAssetBrokenRequest:(CKDPMarkAssetBrokenRequest *)arg1 ;
-(void)setFunctionInvokeRequest:(CKDPCodeFunctionInvokeRequest *)arg1 ;
-(BOOL)hasShareVettingInitiateRequest;
-(BOOL)hasZoneSaveRequest;
-(CKDPZoneSaveRequest *)zoneSaveRequest;
-(BOOL)hasZoneRetrieveRequest;
-(CKDPZoneRetrieveRequest *)zoneRetrieveRequest;
-(BOOL)hasZoneDeleteRequest;
-(CKDPZoneDeleteRequest *)zoneDeleteRequest;
-(BOOL)hasZoneRetrieveChangesRequest;
-(CKDPZoneRetrieveChangesRequest *)zoneRetrieveChangesRequest;
-(BOOL)hasRecordSaveRequest;
-(CKDPRecordSaveRequest *)recordSaveRequest;
-(BOOL)hasRecordRetrieveRequest;
-(CKDPRecordRetrieveRequest *)recordRetrieveRequest;
-(BOOL)hasRecordRetrieveVersionsRequest;
-(CKDPRecordRetrieveVersionsRequest *)recordRetrieveVersionsRequest;
-(BOOL)hasRecordRetrieveChangesRequest;
-(CKDPRecordRetrieveChangesRequest *)recordRetrieveChangesRequest;
-(BOOL)hasRecordDeleteRequest;
-(CKDPRecordDeleteRequest *)recordDeleteRequest;
-(BOOL)hasRecordResolveTokenRequest;
-(BOOL)hasFetchArchivedRecordsRequest;
-(CKDPFetchArchivedRecordsRequest *)fetchArchivedRecordsRequest;
-(BOOL)hasUserAvailableQuotaRequest;
-(CKDPUserAvailableQuotaRequest *)userAvailableQuotaRequest;
-(BOOL)hasUserRetrieveRequest;
-(CKDPUserRetrieveRequest *)userRetrieveRequest;
-(BOOL)hasQueryRetrieveRequest;
-(BOOL)hasAssetUploadTokenRetrieveRequest;
-(BOOL)hasDeleteContainerRequest;
-(CKDPDeleteContainerRequest *)deleteContainerRequest;
-(BOOL)hasBundlesForContainerRequest;
-(CKDPBundlesForContainerRequest *)bundlesForContainerRequest;
-(BOOL)hasWebAuthTokenRetrieveRequest;
-(CKDPWebAuthTokenRetrieveRequest *)webAuthTokenRetrieveRequest;
-(BOOL)hasUpdateMissingAssetStatusRequest;
-(CKDPUpdateMissingAssetStatusRequest *)updateMissingAssetStatusRequest;
-(BOOL)hasShareAcceptRequest;
-(CKDPShareAcceptRequest *)shareAcceptRequest;
-(BOOL)hasFunctionInvokeRequest;
-(CKDPCodeFunctionInvokeRequest *)functionInvokeRequest;
-(BOOL)hasSubscriptionCreateRequest;
-(CKDPSubscriptionCreateRequest *)subscriptionCreateRequest;
-(BOOL)hasSubscriptionRetrieveRequest;
-(CKDPSubscriptionRetrieveRequest *)subscriptionRetrieveRequest;
-(BOOL)hasSubscriptionDeleteRequest;
-(CKDPSubscriptionDeleteRequest *)subscriptionDeleteRequest;
-(BOOL)hasArchiveRecordsRequest;
-(CKDPArchiveRecordsRequest *)archiveRecordsRequest;
-(BOOL)hasMarkAssetBrokenRequest;
-(CKDPMarkAssetBrokenRequest *)markAssetBrokenRequest;
-(BOOL)hasUserQueryRequest;
-(CKDPUserQueryRequest *)userQueryRequest;
-(BOOL)hasUserPrivacySettingsUpdateRequest;
-(CKDPUserPrivacySettingsUpdateRequest *)userPrivacySettingsUpdateRequest;
-(BOOL)hasUserPrivacySettingsResetRequest;
-(CKDPUserPrivacySettingsResetRequest *)userPrivacySettingsResetRequest;
-(BOOL)hasUserPrivacySettingsBatchLookupRequest;
-(CKDPUserPrivacySettingsBatchLookupRequest *)userPrivacySettingsBatchLookupRequest;
-(BOOL)hasUserPrivacySettingsRetrieveRequest;
-(CKDPUserPrivacySettingsRetrieveRequest *)userPrivacySettingsRetrieveRequest;
-(BOOL)hasTokenRegistrationRequest;
-(CKDPTokenRegistrationRequest *)tokenRegistrationRequest;
-(BOOL)hasTokenUnregistrationRequest;
-(CKDPTokenUnregistrationRequest *)tokenUnregistrationRequest;
-(BOOL)hasSetBadgeCountRequest;
-(CKDPSetBadgeCountRequest *)setBadgeCountRequest;
-(BOOL)hasNotificationSyncRequest;
-(CKDPNotificationSyncRequest *)notificationSyncRequest;
-(BOOL)hasNotificationMarkReadRequest;
-(CKDPNotificationMarkReadRequest *)notificationMarkReadRequest;
@end

