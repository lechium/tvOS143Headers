/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol IMCloudKitEventHandler <NSObject>
@optional
-(void)cloudKitEventNotificationManager:(id)arg1 syncStateDidChange:(id)arg2;
-(void)cloudKitEventNotificationManager:(id)arg1 didChangeEnabled:(BOOL)arg2 error:(id)arg3;
-(void)cloudKitEventNotificationManager:(id)arg1 didDisableAllDevices:(BOOL)arg2 error:(id)arg3;
-(void)cloudKitEventNotificationManager:(id)arg1 didPerformAdditionalStorageRequiredCheck:(BOOL)arg2 additionalStorageRequired:(unsigned long long)arg3 forAccountId:(id)arg4 error:(id)arg5;
-(void)cloudKitEventNotificationManager:(id)arg1 didFetchSyncStatistics:(id)arg2 error:(id)arg3;
-(void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2;

@end

