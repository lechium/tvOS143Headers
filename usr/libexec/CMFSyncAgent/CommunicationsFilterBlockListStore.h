//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NPSManager;
@protocol CMFSyncAgentDataStore;

@interface CommunicationsFilterBlockListStore : NSObject
{
    NPSManager *_npsManager;	// 8 = 0x8
    id <CMFSyncAgentDataStore> _dataStore;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000100004c9c
@property(readonly, nonatomic) id <CMFSyncAgentDataStore> dataStore; // @synthesize dataStore=_dataStore;
- (void)handleNSUbiquitousKeyValueStoreDidChangeExternallyNotification:(id)arg1;	// IMP=0x000000010000635c
- (void)_updateStore:(id)arg1 revision:(unsigned long long)arg2 updateKVS:(_Bool)arg3 updateLocal:(_Bool)arg4 itemsNeedConversion:(_Bool)arg5;	// IMP=0x0000000100005e14
- (_Bool)isItemInList:(id)arg1;	// IMP=0x0000000100005d38
- (id)_isItemInList:(id)arg1 blockList:(id)arg2;	// IMP=0x0000000100005c14
- (id)_copyItems:(_Bool)arg1;	// IMP=0x0000000100005b64
- (id)copyAllItems;	// IMP=0x0000000100005b54
- (id)copyAllItemsAsDictionaries;	// IMP=0x0000000100005b44
- (_Bool)removeItemForAllServices:(id)arg1;	// IMP=0x0000000100005a18
- (_Bool)addItemForAllServices:(id)arg1;	// IMP=0x00000001000052d8
- (void)_storeDidChangeExternally;	// IMP=0x0000000100005264
- (void)updateDataStore;	// IMP=0x00000001000050cc
- (void)synchronizeDataStore;	// IMP=0x0000000100005024
- (void)migrateLegacyDataStoreIfNeeded;	// IMP=0x0000000100004e78
- (void)dealloc;	// IMP=0x0000000100004e28
- (id)init;	// IMP=0x0000000100004d58

@end

