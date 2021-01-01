/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarFoundation/CalActivatable.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface CalDarwinNotificationListener : NSObject <CalActivatable> {

	BOOL _listening;
	NSString* _notificationName;
	/*^block*/id _callback;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,readonly) id callback;                                             //@synthesize callback=_callback - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                  //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic) BOOL listening;                                            //@synthesize listening=_listening - In the implementation block
@property (nonatomic,readonly) NSString * notificationName;                             //@synthesize notificationName=_notificationName - In the implementation block
-(id)description;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)activate;
-(id)callback;
-(void)deactivate;
-(NSString *)notificationName;
-(id)initWithNotificationName:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)initWithNotificationName:(id)arg1 callback:(/*^block*/id)arg2 queue:(id)arg3 ;
-(BOOL)listening;
-(BOOL)_removeObserver;
-(BOOL)_addObserver;
-(void)setListening:(BOOL)arg1 ;
-(void)_notificationWithNameReceived:(id)arg1 ;
@end

