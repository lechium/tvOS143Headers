/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Memories/Memories-Structs.h>
@interface CTLCropSupport : NSObject
+(CGSize)playbackSizeForAsset:(id)arg1 ;
+(id)fetchNewCGImageForAsset:(id)arg1 size:(CGSize)arg2 ;
+(id)sourceImageForAsset:(id)arg1 ;
+(CGImageRef)createCGImageWithSourceCGImage:(id)arg1 normalizedSourceRect:(CGRect)arg2 destinationSize:(CGSize)arg3 ;
+(CGImageRef)croppedImageForAsset:(id)arg1 normalizedSourceRect:(CGRect)arg2 destinationSize:(CGSize)arg3 ;
+(BOOL)writeImage:(CGImageRef)arg1 toURL:(id)arg2 fileType:(id)arg3 ;
+(CGImageRef)createScaledImageForImage:(CGImageRef)arg1 scale:(double)arg2 ;
+(CGRect)calculateSuggestedCropRectWithAsset:(id)arg1 aspectRatio:(double)arg2 destinationSize:(CGSize)arg3 ;
+(id)rectAndColorStringFromRect:(CGRect)arg1 colorIndex:(long long)arg2 ;
+(CGImageRef)createScaledImageForImage:(CGImageRef)arg1 scale:(double)arg2 rectAndColors:(id)arg3 ;
+(BOOL)createImageFileWithAsset:(id)arg1 fileType:(id)arg2 normalizedSourceRect:(CGRect)arg3 destinationSize:(CGSize)arg4 scale:(double)arg5 url:(id)arg6 error:(id*)arg7 ;
+(BOOL)createImageFileWithAsset:(id)arg1 fileType:(id)arg2 scale:(double)arg3 rects:(id)arg4 url:(id)arg5 error:(id*)arg6 ;
+(CGRect)calculateCropRectWithAsset:(id)arg1 aspectRatio:(double)arg2 destinationSize:(CGSize)arg3 cropMethodType:(long long)arg4 ;
@end

