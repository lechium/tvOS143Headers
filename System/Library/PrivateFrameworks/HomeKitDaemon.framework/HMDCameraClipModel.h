/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HMBModel.h>

@class NSNumber, NSDate, NSString, NSData, HMBStreamingAsset, NSArray;

@interface HMDCameraClipModel : HMBModel

@property (nonatomic,retain) NSNumber * feedbackStatusField; 
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSNumber * isComplete; 
@property (assign) unsigned long long feedbackStatus; 
@property (nonatomic,retain) NSNumber * duration; 
@property (nonatomic,retain) NSNumber * targetFragmentDuration; 
@property (nonatomic,retain) NSNumber * maximumClipDuration; 
@property (nonatomic,retain) NSNumber * recordedLocally; 
@property (nonatomic,retain) NSString * streamingAssetVersion; 
@property (nonatomic,retain) NSData * encryptionKey; 
@property (nonatomic,retain) NSNumber * encryptionScheme; 
@property (nonatomic,retain) HMBStreamingAsset * videoStreamingAsset; 
@property (nonatomic,retain) NSArray * videoMetadata; 
@property (nonatomic,retain) NSArray * videoMetadataArray; 
@property (nonatomic,retain) HMBStreamingAsset * posterFramesStreamingAsset; 
@property (nonatomic,retain) NSArray * posterFramesMetadata; 
@property (nonatomic,retain) NSArray * posterFramesMetadataArray; 
+(id)sentinelParentUUID;
+(id)hmbProperties;
+(id)hmbQueries;
+(id)hmbExternalRecordType;
+(id)clipsBetweenDatesQueryWithIsAscending:(BOOL)arg1 ;
+(id)incompleteClipsQuery;
+(id)countOfClipsBetweenDatesQuery;
+(id)clipsWithNeedsUploadFeedbackStatusQuery;
-(id)createClipWithSignificantEvents:(id)arg1 ;
-(unsigned long long)feedbackStatus;
-(void)setFeedbackStatus:(unsigned long long)arg1 ;
@end
