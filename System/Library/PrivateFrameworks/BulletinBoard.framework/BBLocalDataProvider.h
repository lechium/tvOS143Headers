/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BulletinBoard/BBDataProvider.h>

@protocol OS_dispatch_queue, BBDataProvider, OS_dispatch_source;
@class NSObject;

@interface BBLocalDataProvider : BBDataProvider {

	NSObject*<OS_dispatch_queue> _localQueue;
	NSObject*<OS_dispatch_queue> _remoteQueue;
	id<BBDataProvider> _dataProvider;
	NSObject*<OS_dispatch_source> _watchdogTimer;
	BOOL _unresponsive;
	BOOL _invalidated;

}

@property (nonatomic,retain) id<BBDataProvider> dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
+(id)dataProviderWithPrincipalClass:(Class)arg1 serverQueue:(id)arg2 initializationCompletion:(/*^block*/id)arg3 ;
+(id)dataProviderWithDataProvider:(id)arg1 serverQueue:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)setDataProvider:(id<BBDataProvider>)arg1 ;
-(id<BBDataProvider>)dataProvider;
-(void)dataProviderDidLoad;
-(void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)noteSectionInfoDidChange:(id)arg1 ;
-(void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 ;
-(BOOL)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2 ;
-(void)startWatchdog;
-(void)reloadIdentityWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)canPerformMigration;
-(id)initWithPrincipalClass:(Class)arg1 serverQueue:(id)arg2 initializationCompletion:(/*^block*/id)arg3 ;
-(id)initWithDataProvider:(id)arg1 serverQueue:(id)arg2 ;
-(id)_initWithDataProvider:(id)arg1 sectionID:(id)arg2 serverQueue:(id)arg3 initializationCompletion:(/*^block*/id)arg4 ;
-(void)_watchdogFired;
-(void)_ping;
-(id)_bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 ;
-(id)_doSynchronousRemoteRequest:(/*^block*/id)arg1 conditionalOn:(/*^block*/id)arg2 ;
-(void)_doAsynchronousRemoteRequest:(/*^block*/id)arg1 conditionalOn:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
@end

