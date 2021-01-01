/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/SSDownloadManager.h>
#import <libobjc.A.dylib/ASDJobManagerObserver.h>

@class ASDJobManager, NSString;

@interface SSDownloadManagerAppShim : SSDownloadManager <ASDJobManagerObserver> {

	ASDJobManager* _jobManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)resumeDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)cancelDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)finishDownloads:(id)arg1 ;
-(id)initWithManagerOptions:(id)arg1 ;
-(void)moveDownload:(id)arg1 afterDownload:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)moveDownload:(id)arg1 beforeDownload:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)restartDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_copyDownloadsForMessage:(long long)arg1 downloadIDs:(id)arg2 ;
-(void)_pauseDownloads:(id)arg1 forced:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_sendDownloadsChanged:(id)arg1 ;
-(void)_insertDownloads:(id)arg1 before:(id)arg2 after:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setDownloads:(id)arg1 forKinds:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)cancelAllDownloadsWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)__app_convertOptions:(id)arg1 ;
-(id)__app_downloadsForJobs:(id)arg1 ;
-(void)__app_sendDownloadsChanged:(id)arg1 filterSoftware:(BOOL)arg2 ;
-(void)__app_cancelDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)__app_dispatchBlock:(/*^block*/id)arg1 withError:(id)arg2 ;
-(void)__app_filterDownloads:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)__app_finishDownloads:(id)arg1 ;
-(void)__app_resumeDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)__app_insertDownloads:(id)arg1 before:(id)arg2 after:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)__app_getAllDownloads;
-(void)__app_pauseDownloads:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)__app_extractJobIDsFromSoftwareDownloads:(id)arg1 ;
-(id)__app_newManifestWithType:(long long)arg1 ;
-(id)__app_newActivityWithDownload:(id)arg1 ;
-(void)__app_installManifest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)__app_setPropertiesForActivity:(id)arg1 withDownload:(id)arg2 ;
-(id)__app_newAssetWithDownloadAsset:(id)arg1 assetType:(id)arg2 ;
-(void)jobManager:(id)arg1 changedJobs:(id)arg2 ;
-(void)jobManager:(id)arg1 updatedProgressOfJobs:(id)arg2 ;
-(void)jobManager:(id)arg1 updatedStateOfJobs:(id)arg2 ;
@end

