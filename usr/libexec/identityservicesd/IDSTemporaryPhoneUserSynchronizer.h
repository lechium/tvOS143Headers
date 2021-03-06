//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSTemporaryPhoneUserExpirationManagerDelegate-Protocol.h"
#import "IDSUserStoreListener-Protocol.h"
#import "IDSUserStoreProvider-Protocol.h"

@class IDSCTAdapter, IDSTemporaryPhoneUserExpirationManager, IDSTransactionQueue, IDSUserStore, NSString;

@interface IDSTemporaryPhoneUserSynchronizer : NSObject <IDSTemporaryPhoneUserExpirationManagerDelegate, IDSUserStoreProvider, IDSUserStoreListener>
{
    IDSUserStore *_userStore;	// 8 = 0x8
    IDSCTAdapter *_ctAdapter;	// 16 = 0x10
    IDSTemporaryPhoneUserExpirationManager *_expirationManager;	// 24 = 0x18
    IDSTransactionQueue *_transactionQueue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000100610d74
@property(retain, nonatomic) IDSTransactionQueue *transactionQueue; // @synthesize transactionQueue=_transactionQueue;
@property(retain, nonatomic) IDSTemporaryPhoneUserExpirationManager *expirationManager; // @synthesize expirationManager=_expirationManager;
@property(retain, nonatomic) IDSCTAdapter *ctAdapter; // @synthesize ctAdapter=_ctAdapter;
@property(retain, nonatomic) IDSUserStore *userStore; // @synthesize userStore=_userStore;
- (void)expirationManager:(id)arg1 didExpireUser:(id)arg2;	// IMP=0x0000000100610a40
- (void)expirationManager:(id)arg1 nearingExpirationForUser:(id)arg2;	// IMP=0x00000001006109a0
- (void)userStore:(id)arg1 didRemoveAuthenticationCertificateForUser:(id)arg2;	// IMP=0x0000000100610928
- (void)userStore:(id)arg1 didRemoveUser:(id)arg2 withAuthenticationCertificate:(id)arg3;	// IMP=0x0000000100610204
- (void)userStore:(id)arg1 didUpdateUser:(id)arg2;	// IMP=0x000000010060ffc4
- (void)userStore:(id)arg1 didAddUser:(id)arg2;	// IMP=0x000000010060fd84
- (id)updatedUserSetForRealm:(long long)arg1 currentUsers:(id)arg2;	// IMP=0x000000010060f680
- (void)forceRemoveUser:(id)arg1 silently:(_Bool)arg2;	// IMP=0x000000010060f43c
- (id)initWithUserStore:(id)arg1 ctAdapter:(id)arg2;	// IMP=0x000000010060f2a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

