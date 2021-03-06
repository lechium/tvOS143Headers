//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;
@protocol OS_dispatch_queue;

@interface IDSGroupMasterKeyMaterialCache : NSObject
{
    unsigned int _numberOfBroadcastCacheMKM;	// 8 = 0x8
    id _currentLocalMasterKeyMaterial;	// 16 = 0x10
    id _nextLocalMasterKeyMaterial;	// 24 = 0x18
    double _automaticResetInterval;	// 32 = 0x20
    NSString *_identifier;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    CDUnknownBlockType _automaticResetBlock;	// 56 = 0x38
    CDUnknownBlockType _inFlightResetBlock;	// 64 = 0x40
    NSSet *_masterKeyMaterials;	// 72 = 0x48
    NSSet *_membershipURIs;	// 80 = 0x50
    NSSet *_masterKeyIdentifiersReceivedByClient;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000001001c538c
@property(copy, nonatomic) NSSet *masterKeyIdentifiersReceivedByClient; // @synthesize masterKeyIdentifiersReceivedByClient=_masterKeyIdentifiersReceivedByClient;
@property(copy, nonatomic) NSSet *membershipURIs; // @synthesize membershipURIs=_membershipURIs;
@property(copy, nonatomic) NSSet *masterKeyMaterials; // @synthesize masterKeyMaterials=_masterKeyMaterials;
@property(copy, nonatomic) CDUnknownBlockType inFlightResetBlock; // @synthesize inFlightResetBlock=_inFlightResetBlock;
@property(copy, nonatomic) CDUnknownBlockType automaticResetBlock; // @synthesize automaticResetBlock=_automaticResetBlock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned int numberOfBroadcastCacheMKM; // @synthesize numberOfBroadcastCacheMKM=_numberOfBroadcastCacheMKM;
@property(nonatomic) double automaticResetInterval; // @synthesize automaticResetInterval=_automaticResetInterval;
@property(retain, nonatomic) id nextLocalMasterKeyMaterial; // @synthesize nextLocalMasterKeyMaterial=_nextLocalMasterKeyMaterial;
@property(retain, nonatomic) id currentLocalMasterKeyMaterial; // @synthesize currentLocalMasterKeyMaterial=_currentLocalMasterKeyMaterial;
- (id)debugDescription;	// IMP=0x00000001001c4ee4
- (id)description;	// IMP=0x00000001001c4d3c
- (void)resetClientMasterKeyIdentifierReceipts;	// IMP=0x00000001001c4ce4
- (_Bool)hasClientReceivedMasterKeyIdentifier:(id)arg1;	// IMP=0x00000001001c4c04
- (void)noteClientReceiptOfMasterKeyIdentifier:(id)arg1;	// IMP=0x00000001001c4b4c
- (void)_startAutomaticCacheResetTimerIfNeeded;	// IMP=0x00000001001c461c
- (_Bool)hasCachedMasterKeyIdentifier:(id)arg1;	// IMP=0x00000001001c41fc
- (id)cachedMasterKeyMaterialCollection;	// IMP=0x00000001001c3fc8
- (id)_groupMasterKeyCollectionToBroadcastForDestinationURI:(id)arg1 shouldIncludePeerKeys:(_Bool)arg2;	// IMP=0x00000001001c39c4
- (id)localMasterKeyCollectionToBroadcastForDestinationURI:(id)arg1;	// IMP=0x00000001001c3940
- (id)groupMasterKeyCollectionToBroadcastForDestinationURI:(id)arg1;	// IMP=0x00000001001c38bc
- (id)sampleMkMCollectionToBroadcast:(id)arg1;	// IMP=0x00000001001c364c
- (void)noteReceivedGroupMasterKeyMaterialCollection:(id)arg1;	// IMP=0x00000001001c3184
- (void)cleanUpMasterKeyMaterialUsingPredicate:(id)arg1;	// IMP=0x00000001001c30c8
- (void)resetRemoteMasterKeyMaterialCacheAndCancelResetInterval;	// IMP=0x00000001001c2f8c
- (void)resetCacheWithNewMembershipURIs:(id)arg1;	// IMP=0x00000001001c2dbc
- (id)initWithIdentifier:(id)arg1 initialMembershipURIs:(id)arg2 automaticResetInterval:(double)arg3 automaticResetBlock:(CDUnknownBlockType)arg4 queue:(id)arg5;	// IMP=0x00000001001c276c
- (id)initWithIdentifier:(id)arg1 initialMembershipURIs:(id)arg2 automaticResetBlock:(CDUnknownBlockType)arg3 queue:(id)arg4;	// IMP=0x00000001001c2634

@end

