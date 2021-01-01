//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MSDPreferencesFile : NSObject
{
    NSMutableDictionary *_cache;	// 8 = 0x8
}

+ (id)preferencesFileUrl;	// IMP=0x0000000100023004
+ (_Bool)preferencesFileExists;	// IMP=0x000000010002244c
+ (id)preferencesFilePath;	// IMP=0x00000001000223f0
+ (id)sharedInstance;	// IMP=0x000000010002232c
- (void).cxx_destruct;	// IMP=0x00000001000230fc
@property(retain) NSMutableDictionary *cache; // @synthesize cache=_cache;
- (void)raiseInvalidPropertyListObjectExceptionForObject:(id)arg1;	// IMP=0x0000000100022eb8
- (_Bool)saveCache;	// IMP=0x0000000100022d30
- (void)populateCache;	// IMP=0x0000000100022b2c
- (_Bool)removeObjectsForKeys:(id)arg1;	// IMP=0x00000001000229d8
- (_Bool)removeObjectForKey:(id)arg1;	// IMP=0x0000000100022884
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000100022678
- (id)objectForKey:(id)arg1;	// IMP=0x0000000100022530
- (void)reload;	// IMP=0x00000001000224d8
- (id)init;	// IMP=0x0000000100022398

@end

