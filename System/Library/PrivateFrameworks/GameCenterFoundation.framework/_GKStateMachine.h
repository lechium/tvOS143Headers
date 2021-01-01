/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:06 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _GKStateMachineDelegate;
#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
@class NSDictionary, NSString;

@interface _GKStateMachine : NSObject {

	os_unfair_lock_s _lock;
	BOOL _shouldLogStateTransitions;
	NSDictionary* _validTransitions;
	id<_GKStateMachineDelegate> _delegate;
	NSString* _currentState;

}

@property (retain) NSString * currentState;                               //@synthesize currentState=_currentState - In the implementation block
@property (retain) NSDictionary * validTransitions;                       //@synthesize validTransitions=_validTransitions - In the implementation block
@property (__weak) id<_GKStateMachineDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL shouldLogStateTransitions;              //@synthesize shouldLogStateTransitions=_shouldLogStateTransitions - In the implementation block
-(id)init;
-(void)dealloc;
-(id<_GKStateMachineDelegate>)delegate;
-(void)setDelegate:(id<_GKStateMachineDelegate>)arg1 ;
-(NSString *)currentState;
-(void)setCurrentState:(NSString *)arg1 ;
-(BOOL)_setCurrentState:(id)arg1 ;
-(BOOL)shouldLogStateTransitions;
-(id)_validateTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(void)_performTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(id)missingTransitionFromState:(id)arg1 toState:(id)arg2 ;
-(NSDictionary *)validTransitions;
-(BOOL)applyState:(id)arg1 ;
-(void)setShouldLogStateTransitions:(BOOL)arg1 ;
-(void)setValidTransitions:(NSDictionary *)arg1 ;
@end

