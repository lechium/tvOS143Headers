/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary, NSString, CATState;

@interface CATStateMachine : NSObject {

	NSMutableDictionary* mStateByName;
	NSString* mCalloutReason;
	NSString* _name;
	CATState* _initialState;
	CATState* _currentState;
	id _target;
	unsigned long long _logLevel;

}

@property (nonatomic,retain) CATState * currentState;                  //@synthesize currentState=_currentState - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) CATState * initialState;                  //@synthesize initialState=_initialState - In the implementation block
@property (nonatomic,__weak,readonly) id target;                       //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) unsigned long long logLevel;              //@synthesize logLevel=_logLevel - In the implementation block
+(id)new;
-(NSString *)name;
-(id)description;
-(id)init;
-(void)dealloc;
-(id)target;
-(void)start;
-(id)initWithTarget:(id)arg1 ;
-(CATState *)currentState;
-(void)setLogLevel:(unsigned long long)arg1 ;
-(unsigned long long)logLevel;
-(void)addState:(id)arg1 ;
-(id)stateWithName:(id)arg1 ;
-(void)setCurrentState:(CATState *)arg1 ;
-(void)setInitialState:(CATState *)arg1 ;
-(CATState *)initialState;
-(void)transitionWithTriggeringEvent:(id)arg1 ;
-(void)delegateDidEnterState:(id)arg1 event:(id)arg2 ;
-(id)eventForTriggeringEvent:(id)arg1 ;
-(void)delegateWillExitState:(id)arg1 event:(id)arg2 ;
-(void)invokeAction:(SEL)arg1 event:(id)arg2 ;
-(id)addStateWithName:(id)arg1 ;
-(BOOL)canTransitionWithTriggeringEvent:(id)arg1 ;
@end

