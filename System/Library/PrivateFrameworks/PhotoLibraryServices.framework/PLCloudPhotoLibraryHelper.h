/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PLCloudPhotoLibraryHelper : NSObject
+(void)setShouldMarkPurgeableResourcesOnce:(BOOL)arg1 ;
+(void)setShouldClearPurgeableResourcesOnce:(BOOL)arg1 ;
+(void)setShouldHandleOptimizeModeChange:(BOOL)arg1 ;
+(void)setShouldSendOptimizeFeedbackOnce:(BOOL)arg1 ;
+(BOOL)shouldMarkPurgeableResourcesOnce;
+(void)setShouldRepushMasterWithMissingMediaMetadataOnce:(BOOL)arg1 ;
+(BOOL)shouldRepushMasterWithMissingMediaMetadataOnce;
+(void)setShouldRepushVideoAssetsMetadataOnce:(BOOL)arg1 ;
+(BOOL)shouldRepushVideoAssetsMetadataOnce;
+(BOOL)shouldHandleOptimizeModeChange;
+(BOOL)shouldSendOptimizeFeedbackOnce;
+(BOOL)shouldClearPurgeableResourcesOnce;
+(void)enableCPL:(/*^block*/id)arg1 ;
+(void)disableCPL:(/*^block*/id)arg1 ;
@end

