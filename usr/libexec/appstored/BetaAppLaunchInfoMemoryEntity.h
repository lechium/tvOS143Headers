//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SQLiteMemoryEntity.h"

@class ASDBetaAppDisplayNames;

@interface BetaAppLaunchInfoMemoryEntity : SQLiteMemoryEntity
{
    ASDBetaAppDisplayNames *_displayNames;	// 8 = 0x8
}

+ (id)defaultProperties;	// IMP=0x00000001001c532c
+ (Class)databaseEntityClass;	// IMP=0x00000001001c5320
- (void).cxx_destruct;	// IMP=0x00000001001c545c
@property(readonly, nonatomic) ASDBetaAppDisplayNames *displayNames; // @synthesize displayNames=_displayNames;

@end
