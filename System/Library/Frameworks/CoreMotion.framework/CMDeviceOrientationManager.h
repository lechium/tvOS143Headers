/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:42 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreMotion/CoreMotion-Structs.h>
@interface CMDeviceOrientationManager : NSObject {

	id _internal;

}
+(BOOL)isAvailable;
+(void)dummySelector:(id)arg1 ;
+(BOOL)isAlwaysOn;
-(id)init;
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)startDeviceOrientationUpdatesToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)deviceOrientationBlocking;
-(void)stopDeviceOrientationUpdates;
-(id)initPrivate;
-(void)deallocPrivate;
-(void)onDeviceOrientation:(const Sample*)arg1 ;
-(void)onMotionPreferencesUpdated;
-(void)stopDeviceOrientationUpdatesPrivate;
-(void)onNotification:(id)arg1 ;
-(void)setDeviceOrientationCallbackModePrivate:(int)arg1 ;
-(void)startDeviceOrientationUpdatesPrivateToQueue:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)isDeviceOrientationAvailable;
-(void)signalAndReleaseSemaphoreIfNecessaryPrivate;
-(void)updateAggregateDictionaryPrivate;
-(BOOL)orientationNotificationsDisabled;
-(id)stringForOrientation:(int)arg1 ;
-(BOOL)isDeviceOrientationActive;
@end

