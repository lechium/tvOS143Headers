/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMHomeManagerDelegatePrivate <HMHomeManagerDelegate>
@optional
-(void)homeManager:(id)arg1 didUpdateStateForIncomingInvitations:(id)arg2;
-(void)homeManagerDidUpdateApplicationData:(id)arg1;
-(void)homeManagerDidUpdateCurrentHome:(id)arg1;
-(void)homeManagerDidUpdateDataSyncInProgress:(id)arg1;
-(void)homeManagerDidUpdateDataSyncState:(id)arg1;
-(void)homeManager:(id)arg1 didUpdateStatus:(unsigned long long)arg2;
-(void)homeManager:(id)arg1 didUpdateResidentEnabledForThisDevice:(BOOL)arg2;
-(void)homeManager:(id)arg1 didUpdateAccessAllowedWhenLocked:(BOOL)arg2;
-(void)homeManager:(id)arg1 didUpdateThisDeviceIsResidentCapable:(BOOL)arg2;
-(void)homeManager:(id)arg1 residentProvisioningStatusChanged:(unsigned long long)arg2;
-(void)homeManagerWillStartBatchNotifications:(id)arg1;
-(void)homeManagerDidEndBatchNotifications:(id)arg1;
-(void)homeManager:(id)arg1 didUpdateMultiUserStatus:(long long)arg2 reason:(id)arg3;

@end
