/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOPListStateCapturing.h>
#import <libobjc.A.dylib/GEOTileServerProxyDelegate.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/GEOExperimentConfigurationObserver.h>

@protocol OS_dispatch_queue, GEOTileLoaderInternalDelegate;
@class geo_isolater, NSObject, NSMutableSet, GEOTileServerProxy, NSMutableArray, GEOTileLoaderConfiguration, GEOTileLoaderUsage, GEOTileLoaderInternal, NSHashTable, NSString;

@interface GEOTileLoader : NSObject <GEOPListStateCapturing, GEOTileServerProxyDelegate, GEOResourceManifestTileGroupObserver, GEOExperimentConfigurationObserver> {

	geo_isolater* _isolater;
	NSObject*<OS_dispatch_queue> _loadQ;
	NSMutableSet* _openers;
	geo_isolater* _openersIsolater;
	GEOCoarseLocationLatLng _sortPoint;
	GEOTileServerProxy* _proxy;
	NSMutableArray* _tileDecoders;
	geo_isolater* _tileDecodersIsolater;
	BOOL _networkActive;
	id<GEOTileLoaderInternalDelegate> _internalDelegate;
	NSObject*<OS_dispatch_queue> _internalDelegateQ;
	GEOTileLoaderConfiguration* _config;
	int _rollingBatchId;
	GEOTileLoaderUsage* _usage;
	unsigned long long _stateCaptureHandle;
	BOOL _coalesceTimerEnabled;
	GEOTileLoaderInternal* _internal;
	NSHashTable* _observers;
	geo_isolater* _observersIsolater;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setCoalesceTimerEnabled:,nonatomic) BOOL _coalesceTimerEnabled;              //@synthesize coalesceTimerEnabled=_coalesceTimerEnabled - In the implementation block
@property (nonatomic,readonly) int memoryHits; 
@property (nonatomic,readonly) int diskHits; 
@property (nonatomic,readonly) int networkHits; 
+(void)setServerProxyClass:(Class)arg1 ;
+(void)setMemoryCacheCountLimit:(unsigned long long)arg1 ;
+(id)diskCacheLocation;
+(void)setDiskCacheLocation:(id)arg1 ;
+(id)modernLoaderForResourceManifestConfiguration:(id)arg1 locale:(id)arg2 ;
+(id)modernLoader;
+(id)singletonConfiguration;
+(id)modernLoaderForTileGroupIdentifier:(unsigned)arg1 locale:(id)arg2 ;
+(id)tileLoaderWithConfiguration:(id)arg1 serverProxy:(id)arg2 ;
+(void)useRemoteLoader;
+(void)useLocalLoader;
+(void)setMemoryCacheTotalCostLimit:(unsigned long long)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(id)proxy;
-(id)initWithConfiguration:(id)arg1 serverProxy:(id)arg2 ;
-(void)_tileEditionChanged:(id)arg1 ;
-(void)_localeChanged:(id)arg1 ;
-(int)memoryHits;
-(int)diskHits;
-(int)networkHits;
-(void)_cancel:(_list_iterator<LoadItem, void *>*)arg1 err:(id)arg2 ;
-(BOOL)_cancelIfNeeded:(_list_iterator<LoadItem, void *>*)arg1 ;
-(void)_notifyObserversOfFailure:(const GEOTileKey*)arg1 error:(id)arg2 options:(unsigned long long)arg3 ;
-(id)_tileDecoderForTileKey:(const GEOTileKey*)arg1 quickly:(BOOL*)arg2 ;
-(void)_loadedTileForLocalKey:(GEOTileKey)arg1 preliminary:(BOOL)arg2 quickly:(BOOL)arg3 tileDecoder:(id)arg4 data:(id)arg5 disburseTile:(/*^block*/id)arg6 ;
-(void)_notifyObserversOfSuccess:(const GEOTileKey*)arg1 source:(long long)arg2 options:(unsigned long long)arg3 ;
-(void)loadKey:(const GEOTileKey*)arg1 priority:(unsigned)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned)arg6 callbackQ:(id)arg7 beginNetwork:(/*^block*/id)arg8 callback:(/*^block*/id)arg9 ;
-(void)loadKey:(const GEOTileKey*)arg1 priority:(unsigned)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned)arg6 signpostID:(unsigned long long)arg7 auditToken:(id)arg8 callbackQ:(id)arg9 beginNetwork:(/*^block*/id)arg10 callback:(/*^block*/id)arg11 ;
-(void)loadKey:(const GEOTileKey*)arg1 additionalInfo:(const GEOTileLoaderAdditionalInfo*)arg2 priority:(unsigned)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned)arg7 callbackQ:(id)arg8 beginNetwork:(/*^block*/id)arg9 callback:(/*^block*/id)arg10 ;
-(void)loadKey:(const GEOTileKey*)arg1 priority:(unsigned)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned)arg6 signpostID:(unsigned long long)arg7 auditToken:(id)arg8 createTime:(double)arg9 callbackQ:(id)arg10 beginNetwork:(/*^block*/id)arg11 callback:(/*^block*/id)arg12 ;
-(void)loadKey:(const GEOTileKey*)arg1 additionalInfo:(const GEOTileLoaderAdditionalInfo*)arg2 priority:(unsigned)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned)arg7 signpostID:(unsigned long long)arg8 auditToken:(id)arg9 createTime:(double)arg10 callbackQ:(id)arg11 beginNetwork:(/*^block*/id)arg12 callback:(/*^block*/id)arg13 ;
-(void)loadKey:(const GEOTileKey*)arg1 additionalInfo:(const GEOTileLoaderAdditionalInfo*)arg2 priority:(unsigned)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned)arg7 signpostID:(unsigned long long)arg8 callbackQ:(id)arg9 beginNetwork:(/*^block*/id)arg10 callback:(/*^block*/id)arg11 ;
-(void)loadKey:(const GEOTileKey*)arg1 additionalInfo:(const GEOTileLoaderAdditionalInfo*)arg2 priority:(unsigned)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned)arg7 signpostID:(unsigned long long)arg8 createTime:(double)arg9 callbackQ:(id)arg10 beginNetwork:(/*^block*/id)arg11 callback:(/*^block*/id)arg12 ;
-(void)loadKey:(const GEOTileKey*)arg1 additionalInfo:(const GEOTileLoaderAdditionalInfo*)arg2 priority:(unsigned)arg3 forClient:(id)arg4 proxyClient:(id)arg5 options:(unsigned long long)arg6 reason:(unsigned char)arg7 qos:(unsigned)arg8 signpostID:(unsigned long long)arg9 createTime:(double)arg10 callbackQ:(id)arg11 beginNetwork:(/*^block*/id)arg12 callback:(/*^block*/id)arg13 ;
-(void)_requestOnlineTiles;
-(void)_cancelAllForClientOnLoadQueue:(id)arg1 ;
-(unsigned long long)shrinkDiskCacheToSizeSync:(unsigned long long)arg1 ;
-(unsigned long long)calculateFreeableSizeSync;
-(void)clearAllCaches;
-(void)reportCorruptTile:(const GEOTileKey*)arg1 ;
-(void)_loadedTile:(id)arg1 forKey:(const GEOTileKey*)arg2 info:(id)arg3 ;
-(void)loadKey:(const GEOTileKey*)arg1 priority:(unsigned)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 callbackQ:(id)arg6 beginNetwork:(/*^block*/id)arg7 callback:(/*^block*/id)arg8 ;
-(id)_findInCache:(const GEOTileKey*)arg1 ;
-(void)proxy:(id)arg1 loadedTile:(id)arg2 forKey:(const GEOTileKey*)arg3 info:(id)arg4 ;
-(void)proxy:(id)arg1 failedToLoadTiles:(id)arg2 error:(id)arg3 ;
-(void)proxy:(id)arg1 failedToLoadAllPendingTilesWithError:(id)arg2 ;
-(void)proxy:(id)arg1 willGoToNetworkForTiles:(id)arg2 ;
-(void)proxy:(id)arg1 canShrinkDiskCacheByAmount:(unsigned long long)arg2 ;
-(void)proxyDidDeleteExternalTileData:(id)arg1 ;
-(void)proxyDidDownloadRegionalResources:(id)arg1 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)experimentConfigurationDidChange:(id)arg1 ;
-(id)descriptionDictionaryRepresentation;
-(void)openForClient:(id)arg1 ;
-(void)closeForClient:(id)arg1 ;
-(BOOL)reprioritizeKey:(const GEOTileKey*)arg1 forClient:(id)arg2 newPriority:(unsigned)arg3 ;
-(void)loadKey:(const GEOTileKey*)arg1 priority:(unsigned)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 auditToken:(id)arg6 callbackQ:(id)arg7 beginNetwork:(/*^block*/id)arg8 callback:(/*^block*/id)arg9 ;
-(void)loadKey:(const GEOTileKey*)arg1 priority:(unsigned)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned)arg6 signpostID:(unsigned long long)arg7 callbackQ:(id)arg8 beginNetwork:(/*^block*/id)arg9 callback:(/*^block*/id)arg10 ;
-(void)loadKey:(const GEOTileKey*)arg1 priority:(unsigned)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 reason:(unsigned char)arg5 qos:(unsigned)arg6 signpostID:(unsigned long long)arg7 createTime:(double)arg8 callbackQ:(id)arg9 beginNetwork:(/*^block*/id)arg10 callback:(/*^block*/id)arg11 ;
-(void)loadKey:(const GEOTileKey*)arg1 additionalInfo:(const GEOTileLoaderAdditionalInfo*)arg2 priority:(unsigned)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 callbackQ:(id)arg7 beginNetwork:(/*^block*/id)arg8 callback:(/*^block*/id)arg9 ;
-(void)loadKey:(const GEOTileKey*)arg1 additionalInfo:(const GEOTileLoaderAdditionalInfo*)arg2 priority:(unsigned)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 signpostID:(unsigned long long)arg7 callbackQ:(id)arg8 beginNetwork:(/*^block*/id)arg9 callback:(/*^block*/id)arg10 ;
-(void)loadKey:(const GEOTileKey*)arg1 additionalInfo:(const GEOTileLoaderAdditionalInfo*)arg2 priority:(unsigned)arg3 forClient:(id)arg4 options:(unsigned long long)arg5 reason:(unsigned char)arg6 qos:(unsigned)arg7 signpostID:(unsigned long long)arg8 auditToken:(id)arg9 callbackQ:(id)arg10 beginNetwork:(/*^block*/id)arg11 callback:(/*^block*/id)arg12 ;
-(void)_timerFired;
-(void)_issuePendingRequests;
-(void)setSortPoint:(const GEOCoarseLocationLatLng*)arg1 ;
-(void)cancelKey:(const GEOTileKey*)arg1 forClient:(id)arg2 ;
-(void)cancelAllForClient:(id)arg1 ;
-(void)cancelAllForClientSynchronous:(id)arg1 ;
-(void)beginPreloadSessionOfSize:(unsigned long long)arg1 forClient:(id)arg2 ;
-(void)endPreloadSessionForClient:(id)arg1 ;
-(void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQ:(id)arg2 finished:(/*^block*/id)arg3 ;
-(void)calculateFreeableSizeWithCallbackQ:(id)arg1 finished:(/*^block*/id)arg2 ;
-(void)registerTileDecoder:(id)arg1 ;
-(void)registerTileLoader:(Class)arg1 ;
-(void)expireTilesWithPredicate:(/*^block*/id)arg1 ;
-(void)_performOnServerProxyDelegateQueue:(/*^block*/id)arg1 ;
-(void)setInternalDelegate:(id)arg1 ;
-(id)internalDelegate;
-(void)setInternalDelegateQ:(id)arg1 ;
-(id)internalDelegateQ;
-(id)cachedTileForKey:(const GEOTileKey*)arg1 ;
-(BOOL)_coalesceTimerEnabled;
-(void)_setCoalesceTimerEnabled:(BOOL)arg1 ;
-(id)captureStatePlistWithHints:(os_state_hints_s*)arg1 ;
@end

