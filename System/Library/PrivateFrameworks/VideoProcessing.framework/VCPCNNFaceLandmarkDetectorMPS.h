/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VCPCNNFaceLandmarkDetector.h>

@class VCPCNNModel, VCPCNNData;

@interface VCPCNNFaceLandmarkDetectorMPS : VCPCNNFaceLandmarkDetector {

	VCPCNNModel* _modelLandmarks;
	VCPCNNData* _faceInput;

}
-(id)init;
-(int)computeLandmarks:(float*)arg1 ;
-(float*)getInputBuffer;
@end
