/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADCalendarToolInterface.h>

@class NSString;

@interface CADCalendarToolOperationGroup : CADOperationGroup <CADCalendarToolInterface>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg1 ;
-(void)CADPurgeChangeTrackingReply:(/*^block*/id)arg1 ;
-(void)CADPostSyntheticRouteHypothesis:(id)arg1 forEventWithExternalURL:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

