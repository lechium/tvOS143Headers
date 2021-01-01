/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSNumber, NSString;

@interface HMDHomeMediaSettingsModel : HMDBackingStoreModelObject

@property (nonatomic,copy) NSNumber * minimumMediaUserPrivilege; 
@property (nonatomic,copy) NSNumber * mediaPeerToPeerEnabled; 
@property (nonatomic,copy) NSString * mediaPassword; 
+(id)properties;
+(id)modelIDForHome:(id)arg1 ;
+(id)defaultModelForHome:(id)arg1 ;
+(id)modelNamespace;
@end

