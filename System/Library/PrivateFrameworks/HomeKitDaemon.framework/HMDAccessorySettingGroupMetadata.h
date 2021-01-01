/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:27 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFObject.h>

@class NSString, NSArray;

@interface HMDAccessorySettingGroupMetadata : HMFObject <HMFObject> {

	NSString* _name;
	NSString* _keyPath;
	NSArray* _groups;
	NSArray* _settings;

}

@property (copy,readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSString * keyPath;                                     //@synthesize keyPath=_keyPath - In the implementation block
@property (copy,readonly) NSArray * groups;                                       //@synthesize groups=_groups - In the implementation block
@property (copy,readonly) NSArray * settings;                                     //@synthesize settings=_settings - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)groupsWithArrayRepresenation:(id)arg1 parentKeyPath:(id)arg2 ;
+(id)groupWithDictonaryRepresentation:(id)arg1 parentKeyPath:(id)arg2 ;
-(NSString *)name;
-(NSString *)keyPath;
-(NSArray *)groups;
-(NSArray *)settings;
-(NSString *)propertyDescription;
-(id)initWithName:(id)arg1 settings:(id)arg2 groups:(id)arg3 ;
-(id)initWithName:(id)arg1 settings:(id)arg2 groups:(id)arg3 parentKeyPath:(id)arg4 ;
-(id)modelsWithParentIdentifier:(id)arg1 ;
@end

