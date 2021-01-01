/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CUState, NSMutableArray, NSPointerArray, NSArray;

@interface CUStateMachine : NSObject {

	CUState* _currentState;
	NSMutableArray* _eventQueue;
	BOOL _dispatching;
	NSPointerArray* _lcaPath;
	BOOL _started;
	CUState* _targetState;
	CUState* _initialState;
	NSArray* _states;

}

@property (nonatomic,retain) CUState * initialState;              //@synthesize initialState=_initialState - In the implementation block
@property (nonatomic,retain) NSArray * states;                    //@synthesize states=_states - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(void)start;
-(void)setStates:(NSArray *)arg1 ;
-(NSArray *)states;
-(void)dispatchEvent:(id)arg1 ;
-(void)setInitialState:(CUState *)arg1 ;
-(void)transitionToState:(id)arg1 ;
-(void)_firstTimeInit;
-(CUState *)initialState;
@end

