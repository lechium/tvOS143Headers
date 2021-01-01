/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMFSoftwareVersion;

@interface HMFProductInfo : HMFObject <NSCopying, NSSecureCoding> {

	long long _productPlatform;
	long long _productClass;
	long long _productVariant;
	HMFSoftwareVersion* _softwareVersion;

}

@property (readonly) long long productPlatform;                                   //@synthesize productPlatform=_productPlatform - In the implementation block
@property (readonly) long long productClass;                                      //@synthesize productClass=_productClass - In the implementation block
@property (readonly) long long productVariant;                                    //@synthesize productVariant=_productVariant - In the implementation block
@property (nonatomic,readonly) HMFSoftwareVersion * softwareVersion;              //@synthesize softwareVersion=_softwareVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(id)productInfo;
+(id)decodeSoftwareVersionWithCoder:(id)arg1 ;
+(void)encodeSoftwareVersion:(id)arg1 withCoder:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)productClass;
-(id)shortDescription;
-(HMFSoftwareVersion *)softwareVersion;
-(long long)productPlatform;
-(long long)productVariant;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(id)initWithPlatform:(long long)arg1 class:(long long)arg2 variant:(long long)arg3 softwareVersion:(id)arg4 ;
-(id)initWithPlatform:(long long)arg1 class:(long long)arg2 softwareVersion:(id)arg3 ;
@end

