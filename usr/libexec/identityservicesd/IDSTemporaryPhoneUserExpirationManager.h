//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSUserStoreListener-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol IDSTemporaryPhoneUserExpirationManagerDelegate;

@interface IDSTemporaryPhoneUserExpirationManager : NSObject <IDSUserStoreListener>
{
    struct os_unfair_lock_s _usersToTimersLock;	// 8 = 0x8
    id <IDSTemporaryPhoneUserExpirationManagerDelegate> _delegate;	// 16 = 0x10
    NSMutableDictionary *_usersToTimers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000010013a79c
@property(retain, nonatomic) NSMutableDictionary *usersToTimers; // @synthesize usersToTimers=_usersToTimers;
@property(nonatomic) struct os_unfair_lock_s usersToTimersLock; // @synthesize usersToTimersLock=_usersToTimersLock;
@property(nonatomic) __weak id <IDSTemporaryPhoneUserExpirationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)userStore:(id)arg1 didRemoveAuthenticationCertificateForUser:(id)arg2;	// IMP=0x000000010013a628
- (void)userStore:(id)arg1 didRemoveUser:(id)arg2 withAuthenticationCertificate:(id)arg3;	// IMP=0x000000010013a56c
- (void)userStore:(id)arg1 didUpdateUser:(id)arg2;	// IMP=0x000000010013a4dc
- (void)userStore:(id)arg1 didAddUser:(id)arg2;	// IMP=0x000000010013a44c
- (void)_expireTimer:(id)arg1;	// IMP=0x000000010013a060
- (void)_cancelExpirationTimerForUser:(id)arg1;	// IMP=0x0000000100139e30
- (void)_kickoffExpirationTimerForInfo:(id)arg1;	// IMP=0x0000000100139968
- (void)_attemptToKickoffExpirationTimerForUser:(id)arg1;	// IMP=0x0000000100139854
- (id)initWithUserStore:(id)arg1 delegate:(id)arg2;	// IMP=0x000000010013954c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
