/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@interface VNFaceGeometryEstimator : VNDetector
+(const vector<int, std::__1::allocator<int> >*)allLandmarksPointsIndexes;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(BOOL)_buildCalibrationMatrix:(id)arg1 calibrationMatrix:(float*)arg2 error:(id*)arg3 ;
@end

