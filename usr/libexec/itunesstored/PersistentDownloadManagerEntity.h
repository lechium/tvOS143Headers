//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSSQLiteEntity.h>

@interface PersistentDownloadManagerEntity : SSSQLiteEntity
{
}

+ (void)initialize;	// IMP=0x00000001000d23f0
+ (id)foreignKeyColumnForTable:(id)arg1;	// IMP=0x00000001000d23dc
+ (id)foreignDatabaseTablesToDelete;	// IMP=0x00000001000d23d0
+ (id)databaseTable;	// IMP=0x00000001000d23c4
- (void)performNewsstandMigration1InDatabase:(id)arg1;	// IMP=0x00000001000d1e50
- (id)finishPersistentDownloadsWithDownloadIDs:(id)arg1;	// IMP=0x00000001000d1634

@end

