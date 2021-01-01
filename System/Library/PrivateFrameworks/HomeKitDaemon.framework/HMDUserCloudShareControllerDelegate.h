/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMDUserCloudShareControllerDelegate <NSObject>
@required
-(void)userCloudShareController:(id)arg1 sendShareRequestMessageWithConnection:(id)arg2 fromUser:(id)arg3 toUser:(id)arg4 home:(id)arg5 shareURL:(id)arg6 shareToken:(id)arg7 containerID:(id)arg8 completion:(/*^block*/id)arg9;
-(void)userCloudShareController:(id)arg1 sendRepairInfo:(id)arg2 toConnection:(id)arg3 home:(id)arg4 containerID:(id)arg5;
-(void)userCloudShareController:(id)arg1 wakeClientWithContainerID:(id)arg2;
-(void)userCloudShareController:(id)arg1 wakeClientForRepairWithContainerID:(id)arg2;
-(id)userCloudShareController:(id)arg1 timerWithInterval:(double)arg2;
-(id)currentDateForUserCloudShareController:(id)arg1;

@end

