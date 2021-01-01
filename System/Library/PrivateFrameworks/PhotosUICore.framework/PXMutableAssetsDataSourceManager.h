/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSPredicate;


@protocol PXMutableAssetsDataSourceManager <NSObject>
@property (assign,nonatomic) long long backgroundFetchOriginSection; 
@property (nonatomic,retain) NSPredicate * filterPredicate; 
@required
-(NSPredicate *)filterPredicate;
-(void)setFilterPredicate:(id)arg1;
-(void)setCurationEnabled:(BOOL)arg1 forAssetCollection:(id)arg2;
-(BOOL)forceAccurateAllSectionsIfNeeded;
-(BOOL)forceAccurateSectionsIfNeeded:(id)arg1;
-(BOOL)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
-(void)ensureLastSectionHasContent;
-(void)ensureStartingSectionHasContent;
-(id)pauseChangeDeliveryWithTimeout:(double)arg1;
-(void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1;
-(void)startBackgroundFetchIfNeeded;
-(void)forceIncludeAssetsAtIndexPaths:(id)arg1;
-(void)stopForceIncludingAllAssets;
-(void)excludeAssetsAtIndexPaths:(id)arg1;
-(void)stopExcludingAssets:(id)arg1;
-(void)refreshResultsForAssetCollection:(id)arg1;
-(void)setFilterPredicate:(id)arg1 provideIncrementalChangeDetailsForAssetCollections:(id)arg2;
-(void)setFilteringDisabled:(BOOL)arg1 forAssetCollection:(id)arg2;
-(long long)backgroundFetchOriginSection;
-(void)setBackgroundFetchOriginSection:(long long)arg1;

@end
