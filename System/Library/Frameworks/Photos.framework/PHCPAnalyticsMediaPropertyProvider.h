/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CPAnalyticsPhotoKitPropertyProvider.h>
#import <libobjc.A.dylib/CPAnalyticsDynamicPropertyProvider.h>

@class PHPhotoLibrary, NSString;

@interface PHCPAnalyticsMediaPropertyProvider : NSObject <CPAnalyticsPhotoKitPropertyProvider, CPAnalyticsDynamicPropertyProvider> {

	PHPhotoLibrary* _photoLibrary;

}

@property (nonatomic,__weak,readonly) PHPhotoLibrary * photoLibrary;              //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)assetPropertySetsToFetch;
-(id)init;
-(PHPhotoLibrary *)photoLibrary;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(id)getDynamicProperty:(id)arg1 forEventName:(id)arg2 payloadForSystemPropertyExtraction:(id)arg3 ;
-(void)registerSystemProperties:(id)arg1 ;
-(id)_PHAssetFromPayload:(id)arg1 ;
-(id)_mediaCountFromPayload:(id)arg1 ;
-(id)_mediaProperty:(id)arg1 forAsset:(id)arg2 ;
-(id)_PHAssetCollectionFromPayload:(id)arg1 ;
-(id)_mediaProperty:(id)arg1 forAssetCollection:(id)arg2 ;
-(id)_ageDescriptionForMediaDate:(id)arg1 ;
-(id)_cameraTypeFromImportSource:(long long)arg1 ;
-(id)_sceneForAsset:(id)arg1 ;
-(BOOL)_isSceneConfidenceAboveThresholdForSceneClassification:(id)arg1 sceneAnalysisVersion:(unsigned long long)arg2 ;
-(id)_sceneConfidenceThresholdByClassificationIdentifier:(unsigned)arg1 sceneAnalysisVersion:(unsigned long long)arg2 ;
-(id)_junkConfidenceThresholdForIdentifier:(unsigned)arg1 sceneAnalysisVersion:(unsigned long long)arg2 ;
-(id)_junkConfidenceThresholdVersion40ForIdentifier:(unsigned)arg1 ;
-(id)_sdConfidenceThresholdForIdentifier:(unsigned)arg1 sceneAnalysisVersion:(unsigned long long)arg2 ;
-(id)_sdConfidenceThresholdVersion33ForIdentifier:(unsigned)arg1 ;
-(id)_sdConfidenceThresholdVersion51ForIdentifier:(unsigned)arg1 ;
-(id)_sceneLabelByClassificationIdentifier:(unsigned)arg1 ;
-(id)_sceneSubjectForAsset:(id)arg1 ;
-(BOOL)_isPeopleSceneIdentifier:(unsigned)arg1 ;
-(BOOL)_hasPetsForSceneClassifications:(id)arg1 sceneAnalysisVersion:(unsigned long long)arg2 ;
-(BOOL)_hasPeopleForSceneClassifications:(id)arg1 sceneAnalysisVersion:(unsigned long long)arg2 ;
@end

