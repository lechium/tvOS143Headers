/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFSequentialParameterInputProviderDelegate;
@class WFAction, NSMutableOrderedSet, NSDictionary, NSMutableDictionary;

@interface WFSequentialParameterInputProvider : NSObject {

	id<WFSequentialParameterInputProviderDelegate> _delegate;
	WFAction* _fakeAction;
	NSMutableOrderedSet* _queuedParameters;
	NSDictionary* _defaultStates;
	NSMutableDictionary* _inputtedStates;

}

@property (nonatomic,retain) WFAction * fakeAction;                                                       //@synthesize fakeAction=_fakeAction - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * queuedParameters;                                      //@synthesize queuedParameters=_queuedParameters - In the implementation block
@property (nonatomic,retain) NSDictionary * defaultStates;                                                //@synthesize defaultStates=_defaultStates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * inputtedStates;                                        //@synthesize inputtedStates=_inputtedStates - In the implementation block
@property (assign,nonatomic,__weak) id<WFSequentialParameterInputProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<WFSequentialParameterInputProviderDelegate>)delegate;
-(void)setDelegate:(id<WFSequentialParameterInputProviderDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)startWithAction:(id)arg1 parameters:(id)arg2 defaultStates:(id)arg3 ;
-(void)askForParameterIfAvailable;
-(WFAction *)fakeAction;
-(void)setFakeAction:(WFAction *)arg1 ;
-(NSMutableOrderedSet *)queuedParameters;
-(void)setQueuedParameters:(NSMutableOrderedSet *)arg1 ;
-(NSDictionary *)defaultStates;
-(void)setDefaultStates:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)inputtedStates;
-(void)setInputtedStates:(NSMutableDictionary *)arg1 ;
@end
