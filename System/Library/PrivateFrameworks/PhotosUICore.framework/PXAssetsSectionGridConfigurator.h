/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXAssetsSectionConfigurator.h>

@interface PXAssetsSectionGridConfigurator : PXAssetsSectionConfigurator {

	BOOL _aspectFitContent;
	long long _zoomStep;

}

@property (assign,nonatomic) long long zoomStep;                            //@synthesize zoomStep=_zoomStep - In the implementation block
@property (assign,nonatomic) BOOL aspectFitContent;                         //@synthesize aspectFitContent=_aspectFitContent - In the implementation block
@property (nonatomic,readonly) BOOL supportsAspectRatioToggle; 
-(id)headerSpecForHeaderStyle:(long long)arg1 assetSectionLayout:(id)arg2 ;
-(void)configureAssetSectionLayout:(id)arg1 ;
-(CGSize)estimatedSizeOfSectionForAssetCollection:(id)arg1 isCurated:(BOOL)arg2 numberOfAssets:(long long)arg3 referenceSize:(CGSize)arg4 ;
-(BOOL)_layoutHasIndividualItems:(id)arg1 forSpec:(id)arg2 ;
-(BOOL)_layoutIsAspectFit:(id)arg1 forSpec:(id)arg2 ;
-(double)_interItemSpacingForLayout:(id)arg1 forSpec:(id)arg2 ;
-(void)_configureGridLayout:(id)arg1 inSectionLayout:(id)arg2 ;
-(long long)numberOfZoomStepsWithDataSource:(id)arg1 ;
-(BOOL)supportsAspectRatioToggle;
-(long long)zoomStep;
-(void)setZoomStep:(long long)arg1 ;
-(BOOL)aspectFitContent;
-(void)setAspectFitContent:(BOOL)arg1 ;
@end

