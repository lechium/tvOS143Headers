/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:30 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HomeKitDaemon/HMDDatabaseZoneManagerConfiguration.h>

@class NSSet, HMDHomeKitVersion, HMBCloudZoneConfiguration;

@interface HMDMutableDatabaseZoneManagerConfiguration : HMDDatabaseZoneManagerConfiguration

@property (getter=isZoneOwner) BOOL zoneOwner; 
@property (assign) BOOL shouldCreateZone; 
@property (copy) NSSet * externalRecordTypesForSubscriptions; 
@property (copy) HMDHomeKitVersion * minimumHomeKitVersion; 
@property (copy) NSSet * requiredSupportedFeatures; 
@property (copy) HMBCloudZoneConfiguration * cloudZoneConfiguration; 
-(id)copyWithZone:(NSZone*)arg1 ;
@end

