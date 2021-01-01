/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CDPDXPCEventListener.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSString;

@interface CDPDCircleStateObserver : NSObject <CDPDXPCEventListener> {

	int _circleChangeToken;
	BOOL _isObserving;
	NSObject*<OS_dispatch_queue> _eventQueue;
	NSMutableArray* _circleObservers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(const char*)_notificationName;
-(void)observeCircleStateWithCircleProxy:(id)arg1 changeHandler:(/*^block*/id)arg2 ;
-(void)eventReceived:(const char*)arg1 eventValue:(unsigned long long)arg2 ;
-(void)observeChangeToState:(unsigned long long)arg1 circleProxy:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)stopObservingCircleStatusChange;
-(void)registerListener:(id)arg1 ;
@end
