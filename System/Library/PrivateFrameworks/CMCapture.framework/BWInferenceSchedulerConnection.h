/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_group;
@class BWInferenceSchedulerResourceCoordinator, BWInferenceSchedulerFramebuffer, NSObject;

@interface BWInferenceSchedulerConnection : NSObject {

	unsigned long long _identifier;
	BWInferenceSchedulerResourceCoordinator* _coordinator;
	BWInferenceSchedulerFramebuffer* _framebuffer;
	NSObject*<OS_dispatch_queue> _inferenceQueue;
	NSObject*<OS_dispatch_queue> _scalingQueue;
	NSObject*<OS_dispatch_queue> _submissionQueue;
	NSObject*<OS_dispatch_group> _coordinationGroup;

}

@property (nonatomic,readonly) unsigned long long identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> inferenceQueue;                        //@synthesize inferenceQueue=_inferenceQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> scalingQueue;                          //@synthesize scalingQueue=_scalingQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> submissionQueue;                       //@synthesize submissionQueue=_submissionQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> coordinationGroup;                     //@synthesize coordinationGroup=_coordinationGroup - In the implementation block
@property (nonatomic,readonly) BWInferenceSchedulerResourceCoordinator * coordinator;              //@synthesize coordinator=_coordinator - In the implementation block
@property (nonatomic,retain) BWInferenceSchedulerFramebuffer * framebuffer;                        //@synthesize framebuffer=_framebuffer - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)identifier;
-(BWInferenceSchedulerResourceCoordinator *)coordinator;
-(BWInferenceSchedulerFramebuffer *)framebuffer;
-(id)initWithInferenceTargetQueue:(id)arg1 scalingTargetQueue:(id)arg2 submissionTargetQueue:(id)arg3 ;
-(void)setFramebuffer:(BWInferenceSchedulerFramebuffer *)arg1 ;
-(NSObject*<OS_dispatch_queue>)inferenceQueue;
-(NSObject*<OS_dispatch_queue>)scalingQueue;
-(NSObject*<OS_dispatch_queue>)submissionQueue;
-(NSObject*<OS_dispatch_group>)coordinationGroup;
@end

