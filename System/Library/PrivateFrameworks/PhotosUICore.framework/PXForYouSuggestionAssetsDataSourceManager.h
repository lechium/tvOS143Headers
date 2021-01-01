/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXAssetsDataSourceManager.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXPhotoLibraryUIChangeObserver.h>

@protocol PXDisplaySuggestion;
@class PXSuggestionsDataSourceManager, PXSuggestionsDataSource, PXPhotosDataSource, PXForYouSuggestionsAssetsDataSource, NSDictionary, NSString;

@interface PXForYouSuggestionAssetsDataSourceManager : PXAssetsDataSourceManager <PXSectionedDataSourceManagerObserver, PXPhotoLibraryUIChangeObserver> {

	id<PXDisplaySuggestion> _displayOriginalSuggestion;
	PXSuggestionsDataSourceManager* _suggestionsDataSourceManager;
	PXSuggestionsDataSource* _suggestionsDataSource;

}

@property (nonatomic,readonly) PXSuggestionsDataSourceManager * suggestionsDataSourceManager;              //@synthesize suggestionsDataSourceManager=_suggestionsDataSourceManager - In the implementation block
@property (nonatomic,retain) PXSuggestionsDataSource * suggestionsDataSource;                              //@synthesize suggestionsDataSource=_suggestionsDataSource - In the implementation block
@property (nonatomic,readonly) PXPhotosDataSource * photosDataSource; 
@property (nonatomic,retain) id<PXDisplaySuggestion> displayOriginalSuggestion;                            //@synthesize displayOriginalSuggestion=_displayOriginalSuggestion - In the implementation block
@property (nonatomic,readonly) PXForYouSuggestionsAssetsDataSource * dataSource; 
@property (nonatomic,readonly) NSDictionary * snapshotAssetToSuggestionMap; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(id)createInitialDataSource;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg1 ;
-(PXSuggestionsDataSourceManager *)suggestionsDataSourceManager;
-(PXPhotosDataSource *)photosDataSource;
-(id)initWithSuggestionsDataSourceManager:(id)arg1 ;
-(void)setDisplayOriginalSuggestion:(id<PXDisplaySuggestion>)arg1 ;
-(NSDictionary *)snapshotAssetToSuggestionMap;
-(id<PXDisplaySuggestion>)displayOriginalSuggestion;
-(PXSuggestionsDataSource *)suggestionsDataSource;
-(void)setSuggestionsDataSource:(PXSuggestionsDataSource *)arg1 ;
@end

