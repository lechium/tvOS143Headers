/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface TLSilentModeController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _accessQueueLabel;
	int _ringerSwitchChangedNotifyToken;
	long long _silentModeStatus;

}

@property (readonly) long long silentModeStatus; 
+(id)sharedSilentModeController;
-(id)init;
-(void)dealloc;
-(void)_performBlockOnAccessQueue:(/*^block*/id)arg1 ;
-(void)_assertRunningOnAccessQueue;
-(void)_assertNotRunningOnAccessQueue;
-(BOOL)_registerRingerSwitchChangedNotifyToken;
-(long long)_silentModeStatusForRingerSwitchChangedNotifyToken:(int)arg1 ;
-(void)_cancelRingerSwitchChangedNotifyToken;
-(void)_updateSilentModeStatusUsingRingerSwitchChangedNotifyToken:(int)arg1 ;
-(void)_setSilentModeStatus:(long long)arg1 ;
-(long long)silentModeStatus;
@end
