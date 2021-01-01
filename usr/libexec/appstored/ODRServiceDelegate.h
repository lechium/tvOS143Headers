//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSXPCListenerDelegate-Protocol.h"

@class NSString;

@interface ODRServiceDelegate : NSObject <NSXPCListenerDelegate>
{
    NSString *_libraryPath;	// 8 = 0x8
    NSString *_databasePath;	// 16 = 0x10
    NSString *_legacyDatabasePath;	// 24 = 0x18
    NSString *_assetPacksPath;	// 32 = 0x20
}

+ (id)sharedDelegate;	// IMP=0x000000010026c44c
- (void).cxx_destruct;	// IMP=0x000000010026d2c8
@property(retain, nonatomic) NSString *assetPacksPath; // @synthesize assetPacksPath=_assetPacksPath;
@property(retain, nonatomic) NSString *legacyDatabasePath; // @synthesize legacyDatabasePath=_legacyDatabasePath;
@property(retain, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(retain, nonatomic) NSString *libraryPath; // @synthesize libraryPath=_libraryPath;
- (void)syncApplicationTask:(CDUnknownBlockType)arg1;	// IMP=0x000000010026d198
- (id)_applicationTaskLock;	// IMP=0x000000010026d12c
- (_Bool)isAssetPacksDirectoryEmpty;	// IMP=0x000000010026d044
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000010026cf34
- (_Bool)ensureAllLibraryPathsExist:(_Bool *)arg1;	// IMP=0x000000010026ca44
- (id)baseURLForODRContent;	// IMP=0x000000010026c864
- (id)sentinelFileURL;	// IMP=0x000000010026c7b8
- (id)systemContainerURL;	// IMP=0x000000010026c650
@property(readonly, nonatomic) _Bool isDeviceInEduMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

