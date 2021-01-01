/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:02 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSString;

@interface DMFControlGroupIdentifier : NSObject <NSCopying, NSSecureCoding> {

	unsigned short _groupID;
	NSUUID* _organizationUUID;

}

@property (nonatomic,copy,readonly) NSUUID * organizationUUID;              //@synthesize organizationUUID=_organizationUUID - In the implementation block
@property (nonatomic,readonly) unsigned short groupID;                      //@synthesize groupID=_groupID - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue; 
+(id)new;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)stringValue;
-(id)initWithString:(id)arg1 ;
-(unsigned short)groupID;
-(id)initWithOrganizationUUID:(id)arg1 groupID:(unsigned short)arg2 ;
-(NSUUID *)organizationUUID;
-(BOOL)isEqualToGroupIdentifier:(id)arg1 ;
@end

