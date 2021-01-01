/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMHome, NSString, HMAccessoryCategory, NSUUID, HMSetupAccessoryDescription;

@interface HMAddAccessoryRequest : NSObject <NSSecureCoding> {

	BOOL _requiresSetupPayloadURL;
	BOOL _requiresOwnershipToken;
	HMHome* _home;
	NSString* _accessoryName;
	HMAccessoryCategory* _accessoryCategory;
	NSUUID* _requestIdentifier;
	HMSetupAccessoryDescription* _accessoryDescription;

}

@property (nonatomic,retain) HMHome * home;                                                   //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) NSUUID * requestIdentifier;                                    //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,retain) HMSetupAccessoryDescription * accessoryDescription;              //@synthesize accessoryDescription=_accessoryDescription - In the implementation block
@property (nonatomic,readonly) NSString * accessoryName;                                      //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,readonly) HMAccessoryCategory * accessoryCategory;                       //@synthesize accessoryCategory=_accessoryCategory - In the implementation block
@property (nonatomic,readonly) BOOL requiresSetupPayloadURL;                                  //@synthesize requiresSetupPayloadURL=_requiresSetupPayloadURL - In the implementation block
@property (nonatomic,readonly) BOOL requiresOwnershipToken;                                   //@synthesize requiresOwnershipToken=_requiresOwnershipToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)requestIdentifier;
-(NSString *)accessoryName;
-(HMHome *)home;
-(void)setHome:(HMHome *)arg1 ;
-(HMAccessoryCategory *)accessoryCategory;
-(void)setAccessoryDescription:(HMSetupAccessoryDescription *)arg1 ;
-(HMSetupAccessoryDescription *)accessoryDescription;
-(BOOL)requiresSetupPayloadURL;
-(id)payloadWithOwnershipToken:(id)arg1 ;
-(id)payloadWithURL:(id)arg1 ownershipToken:(id)arg2 ;
-(id)initWithIdentifer:(id)arg1 accessoryName:(id)arg2 accessoryCategory:(id)arg3 ;
-(BOOL)requiresOwnershipToken;
@end

