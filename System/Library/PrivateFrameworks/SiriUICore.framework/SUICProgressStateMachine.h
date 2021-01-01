/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:08 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CUStateMachine, NSDictionary, CUState, NSPointerArray;

@interface SUICProgressStateMachine : NSObject {

	CUStateMachine* _underlyingStateMachine;
	NSDictionary* _stateForStateName;
	unsigned long long _currentState;
	CUState* _abstractState;
	NSPointerArray* _stateMachineObservers;

}

@property (setter=_setStateMachineObservers:,getter=_stateMachineObservers,nonatomic,retain) NSPointerArray * stateMachineObservers;              //@synthesize stateMachineObservers=_stateMachineObservers - In the implementation block
@property (readonly) unsigned long long state; 
-(id)init;
-(void)dealloc;
-(unsigned long long)state;
-(void)addObserver:(id)arg1 ;
-(void)setObservers:(id)arg1 ;
-(void)handleEvent:(unsigned long long)arg1 ;
-(void)_transitionToState:(unsigned long long)arg1 forEvent:(unsigned long long)arg2 ;
-(void)_ignoreEvent:(unsigned long long)arg1 ;
-(void)addObservers:(id)arg1 ;
-(id)_stateMachineObservers;
-(void)_setStateMachineObservers:(id)arg1 ;
@end

