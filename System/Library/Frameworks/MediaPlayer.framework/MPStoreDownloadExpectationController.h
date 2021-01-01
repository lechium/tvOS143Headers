/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:58 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSString;

@interface MPStoreDownloadExpectationController : NSObject <MPStoreDownloadManagerObserver> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_source> _dispatchSource;
	unsigned long long _downloadManagerMonitorCount;
	/*^block*/id _searchBlock;
	double _timeout;

}

@property (nonatomic,copy) id searchBlock; 
@property (assign,nonatomic) double timeout; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3 ;
-(id)searchBlock;
-(void)setSearchBlock:(id)arg1 ;
-(void)_attemptDownloadSearch;
-(void)_finishWithDownload:(id)arg1 error:(id)arg2 ;
-(void)_beginMonitoringDownloadManager;
-(void)_endMonitoringDownloadManager;
@end

