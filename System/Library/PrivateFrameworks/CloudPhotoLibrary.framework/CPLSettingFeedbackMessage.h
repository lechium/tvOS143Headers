/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudPhotoLibrary/CPLFeedbackMessage.h>

@class NSString;

@interface CPLSettingFeedbackMessage : CPLFeedbackMessage {

	NSString* _settingName;
	NSString* _value;

}

@property (nonatomic,readonly) NSString * settingName;              //@synthesize settingName=_settingName - In the implementation block
@property (nonatomic,readonly) NSString * value;                    //@synthesize value=_value - In the implementation block
+(id)feedbackType;
-(NSString *)value;
-(id)serverMessage;
-(id)initWithSetting:(id)arg1 value:(id)arg2 ;
-(NSString *)settingName;
@end

