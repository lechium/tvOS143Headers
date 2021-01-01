/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreServices/SSDownload.h>

@protocol SSBookDownloadQueue, SSBookDownloadStatus;
@class NSString;

@interface SSBookDownload : SSDownload {

	id<SSBookDownloadQueue> _downloadQueue;
	NSString* _downloadPhaseIdentifierOverride;
	id<SSBookDownloadStatus> _downloadStatus;

}

@property (nonatomic,retain) NSString * downloadPhaseIdentifierOverride;              //@synthesize downloadPhaseIdentifierOverride=_downloadPhaseIdentifierOverride - In the implementation block
@property (nonatomic,readonly) id<SSBookDownloadStatus> downloadStatus;               //@synthesize downloadStatus=_downloadStatus - In the implementation block
@property (nonatomic,readonly) NSString * downloadID; 
-(void)resume;
-(id)valueForProperty:(id)arg1 ;
-(id)assetsForType:(id)arg1 ;
-(long long)bytesTotal;
-(long long)bytesDownloaded;
-(id)downloadPhaseIdentifier;
-(void)setDownloadHandler:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(long long)persistentIdentifier;
-(BOOL)addAsset:(id)arg1 forType:(id)arg2 ;
-(void)pause;
-(id)status;
-(id)metadata;
-(double)percentComplete;
-(void)setMetadata:(id)arg1 ;
-(void)setStatus:(id)arg1 ;
-(void)_becomeManagedOnConnection:(id)arg1 ;
-(BOOL)isEligibleForRestore:(id*)arg1 ;
-(id)downloadPolicy;
-(long long)downloadSizeLimit;
-(void)setDownloadPolicy:(id)arg1 ;
-(void)setValuesWithStoreDownloadMetadata:(id)arg1 ;
-(id)backgroundNetworkingJobGroupName;
-(double)estimatedSecondsRemaining;
-(BOOL)isCancelable;
-(id)networkConstraints;
-(void)prioritizeAboveDownload:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)removeAsset:(id)arg1 ;
-(void)restart;
-(void)setBackgroundNetworkingJobGroupName:(id)arg1 ;
-(void)setNetworkConstraints:(id)arg1 ;
-(BOOL)isBackgroundNetworkingUserInitiated;
-(void)setBackgroundNetworkingUserInitiated:(BOOL)arg1 ;
-(NSString *)downloadID;
-(id)initWithDownloadStatus:(id)arg1 ;
-(void)setDownloadPhaseIdentifierOverride:(NSString *)arg1 ;
-(NSString *)downloadPhaseIdentifierOverride;
-(id<SSBookDownloadStatus>)downloadStatus;
@end

