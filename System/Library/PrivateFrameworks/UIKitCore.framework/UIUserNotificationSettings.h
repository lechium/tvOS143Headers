/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet;

@interface UIUserNotificationSettings : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _types;
	NSSet* _categories;

}

@property (nonatomic,readonly) unsigned long long types;              //@synthesize types=_types - In the implementation block
@property (nonatomic,copy,readonly) NSSet * categories;               //@synthesize categories=_categories - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)settingsForTypes:(unsigned long long)arg1 categories:(id)arg2 ;
+(id)settingsForUserNotificationTypes:(unsigned long long)arg1 userNotificationActionSettings:(id)arg2 ;
+(id)settingsForRegisteredSettings:(id)arg1 requestedSettings:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSSet *)categories;
-(unsigned long long)types;
-(id)validatedSettings;
-(id)initWithUserNotificationTypes:(unsigned long long)arg1 userNotificationActionSettings:(id)arg2 ;
-(id)initWithTypes:(unsigned long long)arg1 categories:(id)arg2 ;
-(BOOL)mayPresentUserNotificationOfType:(unsigned long long)arg1 ;
-(unsigned long long)allowedUserNotificationTypes;
-(id)userNotificationActionSettings;
@end

