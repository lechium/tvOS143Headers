/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:12 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaMiningKit.framework/MediaMiningKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaMiningKit/CLSCurationModel_v2.h>

@class CLSNSFWModel, CLSTabooEventModel, CLSPotentialLandmarkModel, CLSSDModel;

@interface CLSCurationModel_v3 : CLSCurationModel_v2 {

	BOOL _r14j9IsAvailable;
	CLSNSFWModel* _nsfwModel;
	CLSTabooEventModel* _tabooEventModel;
	CLSPotentialLandmarkModel* _potentialLandmarkModel;
	CLSSDModel* _sdModel;

}
+(unsigned long long)minimumRequiredSceneAnalysisVersion;
-(void)enumerateClassificationBasedSignalModelsUsingBlock:(/*^block*/id)arg1 ;
-(id)initWithCurationModelSpecification:(id)arg1 ;
-(BOOL)isTragicFailureWithImageAsset:(id)arg1 ;
-(BOOL)avoidIfPossibleForKeyAssetWithSignals:(id)arg1 ;
-(BOOL)avoidIfPossibleForKeyAssetWithProcessedSignals:(id)arg1 ;
-(BOOL)avoidIfPossibleForKeyAssetWithAsset:(id)arg1 ;
-(BOOL)hasPoorResolutionWithAsset:(id)arg1 ;
-(BOOL)isUtilityForMemoriesWithProcessedSignals:(id)arg1 ;
-(BOOL)isUtilityForMemoriesWithAsset:(id)arg1 ;
-(BOOL)isJunkWithJunkClassification:(id)arg1 ;
-(id)newProcessedSignals;
-(BOOL)isShowcasingFoodWithSceneClassification:(id)arg1 ;
-(void)enumerateSignalModelsUsingBlock:(/*^block*/id)arg1 ;
@end
