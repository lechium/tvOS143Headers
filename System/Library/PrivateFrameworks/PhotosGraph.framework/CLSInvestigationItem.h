/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:28 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class CLLocation, NSArray, NSString, NSSet, VNSceneprint, NSDateComponents, NSDate;


@protocol CLSInvestigationItem <NSObject,PLRegionsClusteringItem,CLSSimilarlyStackableItem>
@property (nonatomic,readonly) CLLocation * clsLocation; 
@property (nonatomic,readonly) NSArray * clsPeopleNames; 
@property (nonatomic,readonly) NSArray * clsUnprefetchedPeopleNames; 
@property (nonatomic,readonly) unsigned long long clsPeopleCount; 
@property (nonatomic,readonly) NSString * clsIdentifier; 
@property (nonatomic,readonly) CLLocation * location; 
@property (nonatomic,readonly) NSArray * peopleNames; 
@property (nonatomic,readonly) long long clsViewCount; 
@property (nonatomic,readonly) long long clsPlayCount; 
@property (nonatomic,readonly) long long clsShareCount; 
@property (nonatomic,readonly) double clsContentScore; 
@property (nonatomic,readonly) double clsExposureScore; 
@property (nonatomic,readonly) double clsSharpnessScore; 
@property (nonatomic,readonly) double clsAestheticScore; 
@property (nonatomic,readonly) double clsHighlightVisibilityScore; 
@property (nonatomic,readonly) double clsAutoplaySuggestionScore; 
@property (nonatomic,readonly) double clsFaceScore; 
@property (nonatomic,readonly) BOOL clsIsUtility; 
@property (nonatomic,readonly) BOOL clsIsScreenshotOrScreenRecording; 
@property (nonatomic,readonly) BOOL isFavorite; 
@property (nonatomic,readonly) BOOL isVideo; 
@property (nonatomic,readonly) BOOL clsIsAestheticallyPrettyGood; 
@property (nonatomic,readonly) BOOL clsIsBlurry; 
@property (nonatomic,readonly) BOOL clsIsLoopOrBounce; 
@property (nonatomic,readonly) BOOL clsIsLongExposure; 
@property (nonatomic,readonly) BOOL clsIsInterestingVideo; 
@property (nonatomic,readonly) BOOL clsIsInterestingLivePhoto; 
@property (nonatomic,readonly) BOOL clsIsInterestingPanorama; 
@property (nonatomic,readonly) BOOL clsIsInterestingSDOF; 
@property (nonatomic,readonly) BOOL clsIsInterestingHDR; 
@property (nonatomic,readonly) BOOL clsHasInterestingAudioClassification; 
@property (nonatomic,readonly) BOOL clsHasCustomPlaybackVariation; 
@property (nonatomic,readonly) BOOL clsIsNonMemorable; 
@property (nonatomic,readonly) double clsDuration; 
@property (nonatomic,readonly) BOOL clsIsInterestingReframe; 
@property (nonatomic,copy,readonly) NSSet * clsSceneClassifications; 
@property (nonatomic,readonly) VNSceneprint * clsSceneprint; 
@property (nonatomic,readonly) NSDateComponents * cls_localDateComponents; 
@property (nonatomic,readonly) NSDate * cls_universalDate; 
@property (nonatomic,readonly) NSDate * cls_localDate; 
@property (readonly) BOOL clsIsInhabited; 
@property (readonly) BOOL clsAvoidIfPossibleForKeyItem; 
@property (readonly) BOOL clsHasPoorResolution; 
@property (readonly) BOOL clsHasInterestingScenes; 
@property (nonatomic,readonly) double clsSquareCropScore; 
@required
-(BOOL)isVideo;
-(CLLocation *)location;
-(BOOL)isFavorite;
-(NSArray *)peopleNames;
-(NSDate *)cls_universalDate;
-(CLLocation *)clsLocation;
-(NSString *)clsIdentifier;
-(double)clsSharpnessScore;
-(BOOL)clsIsInterestingSDOF;
-(double)clsAestheticScore;
-(BOOL)clsIsAestheticallyPrettyGood;
-(double)clsContentScore;
-(double)clsFaceScore;
-(BOOL)clsIsInterestingLivePhoto;
-(BOOL)clsIsInterestingHDR;
-(NSSet *)clsSceneClassifications;
-(BOOL)clsHasPoorResolution;
-(BOOL)clsIsBlurry;
-(NSArray *)clsPeopleNames;
-(BOOL)clsIsScreenshotOrScreenRecording;
-(NSDateComponents *)cls_localDateComponents;
-(NSDate *)cls_localDate;
-(VNSceneprint *)clsSceneprint;
-(BOOL)clsIsUtility;
-(unsigned long long)clsPeopleCount;
-(double)scoreInContext:(id)arg1;
-(NSArray *)clsUnprefetchedPeopleNames;
-(long long)clsViewCount;
-(long long)clsPlayCount;
-(long long)clsShareCount;
-(double)clsExposureScore;
-(double)clsHighlightVisibilityScore;
-(double)clsAutoplaySuggestionScore;
-(BOOL)clsIsLoopOrBounce;
-(BOOL)clsIsLongExposure;
-(BOOL)clsIsInterestingVideo;
-(BOOL)clsIsInterestingPanorama;
-(BOOL)clsHasInterestingAudioClassification;
-(BOOL)clsHasCustomPlaybackVariation;
-(BOOL)clsIsNonMemorable;
-(double)clsDuration;
-(BOOL)clsIsInterestingReframe;
-(BOOL)clsIsInhabited;
-(BOOL)clsAvoidIfPossibleForKeyItem;
-(BOOL)clsHasInterestingScenes;
-(double)clsSquareCropScore;

@end

