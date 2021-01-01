/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoProcessingNode.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMIMotionDetector, HMIVideoFrameSelectorDelegate;
@class NSMutableArray, NSString;

@interface HMIVideoFrameSelector : HMIVideoProcessingNode <HMFLogging> {

	id<HMIMotionDetector> _detector;
	NSMutableArray* _candidates;
	BOOL _enabled;
	SCD_Struct_HM3 _referenceInterval;
	SCD_Struct_HM3 _targetInterval;
	SCD_Struct_HM3 _expirationInterval;
	opaqueCMSampleBufferRef _reference;
	id<HMIVideoFrameSelectorDelegate> _delegate;

}

@property (__weak) id<HMIVideoFrameSelectorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)init;
-(void)dealloc;
-(id<HMIVideoFrameSelectorDelegate>)delegate;
-(void)setDelegate:(id<HMIVideoFrameSelectorDelegate>)arg1 ;
-(void)flush;
-(void)setSampleRate:(double)arg1 ;
-(void)handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleReference:(opaqueCMSampleBufferRef)arg1 target:(opaqueCMSampleBufferRef)arg2 ;
-(void)_drainCandidatesThatExpiredBefore:(SCD_Struct_HM3)arg1 ;
-(void)_ensureDetectorForPixelBuffer:(CVBufferRef)arg1 ;
@end

