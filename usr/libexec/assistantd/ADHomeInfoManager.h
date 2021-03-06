//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMAccessoryDelegatePrivate-Protocol.h"
#import "HMAccessorySettingsDelegate-Protocol.h"
#import "HMHomeDelegate-Protocol.h"
#import "HMHomeDelegatePrivate-Protocol.h"
#import "HMHomeManagerDelegate-Protocol.h"
#import "HMHomeManagerDelegatePrivate-Protocol.h"
#import "HMSettingsDelegate-Protocol.h"
#import "HMUserCloudShareManagerDelegate-Protocol.h"
#import "HMUserDelegatePrivate-Protocol.h"

@class ADHomeInfo, HMHome, HMHomeManager, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface ADHomeInfoManager : NSObject <HMHomeManagerDelegate, HMHomeManagerDelegatePrivate, HMUserDelegatePrivate, HMUserCloudShareManagerDelegate, HMHomeDelegate, HMSettingsDelegate, HMHomeDelegatePrivate, HMAccessorySettingsDelegate, HMAccessoryDelegatePrivate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    HMHomeManager *_homeManager;	// 16 = 0x10
    HMHome *_currentHome;	// 24 = 0x18
    ADHomeInfo *_currentHomeInfo;	// 32 = 0x20
    NSMutableDictionary *_homeUserSettings;	// 40 = 0x28
    _Bool _assistantRequestedToTurnOffVoiceID;	// 48 = 0x30
    NSMutableDictionary *_homeSharingStates;	// 56 = 0x38
}

+ (id)sharedInfoManager;	// IMP=0x000000010017aa5c
- (void).cxx_destruct;	// IMP=0x0000000100182b98
- (void)_startAcceptingCloudSharesForMultiUserService;	// IMP=0x000000010018299c
- (void)_startCloudSharingForMultiUserService:(id)arg1;	// IMP=0x0000000100181f30
- (void)accessoryDidUpdatePreferredMediaUser:(id)arg1;	// IMP=0x0000000100181ee8
- (void)homeDidEnableMultiUser:(id)arg1;	// IMP=0x0000000100181da8
- (void)home:(id)arg1 didAddAccessory:(id)arg2;	// IMP=0x0000000100181d94
- (void)home:(id)arg1 didRemoveUser:(id)arg2;	// IMP=0x0000000100181c28
- (void)home:(id)arg1 didAddUser:(id)arg2;	// IMP=0x0000000100181aac
- (void)shareManager:(id)arg1 didReceiveShareInvitation:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000100181964
- (void)_propagateSiriDataSharingOptInStatus:(long long)arg1 toAccessory:(id)arg2;	// IMP=0x0000000100181354
- (void)user:(id)arg1 didUpdateAssistantAccessControl:(id)arg2 forHome:(id)arg3;	// IMP=0x0000000100180e9c
- (void)settingsWillUpdate:(id)arg1;	// IMP=0x0000000100180df8
- (void)settingsDidUpdate:(id)arg1;	// IMP=0x0000000100180a6c
- (void)homeManagerDidUpdateDataSyncState:(id)arg1;	// IMP=0x000000010018090c
- (void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2;	// IMP=0x00000001001806cc
- (void)homeManager:(id)arg1 didRemoveHome:(id)arg2;	// IMP=0x00000001001802d8
- (void)homeManager:(id)arg1 didAddHome:(id)arg2;	// IMP=0x000000010017ff7c
- (void)homeManagerDidUpdateHomes:(id)arg1;	// IMP=0x000000010017fdf4
- (void)_homeManagerUpdatedHomes:(id)arg1 homesToDelete:(id)arg2;	// IMP=0x000000010017fcc4
- (void)_homeManagerUpdatedHomes:(id)arg1;	// IMP=0x000000010017fcb4
- (void)_checkAndDisableVoiceIDIfRequired;	// IMP=0x000000010017fc98
- (void)_startCloudKitActivityForHomes:(id)arg1 homesToDelete:(id)arg2;	// IMP=0x000000010017f380
- (void)disableVoiceID;	// IMP=0x000000010017f37c
- (void)restartShareDeletion;	// IMP=0x000000010017f00c
- (void)restartSharing;	// IMP=0x000000010017ef9c
- (void)getHomeIdForAccessoryId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010017ec18
- (void)getVoiceSettingsForHomeMembers:(CDUnknownBlockType)arg1;	// IMP=0x000000010017e9c0
- (void)settingsForMultiUserWithRefresh:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010017e880
- (void)getCurrentHomeMemberIds:(CDUnknownBlockType)arg1;	// IMP=0x000000010017e468
- (void)_setPreferredMediaUserSharedUserIDFromAccessory:(id)arg1;	// IMP=0x000000010017e07c
- (id)infoForThisDevice;	// IMP=0x000000010017df44
- (id)_homesWithMultiUserEnabled;	// IMP=0x000000010017dc60
- (_Bool)_updateHomeUserSettings;	// IMP=0x000000010017c8d0
- (id)_settingsForHomeUser:(id)arg1 forHome:(id)arg2;	// IMP=0x000000010017c630
- (void)_resolveSiriDataSharingStatusMismatch:(id)arg1;	// IMP=0x000000010017c05c
- (void)_siriDataSharingOptInStatusDidChange:(id)arg1;	// IMP=0x000000010017bb94
- (void)_logRelevantAnalyticsOnHomeUserSettingsUpdateForCurrentSettings:(id)arg1 allowVoiceIdSettingValue:(long long)arg2 isPrimaryUser:(_Bool)arg3;	// IMP=0x000000010017b9dc
- (id)_currentHomeInfo;	// IMP=0x000000010017b4e0
- (id)_currentHome;	// IMP=0x000000010017b038
- (void)currentHomeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000010017af5c
- (void)dealloc;	// IMP=0x000000010017ae60
- (id)_homeManager;	// IMP=0x000000010017ad68
- (void)startAcceptingCloudSharesForMultiUserService;	// IMP=0x000000010017ad00
- (id)initWithHomeManager:(id)arg1 queue:(id)arg2;	// IMP=0x000000010017ac0c
- (id)_init;	// IMP=0x000000010017aad4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

