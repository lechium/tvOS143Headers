/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject;

@interface AVTelephonyInterface : NSObject {

	id _delegate;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	CTServerConnectionRef _connection;

}

@property (assign) id<AVTelephonyInterfaceDelegate> delegate; 
-(id)init;
-(void)dealloc;
-(id<AVTelephonyInterfaceDelegate>)delegate;
-(void)setDelegate:(id<AVTelephonyInterfaceDelegate>)arg1 ;
-(BOOL)registerForNotifications;
-(void)unregisterForNotifications;
-(void)notifyCTCurrentAudioPayload:(int)arg1 mode:(int)arg2 bitrate:(unsigned)arg3 ;
-(void)handleTelephonyNotification:(id)arg1 withInfo:(id)arg2 ;
-(void)handleVocoderNotificationWithInfo:(id)arg1 ;
-(id)translateVocoderTypeToCoreAudioType:(id)arg1 ;
@end

