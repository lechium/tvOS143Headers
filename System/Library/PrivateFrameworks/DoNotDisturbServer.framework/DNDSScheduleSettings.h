/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturb/DNDScheduleSettings.h>

@class NSDate;

@interface DNDSScheduleSettings : DNDScheduleSettings {

	NSDate* _creationDate;

}

@property (nonatomic,copy,readonly) NSDate * creationDate;              //@synthesize creationDate=_creationDate - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)settingsForRecord:(id)arg1 ;
+(id)defaultScheduleSettings;
+(id)settingsWithClientSettings:(id)arg1 creationDate:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)creationDate;
-(id)replacementObjectForCoder:(id)arg1 ;
-(id)makeRecord;
-(id)initWithScheduleEnabledSetting:(unsigned long long)arg1 timePeriod:(id)arg2 bedtimeBehaviorEnabledSetting:(unsigned long long)arg3 creationDate:(id)arg4 ;
@end

