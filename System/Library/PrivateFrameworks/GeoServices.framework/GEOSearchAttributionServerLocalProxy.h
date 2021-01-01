/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:07 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOResourceManifestTileGroupObserver.h>
#import <libobjc.A.dylib/GEOSearchAttributionServerProxy.h>

@class NSMapTable, NSMutableArray, GEOSearchAttributionManifest, geo_isolater, NSString;

@interface GEOSearchAttributionServerLocalProxy : NSObject <GEOResourceManifestTileGroupObserver, GEOSearchAttributionServerProxy> {

	NSMapTable* _listeners;
	os_unfair_lock_s _listenersLock;
	BOOL _updatingManifest;
	NSMutableArray* _updateManifestCompletionHandlers;
	NSMutableArray* _updateManifestErrorHandlers;
	GEOSearchAttributionManifest* _attributionManifest;
	os_unfair_lock_s _attributionManifestLock;
	geo_isolater* _isolater;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
-(void)loadAttributionInfoForIdentifiers:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_attributionManifest;
-(void)_sendInfo:(id)arg1 toListener:(id)arg2 ;
-(void)_sendError:(id)arg1 toListener:(id)arg2 ;
-(void)_loadAttributionInfoForListener:(id)arg1 ;
@end

