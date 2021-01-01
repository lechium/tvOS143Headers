/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:35 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSAction.h>

@class NSString, NSDate, NSData;

@interface UISActivityContinuationAction : BSAction

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * activityTypeIdentifier; 
@property (nonatomic,readonly) NSString * originatingDeviceType; 
@property (nonatomic,readonly) NSString * originatingDeviceName; 
@property (nonatomic,readonly) NSString * activityType; 
@property (nonatomic,readonly) NSDate * lastUpdateTime; 
@property (nonatomic,readonly) NSData * userActivityData; 
-(BOOL)isKindOfClass:(Class)arg1 ;
-(NSString *)identifier;
-(NSString *)activityType;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(NSDate *)lastUpdateTime;
-(NSData *)userActivityData;
-(NSString *)originatingDeviceName;
-(NSString *)originatingDeviceType;
-(long long)UIActionType;
-(NSString *)activityTypeIdentifier;
@end
