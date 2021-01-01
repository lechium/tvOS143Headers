//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSPersistentMapMergePolicy, NSMutableDictionary, NSSet, NSString;
@protocol IDSPersistentMapDelegate, IDSPersistentMapPersister, OS_dispatch_queue, OS_dispatch_source;

@interface IDSPersistentMap : NSObject
{
    _Bool _isLoaded;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 12 = 0xc
    id <IDSPersistentMapDelegate> _delegate;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    long long _versionNumber;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_serialPersistQueue;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_saveTimer;	// 48 = 0x30
    double _writeCoalescingDelay;	// 56 = 0x38
    double _writeCoalescingLeeway;	// 64 = 0x40
    CDUnknownBlockType _migrationBlock;	// 72 = 0x48
    id <IDSPersistentMapPersister> _persister;	// 80 = 0x50
    NSSet *_decodableClasses;	// 88 = 0x58
    NSMutableDictionary *_cachedMap;	// 96 = 0x60
    unsigned long long _mergePolicyType;	// 104 = 0x68
    IDSPersistentMapMergePolicy *_mergePolicy;	// 112 = 0x70
}

+ (id)defaultPersisterForIdentifier:(id)arg1 dataProtectionClass:(long long)arg2;	// IMP=0x0000000100110f58
- (void).cxx_destruct;	// IMP=0x00000001001158c0
@property(retain, nonatomic) IDSPersistentMapMergePolicy *mergePolicy; // @synthesize mergePolicy=_mergePolicy;
@property(nonatomic) unsigned long long mergePolicyType; // @synthesize mergePolicyType=_mergePolicyType;
@property(readonly, nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(readonly, nonatomic) NSMutableDictionary *cachedMap; // @synthesize cachedMap=_cachedMap;
@property(retain, nonatomic) NSSet *decodableClasses; // @synthesize decodableClasses=_decodableClasses;
@property(retain, nonatomic) id <IDSPersistentMapPersister> persister; // @synthesize persister=_persister;
@property(copy, nonatomic) CDUnknownBlockType migrationBlock; // @synthesize migrationBlock=_migrationBlock;
@property(nonatomic) double writeCoalescingLeeway; // @synthesize writeCoalescingLeeway=_writeCoalescingLeeway;
@property(nonatomic) double writeCoalescingDelay; // @synthesize writeCoalescingDelay=_writeCoalescingDelay;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *saveTimer; // @synthesize saveTimer=_saveTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialPersistQueue; // @synthesize serialPersistQueue=_serialPersistQueue;
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) long long versionNumber; // @synthesize versionNumber=_versionNumber;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <IDSPersistentMapDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_performLockedBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100115474
- (long long)_versionNumberForPersistedMap:(id)arg1;	// IMP=0x0000000100115384
- (id)_mapByStrippingMetadataFromMap:(id)arg1;	// IMP=0x0000000100115304
- (id)_mapByAddingMetadataToMap:(id)arg1;	// IMP=0x00000001001151e4
- (id)_timerIdentifierFromBaseIdentifier:(id)arg1;	// IMP=0x0000000100115150
- (id)_encodeMap:(id)arg1;	// IMP=0x0000000100114e88
- (id)_decodeMapData:(id)arg1;	// IMP=0x0000000100114ac0
- (void)_save;	// IMP=0x0000000100114194
- (void)delayedSave;	// IMP=0x0000000100113d64
- (void)persistImmediately;	// IMP=0x00000001001138c4
- (_Bool)loadAndCheckStatus;	// IMP=0x0000000100112df8
- (id)copyDictionaryRepresentation;	// IMP=0x0000000100112c4c
- (void)removeAllObjects;	// IMP=0x0000000100112b70
- (id)allValues;	// IMP=0x00000001001129bc
- (id)allKeys;	// IMP=0x0000000100112808
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x0000000100112718
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x00000001001126a0
- (void)_performCacheReadingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100112558
- (void)_performCacheModifyingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100112210
- (void)removeObjectForKey:(id)arg1;	// IMP=0x0000000100112098
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100111eac
- (id)objectForKey:(id)arg1;	// IMP=0x0000000100111ca0
- (id)debugDescription;	// IMP=0x00000001001119bc
- (id)initWithIdentifier:(id)arg1 versionNumber:(long long)arg2 decodableClasses:(id)arg3 mergePolicy:(id)arg4 writeCoalescingDelay:(double)arg5 writeCoalescingLeeway:(double)arg6 persister:(id)arg7 migrationBlock:(CDUnknownBlockType)arg8;	// IMP=0x0000000100111524
- (id)initWithIdentifier:(id)arg1 versionNumber:(long long)arg2 decodableClasses:(id)arg3 dataProtectionClass:(long long)arg4 mergePolicy:(id)arg5 migrationBlock:(CDUnknownBlockType)arg6;	// IMP=0x0000000100111384
- (id)initWithIdentifier:(id)arg1 versionNumber:(long long)arg2 decodableClasses:(id)arg3 migrationBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000100111270
- (id)init;	// IMP=0x000000010011113c

@end

