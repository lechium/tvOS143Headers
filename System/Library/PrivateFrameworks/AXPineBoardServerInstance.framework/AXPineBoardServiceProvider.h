/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AXPineBoardServerInstance.framework/AXPineBoardServerInstance
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AXPineBoardServerInstance/AXSystemAppServer.h>

@class NSString;

@interface AXPineBoardServiceProvider : NSObject <AXSystemAppServer>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)server;
-(id)init;
-(int)pid;
-(long long)activeInterfaceOrientation;
-(BOOL)isMediaPlaying;
-(BOOL)isControlCenterVisible;
-(void)rebootDevice;
-(BOOL)isNonExclusiveSystemUIFocusableIncludingPIPWindow:(BOOL)arg1 ;
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
-(void)pid:(/*^block*/id)arg1 ;
-(void)activeInterfaceOrientation:(/*^block*/id)arg1 ;
-(BOOL)isDockVisible;
-(BOOL)isNotificationCenterVisible;
-(BOOL)isNotificationVisible;
-(BOOL)isSideSwitcherVisible;
-(BOOL)isStickyNotificationVisible;
-(id)_pbApp;
-(BOOL)openSiri;
@end
