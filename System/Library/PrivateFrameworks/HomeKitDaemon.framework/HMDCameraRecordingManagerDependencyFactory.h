/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HMFPreferences;

@interface HMDCameraRecordingManagerDependencyFactory : HMFObject

@property (readonly) HMFPreferences * preferences; 
-(HMFPreferences *)preferences;
-(id)createSessionNotificationTrigger:(id)arg1 workQueue:(id)arg2 ;
-(id)createSettingsControl:(id)arg1 accessory:(id)arg2 managementService:(id)arg3 ;
-(id)createBulkSendSessionInitiatorWithWorkQueue:(id)arg1 accessory:(id)arg2 ;
-(id)createDataSource;
-(id)createSignificantEventServerWithWorkQueue:(id)arg1 camera:(id)arg2 ;
-(id)createRecordingSessionWithWorkQueue:(id)arg1 camera:(id)arg2 configuredFragmentDuration:(double)arg3 timelineManager:(id)arg4 significantEventServer:(id)arg5 homePresenceByPairingIdentity:(id)arg6 ;
-(id)createTimerWithTimeInterval:(double)arg1 ;
-(id)createRecordingSessionRetryContextWithWorkQueue:(id)arg1 homePresenceByPairingIdentity:(id)arg2 ;
@end

