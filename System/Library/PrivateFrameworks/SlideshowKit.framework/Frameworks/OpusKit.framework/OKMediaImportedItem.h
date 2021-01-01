/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OpusKit/OKMediaItem.h>

@interface OKMediaImportedItem : OKMediaItem
+(id)scheme;
+(id)urlForMediaObject:(id)arg1 ;
-(id)resourceURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)importMediaToDirectoryURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)invalidateDiskCachedThumbnailImages;
-(id)diskCachedMetadata;
-(id)createMetadataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)diskCachedThumbnailImageForResolution:(unsigned long long)arg1 ;
-(id)createThumbnailImageForResolution:(unsigned long long)arg1 withMetadata:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setDiskCachedThumbnailImage:(id)arg1 forResolution:(unsigned long long)arg2 ;
-(BOOL)wantsTemporaryDiskCache;
-(BOOL)wantsMemoryCachedMetadata;
-(BOOL)wantsDiskCachedMetadata;
-(BOOL)wantsDiskCachedThumbnailForResolution:(unsigned long long)arg1 ;
-(id)mediaObject;
-(void)setMediaObject:(id)arg1 ;
-(BOOL)hasDiskCachedMetadata:(id*)arg1 ;
-(BOOL)hasDiskCachedThumbnailImage:(id*)arg1 forResolution:(unsigned long long)arg2 ;
-(id)initWithImportedResourceURL:(id)arg1 ;
@end

