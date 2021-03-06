/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLManagedObject.h>

@class NSDate, PLManagedAsset;

@interface PLMediaAnalysisAssetAttributes : PLManagedObject

@property (nonatomic,retain) NSDate * mediaAnalysisTimeStamp; 
@property (assign,nonatomic) unsigned long long mediaAnalysisVersion; 
@property (assign,nonatomic) int bestVideoRangeDurationTimeScale; 
@property (assign,nonatomic) long long bestVideoRangeDurationValue; 
@property (assign,nonatomic) int bestVideoRangeStartTimeScale; 
@property (assign,nonatomic) long long bestVideoRangeStartValue; 
@property (assign,nonatomic) long long packedBestPlaybackRect; 
@property (assign,nonatomic) float blurrinessScore; 
@property (assign,nonatomic) float exposureScore; 
@property (assign,nonatomic) float autoplaySuggestionScore; 
@property (assign,nonatomic) float videoScore; 
@property (assign,nonatomic) float activityScore; 
@property (assign,nonatomic) unsigned long long faceCount; 
@property (assign,nonatomic) short audioClassification; 
@property (nonatomic,retain) PLManagedAsset * asset; 
+(id)entityName;
+(id)fetchRequest;
-(void)setBestVideoTimeRange:(SCD_Struct_PL41)arg1 ;
-(SCD_Struct_PL41)bestVideoTimeRange;
@end

