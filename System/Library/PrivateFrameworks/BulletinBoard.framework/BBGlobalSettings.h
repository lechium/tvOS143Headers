/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface BBGlobalSettings : NSObject <NSCopying, NSSecureCoding> {

	long long _globalContentPreviewSetting;
	long long _globalSpokenNotificationSetting;

}

@property (assign,nonatomic) long long globalContentPreviewSetting;                  //@synthesize globalContentPreviewSetting=_globalContentPreviewSetting - In the implementation block
@property (assign,nonatomic) long long globalSpokenNotificationSetting;              //@synthesize globalSpokenNotificationSetting=_globalSpokenNotificationSetting - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithContentPreviewSetting:(long long)arg1 spokenNotificationSetting:(long long)arg2 ;
-(long long)globalContentPreviewSetting;
-(void)setGlobalContentPreviewSetting:(long long)arg1 ;
-(long long)globalSpokenNotificationSetting;
-(void)setGlobalSpokenNotificationSetting:(long long)arg1 ;
@end

