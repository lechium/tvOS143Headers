/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CADReminderInterface
@required
-(void)CADDatabaseGetDefaultCalendarForNewRemindersWithReply:(/*^block*/id)arg1;
-(void)CADDatabaseSetDefaultCalendarForNewReminders:(id)arg1;
-(void)CADDatabaseGetCountOfRemindersWithPredicate:(id)arg1 reply:(/*^block*/id)arg2;
-(void)CADDatabaseGetProperties:(id)arg1 forReminders:(id)arg2 reply:(/*^block*/id)arg3;
-(void)CADScheduledTaskCacheGetDaysAndTaskCounts:(/*^block*/id)arg1;

@end

