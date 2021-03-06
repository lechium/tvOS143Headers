//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSData, NSDictionary;
@protocol OS_dispatch_queue;

@interface MZKeyValueStoreClampsController : NSObject <NSSecureCoding>
{
    NSDictionary *_transactionClamps;	// 8 = 0x8
    double _dsidCheckTimestamp;	// 16 = 0x10
    double _authenticationNeededTimestamp;	// 24 = 0x18
    double _userAcceptedSyncTimestamp;	// 32 = 0x20
    double _networkingBlockedUntil;	// 40 = 0x28
    double _backOffUntil;	// 48 = 0x30
    double _userCancelledSignInBackOffUntil;	// 56 = 0x38
    double _nextUserCancelBackOffInterval;	// 64 = 0x40
    NSData *_pendingUserDefaultArchivedData;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
}

+ (id)_classesForTransactionClampsValues;	// IMP=0x000000010002203c
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100021858
+ (id)sharedClampsController;	// IMP=0x0000000100021334
- (void).cxx_destruct;	// IMP=0x0000000100022ff4
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain) NSData *pendingUserDefaultArchivedData; // @synthesize pendingUserDefaultArchivedData=_pendingUserDefaultArchivedData;
@property double nextUserCancelBackOffInterval; // @synthesize nextUserCancelBackOffInterval=_nextUserCancelBackOffInterval;
@property double userCancelledSignInBackOffUntil; // @synthesize userCancelledSignInBackOffUntil=_userCancelledSignInBackOffUntil;
@property double backOffUntil; // @synthesize backOffUntil=_backOffUntil;
@property double networkingBlockedUntil; // @synthesize networkingBlockedUntil=_networkingBlockedUntil;
@property double userAcceptedSyncTimestamp; // @synthesize userAcceptedSyncTimestamp=_userAcceptedSyncTimestamp;
@property double authenticationNeededTimestamp; // @synthesize authenticationNeededTimestamp=_authenticationNeededTimestamp;
@property double dsidCheckTimestamp; // @synthesize dsidCheckTimestamp=_dsidCheckTimestamp;
@property(retain, nonatomic) NSDictionary *transactionClamps; // @synthesize transactionClamps=_transactionClamps;
- (_Bool)_canScheduleTransactionBasedOnUserCancelledSignIn:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100022e10
- (_Bool)_canScheduleTransactionBasedOnBackOff:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100022d14
- (_Bool)_canScheduleTransactionBasedOnDSIDCheck:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100022c74
- (_Bool)_canScheduleTransactionBasedOfNetworkingBlocked:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100022be8
- (_Bool)_canScheduleTransactionBasedOnType:(id)arg1 error:(id *)arg2;	// IMP=0x00000001000229e0
- (id)_keyForTransaction:(id)arg1;	// IMP=0x00000001000228dc
- (double)_rightNow;	// IMP=0x0000000100022880
- (_Bool)isNetworkingBlocked;	// IMP=0x00000001000227f4
- (void)clearNetworkingBlocked;	// IMP=0x00000001000227e4
- (void)setNetworkingBlocked;	// IMP=0x0000000100022794
- (void)clearBackOff;	// IMP=0x000000010002275c
- (void)backOffForTimeInterval:(double)arg1;	// IMP=0x0000000100022708
- (void)clearUserCancelledSignIn;	// IMP=0x00000001000226c4
- (void)setUserCancelledSignIn;	// IMP=0x0000000100022628
- (_Bool)hasUserRecentlyAcceptedSync;	// IMP=0x0000000100022578
- (void)clearUserAcceptedSyncTimestamp;	// IMP=0x0000000100022540
- (void)setUserAcceptedSyncTimestamp;	// IMP=0x00000001000224fc
- (_Bool)hasAuthenticatedTooRecentlyForTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100022440
- (void)clearAuthenticationRequest;	// IMP=0x0000000100022408
- (void)setAuthenticationRequest;	// IMP=0x00000001000223c4
- (void)clearDSIDCheckTimestamp;	// IMP=0x000000010002238c
- (void)setDSIDCheckTimestamp;	// IMP=0x0000000100022348
- (void)clearTimestampForTransaction:(id)arg1;	// IMP=0x000000010002227c
- (void)setTimestampForTransaction:(id)arg1;	// IMP=0x0000000100022160
- (void)reset;	// IMP=0x0000000100021f90
- (void)accessTransactionClampsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100021e2c
- (_Bool)canScheduleTransaction:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100021d58
- (id)description;	// IMP=0x0000000100021ba8
- (void)saveToUserDefaults;	// IMP=0x0000000100021860
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000100021654
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100021520
- (id)init;	// IMP=0x0000000100021490

@end

