/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDate, CKServerChangeToken;


@protocol SCKDatabaseStore
@property (nonatomic,copy) NSDate * lastSyncDate; 
@property (nonatomic,copy) NSDate * lastDirtyDate; 
@property (nonatomic,copy) CKServerChangeToken * serverChangeToken; 
@property (assign,getter=isCloudBackupEnabled,nonatomic) BOOL cloudBackupEnabled; 
@required
-(void)setServerChangeToken:(id)arg1;
-(CKServerChangeToken *)serverChangeToken;
-(NSDate *)lastSyncDate;
-(void)setLastSyncDate:(id)arg1;
-(void)setCloudBackupEnabled:(BOOL)arg1;
-(BOOL)isCloudBackupEnabled;
-(id)zoneStoreForSchema:(id)arg1;
-(NSDate *)lastDirtyDate;
-(void)setLastDirtyDate:(id)arg1;

@end

