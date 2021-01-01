/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:44 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKit/EKCalendarNotification.h>

@interface EKCalendarInviteReplyNotification : EKCalendarNotification {

	unsigned long long _status;
	unsigned long long _allowedEntityTypes;

}

@property (assign,nonatomic) unsigned long long status;                          //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned long long allowedEntityTypes;              //@synthesize allowedEntityTypes=_allowedEntityTypes - In the implementation block
-(id)initWithType:(long long)arg1 ;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
-(unsigned long long)allowedEntityTypes;
-(void)setAllowedEntityTypes:(unsigned long long)arg1 ;
-(BOOL)acknowledgeWithEventStore:(id)arg1 error:(id*)arg2 ;
-(id)inviteReplyNotificationFromEventStore:(id)arg1 ;
@end

