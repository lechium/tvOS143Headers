/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:14 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MobileBackup/MBContainer.h>

@class NSString, NSDictionary, NSArray;

@interface MBAppPlugin : MBContainer

@property (nonatomic,readonly) NSString * bundleDir; 
@property (nonatomic,readonly) NSString * ownerBundleID; 
@property (nonatomic,readonly) NSDictionary * entitlements; 
@property (nonatomic,readonly) NSString * entitlementsRelativePath; 
@property (nonatomic,readonly) NSArray * groups; 
@property (nonatomic,readonly) NSArray * allAppGroupContainers; 
+(id)appPluginWithPropertyList:(id)arg1 ;
-(id)domain;
-(NSArray *)groups;
-(NSDictionary *)entitlements;
-(NSArray *)allAppGroupContainers;
-(NSString *)bundleDir;
-(NSString *)entitlementsRelativePath;
-(NSString *)ownerBundleID;
@end

