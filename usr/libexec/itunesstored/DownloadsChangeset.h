//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableOrderedSet, NSMutableSet, NSOrderedSet, NSSet, NSString;

@interface DownloadsChangeset : NSObject <NSCopying>
{
    NSMutableArray *_SSAppWakeRequests;	// 8 = 0x8
    NSMutableArray *_applicationWorkspaceChanges;	// 16 = 0x10
    NSMutableSet *_canceledAppDataRestoreIDs;	// 24 = 0x18
    NSMutableSet *_canceledIPodLibraryDownloadIDs;	// 32 = 0x20
    NSMutableSet *_changedDownloadKinds;	// 40 = 0x28
    NSDictionary *_changedDownloadProperties;	// 48 = 0x30
    NSDictionary *_changedExternalDownloadProperties;	// 56 = 0x38
    NSMutableArray *_cookies;	// 64 = 0x40
    NSMutableArray *_deletedHTTPCookies;	// 72 = 0x48
    NSMutableSet *_deletedIPodLibraryDownloadIDs;	// 80 = 0x50
    long long _downloadChangeTypes;	// 88 = 0x58
    NSMutableSet *_finishedDownloadKinds;	// 96 = 0x60
    NSMutableArray *_ipodLibraryItems;	// 104 = 0x68
    NSMutableOrderedSet *_pipelineAdditions;	// 112 = 0x70
    NSMutableOrderedSet *_pipelineRestarts;	// 120 = 0x78
    NSMutableOrderedSet *_policyChangedDownloadIDs;	// 128 = 0x80
    NSMutableOrderedSet *_removedDownloadIDs;	// 136 = 0x88
    NSMutableOrderedSet *_removedPersistentDownloadIDs;	// 144 = 0x90
    NSMutableOrderedSet *_restorableDownloadIDs;	// 152 = 0x98
    NSString *_restoreReason;	// 160 = 0xa0
    NSMutableSet *_statusChangedDownloadIDs;	// 168 = 0xa8
    NSMutableSet *_updatedDownloadIDs;	// 176 = 0xb0
}

@property(readonly, copy, nonatomic) NSSet *updatedDownloadIDs; // @synthesize updatedDownloadIDs=_updatedDownloadIDs;
@property(readonly, copy, nonatomic) NSSet *statusChangedDownloadIDs; // @synthesize statusChangedDownloadIDs=_statusChangedDownloadIDs;
@property(copy, nonatomic) NSString *restoreReason; // @synthesize restoreReason=_restoreReason;
@property(readonly, copy, nonatomic) NSOrderedSet *restorableDownloadIDs; // @synthesize restorableDownloadIDs=_restorableDownloadIDs;
@property(readonly, copy, nonatomic) NSOrderedSet *removedPersistentDownloadIDs; // @synthesize removedPersistentDownloadIDs=_removedPersistentDownloadIDs;
@property(readonly, copy, nonatomic) NSOrderedSet *removedDownloadIDs; // @synthesize removedDownloadIDs=_removedDownloadIDs;
@property(readonly, copy, nonatomic) NSOrderedSet *policyChangedDownloadIDs; // @synthesize policyChangedDownloadIDs=_policyChangedDownloadIDs;
@property(readonly, copy, nonatomic) NSOrderedSet *pipelineRestarts; // @synthesize pipelineRestarts=_pipelineRestarts;
@property(readonly, copy, nonatomic) NSOrderedSet *pipelineAdditions; // @synthesize pipelineAdditions=_pipelineAdditions;
@property(readonly, copy, nonatomic) NSArray *IPodLibraryItems; // @synthesize IPodLibraryItems=_ipodLibraryItems;
@property(readonly, copy, nonatomic) NSArray *HTTPCookies; // @synthesize HTTPCookies=_cookies;
@property(readonly, copy, nonatomic) NSSet *finishedDownloadKinds; // @synthesize finishedDownloadKinds=_finishedDownloadKinds;
@property(readonly, nonatomic) long long downloadChangeTypes; // @synthesize downloadChangeTypes=_downloadChangeTypes;
@property(readonly, copy, nonatomic) NSSet *deletedIPodLibraryDownloadIDs; // @synthesize deletedIPodLibraryDownloadIDs=_deletedIPodLibraryDownloadIDs;
@property(readonly, copy, nonatomic) NSArray *deletedHTTPCookies; // @synthesize deletedHTTPCookies=_deletedHTTPCookies;
@property(copy, nonatomic) NSDictionary *changedExternalDownloadProperties; // @synthesize changedExternalDownloadProperties=_changedExternalDownloadProperties;
@property(copy, nonatomic) NSDictionary *changedDownloadProperties; // @synthesize changedDownloadProperties=_changedDownloadProperties;
@property(readonly, copy, nonatomic) NSSet *changedDownloadKinds; // @synthesize changedDownloadKinds=_changedDownloadKinds;
@property(readonly, copy, nonatomic) NSSet *canceledIPodLibraryDownloadIDs; // @synthesize canceledIPodLibraryDownloadIDs=_canceledIPodLibraryDownloadIDs;
@property(readonly, copy, nonatomic) NSSet *canceledAppDataRestoreIDs; // @synthesize canceledAppDataRestoreIDs=_canceledAppDataRestoreIDs;
@property(readonly, copy, nonatomic) NSArray *applicationWorkspaceChanges; // @synthesize applicationWorkspaceChanges=_applicationWorkspaceChanges;
@property(readonly, copy, nonatomic) NSArray *SSAppWakeRequests; // @synthesize SSAppWakeRequests=_SSAppWakeRequests;
- (id)_policyChangedDownloadIDs;	// IMP=0x000000010000dbd0
- (id)_finishedDownloadKinds;	// IMP=0x000000010000db9c
- (id)_deletedIPodLibraryDownloadIDs;	// IMP=0x000000010000db68
- (id)_deletedHTTPCookies;	// IMP=0x000000010000db34
- (id)_cookies;	// IMP=0x000000010000db00
- (id)_canceledIPodLibraryDownloadIDs;	// IMP=0x000000010000dacc
- (id)_canceledAppDataRestoreIDs;	// IMP=0x000000010000da98
- (id)_applicationWorkspaceChanges;	// IMP=0x000000010000da64
- (id)_SSAppWakeRequests;	// IMP=0x000000010000da30
- (void)_addApplicationWorkspaceChangeWithHandle:(id)arg1 changeType:(long long)arg2;	// IMP=0x000000010000d9b8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000d7a4
- (void)unionChangeset:(id)arg1;	// IMP=0x000000010000d33c
- (void)restartDownloadsInPipelineWithIDs:(id)arg1;	// IMP=0x000000010000d32c
- (void)removeDownloadFromPipelineWithID:(long long)arg1;	// IMP=0x000000010000d2d4
- (void)addUpdatedDownloadID:(long long)arg1;	// IMP=0x000000010000d27c
- (void)addStatusChangedDownloadID:(long long)arg1;	// IMP=0x000000010000d224
- (void)addRetryAppWithHandle:(id)arg1;	// IMP=0x000000010000d214
- (void)addRestorableDownloadID:(long long)arg1;	// IMP=0x000000010000d1bc
- (void)addRemovedPersistentDownloadID:(long long)arg1;	// IMP=0x000000010000d164
- (void)addRemovedDownloadID:(long long)arg1;	// IMP=0x000000010000d10c
- (void)addPolicyChangedDownloadID:(long long)arg1;	// IMP=0x000000010000d0a8
- (void)addIPodLibraryItem:(id)arg1;	// IMP=0x000000010000d098
- (void)addHTTPCookie:(id)arg1;	// IMP=0x000000010000d064
- (void)addFinishedDownloadKind:(id)arg1;	// IMP=0x000000010000d028
- (void)addFinishedAppWithHandle:(id)arg1;	// IMP=0x000000010000d018
- (void)addFailedAppWithHandle:(id)arg1;	// IMP=0x000000010000d008
- (void)addDownloadsToPipelineWithIDs:(id)arg1;	// IMP=0x000000010000cff8
- (void)addDownloadToPipelineWithID:(long long)arg1;	// IMP=0x000000010000cfa0
- (void)addDownloadKind:(id)arg1;	// IMP=0x000000010000cf88
- (void)addDownloadChangeTypes:(long long)arg1;	// IMP=0x000000010000cf78
- (void)addDeletedIPodLibraryDownloadID:(long long)arg1;	// IMP=0x000000010000cf14
- (void)addDeletedHTTPCookies:(id)arg1;	// IMP=0x000000010000cee0
- (void)addCanceledIPodLibraryDownloadID:(long long)arg1;	// IMP=0x000000010000ce7c
- (void)addCanceledAppDataRestoreID:(id)arg1;	// IMP=0x000000010000ce48
- (void)addCanceledAppWithHandle:(id)arg1;	// IMP=0x000000010000ce38
- (void)addAppPlaceholderUpdateWithHandle:(id)arg1;	// IMP=0x000000010000ce28
- (void)addAppPlaceholderWithHandle:(id)arg1;	// IMP=0x000000010000ce18
- (void)addApplicationWorkspaceChange:(id)arg1;	// IMP=0x000000010000cde4
- (void)addSSAppWakeRequest:(id)arg1;	// IMP=0x000000010000cdb0
- (void)dealloc;	// IMP=0x000000010000ccc8
- (id)init;	// IMP=0x000000010000cc18
- (id)_initDownloadsChangeset;	// IMP=0x000000010000cbe4

@end

