/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, MFObserver;
@class NSObject, MFObservable;

@interface MFLockStateMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _token;
	MFObservable*<MFObserver> _observable;
	BOOL _isLocked;

}

@property (nonatomic,readonly) MFObservable * lockStateObservable; 
@property (getter=isLocked,readonly) BOOL locked; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)isLocked;
-(void)_receiveLockState:(BOOL)arg1 ;
-(MFObservable *)lockStateObservable;
@end

