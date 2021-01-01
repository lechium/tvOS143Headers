/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BLServiceProtocol
@required
-(void)fetchDownloadListWithReply:(/*^block*/id)arg1;
-(void)fetchDownloadFromDownloadID:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)pauseDownloadWithID:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)resumeDownloadWithID:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)cancelDownloadWithID:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)cancelAllActiveDownloadsWithReply:(/*^block*/id)arg1;
-(void)purchaseWithRequest:(id)arg1 uiHostProxy:(id)arg2 reply:(/*^block*/id)arg3;
-(void)downloadWithPermlink:(id)arg1 title:(id)arg2 reply:(/*^block*/id)arg3;
-(void)requestDownloadWithParameters:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestDownloadWithMetadata:(id)arg1 isRestore:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)requestDownloadsWithMetadata:(id)arg1 areRestore:(BOOL)arg2 reply:(/*^block*/id)arg3;
-(void)requestDownloadsWithRestoreContentRequestItems:(id)arg1 reply:(/*^block*/id)arg2;
-(void)requestDownloadsWithManifestRequest:(id)arg1 uiHostProxy:(id)arg2 reply:(/*^block*/id)arg3;
-(void)flushMetricsWithReply:(/*^block*/id)arg1;
-(void)processAutomaticDownloadsWithReply:(/*^block*/id)arg1;
-(void)reloadFromServerWithReply:(/*^block*/id)arg1;
-(void)setValueSimulateCrashAtInstallStart:(BOOL)arg1 withReply:(/*^block*/id)arg2;
-(void)setValueSimulateCrashAtInstallDuringDecrypt:(BOOL)arg1 withReply:(/*^block*/id)arg2;
-(void)setValueSimulateCrashAtInstallDuringUnzip:(BOOL)arg1 withReply:(/*^block*/id)arg2;
-(void)setValueSimulateCrashAtInstallDuringFinish:(BOOL)arg1 withReply:(/*^block*/id)arg2;
-(void)getCrashSimulationOverrideValuesWithReply:(/*^block*/id)arg1;
-(void)resetAllCrashSimulationOverridesWithReply:(/*^block*/id)arg1;
-(void)setValueSimulateDeviceOutOfSpace:(BOOL)arg1 withReply:(/*^block*/id)arg2;
-(void)getValueSimulateDeviceOutOfSpaceWithReply:(/*^block*/id)arg1;
-(void)purchaseWithRequest:(id)arg1 reply:(/*^block*/id)arg2;
-(void)setAutomaticDownloadEnabled:(BOOL)arg1 uiHostProxy:(id)arg2 reply:(/*^block*/id)arg3;

@end
