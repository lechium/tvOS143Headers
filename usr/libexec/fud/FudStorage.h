//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSMutableDictionary, NSRecursiveLock, NSString;

__attribute__((visibility("hidden")))
@interface FudStorage : NSObject <NSSecureCoding>
{
    int storageVersion;	// 8 = 0x8
    NSString *storageFile;	// 16 = 0x10
    NSString *storageRoot;	// 24 = 0x18
    NSMutableDictionary *pluginToPolicy;	// 32 = 0x20
    NSMutableDictionary *pluginToClients;	// 40 = 0x28
    NSMutableDictionary *filterToStorageItem;	// 48 = 0x30
    NSRecursiveLock *lock;	// 56 = 0x38
    _Bool isNewStorage;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010001af88
+ (_Bool)deleteStorageAtPath:(id)arg1;	// IMP=0x000000010001aecc
+ (id)storageWithFile:(id)arg1;	// IMP=0x0000000100017730
@property(readonly) _Bool isNewStorage; // @synthesize isNewStorage;
@property(readonly) NSMutableDictionary *pluginToPolicy; // @synthesize pluginToPolicy;
@property(retain) NSString *storageFile; // @synthesize storageFile;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010001b248
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010001af90
- (id)getObjectFromFile:(id)arg1;	// IMP=0x000000010001ac2c
- (_Bool)loadAllPluginData;	// IMP=0x000000010001a9d8
- (_Bool)saveObject:(id)arg1 toFile:(id)arg2 needSecureCoding:(_Bool)arg3;	// IMP=0x000000010001a89c
- (_Bool)saveDataForPlugin:(id)arg1 filter:(id)arg2;	// IMP=0x000000010001a6bc
- (_Bool)saveAllPluginData;	// IMP=0x000000010001a434
- (_Bool)saveFudData;	// IMP=0x000000010001a3bc
- (_Bool)save;	// IMP=0x000000010001a354
- (_Bool)setPluginInstance:(id)arg1 withVersion:(id)arg2 pluginName:(id)arg3 filterName:(id)arg4;	// IMP=0x000000010001a288
- (id)getPluginInstanceWithName:(id)arg1 filterName:(id)arg2;	// IMP=0x000000010001a008
- (id)getHistoryForPlugin:(id)arg1 filterName:(id)arg2;	// IMP=0x0000000100019f4c
- (_Bool)removeStateMachineForFilterName:(id)arg1;	// IMP=0x0000000100019e78
- (id)getFiltersInExclusionGroup:(id)arg1;	// IMP=0x0000000100019c34
- (id)getStateMachineForFilterName:(id)arg1;	// IMP=0x0000000100019b64
- (_Bool)setStateMachine:(id)arg1 forPlugin:(id)arg2 forFilter:(id)arg3;	// IMP=0x0000000100019a1c
- (_Bool)isPluginTracked:(id)arg1;	// IMP=0x00000001000199bc
- (id)getClientWithName:(id)arg1;	// IMP=0x00000001000197ac
- (_Bool)unregisterClient:(id)arg1 fromPlugin:(id)arg2;	// IMP=0x0000000100019610
- (_Bool)unregisterClientFromAllPlugins:(id)arg1;	// IMP=0x00000001000192c0
- (_Bool)registerClient:(id)arg1 withGroup:(id)arg2;	// IMP=0x00000001000190f8
- (_Bool)registerClient:(id)arg1 withPlugin:(id)arg2;	// IMP=0x0000000100018e80
- (id)getRegisteredClientsForPlugin:(id)arg1;	// IMP=0x0000000100018e0c
- (_Bool)unregisterAllClients;	// IMP=0x0000000100018d9c
- (_Bool)setContext:(id)arg1 forPluginName:(id)arg2 filter:(id)arg3;	// IMP=0x0000000100018cf0
- (id)getContextForPlugin:(id)arg1 filter:(id)arg2;	// IMP=0x0000000100018c4c
- (_Bool)setStorageItem:(id)arg1 forPlugin:(id)arg2 filter:(id)arg3;	// IMP=0x0000000100018b80
- (id)getStorageItemForPlugin:(id)arg1 filter:(id)arg2;	// IMP=0x0000000100018ad0
- (_Bool)isAnyStateMachineActive;	// IMP=0x00000001000188a0
- (_Bool)isAnyStateMachineActiveForPlugin:(id)arg1;	// IMP=0x000000010001862c
- (id)getPolicyForFilterName:(id)arg1;	// IMP=0x00000001000183f8
- (id)getPolicyForPlugin:(id)arg1;	// IMP=0x0000000100018384
- (void)dealloc;	// IMP=0x0000000100018308
- (void)setPoliciesWithArray:(id)arg1;	// IMP=0x0000000100017f34
- (void)addPolicy:(id)arg1;	// IMP=0x0000000100017c18
- (id)initWithStorageFile:(id)arg1;	// IMP=0x0000000100017b20

@end

