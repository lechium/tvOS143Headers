/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AFServiceHelper <NSObject>
@optional
-(void)fetchContextsForKeys:(id)arg1 includesNearbyDevices:(BOOL)arg2 completion:(/*^block*/id)arg3;

@required
-(BOOL)isDeviceInStarkMode;
-(void)dismissAssistant;
-(void)prepareForAudioHandoffWithCompletion:(/*^block*/id)arg1;
-(void)prepareForAudioHandoffFailedWithCompletion:(/*^block*/id)arg1;
-(void)handleCommand:(id)arg1 completion:(/*^block*/id)arg2;
-(BOOL)openSensitiveURL:(id)arg1;
-(id)assistantLocalizedStringForKey:(id)arg1 table:(id)arg2 bundle:(id)arg3;
-(BOOL)isDeviceLockedWithPasscode;
-(BOOL)isDeviceInCarDND;
-(BOOL)isTimeoutSuspended;
-(id)peerInfoForCurrentCommand;

@end

