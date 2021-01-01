/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLVirtualResource.h>

@interface PLMediaMetadataVirtualResource : PLVirtualResource {

	unsigned long long _dataLength;

}
-(long long)estimatedDataLength;
-(long long)dataLength;
-(id)initWithAsset:(id)arg1 resourceType:(unsigned)arg2 version:(unsigned)arg3 recipeID:(unsigned)arg4 dataLength:(unsigned long long)arg5 ;
@end
