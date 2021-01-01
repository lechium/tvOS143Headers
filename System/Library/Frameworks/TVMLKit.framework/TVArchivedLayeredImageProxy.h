/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURLSessionDownloadTask, NSURL, NSString;

@interface TVArchivedLayeredImageProxy : NSObject {

	NSURLSessionDownloadTask* _downloadTask;
	NSURL* _archiveURL;
	long long _groupType;
	NSString* _assetKey;

}

@property (nonatomic,copy,readonly) NSURL * archiveURL;               //@synthesize archiveURL=_archiveURL - In the implementation block
@property (nonatomic,readonly) long long groupType;                   //@synthesize groupType=_groupType - In the implementation block
@property (nonatomic,copy,readonly) NSString * assetKey;              //@synthesize assetKey=_assetKey - In the implementation block
-(void)dealloc;
-(void)cancel;
-(NSString *)assetKey;
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
-(long long)groupType;
-(NSURL *)archiveURL;
-(id)initWithArchiveURL:(id)arg1 ;
-(id)_assetPathWithAssetKey:(id)arg1 ;
-(BOOL)isImageAvailable;
-(id)initWithArchiveURL:(id)arg1 groupType:(long long)arg2 ;
-(id)initWithArchiveURL:(id)arg1 groupType:(long long)arg2 assetKey:(id)arg3 ;
@end

