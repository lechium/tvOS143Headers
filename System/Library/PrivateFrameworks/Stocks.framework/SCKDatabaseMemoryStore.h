/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SCKDatabaseStore.h>

@class NSDate, CKServerChangeToken, NSMutableDictionary;

@interface SCKDatabaseMemoryStore : NSObject <SCKDatabaseStore> {

	BOOL _cloudBackupEnabled;
	NSDate* _lastSyncDate;
	NSDate* _lastDirtyDate;
	CKServerChangeToken* _serverChangeToken;
	NSMutableDictionary* _zoneStoresByName;

}

@property (nonatomic,copy) NSMutableDictionary * zoneStoresByName;                             //@synthesize zoneStoresByName=_zoneStoresByName - In the implementation block
@property (nonatomic,copy) NSDate * lastSyncDate;                                              //@synthesize lastSyncDate=_lastSyncDate - In the implementation block
@property (nonatomic,copy) NSDate * lastDirtyDate;                                             //@synthesize lastDirtyDate=_lastDirtyDate - In the implementation block
@property (nonatomic,copy) CKServerChangeToken * serverChangeToken;                            //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (assign,getter=isCloudBackupEnabled,nonatomic) BOOL cloudBackupEnabled;              //@synthesize cloudBackupEnabled=_cloudBackupEnabled - In the implementation block
-(id)init;
-(void)setServerChangeToken:(CKServerChangeToken *)arg1 ;
-(CKServerChangeToken *)serverChangeToken;
-(NSDate *)lastSyncDate;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(void)setCloudBackupEnabled:(BOOL)arg1 ;
-(BOOL)isCloudBackupEnabled;
-(NSMutableDictionary *)zoneStoresByName;
-(id)zoneStoreForSchema:(id)arg1 ;
-(NSDate *)lastDirtyDate;
-(void)setLastDirtyDate:(NSDate *)arg1 ;
-(void)setZoneStoresByName:(NSMutableDictionary *)arg1 ;
@end
