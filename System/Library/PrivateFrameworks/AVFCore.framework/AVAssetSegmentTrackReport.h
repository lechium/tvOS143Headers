/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AVFCore/AVFCore-Structs.h>
@class NSString, AVAssetSegmentReportSampleInformation;

@interface AVAssetSegmentTrackReport : NSObject {

	int _trackID;
	NSString* _mediaType;
	SCD_Struct_AV6 _earliestPresentationTimeStamp;
	SCD_Struct_AV6 _duration;
	AVAssetSegmentReportSampleInformation* _firstVideoSampleInformation;

}

@property (nonatomic,readonly) int trackID;                                                                      //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,readonly) NSString * mediaType;                                                             //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AV6 earliestPresentationTimeStamp;                                     //@synthesize earliestPresentationTimeStamp=_earliestPresentationTimeStamp - In the implementation block
@property (nonatomic,readonly) SCD_Struct_AV6 duration;                                                          //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) AVAssetSegmentReportSampleInformation * firstVideoSampleInformation;              //@synthesize firstVideoSampleInformation=_firstVideoSampleInformation - In the implementation block
-(void)dealloc;
-(SCD_Struct_AV6)duration;
-(int)trackID;
-(NSString *)mediaType;
-(id)initWithFigSegmentTrackReportDictionary:(id)arg1 ;
-(SCD_Struct_AV6)earliestPresentationTimeStamp;
-(AVAssetSegmentReportSampleInformation *)firstVideoSampleInformation;
@end

