//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteMemoryEntity.h"

@class NSString;

@interface ODRTag : SQLiteMemoryEntity
{
}

+ (id)defaultProperties;	// IMP=0x00000001001851e0
+ (Class)databaseEntityClass;	// IMP=0x00000001001851d4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100185450
@property(nonatomic) double preservationPriority;
@property(nonatomic, getter=isAlwaysPreserved) _Bool alwaysPreserved;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSString *bundleKey;
@property(readonly, nonatomic) NSString *bundleID;

@end
