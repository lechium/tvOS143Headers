/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BWInferenceDataRequirement, BWInferenceRequirement;

@interface BWInferenceDataDependency : NSObject {

	BWInferenceDataRequirement* _dataRequirement;
	BWInferenceRequirement* _inferenceRequirement;

}

@property (nonatomic,readonly) BWInferenceDataRequirement * dataRequirement;               //@synthesize dataRequirement=_dataRequirement - In the implementation block
@property (nonatomic,readonly) BWInferenceRequirement * inferenceRequirement;              //@synthesize inferenceRequirement=_inferenceRequirement - In the implementation block
-(void)dealloc;
-(BWInferenceRequirement *)inferenceRequirement;
-(BWInferenceDataRequirement *)dataRequirement;
-(id)initWithInferenceRequirement:(id)arg1 dependentOnDataRequirement:(id)arg2 ;
@end
