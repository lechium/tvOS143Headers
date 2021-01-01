/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CalendarDaemon/CalendarDaemon-Structs.h>
@interface CADNotificationUtilities : NSObject
+(int)CADDatabaseGetEventNotificationItemsWithDatabase:(CalDatabase*)arg1 forSourceWithExternalIdentifier:(id)arg2 excludingDelegateSources:(BOOL)arg3 filteredByShowsNotificationsFlag:(BOOL)arg4 earliestExpirationDate:(id*)arg5 notificationTypes:(id*)arg6 rowIDs:(id*)arg7 occurrenceDates:(id*)arg8 ;
+(BOOL)storeIsReadOnlyDelegate:(const void*)arg1 ;
+(int)_gatherEventInvitationsAndRepliesWithContext:(id)arg1 ;
+(int)_gatherSharedCalendarInvitationsWithContext:(id)arg1 ;
+(int)_gatherSharedCalendarResponsesAndResourceChangesWithContext:(id)arg1 ;
+(void)_logNotificationCountsForNotificationTypes:(id)arg1 ;
+(int)_gatherSharedCalendarInviteReplyNotification:(const void*)arg1 withContext:(id)arg2 ;
+(int)_gatherSharedCalendarResourceChangeNotification:(const void*)arg1 withContext:(id)arg2 ;
+(int)_gatherSuggestionResourceChangeNotification:(const void*)arg1 withContext:(id)arg2 ;
+(BOOL)_storeIsDelegate:(const void*)arg1 ;
+(id)_stringForNotificationType:(int)arg1 ;
@end

