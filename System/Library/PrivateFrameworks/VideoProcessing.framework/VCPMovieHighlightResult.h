/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPVideoKeyFrameResult;

@interface VCPMovieHighlightResult : NSObject {

	float _score;
	VCPVideoKeyFrameResult* _keyFrame;
	SCD_Struct_VC17 _timerange;

}

@property (nonatomic,readonly) SCD_Struct_VC17 timerange;                      //@synthesize timerange=_timerange - In the implementation block
@property (nonatomic,readonly) float score;                                    //@synthesize score=_score - In the implementation block
@property (nonatomic,readonly) VCPVideoKeyFrameResult * keyFrame;              //@synthesize keyFrame=_keyFrame - In the implementation block
-(float)score;
-(SCD_Struct_VC17)timerange;
-(VCPVideoKeyFrameResult *)keyFrame;
-(id)initWithTimeRange:(SCD_Struct_VC17)arg1 score:(float)arg2 andKeyFrame:(id)arg3 ;
@end

