/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString;

@interface HMAccessorySetupCompletedInfo : NSObject <NSSecureCoding> {

	NSArray* _addedAccessoryUUIDs;
	NSString* _homeUUID;

}

@property (nonatomic,retain) NSArray * addedAccessoryUUIDs;              //@synthesize addedAccessoryUUIDs=_addedAccessoryUUIDs - In the implementation block
@property (nonatomic,retain) NSString * homeUUID;                        //@synthesize homeUUID=_homeUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)homeUUID;
-(NSArray *)addedAccessoryUUIDs;
-(id)initWithHome:(id)arg1 accessoryList:(id)arg2 ;
-(void)setAddedAccessoryUUIDs:(NSArray *)arg1 ;
-(void)setHomeUUID:(NSString *)arg1 ;
@end

