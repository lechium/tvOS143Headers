//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "RPSubDaemonable-Protocol.h"

@class CUCoalescer, CUSystemMonitor, NSArray, NSMutableArray, NSString, RPIdentity;
@protocol OS_dispatch_queue;

@interface RPIdentityDaemon : NSObject <RPSubDaemonable>
{
    int _homeViewChangeToken;	// 8 = 0x8
    CUCoalescer *_identitiesChangedCoalescer;	// 16 = 0x10
    _Bool _invalidateCalled;	// 24 = 0x18
    _Bool _invalidateDone;	// 25 = 0x19
    unsigned long long _keychainRefetchTicks;	// 32 = 0x20
    NSArray *_pairedDeviceIdentities;	// 40 = 0x28
    int _pairedDevicesNotifier;	// 48 = 0x30
    _Bool _prefFamilyResolve;	// 52 = 0x34
    _Bool _prefFriendResolve;	// 53 = 0x35
    _Bool _prefOwnerResolve;	// 54 = 0x36
    _Bool _prefPairedResolve;	// 55 = 0x37
    _Bool _prefSharedHomeResolve;	// 56 = 0x38
    NSArray *_sameAccountDeviceIdentities;	// 64 = 0x40
    RPIdentity *_selfIdentityCache;	// 72 = 0x48
    NSMutableArray *_sharedHomeDeviceIdentities;	// 80 = 0x50
    NSMutableArray *_sharedHomeExtraDeviceIdentities;	// 88 = 0x58
    CUSystemMonitor *_systemMonitor;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 104 = 0x68
    RPIdentity *_homeKitIdentity;	// 112 = 0x70
}

+ (id)sharedIdentityDaemon;	// IMP=0x0000000100033448
- (void).cxx_destruct;	// IMP=0x000000010003b200
@property(retain, nonatomic) RPIdentity *homeKitIdentity; // @synthesize homeKitIdentity=_homeKitIdentity;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (unsigned int)_updateSelfIdentityPublic:(id)arg1 privateIdentity:(id)arg2;	// IMP=0x000000010003ab50
- (unsigned int)_updateSelfIdentityPrivate:(id)arg1 create:(_Bool)arg2;	// IMP=0x000000010003a718
- (void)_saveSelfIdentityPublicWithPrivateIdentity:(id)arg1 force:(_Bool)arg2;	// IMP=0x000000010003a0e4
- (void)_saveSelfIdentityPrivate:(id)arg1;	// IMP=0x0000000100039e64
- (void)_loadSelfIdentity:(_Bool)arg1;	// IMP=0x00000001000399fc
- (void)_updateSameAccountIdentities;	// IMP=0x00000001000392e0
- (void)_updatePairedDeviceIdentities;	// IMP=0x0000000100038ce4
- (void)_triggerKeychainRefetch;	// IMP=0x0000000100038aa8
- (void)_postIdentitiesChangedNotification;	// IMP=0x0000000100038988
- (void)_ensureStopped;	// IMP=0x000000010003888c
- (void)_ensureStarted;	// IMP=0x0000000100038548
- (_Bool)saveIdentityWithIDSDeviceID:(id)arg1 message:(id)arg2 error:(id *)arg3;	// IMP=0x0000000100038218
- (_Bool)saveIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100037ee4
- (_Bool)removeIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x0000000100037b8c
- (void)addSharedHomeIdentityWithRPMessage:(id)arg1;	// IMP=0x00000001000376bc
- (void)addSelfIdentityInfoToMessage:(id)arg1 flags:(unsigned int)arg2;	// IMP=0x00000001000373c0
- (id)identityOfSelfAndReturnError:(id *)arg1;	// IMP=0x0000000100037280
- (id)_identitiesOfType:(int)arg1 error:(id *)arg2;	// IMP=0x0000000100036838
- (id)identitiesOfType:(int)arg1 error:(id *)arg2;	// IMP=0x0000000100036798
- (unsigned int)resolveIdentityTypesForSignature:(id)arg1 data:(id)arg2 typeFlags:(unsigned int)arg3;	// IMP=0x00000001000363d4
- (id)resolveIdentityForSignature:(id)arg1 data:(id)arg2 typeFlags:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x0000000100035ec8
- (id)resolveIdentityForBonjourDevice:(id)arg1 typeFlags:(unsigned int)arg2;	// IMP=0x00000001000354f8
- (id)resolveIdentitiesForBonjourDevice:(id)arg1 typeFlags:(unsigned int)arg2;	// IMP=0x0000000100035430
- (void)resolvableAccessoriesUpdated:(id)arg1;	// IMP=0x0000000100034c80
- (_Bool)removeXPCMatchingToken:(unsigned long long)arg1;	// IMP=0x0000000100034c40
- (_Bool)addXPCMatchingToken:(unsigned long long)arg1 event:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000100034c38
- (void)_update;	// IMP=0x0000000100034c2c
- (void)regenerateSelfIdentity:(id)arg1;	// IMP=0x0000000100034b88
- (void)prefsChanged;	// IMP=0x00000001000347ec
- (_Bool)diagnosticCommand:(id)arg1 params:(id)arg2;	// IMP=0x0000000100034570
- (void)daemonInfoChanged:(unsigned long long)arg1;	// IMP=0x00000001000343f4
- (void)_invalidated;	// IMP=0x0000000100034364
- (void)_invalidate;	// IMP=0x00000001000342a4
- (void)invalidate;	// IMP=0x000000010003423c
- (void)_activate;	// IMP=0x00000001000340e4
- (void)activate;	// IMP=0x000000010003407c
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x0000000100033528
- (id)init;	// IMP=0x00000001000334b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

