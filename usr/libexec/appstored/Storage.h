//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface Storage : NSObject
{
}

+ (id)_whitelistForCachedDataPath;	// IMP=0x000000010016104c
+ (id)_rootDownloadPath;	// IMP=0x0000000100160fa0
+ (void)_enforceWhitelist:(id)arg1 forPath:(id)arg2;	// IMP=0x0000000100160aec
+ (id)_containerURL;	// IMP=0x0000000100160638
+ (id)_downloadPathForID:(id)arg1;	// IMP=0x00000001001605b8
+ (id)_createDirectoryInSearchPath:(unsigned long long)arg1 domain:(unsigned long long)arg2 withPathComponent:(id)arg3;	// IMP=0x0000000100160474
+ (id)_createDirectoryAtBaseURL:(id)arg1 withPathComponent:(id)arg2;	// IMP=0x0000000100160344
+ (id)persistedDataPathForDomain:(id)arg1;	// IMP=0x00000001001602b8
+ (void)enforceWhitelistForDomain:(id)arg1;	// IMP=0x000000010016021c
+ (id)downloadPathForID:(id)arg1;	// IMP=0x0000000100160058
+ (void)cleanupDownloadPathsNotMatchingIDs:(id)arg1;	// IMP=0x000000010015fce0
+ (void)cleanupDownloadPathForID:(id)arg1;	// IMP=0x000000010015fb6c
+ (id)cachedDataPathForDomain:(id)arg1;	// IMP=0x000000010015fb0c
+ (id)odrScratchPath;	// IMP=0x000000010015fab0
+ (id)scratchPath;	// IMP=0x000000010015f934
+ (id)libraryPath;	// IMP=0x000000010015f7e0

@end

