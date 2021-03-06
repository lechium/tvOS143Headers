/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXFeedTestSectionInfo.h>

@class NSArray;

@interface PXFeedTestAssetsSectionInfo : PXFeedTestSectionInfo {

	NSArray* _plAssets;

}

@property (nonatomic,readonly) NSArray * plAssets;              //@synthesize plAssets=_plAssets - In the implementation block
-(long long)sectionType;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(long long)typeForItemAtIndex:(long long)arg1 ;
-(id)assetForItemAtIndex:(long long)arg1 ;
-(id)countsByAssetDisplayType;
-(id)_fetchPhotoAssets:(long long)arg1 ;
-(NSArray *)plAssets;
@end

