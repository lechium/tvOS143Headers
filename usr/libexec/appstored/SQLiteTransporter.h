//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SQLiteConnection;

@interface SQLiteTransporter : NSObject
{
    SQLiteConnection *_connection;	// 8 = 0x8
    NSString *_databasePath;	// 16 = 0x10
}

+ (void)_removeKnownDatabasePath:(id)arg1;	// IMP=0x0000000100193740
+ (_Bool)_isKnownDatabasePath:(id)arg1;	// IMP=0x0000000100193534
+ (void)_addKnownDatabasePath:(id)arg1;	// IMP=0x00000001001933dc
- (void).cxx_destruct;	// IMP=0x0000000100193860
- (void)performTransportationUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000100193320
- (_Bool)endTransporationAndRemoveDatabase;	// IMP=0x0000000100193270
- (_Bool)canBeginTransportation;	// IMP=0x00000001001930b4
- (id)initWithDatabasePath:(id)arg1;	// IMP=0x000000010019303c

@end
