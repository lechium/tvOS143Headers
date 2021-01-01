/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AXPineBoardServer.framework/AXPineBoardServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AXSystemAppServer <NSObject>
@optional
-(BOOL)isPasscodeLockVisible;
-(BOOL)isScreenshotWindowVisible;
-(BOOL)isLockScreenVisible;

@required
+(id)server;
-(int)pid;
-(long long)activeInterfaceOrientation;
-(BOOL)isMediaPlaying;
-(BOOL)isControlCenterVisible;
-(void)rebootDevice;
-(BOOL)isNonExclusiveSystemUIFocusableIncludingPIPWindow:(BOOL)arg1;
-(BOOL)isAppSwitcherVisible;
-(BOOL)isScreenSaverVisible;
-(BOOL)isNowPlayingUIVisible;
-(BOOL)isReceivingAirPlay;
-(BOOL)isSoftwareUpdateUIVisible;
-(BOOL)dismissSiri;
-(BOOL)isSiriVisible;
-(BOOL)isSiriTalkingOrListening;
-(void)wakeUpDeviceIfNecessary;
-(BOOL)isSystemSleeping;
-(void)pid:(/*^block*/id)arg1;
-(void)activeInterfaceOrientation:(/*^block*/id)arg1;
-(BOOL)isDockVisible;
-(BOOL)isNotificationCenterVisible;
-(BOOL)isNotificationVisible;

@end

