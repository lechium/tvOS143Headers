/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EKObjectChange.h>

@interface EKNotificationChange : EKObjectChange
+(int)entityType;
+(void)fetchNotificationChangesInStore:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchNotificationChangesInSource:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchNotificationChangesInCalendar:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
@end
