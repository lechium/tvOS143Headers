/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNStatefulRequest.h>

@class VNTrajectoryProcessor, NSArray;

@interface VNDetectTrajectoriesRequest : VNStatefulRequest {

	VNTrajectoryProcessor* _trajectoryProcessor;
	float _objectMaximumNormalizedRadius;

}

@property (readonly) long long trajectoryLength; 
@property (assign,nonatomic) float objectMinimumNormalizedRadius; 
@property (assign,nonatomic) float minimumObjectSize; 
@property (assign,nonatomic) float objectMaximumNormalizedRadius;              //@synthesize objectMaximumNormalizedRadius=_objectMaximumNormalizedRadius - In the implementation block
@property (assign,nonatomic) float maximumObjectSize; 
@property (copy,readonly) NSArray * results; 
+(Class)configurationClass;
+(BOOL)setsTimeRangeOnResults;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(id)newDefaultRequestInstance;
-(long long)trajectoryLength;
-(float)objectMinimumNormalizedRadius;
-(void)setObjectMinimumNormalizedRadius:(float)arg1 ;
-(float)objectMaximumNormalizedRadius;
-(void)setObjectMaximumNormalizedRadius:(float)arg1 ;
-(id)initWithFrameAnalysisSpacing:(SCD_Struct_VN21)arg1 trajectoryLength:(long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setobjectMaximumNormalizedRadius:(float)arg1 ;
-(float)minimumObjectSize;
-(void)setMinimumObjectSize:(float)arg1 ;
-(float)maximumObjectSize;
-(void)setMaximumObjectSize:(float)arg1 ;
@end
