/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/PHAssetResourceRequestDelegate.h>

@class NSMutableDictionary, NSString;

@interface PHAssetResourceManager : NSObject <PHAssetResourceRequestDelegate> {

	Ai _nextRequestID;
	NSMutableDictionary* _requestsByID;
	os_unfair_lock_s _lock;
	unsigned long long _managerID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultManager;
+(unsigned long long)_nextManagerID;
-(id)init;
-(int)_nextRequestID;
-(id)consolidateAssets:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)assetResourceRequest:(id)arg1 didFindFileURL:(id)arg2 ;
-(void)assetResourceRequest:(id)arg1 didFinishWithError:(id)arg2 ;
-(int)requestDataForAssetResource:(id)arg1 options:(id)arg2 dataReceivedHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)writeDataForAssetResource:(id)arg1 toFile:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(int)requestWriteDataForAssetResource:(id)arg1 toFile:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cancelDataRequest:(int)arg1 ;
-(int)requestFileURLForAssetResource:(id)arg1 options:(id)arg2 urlReceivedHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)infoForRequest:(int)arg1 ;
-(id)reconnectAssets:(id)arg1 urlResolvingHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_autoResolveReferencedResources:(id)arg1 folderURL:(id)arg2 resourceClient:(id)arg3 ;
@end

