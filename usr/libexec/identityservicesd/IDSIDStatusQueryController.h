//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IDSPeerIDManager, IMTimer, NSDate, NSMutableDictionary, NSRecursiveLock;
@protocol IDSIDStatusDependencyProvider, IMUserDefaults;

@interface IDSIDStatusQueryController : NSObject
{
    IMTimer *_purgeTimer;	// 8 = 0x8
    NSRecursiveLock *_lock;	// 16 = 0x10
    NSMutableDictionary *_idStatusCache;	// 24 = 0x18
    NSMutableDictionary *_completionBlocks;	// 32 = 0x20
    NSDate *_startQueryDate;	// 40 = 0x28
    CDUnknownBlockType _purgeCancelBlock;	// 48 = 0x30
    CDUnknownBlockType _purgeEnqueueBlock;	// 56 = 0x38
    _Bool _loaded;	// 64 = 0x40
    int _numQueriesThisHour;	// 68 = 0x44
    _Bool _allowProxyQueries;	// 72 = 0x48
    IDSPeerIDManager *_peerIDManager;	// 80 = 0x50
    id <IMUserDefaults> _userDefaults;	// 88 = 0x58
    id <IDSIDStatusDependencyProvider> _dependencyProvider;	// 96 = 0x60
}

+ (id)sharedInstance;	// IMP=0x00000001003c1930
- (void).cxx_destruct;	// IMP=0x00000001003d16cc
@property(nonatomic) _Bool allowProxyQueries; // @synthesize allowProxyQueries=_allowProxyQueries;
@property(retain, nonatomic) id <IDSIDStatusDependencyProvider> dependencyProvider; // @synthesize dependencyProvider=_dependencyProvider;
@property(retain, nonatomic) id <IMUserDefaults> userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) IDSPeerIDManager *peerIDManager; // @synthesize peerIDManager=_peerIDManager;
- (void)_saveCache;	// IMP=0x00000001003d11ec
- (void)_loadCache;	// IMP=0x00000001003d080c
- (void)_pruneExpiredStatusUnknownEntries;	// IMP=0x00000001003cf810
- (void)_loadIfNeeded;	// IMP=0x00000001003cf780
- (void)_setPurgeTimer;	// IMP=0x00000001003cf734
- (void)_flush;	// IMP=0x00000001003cf384
- (void)clearCache;	// IMP=0x00000001003cedfc
- (void)removeCompletionBlockForUniqueIdentifier:(id)arg1;	// IMP=0x00000001003ce9d4
- (void)addCompletionBlock:(CDUnknownBlockType)arg1 forUniqueIdentifier:(id)arg2;	// IMP=0x00000001003ce318
- (void)_sendIDStatusChanges:(id)arg1 forService:(id)arg2 URI:(id)arg3 success:(_Bool)arg4 error:(id)arg5;	// IMP=0x00000001003cdc40
- (void)remoteDevicesForIDs:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 lightQuery:(_Bool)arg5 allowQuery:(_Bool)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000001003cd0b0
- (id)currentCacheForService:(id)arg1;	// IMP=0x00000001003cccac
- (id)currentCache;	// IMP=0x00000001003cc81c
- (unsigned int)cachedIDStatusForID:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 respectExpiry:(_Bool)arg4;	// IMP=0x00000001003cbb58
- (unsigned int)cachedIDStatusForID:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3;	// IMP=0x00000001003cba78
- (void)setCachedIDStatus:(unsigned int)arg1 ForID:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4;	// IMP=0x00000001003cb16c
- (void)requestIDStatusForID:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 lightQuery:(_Bool)arg5 allowQuery:(_Bool)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000001003cafc0
- (void)requestIDStatusForIDs:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 lightQuery:(_Bool)arg5 allowQuery:(_Bool)arg6 forceQuery:(_Bool)arg7 completionBlock:(CDUnknownBlockType)arg8;	// IMP=0x00000001003ca6a8
- (void)_lookupIDStatusForURIs:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 lightQuery:(_Bool)arg5 allowQuery:(_Bool)arg6 forceQuery:(_Bool)arg7 completionBlock:(CDUnknownBlockType)arg8;	// IMP=0x00000001003c6d48
- (_Bool)hasValidStatusForURI:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3;	// IMP=0x00000001003c6808
- (id)_negativeTTLForURI:(id)arg1 fromService:(id)arg2;	// IMP=0x00000001003c663c
- (id)_validExpiryForURI:(id)arg1 fromService:(id)arg2;	// IMP=0x00000001003c6470
- (id)_lookupDateForURI:(id)arg1 fromService:(id)arg2;	// IMP=0x00000001003c62a4
- (id)_cachedResultsForURIs:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3;	// IMP=0x00000001003c5f88
- (void)noteIncomingID:(id)arg1 fromService:(id)arg2;	// IMP=0x00000001003c566c
- (void)removeCachedEntriesForService:(id)arg1;	// IMP=0x00000001003c53d8
- (unsigned int)_IDStatusForURI:(id)arg1 fromService:(id)arg2;	// IMP=0x00000001003c46c8
- (void)_updateCacheWithStatusUpdates:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 success:(_Bool)arg4 hadError:(_Bool)arg5 negativeCacheHints:(id)arg6;	// IMP=0x00000001003c2fa0
- (void)dealloc;	// IMP=0x00000001003c2f0c
- (id)init;	// IMP=0x00000001003c2de0
- (id)initWithShouldAllowProxyQueries:(_Bool)arg1 peerIDManager:(id)arg2 userDefaults:(id)arg3 statusDepencencyProvider:(id)arg4;	// IMP=0x00000001003c1adc

@end
