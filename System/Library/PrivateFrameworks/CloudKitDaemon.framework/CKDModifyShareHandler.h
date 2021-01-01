/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <CloudKitDaemon/CKDModifyRecordHandler.h>

@class CKShare, CKRecordID;

@interface CKDModifyShareHandler : CKDModifyRecordHandler {

	BOOL _haveAddedOwnerToShare;
	BOOL _isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;

}

@property (assign,nonatomic) BOOL haveAddedOwnerToShare;                                       //@synthesize haveAddedOwnerToShare=_haveAddedOwnerToShare - In the implementation block
@property (assign,nonatomic) BOOL isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;              //@synthesize isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade=_isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade - In the implementation block
@property (nonatomic,readonly) CKShare * share; 
@property (nonatomic,readonly) CKRecordID * shareID; 
+(id)modifyHandlerWithShare:(id)arg1 operation:(id)arg2 ;
+(id)modifyHandlerForDeleteWithShareID:(id)arg1 operation:(id)arg2 ;
-(unsigned long long)serviceType;
-(CKShare *)share;
-(CKRecordID *)shareID;
-(void)_fetchSharePCSData;
-(void)_prepareDependentPCSUpdateIfNeededForShareWithSharePCS:(id)arg1 error:(id)arg2 ;
-(id)_createNewSharePCSDataWithError:(id*)arg1 ;
-(void)_fetchRootRecordPublicSharingIdentityWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_rollShareAndZonePCSIfNeededForSharePCS:(id)arg1 zonePCSData:(id)arg2 ;
-(id)_handleSharePCSData:(id)arg1 zonePCSData:(id)arg2 ;
-(void)_addPublicKeyToSelfParticipant;
-(void)_setupParticipantsProtectionInfos;
-(BOOL)_updateSharePublicPCSWithError:(id*)arg1 ;
-(BOOL)_serializePCSDataForShareWithError:(id*)arg1 ;
-(void)_alignParticipantPermissions;
-(void)prepareForSave;
-(BOOL)_cleanPublicPCSforShareWithError:(id*)arg1 ;
-(BOOL)haveAddedOwnerToShare;
-(BOOL)isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;
-(id)_ensurePrivateParticipant:(id)arg1 isInInvitedSharePCS:(OpaquePCSShareProtectionRef)arg2 ;
-(void)setHaveAddedOwnerToShare:(BOOL)arg1 ;
-(BOOL)isCloudDocsContainer;
-(void)setIsALegacyPublicShareThatNeedsOwnerPPPCSUpgrade:(BOOL)arg1 ;
-(BOOL)_removePrivateParticipantsFromInvitedPCS:(OpaquePCSShareProtectionRef)arg1 error:(id*)arg2 ;
-(id)_removePublicKey:(id)arg1 fromInvitedPCS:(OpaquePCSShareProtectionRef)arg2 ;
-(id)_removePrivateParticipant:(id)arg1 fromInvitedSharePCS:(OpaquePCSShareProtectionRef)arg2 ;
-(id)_publicKeyForParticipant:(id)arg1 error:(id*)arg2 ;
-(PCSPublicIdentityDataRef)createPublicIdentityFromPublicKeyForParticipant:(id)arg1 error:(id*)arg2 ;
-(BOOL)_addedPrivateParticipantNeedsAManateeInvitation:(id)arg1 ;
-(void)clearProtectionDataForRecord;
-(void)setServerRecord:(id)arg1 ;
-(void)savePCSDataToCache;
-(BOOL)isShare;
-(id)sideEffectRecordIDs;
-(void)noteSideEffectRecordPendingModify:(id)arg1 ;
-(void)noteSideEffectRecordAbsent:(id)arg1 ;
-(void)noteSideEffectRecordPendingDelete:(id)arg1 ;
-(void)fetchSharePCSData;
-(void)updateParticipantsForFetchedShare:(id)arg1 error:(id)arg2 ;
@end

