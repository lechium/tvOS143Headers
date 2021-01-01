/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FigCaptureDeferredProcessingJobDelegate;
#import <CMCapture/CMCapture-Structs.h>
@class BWDeferredProcessingContainer, FigCaptureDeferredPhotoProcessorRequest, NSString;

@interface FigCaptureDeferredProcessingJob : NSObject {

	id<FigCaptureDeferredProcessingJobDelegate> _delegate;
	BWDeferredProcessingContainer* _container;
	FigCaptureDeferredPhotoProcessorRequest* _processorRequest;
	long long _startNS;
	long long _durationNS;
	NSString* _masterPortType;

}

@property (nonatomic,readonly) FigCaptureDeferredPhotoProcessorRequest * processorRequest;              //@synthesize processorRequest=_processorRequest - In the implementation block
@property (nonatomic,readonly) BWDeferredProcessingContainer * container;                               //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) long long startNS;                                                         //@synthesize startNS=_startNS - In the implementation block
@property (assign,nonatomic) long long durationNS;                                                      //@synthesize durationNS=_durationNS - In the implementation block
@property (nonatomic,readonly) NSString * masterPortType;                                               //@synthesize masterPortType=_masterPortType - In the implementation block
-(void)dealloc;
-(BWDeferredProcessingContainer *)container;
-(void)start;
-(NSString *)masterPortType;
-(id)initWithProcessorRequest:(id)arg1 delegate:(id)arg2 error:(int*)arg3 ;
-(void)completedWithSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)failedWithError:(int)arg1 ;
-(long long)durationNS;
-(void)setDurationNS:(long long)arg1 ;
-(FigCaptureDeferredPhotoProcessorRequest *)processorRequest;
-(long long)startNS;
-(void)setStartNS:(long long)arg1 ;
@end

