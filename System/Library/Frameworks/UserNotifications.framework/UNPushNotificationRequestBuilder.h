/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSString;

@interface UNPushNotificationRequestBuilder : NSObject {

	NSDictionary* _payload;
	NSString* _bundleIdentifier;
	NSString* _identifier;

}
-(id)initWithIdentifier:(id)arg1 payload:(id)arg2 bundleIdentifier:(id)arg3 ;
-(id)buildNotificationRequest;
-(id)buildSafePayload;
-(id)_sanitizeStringArray:(id)arg1 ;
-(id)_sanitizeAPSDictionary:(id)arg1 ;
-(id)_sanitizeAlert:(id)arg1 ;
-(id)_sanitizeSound:(id)arg1 ;
-(id)_sanitizeFlag:(id)arg1 ;
-(id)_sanitizeTopicIdentifier:(id)arg1 ;
-(id)_sanitizeLocalizationArgumentsArray:(id)arg1 ;
-(id)_sanitizeUnsignedInteger:(id)arg1 ;
-(id)_sanitizeVolume:(id)arg1 ;
@end

