/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HMBModel.h>

@class NSData;

@interface HMDPersonSettingsModel : HMBModel

@property (retain) NSData * classificationNotificationSettingsData; 
+(id)sentinelParentUUID;
+(id)hmbProperties;
+(BOOL)hmbExcludeFromCloudStorage;
+(id)sentinelModelUUID;
-(id)init;
-(id)classificationNotificationsEnabledForPersonUUID:(id)arg1 ;
-(void)setClassificationNotificationsEnabled:(id)arg1 forPersonUUID:(id)arg2 ;
-(id)unarchivedClassificationNotificationsEnabledForPersonUUID;
-(void)archiveClassificationNotificationsEnabledForPersonUUID:(id)arg1 ;
@end

