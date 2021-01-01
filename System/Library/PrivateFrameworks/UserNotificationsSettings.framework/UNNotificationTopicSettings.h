/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsSettings.framework/UserNotificationsSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserNotificationsSettings/UserNotificationsSettings-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UNNotificationTopic, UNNotificationSettings;

@interface UNNotificationTopicSettings : NSObject <NSCopying, NSSecureCoding> {

	UNNotificationTopic* _topic;
	UNNotificationSettings* _topicSettings;

}

@property (nonatomic,copy,readonly) UNNotificationTopic * topic;                         //@synthesize topic=_topic - In the implementation block
@property (nonatomic,copy,readonly) UNNotificationSettings * topicSettings;              //@synthesize topicSettings=_topicSettings - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UNNotificationTopic *)topic;
-(id)initWithTopic:(id)arg1 settings:(id)arg2 ;
-(UNNotificationSettings *)topicSettings;
@end

