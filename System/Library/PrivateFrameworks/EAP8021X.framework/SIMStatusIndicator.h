/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/EAP8021X.framework/EAP8021X
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EAP8021X/EAP8021X-Structs.h>
#import <libobjc.A.dylib/CoreTelephonyClientSubscriberDelegate.h>

@protocol OS_dispatch_queue;
@class CoreTelephonyClient, NSObject, NSString;

@interface SIMStatusIndicator : NSObject <CoreTelephonyClientSubscriberDelegate> {

	CoreTelephonyClient* _coreTelephonyClient;
	NSObject*<OS_dispatch_queue> _queue;
	/*function pointer*/void* _callback;
	CFRunLoopRef _runloop;
	CFStringRef _runloopMode;
	void* _applicationContext;

}

@property (nonatomic,retain) CoreTelephonyClient * coreTelephonyClient;              //@synthesize coreTelephonyClient=_coreTelephonyClient - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (assign) /*function pointer*/void* callback;                               //@synthesize callback=_callback - In the implementation block
@property (assign) CFRunLoopRef runloop;                                             //@synthesize runloop=_runloop - In the implementation block
@property (assign) CFStringRef runloopMode;                                          //@synthesize runloopMode=_runloopMode - In the implementation block
@property (assign) void* applicationContext;                                         //@synthesize applicationContext=_applicationContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(/*function pointer*/void*)callback;
-(void)setCallback:(/*function pointer*/void*)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)simStatusDidChange:(id)arg1 status:(id)arg2 ;
-(CFRunLoopRef)runloop;
-(void)createConnection;
-(CoreTelephonyClient *)coreTelephonyClient;
-(void)setCoreTelephonyClient:(CoreTelephonyClient *)arg1 ;
-(CFStringRef)runloopMode;
-(void*)applicationContext;
-(void)setRunloop:(CFRunLoopRef)arg1 ;
-(void)setRunloopMode:(CFStringRef)arg1 ;
-(void)setApplicationContext:(void*)arg1 ;
@end

