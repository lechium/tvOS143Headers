/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSNumber;


@protocol HMDCameraRemoteStreamSenderProtocol <HMDCameraRemoteStreamProtocol>
@property (nonatomic,readonly) NSNumber * mtu; 
@optional
-(void)startPacketRelayWithIDSDeviceSession:(id)arg1 cameraVideoSSRC:(unsigned)arg2 cameraAudioSSRC:(unsigned)arg3;

@required
-(NSNumber *)mtu;
-(void)openRelaySession;
-(void)startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned)arg6;

@end

