/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID, NSMutableArray, NSArray;

@interface HMSettingGroup : NSObject <NSSecureCoding> {

	NSString* _keyPath;
	NSUUID* _identifier;
	NSString* _name;
	NSMutableArray* _internalSettings;
	NSMutableArray* _internalGroups;

}

@property (copy,readonly) NSUUID * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSString * keyPath;                               //@synthesize keyPath=_keyPath - In the implementation block
@property (copy,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (retain) NSMutableArray * internalSettings;              //@synthesize internalSettings=_internalSettings - In the implementation block
@property (retain) NSMutableArray * internalGroups;                //@synthesize internalGroups=_internalGroups - In the implementation block
@property (copy,readonly) NSString * localizedTitle; 
@property (copy,readonly) NSArray * settings; 
@property (copy,readonly) NSArray * groups; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSString *)keyPath;
-(NSArray *)groups;
-(NSArray *)settings;
-(NSString *)localizedTitle;
-(void)setKeyPath:(NSString *)arg1 ;
-(void)merge:(id)arg1 ;
-(void)addGroup:(id)arg1 ;
-(void)addSetting:(id)arg1 ;
-(NSMutableArray *)internalGroups;
-(NSMutableArray *)internalSettings;
-(id)initWithIdentifier:(id)arg1 name:(id)arg2 groups:(id)arg3 settings:(id)arg4 ;
-(void)setInternalSettings:(NSMutableArray *)arg1 ;
-(void)setInternalGroups:(NSMutableArray *)arg1 ;
@end

