/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WFDialogRequest, WFDialogResponse, WFWorkflowRunningContext;

@interface WFPresentedDialog : NSObject {

	WFDialogRequest* _request;
	WFDialogResponse* _response;
	unsigned long long _presentationMode;
	WFWorkflowRunningContext* _context;
	/*^block*/id _completionHandler;

}

@property (nonatomic,readonly) WFDialogRequest * request;                        //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) WFDialogResponse * response;                        //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) unsigned long long presentationMode;              //@synthesize presentationMode=_presentationMode - In the implementation block
@property (nonatomic,readonly) WFWorkflowRunningContext * context;               //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) id completionHandler;                             //@synthesize completionHandler=_completionHandler - In the implementation block
-(WFDialogRequest *)request;
-(void)setResponse:(WFDialogResponse *)arg1 ;
-(WFDialogResponse *)response;
-(WFWorkflowRunningContext *)context;
-(id)completionHandler;
-(unsigned long long)presentationMode;
-(id)initWithRequest:(id)arg1 presentationMode:(unsigned long long)arg2 runningContext:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
@end

