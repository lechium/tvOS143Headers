/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXUIMediaProvider.h>

@class NSOperationQueue, NSCache;

@interface PXFileBackedUIMediaProvider : PXUIMediaProvider {

	NSOperationQueue* _queue;
	NSCache* _cache;

}
-(id)init;
-(void)cancelImageRequest:(long long)arg1 ;
-(long long)requestImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(long long)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)thumbnailDataForAsset:(id)arg1 targetSize:(CGSize)arg2 onlyFromCache:(BOOL)arg3 outDataSpec:(PXMediaProviderThumbnailDataSpec*)arg4 ;
-(id)_createImageForKey:(id)arg1 error:(id*)arg2 ;
-(id)_resizeImageAtURL:(id)arg1 imageUTI:(id)arg2 targetSize:(CGSize)arg3 bakeInOrientation:(BOOL)arg4 error:(id*)arg5 ;
-(void)_handleImageCreated:(id)arg1 imageKey:(id)arg2 ;
@end

