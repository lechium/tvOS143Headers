//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSSQLiteDatabase;

@interface PurchaseActionsDatabase : NSObject
{
    SSSQLiteDatabase *_database;	// 8 = 0x8
}

+ (_Bool)_setupDatabase:(id)arg1;	// IMP=0x00000001000cdb2c
- (void).cxx_destruct;	// IMP=0x00000001000cdc48
- (void)incrementPingbackRetryCountForApp:(id)arg1;	// IMP=0x00000001000cd7a0
- (void)removeNonPendingInstallAttributionPingbacksBeforeDate:(id)arg1;	// IMP=0x00000001000cd408
- (void)removeInstallAttributionPingbackForApp:(id)arg1;	// IMP=0x00000001000cd07c
- (void)getPendingInstallAttributionPingbacksWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ccb28
- (void)setPingbackPendingForApp:(id)arg1;	// IMP=0x00000001000cc79c
- (void)getInstallAttributionPingbackForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000cc068
- (void)insertInstallAttributionPingback:(id)arg1;	// IMP=0x00000001000cbab8
- (void)removeInstallAttributionParamsBeforeDate:(id)arg1;	// IMP=0x00000001000cb720
- (void)removeInstallAttributionParamsForApp:(id)arg1;	// IMP=0x00000001000cb394
- (void)getInstallAttributionParamsForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000cac10
- (void)insertInstallAttributionParams:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000ca68c
- (void)resetTimestampsForApp:(id)arg1;	// IMP=0x00000001000c9cf0
- (void)insertPurchaseIntent:(id)arg1;	// IMP=0x00000001000c9868
- (void)getPurchaseIntentsForApp:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000001000c92b4
- (void)deletePurchaseIntentsForApp:(id)arg1;	// IMP=0x00000001000c9080
- (void)readUsingTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c8f74
- (void)readAsyncUsingTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c8ec8
- (void)modifyUsingTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000c8db8
- (id)initWithDatabaseURL:(id)arg1 readOnly:(_Bool)arg2;	// IMP=0x00000001000c8b50
- (id)init;	// IMP=0x00000001000c8ab0

@end

