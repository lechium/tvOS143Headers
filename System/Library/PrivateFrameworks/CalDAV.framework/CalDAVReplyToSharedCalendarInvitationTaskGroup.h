/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVTaskGroup.h>
#import <libobjc.A.dylib/CoreDAVPostTaskDelegate.h>

@class NSURL, CalDAVCalendarServerInviteNotificationItem, NSString;

@interface CalDAVReplyToSharedCalendarInvitationTaskGroup : CoreDAVTaskGroup <CoreDAVPostTaskDelegate> {

	BOOL _acceptInvitation;
	NSURL* _sharedAs;
	CalDAVCalendarServerInviteNotificationItem* _invitation;
	NSURL* _calendarHomeURL;

}

@property (nonatomic,retain) CalDAVCalendarServerInviteNotificationItem * invitation;              //@synthesize invitation=_invitation - In the implementation block
@property (assign,nonatomic) BOOL acceptInvitation;                                                //@synthesize acceptInvitation=_acceptInvitation - In the implementation block
@property (nonatomic,retain) NSURL * calendarHomeURL;                                              //@synthesize calendarHomeURL=_calendarHomeURL - In the implementation block
@property (assign,nonatomic) id<CoreDAVTaskGroupDelegate> delegate; 
@property (nonatomic,retain) NSURL * sharedAs;                                                     //@synthesize sharedAs=_sharedAs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)acceptInvitation;
-(id)initWithAccountInfoProvider:(id)arg1 taskManager:(id)arg2 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(CalDAVCalendarServerInviteNotificationItem *)invitation;
-(void)setInvitation:(CalDAVCalendarServerInviteNotificationItem *)arg1 ;
-(void)setCalendarHomeURL:(NSURL *)arg1 ;
-(void)setAcceptInvitation:(BOOL)arg1 ;
-(id)generateReply;
-(NSURL *)calendarHomeURL;
-(void)setSharedAs:(NSURL *)arg1 ;
-(id)initWithInvitation:(id)arg1 acceptInvitation:(BOOL)arg2 atCalendarHomeURL:(id)arg3 accountInfoProvider:(id)arg4 taskManager:(id)arg5 ;
-(NSURL *)sharedAs;
@end

