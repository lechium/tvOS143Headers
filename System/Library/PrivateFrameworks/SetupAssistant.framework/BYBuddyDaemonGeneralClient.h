/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSLock, NSXPCConnection;

@interface BYBuddyDaemonGeneralClient : NSObject {

	NSLock* _connectionLock;
	NSXPCConnection* _connection;

}
+(/*^block*/id)factory;
-(id)init;
-(id)_daemonConnection;
-(void)getInternalSkipInfo:(/*^block*/id)arg1 ;
-(BOOL)setupAssistantNeedsToRun;
-(void)ensureSilentLoginUpgrade;
-(void)ensureShortLivedTokenUpgrade;
-(id)backupMetadata;
-(void)observeFinishSetupTriggers;
-(void)performSilentICDPUpgrade;
-(void)deferDataMigratorExit;
-(void)cancelDataMigratorDeferredExit;
-(void)setInternalShouldSkipFlows:(BOOL)arg1 skipExceptions:(id)arg2 ;
-(void)cancelInternalSkipInfo;
@end

