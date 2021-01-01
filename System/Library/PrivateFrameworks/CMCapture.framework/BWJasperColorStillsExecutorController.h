/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:31 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWStillImageProcessorController.h>
#import <libobjc.A.dylib/BWJasperColorStillsExecutorInputDelegate.h>

@class FigStateMachine, BWJasperColorStillsExecutorControllerConfiguration, NSMutableArray, BWJasperColorStillsExecutorRequest, NSString;

@interface BWJasperColorStillsExecutorController : BWStillImageProcessorController <BWJasperColorStillsExecutorInputDelegate> {

	FigStateMachine* _stateMachine;
	BWJasperColorStillsExecutorControllerConfiguration* _configuration;
	NSMutableArray* _requestQueue;
	BWJasperColorStillsExecutorRequest* _currentRequest;
	opaqueCMFormatDescriptionRef _depthFormatDescription;
	SCD_Struct_BW13 _identityMatrix;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(void)dealloc;
-(unsigned long long)type;
-(id)initWithConfiguration:(id)arg1 ;
-(void)_execute;
-(int)enqueueInputForProcessing:(id)arg1 delegate:(id)arg2 ;
-(void)cancelProcessing;
-(void)inputReadyToExecute:(id)arg1 ;
-(int)_setupJasperColorStillsExecutor;
-(void)_updateStateIfNeeded;
-(void)_serviceNextRequest;
-(BOOL)finishProcessingCurrentInputNow;
@end

