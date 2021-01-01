/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSDate, NSString;


@protocol PGGraphIngestMoment <NSObject>
@property (nonatomic,readonly) NSDate * localStartDate; 
@property (nonatomic,readonly) NSDate * localEndDate; 
@property (nonatomic,readonly) NSDate * universalStartDate; 
@property (nonatomic,readonly) NSDate * universalEndDate; 
@property (nonatomic,readonly) BOOL isSmartInteresting; 
@property (nonatomic,readonly) BOOL isInteresting; 
@property (nonatomic,readonly) BOOL isInterestingWithAlternateJunking; 
@property (nonatomic,readonly) double contentScore; 
@property (nonatomic,readonly) unsigned long long numberOfItems; 
@property (nonatomic,readonly) unsigned long long numberOfItemsWithPersons; 
@property (nonatomic,readonly) unsigned long long totalNumberOfPersons; 
@property (nonatomic,readonly) NSString * uuid; 
@property (nonatomic,readonly) double inhabitationScore; 
@property (nonatomic,readonly) BOOL hasHigherThanImprovedAssets; 
@property (nonatomic,readonly) BOOL hasAssetsWithInterestingScenes; 
@property (nonatomic,readonly) BOOL containsBetterScoringAsset; 
@property (nonatomic,readonly) BOOL containsNonJunkAssets; 
@property (nonatomic,readonly) unsigned long long numberOfShinyGemItems; 
@property (nonatomic,readonly) unsigned long long numberOfRegularGemItems; 
@property (nonatomic,readonly) double behavioralScore; 
@property (nonatomic,readonly) double scenesProcessedRatio; 
@property (nonatomic,readonly) double facesProcessedRatio; 
@property (nonatomic,readonly) unsigned long long numberOfAssetsInExtendedCuration; 
@required
-(NSString *)uuid;
-(unsigned long long)numberOfItems;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(NSDate *)universalStartDate;
-(NSDate *)universalEndDate;
-(double)behavioralScore;
-(double)contentScore;
-(unsigned long long)numberOfShinyGemItems;
-(unsigned long long)numberOfRegularGemItems;
-(BOOL)isInteresting;
-(BOOL)isInterestingWithAlternateJunking;
-(BOOL)isSmartInteresting;
-(unsigned long long)numberOfItemsWithPersons;
-(unsigned long long)totalNumberOfPersons;
-(double)inhabitationScore;
-(BOOL)hasHigherThanImprovedAssets;
-(BOOL)hasAssetsWithInterestingScenes;
-(BOOL)containsBetterScoringAsset;
-(BOOL)containsNonJunkAssets;
-(double)scenesProcessedRatio;
-(double)facesProcessedRatio;
-(unsigned long long)numberOfAssetsInExtendedCuration;

@end

