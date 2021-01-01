/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFSequentialParameterInputProviderDelegate <NSObject>
@required
-(void)sequentialParameterInputProvider:(id)arg1 didAdvanceToParameter:(id)arg2 action:(id)arg3 defaultState:(id)arg4 completion:(/*^block*/id)arg5;
-(void)sequentialParameterInputProvider:(id)arg1 didFinishWithInputtedStates:(id)arg2;
-(void)sequentialParameterInputProviderDidCancel:(id)arg1;

@end

