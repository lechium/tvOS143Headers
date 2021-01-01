//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UARPBuildManifest : NSObject
{
    NSArray *_bundleIdentities;	// 8 = 0x8
}

@property(readonly) NSArray *bundleIdentities; // @synthesize bundleIdentities=_bundleIdentities;
- (id)generateChipEntries:(id)arg1;	// IMP=0x000000010002baf8
- (id)createChipEntryFromChipEntryDict:(id)arg1 chipName:(id)arg2;	// IMP=0x000000010002b6b4
- (id)createManifestEntryForKey:(id)arg1 dictionary:(id)arg2;	// IMP=0x000000010002b614
- (id)createNumberTupleForKey:(id)arg1 object:(id)arg2;	// IMP=0x000000010002b594
- (id)numberForObject:(id)arg1;	// IMP=0x000000010002b4d8
- (id)createBundleIdentity:(id)arg1;	// IMP=0x000000010002afec
- (id)chipNameForKey:(id)arg1;	// IMP=0x000000010002af68
- (_Bool)parseBuildManifest:(id)arg1;	// IMP=0x000000010002ad90
- (_Bool)isChipEntryKey:(id)arg1;	// IMP=0x000000010002ad2c
- (id)initWithPlist:(id)arg1;	// IMP=0x000000010002aca0

@end
