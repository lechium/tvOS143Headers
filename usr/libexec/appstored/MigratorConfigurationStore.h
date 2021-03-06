//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MigratorConfigurationStore : NSObject
{
    NSMutableDictionary *_configuration;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010024ad98
- (id)_writeConfigurationToUserDefaultsRepresentation:(id)arg1;	// IMP=0x000000010024ac80
- (id)_readConfigurationFromUserDefaultsRepresentation:(id)arg1;	// IMP=0x000000010024aadc
- (void)writeConfiguration:(id)arg1;	// IMP=0x000000010024aa6c
- (void)willBeginMigratorType:(id)arg1;	// IMP=0x000000010024aa10
- (void)synchronize:(_Bool)arg1;	// IMP=0x000000010024a844
- (_Bool)hasMigrations;	// IMP=0x000000010024a81c
- (id)migrationsLeft;	// IMP=0x000000010024a6b0
- (void)enumerateUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000010024a5a4
- (void)didCompleteMigratorType:(id)arg1;	// IMP=0x000000010024a568
- (void)clearMigrations;	// IMP=0x000000010024a554
- (id)init;	// IMP=0x000000010024a488

@end

