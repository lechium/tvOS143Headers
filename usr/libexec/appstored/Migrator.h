//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MigratorConfigurationStore, NSMutableArray;
@protocol OS_dispatch_queue;

@interface Migrator : NSObject
{
    MigratorConfigurationStore *_configurationStore;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSMutableArray *_migrations;	// 24 = 0x18
}

+ (_Bool)needsMigration;	// IMP=0x0000000100207f14
+ (_Bool)needsInitialMigration;	// IMP=0x0000000100207e7c
+ (id)migrationsNeeded;	// IMP=0x0000000100207e30
+ (id)sharedInstance;	// IMP=0x0000000100207a14
- (void).cxx_destruct;	// IMP=0x0000000100209808
- (void)_runMigrationsWhenReady;	// IMP=0x000000010020968c
- (void)_queueMigrationWithConfiguration:(id)arg1;	// IMP=0x00000001002094bc
- (void)_queueMigration:(id)arg1 persist:(_Bool)arg2;	// IMP=0x000000010020932c
- (void)_queueMigration:(id)arg1;	// IMP=0x000000010020931c
- (_Bool)_setupMigrationFollowingMigratorComplete:(unsigned long long)arg1;	// IMP=0x0000000100208e38
- (void)_performMigration;	// IMP=0x00000001002089d4
- (void)_loadBagAndPerformMigration;	// IMP=0x0000000100208824
- (void)_boostrapWhenReady;	// IMP=0x00000001002085bc
- (void)_handleMonitorStateDidChangeNotification:(id)arg1;	// IMP=0x0000000100208344
- (void)_handleNetworkStateDidChangeNotification:(id)arg1;	// IMP=0x0000000100208100
- (_Bool)performMigration:(unsigned long long)arg1 clientID:(id)arg2;	// IMP=0x0000000100207f80
- (void)dealloc;	// IMP=0x0000000100207d70
- (id)init;	// IMP=0x0000000100207a80

@end
