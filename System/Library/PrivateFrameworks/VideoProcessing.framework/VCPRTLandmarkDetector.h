/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@interface VCPRTLandmarkDetector : NSObject {

	LandmarkDetector* _internalLandmarkDetector;
	int _numOfLandmarks;

}
-(void)dealloc;
-(id)initFromConfigFile:(id)arg1 numStage:(int)arg2 numLandmarks:(int)arg3 numTreePerStage:(int)arg4 depthOfTree:(int)arg5 numFeatures:(int)arg6 ;
-(void)detectLandmark:(char*)arg1 width:(int)arg2 height:(int)arg3 stride:(int)arg4 facerect:(float*)arg5 prevResult:(float*)arg6 result:(float*)arg7 ;
-(void)calculateFaceRectFromPrevLM:(float*)arg1 result:(float*)arg2 numOfLandmarks:(int)arg3 ;
@end
