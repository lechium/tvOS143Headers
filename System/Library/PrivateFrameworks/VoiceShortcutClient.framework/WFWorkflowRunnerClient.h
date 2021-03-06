/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFWorkflowRunnerClientDelegate;
@class WFWorkflowRunRequest, WFWorkflowRunningContext;

@interface WFWorkflowRunnerClient : NSObject {

	id<WFWorkflowRunnerClientDelegate> _delegate;
	WFWorkflowRunRequest* _runRequest;
	WFWorkflowRunningContext* _context;
	id _progressSubscriber;

}

@property (nonatomic,readonly) WFWorkflowRunRequest * runRequest;                             //@synthesize runRequest=_runRequest - In the implementation block
@property (nonatomic,retain) WFWorkflowRunningContext * context;                              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id progressSubscriber;                                           //@synthesize progressSubscriber=_progressSubscriber - In the implementation block
@property (assign,nonatomic,__weak) id<WFWorkflowRunnerClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WFWorkflowRunnerClientDelegate>)delegate;
-(void)setDelegate:(id<WFWorkflowRunnerClientDelegate>)arg1 ;
-(void)start;
-(void)stop;
-(WFWorkflowRunningContext *)context;
-(void)setContext:(WFWorkflowRunningContext *)arg1 ;
-(id)initWithRunRequest:(id)arg1 ;
-(void)beginObservingProgressForWorkflowWithRunningContext:(id)arg1 ;
-(void)stopObservingRunProgress;
-(WFWorkflowRunRequest *)runRequest;
-(id)progressSubscriber;
-(void)setProgressSubscriber:(id)arg1 ;
@end

