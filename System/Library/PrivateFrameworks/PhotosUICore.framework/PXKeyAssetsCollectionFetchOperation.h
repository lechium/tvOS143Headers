/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:53 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXCollectionFetchOperation.h>

@class NSDictionary;

@interface PXKeyAssetsCollectionFetchOperation : PXCollectionFetchOperation {

	long long _maxKeyAssets;
	NSDictionary* _outputOtherFetchResultsByAssetCollection;

}

@property (nonatomic,retain) NSDictionary * outputOtherFetchResultsByAssetCollection;              //@synthesize outputOtherFetchResultsByAssetCollection=_outputOtherFetchResultsByAssetCollection - In the implementation block
@property (assign,nonatomic) long long maxKeyAssets;                                               //@synthesize maxKeyAssets=_maxKeyAssets - In the implementation block
-(void)main;
-(long long)maxKeyAssets;
-(void)setMaxKeyAssets:(long long)arg1 ;
-(NSDictionary *)outputOtherFetchResultsByAssetCollection;
-(void)setOutputOtherFetchResultsByAssetCollection:(NSDictionary *)arg1 ;
@end

