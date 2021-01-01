/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CWFXPCEventProxyDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSXPCConnection;

@interface CWFClient : NSObject <CWFXPCEventProxyDelegate> {

	NSObject*<OS_dispatch_queue> _mutex;
	NSMutableDictionary* _mutableEventIDMap;
	NSMutableDictionary* _mutableActivityMap;
	NSMutableDictionary* _mutableEventCallbackMap;
	BOOL _invalidated;
	NSXPCConnection* _XPCConnection;
	long long _serviceType;

}

@property (assign) BOOL invalidated;                                      //@synthesize invalidated=_invalidated - In the implementation block
@property (readonly) NSXPCConnection * XPCConnection;                     //@synthesize XPCConnection=_XPCConnection - In the implementation block
@property (readonly) long long serviceType;                               //@synthesize serviceType=_serviceType - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> targetQueue; 
@property (copy) id invalidationHandler; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)resume;
-(void)suspend;
-(long long)serviceType;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)invalidationHandler;
-(NSXPCConnection *)XPCConnection;
-(void)setTargetQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setInvalidated:(BOOL)arg1 ;
-(BOOL)invalidated;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(id)initWithServiceType:(long long)arg1 ;
-(void)proxy:(id)arg1 receivedEvent:(id)arg2 ;
-(/*^block*/id)eventHandlerWithEventID:(id)arg1 ;
-(void)setEventHandler:(/*^block*/id)arg1 eventID:(id)arg2 ;
-(BOOL)beginActivity:(id)arg1 requestParameters:(id)arg2 error:(id*)arg3 ;
-(void)endActivity:(id)arg1 requestParameters:(id)arg2 ;
-(void)endAllActivities:(id)arg1 ;
-(BOOL)startMonitoringEvent:(id)arg1 requestParameters:(id)arg2 error:(id*)arg3 ;
-(void)stopMonitoringEvent:(id)arg1 requestParameters:(id)arg2 ;
-(void)stopMonitoringAllEvents:(id)arg1 ;
-(void)clearAllEventHandlers;
-(void)__startMonitoringEvent:(id)arg1 requestParameters:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)__beginActivity:(id)arg1 requestParameters:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

