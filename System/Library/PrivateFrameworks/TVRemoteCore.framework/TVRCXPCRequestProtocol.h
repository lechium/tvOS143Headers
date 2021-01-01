/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TVRCXPCRequestProtocol <NSObject>
@required
-(void)fulfillAuthChallengeForDeviceWithIdentifier:(id)arg1 withLocallyEnteredCode:(id)arg2;
-(void)cancelAuthChallengeForDeviceWithIdentifier:(id)arg1;
-(void)openConnectionToDeviceWithIdentifier:(id)arg1;
-(void)closeConnectionToDeviceWithIdentifier:(id)arg1 withType:(unsigned long long)arg2;
-(void)sendButtonEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2;
-(void)sendTouchEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2;
-(void)sendGameControllerEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2;
-(void)sendInputText:(id)arg1 toDeviceWithIdentifier:(id)arg2;
-(void)sendInputReturnKeyToDeviceWithIdentifier:(id)arg1;
-(void)sendInputTextPayload:(id)arg1 toDeviceWithIdentifier:(id)arg2;
-(void)setVoiceRecorderAutomaticRecording:(BOOL)arg1 forDeviceWithIdentifier:(id)arg2;
-(void)startVoiceRecordingForDeviceWithIdentifier:(id)arg1;
-(void)stopVoiceRecordingForDeviceWithIdentifier:(id)arg1;
-(void)beginDeviceQuery;
-(void)endDeviceQuery;
-(void)fetchActiveMREndpointUIDWithCompletion:(/*^block*/id)arg1;
-(void)sendEvent:(id)arg1 toDeviceWithIdentifier:(id)arg2 options:(id)arg3 response:(/*^block*/id)arg4;

@end

