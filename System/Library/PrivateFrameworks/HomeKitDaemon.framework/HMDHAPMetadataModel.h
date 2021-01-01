/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:26 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSNumber, NSDictionary, NSData;

@interface HMDHAPMetadataModel : HMDBackingStoreModelObject

@property (nonatomic,retain) NSNumber * metadataVersion; 
@property (nonatomic,retain) NSNumber * schemaVersion; 
@property (nonatomic,retain) NSDictionary * rawPlist; 
@property (nonatomic,retain) NSData * legacyIDSData; 
@property (nonatomic,retain) NSData * legacyCloudData; 
+(id)properties;
+(id)metadataModelObjectUUID;
+(id)modelWithDictionary:(id)arg1 ;
+(id)allowedTypes;
-(id)metadataDictionary;
@end
