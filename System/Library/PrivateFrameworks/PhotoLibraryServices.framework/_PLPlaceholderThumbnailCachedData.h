/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData;

@interface _PLPlaceholderThumbnailCachedData : NSObject {

	NSData* _imageData;
	int _width;
	int _height;
	int _bytesPerRow;
	int _dataWidth;
	int _dataHeight;
	int _imageDataOffset;

}
-(id)initWithImageData:(id)arg1 width:(int)arg2 height:(int)arg3 bytesPerRow:(int)arg4 dataWidth:(int)arg5 dataHeight:(int)arg6 imageDataOffset:(int)arg7 ;
-(id)imageDataWithWidth:(int*)arg1 height:(int*)arg2 bytesPerRow:(int*)arg3 dataWidth:(int*)arg4 dataHeight:(int*)arg5 imageDataOffset:(int*)arg6 ;
@end

