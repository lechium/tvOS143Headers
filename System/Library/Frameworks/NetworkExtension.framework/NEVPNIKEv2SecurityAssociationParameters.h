/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:16 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEVPNIKEv2SecurityAssociationParameters : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	int _lifetimeMinutes;
	long long _encryptionAlgorithm;
	long long _integrityAlgorithm;
	long long _diffieHellmanGroup;

}

@property (assign) long long encryptionAlgorithm;              //@synthesize encryptionAlgorithm=_encryptionAlgorithm - In the implementation block
@property (assign) long long integrityAlgorithm;               //@synthesize integrityAlgorithm=_integrityAlgorithm - In the implementation block
@property (assign) long long diffieHellmanGroup;               //@synthesize diffieHellmanGroup=_diffieHellmanGroup - In the implementation block
@property (assign) int lifetimeMinutes;                        //@synthesize lifetimeMinutes=_lifetimeMinutes - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyDictionary;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(long long)diffieHellmanGroup;
-(void)setEncryptionAlgorithm:(long long)arg1 ;
-(void)setIntegrityAlgorithm:(long long)arg1 ;
-(void)setDiffieHellmanGroup:(long long)arg1 ;
-(void)setLifetimeMinutes:(int)arg1 ;
-(int)lifetimeMinutes;
-(long long)encryptionAlgorithm;
-(long long)integrityAlgorithm;
@end

