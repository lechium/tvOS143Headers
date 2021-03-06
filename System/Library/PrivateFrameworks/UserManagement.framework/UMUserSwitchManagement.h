/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UMUserSwitchManagement <NSObject>
@required
-(void)switchToLoginUserWithCompletionHandler:(/*^block*/id)arg1;
-(void)switchToLoginUserWithError:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)logoutToLoginSessionWithCompletionHandler:(/*^block*/id)arg1;
-(void)directSwitchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 preferences:(id)arg4 completionHandler:(/*^block*/id)arg5;
-(void)loginUICheckInWithCompletionHandler:(/*^block*/id)arg1;
-(void)registerUserSwitchStakeHolder:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)registerUserSyncStakeholder:(id)arg1 withMachServiceName:(id)arg2;
-(void)unregisterStakeHolder:(id)arg1 status:(unsigned long long)arg2 reason:(id)arg3;
-(void)terminateSyncWithCompletionHandler:(/*^block*/id)arg1;
-(void)resumeSync;
-(void)switchToUser:(id)arg1 passcodeData:(id)arg2 context:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)registerUserSwitchStakeHolder:(id)arg1;

@end

