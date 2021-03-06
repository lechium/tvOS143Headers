//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteMemoryEntity.h"

#import "NSCopying-Protocol.h"

@class NSString;

@interface AppMetadata : SQLiteMemoryEntity <NSCopying>
{
}

+ (Class)databaseEntityClass;	// IMP=0x000000010027cd1c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010027cce8
@property(readonly, nonatomic) NSString *vendorName;
- (id)timestamp;	// IMP=0x000000010027cc34
- (id)storefront;	// IMP=0x000000010027cc1c
- (id)shortVersion;	// IMP=0x000000010027cc04
- (id)itemName;	// IMP=0x000000010027cbec
- (id)itemID;	// IMP=0x000000010027cbd4
- (_Bool)isClip;	// IMP=0x000000010027cb7c
- (_Bool)isBeta;	// IMP=0x000000010027cb24
- (id)externalMapping;	// IMP=0x000000010027ca40
- (id)evid;	// IMP=0x000000010027ca28
- (id)deviceVendorID;	// IMP=0x000000010027ca10
- (id)cohort;	// IMP=0x000000010027c9f8
- (id)bundleVersion;	// IMP=0x000000010027c9e0
- (id)bundleID;	// IMP=0x000000010027c9c8
- (id)initWithApplicationProxy:(id)arg1 context:(id)arg2;	// IMP=0x000000010027c45c
- (id)init;	// IMP=0x000000010027c428

@end

