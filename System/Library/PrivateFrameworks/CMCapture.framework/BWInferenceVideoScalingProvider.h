/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <libobjc.A.dylib/BWInferenceScalingProvider.h>
#import <libobjc.A.dylib/BWInferenceExecutable.h>
#import <libobjc.A.dylib/BWInferencePreventable.h>

@class BWInferenceVideoRequirement, NSArray, NSDictionary, FigM2MController, NSString;

@interface BWInferenceVideoScalingProvider : NSObject <BWInferenceScalingProvider, BWInferenceExecutable, BWInferencePreventable> {

	BWInferenceVideoRequirement* _inputRequirement;
	NSArray* _outputRequirements;
	NSDictionary* _colorSpaceProperties;
	BOOL _applyUprightExifOrientation;
	BOOL _applyValidBufferRect;
	BOOL _applyFinalCropRect;
	BOOL _computeAndApplyAspectRatioCrop;
	FigM2MController* _scalerController;
	float _customFiltersLastUsedHorizontalRatio;
	float _customFiltersLastUsedVerticalRatio;
	BOOL _enableFencing;
	float _outputAspectRatio;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) id<BWInferenceExecutable> executable; 
@property (nonatomic,readonly) id<BWInferenceSubmittable> submittable; 
@property (nonatomic,readonly) id<BWInferenceExtractable> extractable; 
@property (nonatomic,readonly) id<BWInferencePropagatable> propagatable; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL mustExecuteWhenAllowed; 
+(void)initialize;
-(NSString *)description;
-(void)dealloc;
-(int)type;
-(id<BWInferenceExecutable>)executable;
-(void)_configureCustomFiltersForScalingFromSourceWidth:(unsigned long long)arg1 sourceHeight:(unsigned long long)arg2 destinationWidth:(unsigned long long)arg3 destinationHeight:(unsigned long long)arg4 ;
-(id)newStorage;
-(id<BWInferenceSubmittable>)submittable;
-(id<BWInferenceExtractable>)extractable;
-(id<BWInferencePropagatable>)propagatable;
-(int)prepareForExecution;
-(int)executeOnSampleBuffer:(opaqueCMSampleBufferRef)arg1 usingStorage:(id)arg2 withExecutionTime:(SCD_Struct_BW7)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)preventionReasonWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 executionTime:(SCD_Struct_BW7)arg2 ;
-(BOOL)mustExecuteWhenAllowed;
-(id)initWithInputRequirement:(id)arg1 outputRequirements:(id)arg2 enableFencing:(BOOL)arg3 ;
@end

