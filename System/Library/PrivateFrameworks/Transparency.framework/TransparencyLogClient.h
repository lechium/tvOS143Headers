/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class TransparencyLogSession, TransparencyManagedDataStore, TransparencyAnalytics;

@interface TransparencyLogClient : NSObject {

	TransparencyLogSession* _session;
	TransparencyManagedDataStore* _dataStore;
	TransparencyAnalytics* _transparencyAnalytics;

}

@property (retain) TransparencyLogSession * session;                           //@synthesize session=_session - In the implementation block
@property (retain) TransparencyManagedDataStore * dataStore;                   //@synthesize dataStore=_dataStore - In the implementation block
@property (retain) TransparencyAnalytics * transparencyAnalytics;              //@synthesize transparencyAnalytics=_transparencyAnalytics - In the implementation block
-(TransparencyLogSession *)session;
-(void)setSession:(TransparencyLogSession *)arg1 ;
-(TransparencyManagedDataStore *)dataStore;
-(void)setDataStore:(TransparencyManagedDataStore *)arg1 ;
-(void)deleteDownloadId:(id)arg1 ;
-(void)setTransparencyAnalytics:(TransparencyAnalytics *)arg1 ;
-(BOOL)needsRetry:(id)arg1 ;
-(BOOL)fetch:(id)arg1 shouldRetry:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)fetch:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)download:(id)arg1 retry:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithBackgroundSession:(id)arg1 transparencyAnalytics:(id)arg2 dataStore:(id)arg3 ;
-(BOOL)fetchRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)downloadRequest:(id)arg1 retry:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(TransparencyAnalytics *)transparencyAnalytics;
@end

