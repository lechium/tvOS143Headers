/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:18 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAnalytics.framework/CoreAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, AnalyticsConfigurationObserverDelegate;
#import <CoreAnalytics/CoreAnalytics-Structs.h>
@class NSObject;

@interface AnalyticsConfigurationObserver : NSObject {

	shared_ptr<(anonymous namespace)::ConfigurationObserverImpl>* observer;
	NSObject*<OS_dispatch_queue> _queue;
	id<AnalyticsConfigurationObserverDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                      //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<AnalyticsConfigurationObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                              //@synthesize delegateQueue=_delegateQueue - In the implementation block
-(id)init;
-(void)dealloc;
-(id<AnalyticsConfigurationObserverDelegate>)delegate;
-(void)setDelegate:(id<AnalyticsConfigurationObserverDelegate>)arg1 ;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setConfigurationObserverDelegate:(id)arg1 queue:(id)arg2 ;
-(BOOL)startObservingConfigurationType:(id)arg1 ;
-(BOOL)stopObservingConfigurationType:(id)arg1 ;
@end

