/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TBDataSourceMediator, WiFi3BarsTileCacheObserver, NSXPCConnection;

@interface WiFi3BarsTileFetcher : NSObject {

	TBDataSourceMediator* _dataSourceMediator;
	unsigned long long _lastFetchedKey;
	WiFi3BarsTileCacheObserver* _tileCacheObserver;
	NSXPCConnection* _connectionToService;

}

@property (nonatomic,retain) TBDataSourceMediator * dataSourceMediator;                   //@synthesize dataSourceMediator=_dataSourceMediator - In the implementation block
@property (assign,nonatomic) unsigned long long lastFetchedKey;                           //@synthesize lastFetchedKey=_lastFetchedKey - In the implementation block
@property (nonatomic,retain) WiFi3BarsTileCacheObserver * tileCacheObserver;              //@synthesize tileCacheObserver=_tileCacheObserver - In the implementation block
@property (nonatomic,readonly) NSXPCConnection * connectionToService;                     //@synthesize connectionToService=_connectionToService - In the implementation block
-(void)dealloc;
-(NSXPCConnection *)connectionToService;
-(id)initWithDataSourceMediator:(id)arg1 ;
-(void)_handleLocationManagerVisitCallbackWithVisit:(id)arg1 ;
-(TBDataSourceMediator *)dataSourceMediator;
-(void)setDataSourceMediator:(TBDataSourceMediator *)arg1 ;
-(unsigned long long)lastFetchedKey;
-(void)setLastFetchedKey:(unsigned long long)arg1 ;
-(WiFi3BarsTileCacheObserver *)tileCacheObserver;
-(void)setTileCacheObserver:(WiFi3BarsTileCacheObserver *)arg1 ;
@end

