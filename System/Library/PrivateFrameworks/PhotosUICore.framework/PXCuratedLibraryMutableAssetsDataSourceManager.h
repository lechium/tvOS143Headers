/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSPredicate;


@protocol PXCuratedLibraryMutableAssetsDataSourceManager <PXMutableAssetsDataSourceManager>
@property (assign,nonatomic) long long zoomLevel; 
@property (nonatomic,retain) NSPredicate * allPhotosFilterPredicate; 
@required
-(void)setZoomLevel:(long long)arg1;
-(long long)zoomLevel;
-(BOOL)forceAccurateAllSectionsIfNeeded;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg1;
-(BOOL)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
-(id)pauseChangeDeliveryWithTimeout:(double)arg1;
-(void)loadIfNeeded;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg1 inZoomLevel:(long long)arg2;
-(void)setTransientKeyAsset:(id)arg1 forAssetCollection:(id)arg2 zoomLevel:(long long)arg3;
-(void)resumeChangeDelivery:(id)arg1;
-(NSPredicate *)allPhotosFilterPredicate;
-(void)setAllPhotosFilterPredicate:(id)arg1;

@end
