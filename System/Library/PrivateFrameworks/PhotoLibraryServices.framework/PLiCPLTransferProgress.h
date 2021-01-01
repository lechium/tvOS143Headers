/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PLiCPLTransferProgress : NSObject {

	unsigned long long _notUploadedPhotosCount;
	unsigned long long _notUploadedVideosCount;
	unsigned long long _notUploadedItemsCount;

}

@property (assign,nonatomic) unsigned long long notUploadedPhotosCount;              //@synthesize notUploadedPhotosCount=_notUploadedPhotosCount - In the implementation block
@property (assign,nonatomic) unsigned long long notUploadedVideosCount;              //@synthesize notUploadedVideosCount=_notUploadedVideosCount - In the implementation block
@property (assign,nonatomic) unsigned long long notUploadedItemsCount;               //@synthesize notUploadedItemsCount=_notUploadedItemsCount - In the implementation block
-(id)description;
-(unsigned long long)notUploadedPhotosCount;
-(void)setNotUploadedPhotosCount:(unsigned long long)arg1 ;
-(unsigned long long)notUploadedVideosCount;
-(void)setNotUploadedVideosCount:(unsigned long long)arg1 ;
-(unsigned long long)notUploadedItemsCount;
-(void)setNotUploadedItemsCount:(unsigned long long)arg1 ;
@end
