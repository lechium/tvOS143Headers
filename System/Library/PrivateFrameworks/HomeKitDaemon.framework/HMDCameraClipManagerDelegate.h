/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMDCameraClipManagerDelegate <NSObject>
@optional
-(void)clipManagerDidStart:(id)arg1;
-(void)clipManagerDidStartUpCloudZone:(id)arg1;
-(void)clipManagerDidStop:(id)arg1;
-(void)clipManager:(id)arg1 didUpdateSignificantEvent:(id)arg2 withHomePresence:(id)arg3;
-(void)clipManager:(id)arg1 didDeleteClipWithUUID:(id)arg2;
-(void)clipManagerDidDisableCloudStorage:(id)arg1;

@end

