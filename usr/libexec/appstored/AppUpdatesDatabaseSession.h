//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "SQLiteDatabaseSession-Protocol.h"

@class NSString, SQLiteConnection;

@interface AppUpdatesDatabaseSession : NSObject <SQLiteDatabaseSession>
{
    SQLiteConnection *_connection;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000001000ceef4
@property(readonly) SQLiteConnection *connection; // @synthesize connection=_connection;
- (void)_enumerateUpdatesMatchingPredicate:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000001000cea70
- (id)updateForBundleID:(id)arg1;	// IMP=0x00000001000ce918
- (id)updateBuyParamsForBundleID:(id)arg1;	// IMP=0x00000001000ce748
- (void)enumerateUpdatesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000001000ce734
- (id)initWithConnection:(id)arg1;	// IMP=0x00000001000ce6bc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

