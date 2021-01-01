/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class HMDCameraStreamMetrics;


@protocol HMDCameraStreamControlManagerProtocol <NSObject>
@property (nonatomic,readonly) HMDCameraStreamMetrics * streamMetrics; 
@required
-(void)startStream:(id)arg1;
-(void)updateAudioSetting:(unsigned long long)arg1;
-(void)updateAudioVolume:(id)arg1 callback:(/*^block*/id)arg2;
-(void)negotiateStream;
-(void)reconfigureStream:(id)arg1;
-(void)stopStream:(id)arg1;
-(void)remoteSetup:(id)arg1;
-(HMDCameraStreamMetrics *)streamMetrics;

@end

