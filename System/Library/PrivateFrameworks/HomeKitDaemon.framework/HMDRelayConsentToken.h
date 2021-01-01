/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HMDHAPAccessory, HMDUser, NSData, NSDate;

@interface HMDRelayConsentToken : HMFObject <NSSecureCoding> {

	NSUUID* _accessoryIdentifier;
	NSUUID* _userIdentifier;
	NSUUID* _identifier;
	HMDHAPAccessory* _accessory;
	HMDUser* _user;
	NSData* _consentToken;
	NSDate* _expirationDate;

}

@property (assign,nonatomic,__weak) HMDHAPAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (assign,nonatomic,__weak) HMDUser * user;                           //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSUUID * accessoryIdentifier;                  //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * userIdentifier;                         //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * consentToken;                    //@synthesize consentToken=_consentToken - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                       //@synthesize expirationDate=_expirationDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)userIdentifier;
-(HMDUser *)user;
-(NSUUID *)identifier;
-(NSDate *)expirationDate;
-(void)setUser:(HMDUser *)arg1 ;
-(void)setUserIdentifier:(NSUUID *)arg1 ;
-(HMDHAPAccessory *)accessory;
-(void)setAccessory:(HMDHAPAccessory *)arg1 ;
-(NSUUID *)accessoryIdentifier;
-(void)configureWithHome:(id)arg1 ;
-(id)initWithConsentToken:(id)arg1 expiration:(id)arg2 accessory:(id)arg3 user:(id)arg4 ;
-(NSData *)consentToken;
@end

