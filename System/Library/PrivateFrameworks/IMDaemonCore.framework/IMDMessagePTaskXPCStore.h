/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IMDaemonCore/IMDMessagePTaskStore.h>

@class NSString;

@interface IMDMessagePTaskXPCStore : NSObject <IMDMessagePTaskStore>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)loadMostRecentMessagePTasks;
-(BOOL)deleteAllCompletedTasks;
-(BOOL)updateTaskFlagsForPTask:(id)arg1 ;
-(BOOL)storePTask:(id)arg1 ;
-(BOOL)_networkCall_InsertRowGuid:(id)arg1 taskFlags:(long long)arg2 ;
-(id)_networkCall_IMDMessagePTaskSelectWithLimit:(long long)arg1 ;
-(BOOL)_networkCall_IMDMessagePTaskDeleteAllCompletedTask;
-(BOOL)_networkCall_IMDMessagePTaskUpdateTaskFlagsForGUID:(id)arg1 taskFlags:(long long)arg2 ;
@end
