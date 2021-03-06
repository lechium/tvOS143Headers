/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface WLKSettingsCloudUtilities : NSObject
+(id)_connection;
+(id)_queue;
+(BOOL)cloudSyncEnabled;
+(BOOL)synchronizeSettingsFromCloudIfNeeded:(id*)arg1 ;
+(id)_syncDictionaryForLocalStore;
+(void)_postChangeDictionaryToCloud:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)updateCloudStoreAppSettings:(id)arg1 deleteHistory:(BOOL)arg2 removeEntry:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
+(id)_syncDictionaryForAppSettings:(id)arg1 ;
+(void)updateCloudStoreAccountLevelSetting:(id)arg1 value:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)deleteAllHistoryWithCompletion:(/*^block*/id)arg1 ;
+(void)_fetchSyncDictionary:(/*^block*/id)arg1 ;
+(void)synchronizeSettingsFromCloudIfNeededWithCompletion:(/*^block*/id)arg1 ;
+(void)updateCloudStoreWithCompletion:(/*^block*/id)arg1 ;
+(void)updateCloudStoreAppSettings:(id)arg1 deleteHistory:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(void)forceUpdateWithCompletion:(/*^block*/id)arg1 ;
+(void)resetAccountWithCompletion:(/*^block*/id)arg1 ;
+(void)updateLocalStoreWithCompletion:(/*^block*/id)arg1 ;
@end

