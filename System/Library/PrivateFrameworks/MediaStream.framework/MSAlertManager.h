/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <MediaStream/MediaStream-Structs.h>
@class NSMutableDictionary;

@interface MSAlertManager : NSObject {

	NSMutableDictionary* _personIDToNotification;

}
+(id)sharedAlertManager;
-(id)init;
-(void)_userDidRespondToNotification:(CFUserNotificationRef)arg1 info:(id)arg2 responseFlags:(unsigned long long)arg3 ;
-(void)_dismissNotificationForPersonID:(id)arg1 ;
-(void)_showNotificationInfo:(id)arg1 ;
-(void)displayAlertForPersonID:(id)arg1 notificationDict:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

