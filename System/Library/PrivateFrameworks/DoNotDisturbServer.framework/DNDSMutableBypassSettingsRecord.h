/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <DoNotDisturbServer/DNDSBypassSettingsRecord.h>

@class NSNumber, NSString;

@interface DNDSMutableBypassSettingsRecord : DNDSBypassSettingsRecord

@property (nonatomic,copy) NSNumber * immediateBypassEventSourceType; 
@property (nonatomic,copy) NSString * immediateBypassCNGroupIdentifier; 
@property (nonatomic,copy) NSNumber * repeatEventSourceBehaviorEnabledSetting; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setImmediateBypassEventSourceType:(NSNumber *)arg1 ;
-(void)setImmediateBypassCNGroupIdentifier:(NSString *)arg1 ;
-(void)setRepeatEventSourceBehaviorEnabledSetting:(NSNumber *)arg1 ;
@end

