//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ScratchManager : NSObject
{
}

+ (id)_directoryPathForDownloadID:(long long)arg1 createIfNeeded:(_Bool)arg2 atBasePath:(id)arg3;	// IMP=0x000000010011ccb4
+ (id)_containerDirectoryPath;	// IMP=0x000000010011c74c
+ (id)_baseDirectoryPath;	// IMP=0x000000010011c670
+ (id)directoryPathForDownloadID:(long long)arg1 kind:(id)arg2 createIfNeeded:(_Bool)arg3;	// IMP=0x000000010011c55c
+ (id)directoryPathForDownloadID:(long long)arg1 assetID:(long long)arg2 kind:(id)arg3 createIfNeeded:(_Bool)arg4;	// IMP=0x000000010011c4b0
+ (id)directoryPathForDownloadID:(long long)arg1 assetID:(long long)arg2 createIfNeeded:(_Bool)arg3;	// IMP=0x000000010011c49c
+ (id)containerDirectoryPath;	// IMP=0x000000010011c434
+ (id)baseDirectoryPath;	// IMP=0x000000010011c3cc

@end
