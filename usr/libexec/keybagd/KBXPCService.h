//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "KBXPCProtocol-Protocol.h"

@class NSString;

@interface KBXPCService : NSObject <KBXPCProtocol>
{
}

+ (id)sharedService;	// IMP=0x0000000100005b88
- (void)replacePersonaMachPortVoucher:(id)arg1 withAccountID:(id)arg2 generationSet:(_Bool)arg3 forPid:(int)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x000000010000d864
- (void)SeshatDebugWithDebugMask:(int)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000d7dc
- (void)SeshatRecoverWithSecret:(id)arg1 secretSize:(unsigned long long)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000d750
- (void)SeshatUnlockWithSecret:(id)arg1 secretSize:(unsigned long long)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000d6c4
- (void)Event:(int)arg1;	// IMP=0x000000010000d6bc
- (void)SeshatEnrollWithSecret:(id)arg1 secretSize:(unsigned long long)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000d634
- (void)userSessionDeviceConfigurationInfo:(int)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000d3e4
- (void)isLoginSessionwithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000d0e8
- (void)unmountUserSessionVolumeforID:(int)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000cec8
- (void)mountUserSessionVolumeforID:(int)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000cca8
- (void)userSessionLRUInfoWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000ca94
- (void)switchBlockTasksInfoWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000c814
- (void)limitNumberOfUserSessions:(int)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000c70c
- (void)clearSyncBubbleUserswithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000c4fc
- (void)listSyncBubbleUserswithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000c2e8
- (void)listSyncServiceSourcesForUserSession:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000bf54
- (void)currentSyncBubbleIDwithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000bd64
- (void)MKBUserSessionSetInternalTest:(_Bool)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000bb38
- (void)stoptUserSyncBubble:(int)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000b920
- (void)startUserSyncBubble:(int)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000b70c
- (void)removeSyncServiceSource:(id)arg1 toUserSession:(int)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000b48c
- (void)addSyncServiceSource:(id)arg1 toUserSession:(int)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x000000010000b20c
- (void)switchToLoginUIUserSessionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000b128
- (void)configureLoginUIWithUserSessionCount:(int)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000ae54
- (void)foregroundUserSessionAttributesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000ac94
- (void)setUserSessionAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000a958
- (void)getUserSessionAttributes:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000010000a6c0
- (void)deleteUserSessionSecureBlobwithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000a430
- (void)retrieveUserSessionSecureBackupBlobwithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000010000a1a0
- (void)setUserSessionSecureBackupBlob:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100009f44
- (void)switchToUserSession:(id)arg1 withOpaqueData:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100009c14
- (void)deleteUserSessionBlobwithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100009984
- (void)retrieveUserSessionBlobwithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001000096f4
- (void)listAllUserSessionIDsWithAReply:(CDUnknownBlockType)arg1;	// IMP=0x00000001000095ac
- (void)removeUserSession:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000092e8
- (void)migrateUserSession:(id)arg1 fromfilePath:(id)arg2 withSecret:(id)arg3 oldSize:(unsigned long long)arg4 withOpaqueData:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0000000100008cd4
- (void)createUserSession:(id)arg1 withSecret:(id)arg2 oldSize:(unsigned long long)arg3 withOpaqueData:(id)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000010000871c
- (void)unloadUserSession:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x00000001000084c8
- (void)loadUserSession:(id)arg1 withSecret:(id)arg2 oldSize:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100007ee0
- (void)passcodeUnlockFailedWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007ea0
- (void)passcodeUnlockSuccessWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007e60
- (void)passcodeUnlockStartWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007e20
- (void)getDeviceLockState:(int)arg1 needsExtended:(_Bool)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007d6c
- (void)getLockSateInfoforUser:(int)arg1 WithReply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007cc8
- (void)migrationWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007c34
- (void)isKeyRollingInProgresswithreply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007b84
- (void)stashDestroywithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007aa0
- (void)stashVerifywithUID:(unsigned int)arg1 WithFlags:(unsigned int)arg2 WithReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007980
- (void)stashCommitwithUID:(unsigned int)arg1 WithFlags:(unsigned int)arg2 WithReply:(CDUnknownBlockType)arg3;	// IMP=0x0000000100007884
- (void)stashCreatewithSecret:(id)arg1 secrestSize:(unsigned long long)arg2 withMode:(int)arg3 withUID:(unsigned int)arg4 WithFlags:(unsigned int)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x00000001000075f8
- (void)stopBackupSessionwithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007510
- (void)startBackupSessionwithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007428
- (void)getBackupkeyForInodeOrCryptoID:(unsigned long long)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0000000100007314
- (void)getBackupBlobreply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100007248
- (void)registerBackupBag:(id)arg1 withSecret:(id)arg2 secretSize:(unsigned long long)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100006fbc
- (void)changeClassKeysGenerationWithSecret:(id)arg1 secretSize:(unsigned long long)arg2 generationOption:(int)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x0000000100006d44
- (void)changeSystemSecretWithEscrow:(id)arg1 fromOldSecret:(id)arg2 oldSize:(unsigned long long)arg3 toNewSecret:(id)arg4 newSize:(unsigned long long)arg5 opaqueData:(id)arg6 keepstate:(_Bool)arg7 reply:(CDUnknownBlockType)arg8;	// IMP=0x000000010000662c
- (void)getPasscodeBlobWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000100006560
- (void)changeSystemSecretfromOldSecret:(id)arg1 oldSize:(unsigned long long)arg2 toNewSecret:(id)arg3 newSize:(unsigned long long)arg4 opaqueData:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0000000100005dd8
- (_Bool)retrievePasscodeFromFileHandle:(id)arg1 ofLength:(unsigned long long)arg2 withbaseaddress:(char *)arg3;	// IMP=0x0000000100005d50
- (id)remoteServiceName;	// IMP=0x0000000100005cf4
- (_Bool)remoteProcessHasBooleanEntitlement:(id)arg1;	// IMP=0x0000000100005c30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
