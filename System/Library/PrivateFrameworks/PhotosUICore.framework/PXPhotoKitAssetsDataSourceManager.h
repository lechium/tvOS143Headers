/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXAssetsDataSourceManager.h>
#import <libobjc.A.dylib/PXPhotosDataSourceChangeObserver.h>
#import <libobjc.A.dylib/PXMutableAssetsDataSourceManager.h>

@protocol OS_dispatch_queue, PXPhotosDataSourceProvider;
@class NSPredicate, PXPhotosDataSource, NSNumber, NSObject, NSString, PXPhotoKitAssetsDataSource;

@interface PXPhotoKitAssetsDataSourceManager : PXAssetsDataSourceManager <PXPhotosDataSourceChangeObserver, PXMutableAssetsDataSourceManager> {

	PXPhotosDataSource* _photosDataSource;
	NSNumber* _backgroundFetchOriginSection;
	BOOL _isLoadingInitialPhotosDataSource;
	NSObject*<OS_dispatch_queue> _initialDataSourceLoadingQueue;
	NSString* _localizedLoadingInitialDataSourceMessage;
	id<PXPhotosDataSourceProvider> _photosDataSourceProvider;

}

@property (nonatomic,retain) id<PXPhotosDataSourceProvider> photosDataSourceProvider;              //@synthesize photosDataSourceProvider=_photosDataSourceProvider - In the implementation block
@property (nonatomic,retain) PXPhotosDataSource * photosDataSource; 
@property (nonatomic,readonly) PXPhotoKitAssetsDataSource * dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long backgroundFetchOriginSection; 
@property (nonatomic,retain) NSPredicate * filterPredicate; 
+(id)dataSourceManagerWithAsset:(id)arg1 ;
+(id)dataSourceManagerWithAsset:(id)arg1 options:(unsigned long long)arg2 ;
+(id)dataSourceManagerForAssetCollection:(id)arg1 ;
+(id)dataSourceManagerForAssetCollection:(id)arg1 existingAssetsFetchResult:(id)arg2 existingKeyAssetsFetchResult:(id)arg3 fetchPropertySets:(id)arg4 basePredicate:(id)arg5 options:(unsigned long long)arg6 ;
+(id)dataSourceManagerForConfiguration:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSPredicate *)filterPredicate;
-(id)createInitialDataSource;
-(PXPhotosDataSource *)photosDataSource;
-(id)photosDataSourceInterestingAssetReferences:(id)arg1 ;
-(void)photosDataSource:(id)arg1 didChange:(id)arg2 ;
-(void)photosDataSourceDidFinishBackgroundFetching:(id)arg1 ;
-(void)setFilterPredicate:(NSPredicate *)arg1 ;
-(void)setPhotosDataSource:(PXPhotosDataSource *)arg1 ;
-(void)setCurationEnabled:(BOOL)arg1 forAssetCollection:(id)arg2 ;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg1 ;
-(BOOL)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2 ;
-(id)pauseChangeDeliveryWithTimeout:(double)arg1 ;
-(void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1 ;
-(void)startBackgroundFetchIfNeeded;
-(void)forceIncludeAssetsAtIndexPaths:(id)arg1 ;
-(void)stopForceIncludingAllAssets;
-(void)excludeAssetsAtIndexPaths:(id)arg1 ;
-(void)stopExcludingAssets:(id)arg1 ;
-(void)refreshResultsForAssetCollection:(id)arg1 ;
-(void)setFilterPredicate:(id)arg1 provideIncrementalChangeDetailsForAssetCollections:(id)arg2 ;
-(void)setFilteringDisabled:(BOOL)arg1 forAssetCollection:(id)arg2 ;
-(long long)backgroundFetchOriginSection;
-(void)setBackgroundFetchOriginSection:(long long)arg1 ;
-(id)initWithPhotosDataSource:(id)arg1 ;
-(id)initWithPhotosDataSourceProvider:(id)arg1 ;
-(void)_ensurePhotosDataSource;
-(BOOL)isLoadingInitialDataSource;
-(id)_createAssetsDataSourceWithPhotosDataSource:(id)arg1 withChange:(id)arg2 ;
-(void)updateWithPhotosDataSource:(id)arg1 andDataSourceChange:(id)arg2 ;
-(void)setPhotosDataSource:(id)arg1 publishIntermediateEmptySnapshot:(BOOL)arg2 ;
-(BOOL)isBackgroundFetching;
-(BOOL)supportsFiltering;
-(id)localizedEmptyPlaceholderTitle;
-(id)localizedEmptyPlaceholderMessage;
-(id)localizedLoadingInitialDataSourceMessage;
-(id<PXPhotosDataSourceProvider>)photosDataSourceProvider;
-(void)setPhotosDataSourceProvider:(id<PXPhotosDataSourceProvider>)arg1 ;
@end

