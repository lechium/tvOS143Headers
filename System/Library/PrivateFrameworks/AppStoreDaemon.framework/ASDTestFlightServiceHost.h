/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, ASDTestFlightServiceHostDelegate;
@class ASDExtensionMonitor, NSExtension, NSObject, NSString;

@interface ASDTestFlightServiceHost : NSObject {

	ASDExtensionMonitor* _monitor;
	NSExtension* _currentExtension;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _runQueue;
	double _serviceTime;
	id<ASDTestFlightServiceHostDelegate> _delegate;

}

@property (nonatomic,readonly) long long extensionStatus; 
@property (nonatomic,readonly) NSString * extensionIdentifier; 
@property (assign,nonatomic,__weak) id<ASDTestFlightServiceHostDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<ASDTestFlightServiceHostDelegate>)delegate;
-(void)setDelegate:(id<ASDTestFlightServiceHostDelegate>)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(NSString *)extensionIdentifier;
-(void)_updateCurrentExtensionTo:(id)arg1 ;
-(long long)_onRunQueue_extensionStatus;
-(void)_callExtensionWithContext:(/*^block*/id)arg1 interruptionBlock:(/*^block*/id)arg2 ;
-(void)_onRunQueue_callExtensionWithContext:(/*^block*/id)arg1 interruptionBlock:(/*^block*/id)arg2 ;
-(long long)extensionStatus;
-(void)notifyOfReceivedPushToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)notifyOfReceivedPushMessages:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)notifyOfReachedTerminalPhaseWithBetaBundleID:(id)arg1 terminalPhase:(long long)arg2 error:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)reloadAppsFromServerWithCompletionHandler:(/*^block*/id)arg1 ;
@end
