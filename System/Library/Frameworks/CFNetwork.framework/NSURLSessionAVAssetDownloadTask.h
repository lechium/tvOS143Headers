/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CFNetwork/NSURLSessionTask.h>

@class NSURL;

@interface NSURLSessionAVAssetDownloadTask : NSURLSessionTask {

	unsigned long long _AVAssetDownloadToken;

}

@property (readonly) unsigned long long AVAssetDownloadToken;              //@synthesize AVAssetDownloadToken=_AVAssetDownloadToken - In the implementation block
@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSURL * destinationURL; 
-(NSURL *)URL;
-(NSURL *)destinationURL;
-(unsigned long long)AVAssetDownloadToken;
@end

