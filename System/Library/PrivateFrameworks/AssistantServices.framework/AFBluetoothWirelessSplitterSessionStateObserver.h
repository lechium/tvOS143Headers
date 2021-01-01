/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/AFNotifyObserverDelegate.h>
#import <libobjc.A.dylib/AFInvalidating.h>

@protocol OS_dispatch_queue, AFBluetoothWirelessSplitterSessionStateObserverDelegate;
@class NSObject, AFNotifyObserver, NSString;

@interface AFBluetoothWirelessSplitterSessionStateObserver : NSObject <AFNotifyObserverDelegate, AFInvalidating> {

	NSObject*<OS_dispatch_queue> _queue;
	id<AFBluetoothWirelessSplitterSessionStateObserverDelegate> _delegate;
	AFNotifyObserver* _notifyObserver;
	long long _state;

}

@property (nonatomic,readonly) long long state;                     //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(long long)state;
-(void)_invalidate;
-(void)_setState:(long long)arg1 ;
-(id)initWithQueue:(id)arg1 delegate:(id)arg2 ;
-(void)notifyObserver:(id)arg1 didReceiveNotificationWithToken:(int)arg2 ;
-(void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3 ;
-(void)getStateWithCompletion:(/*^block*/id)arg1 ;
@end

