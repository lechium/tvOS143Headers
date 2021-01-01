/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardHIDEventFoundation.framework/BackBoardHIDEventFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_dispatch_queue, BKHIDEventClientDelegate;
@class NSObject, BSMachPortSendRight, BSProcessDeathWatcher, BSPortDeathSentinel, NSString;

@interface BKHIDEventClient : NSObject <BSDescriptionProviding> {

	NSObject*<OS_dispatch_queue> _queue;
	id<BKHIDEventClientDelegate> _queue_delegate;
	BSMachPortSendRight* _queue_sendRight;
	BSProcessDeathWatcher* _queue_pidWatcher;
	BSPortDeathSentinel* _queue_portSentinel;
	NSString* _queue_procName;
	int _queue_pid;
	BOOL _queue_invalidated;

}

@property (assign,nonatomic,__weak) id<BKHIDEventClientDelegate> delegate; 
@property (nonatomic,readonly) int pid;                                                 //@synthesize queue_pid=_queue_pid - In the implementation block
@property (nonatomic,readonly) BSMachPortSendRight * sendRight;                         //@synthesize queue_sendRight=_queue_sendRight - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(id<BKHIDEventClientDelegate>)delegate;
-(void)setDelegate:(id<BKHIDEventClientDelegate>)arg1 ;
-(int)pid;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(BSMachPortSendRight *)sendRight;
-(void)_queue_invalidate;
-(id)initWithPid:(int)arg1 sendRight:(id)arg2 ;
-(id)initWithPid:(int)arg1 sendRight:(id)arg2 queue:(id)arg3 ;
-(id)initWithPid:(int)arg1 sendRight:(id)arg2 queue:(id)arg3 processName:(id)arg4 ;
-(BOOL)_deathByPid;
-(BOOL)_deathBySendRight;
-(void)_queue_performDelegateCallout:(/*^block*/id)arg1 ;
@end
