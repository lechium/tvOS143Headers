/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ENCypher.h>

@class IDSMPPublicLegacyIdentity, NSString;

@interface IDSLegacyDeviceMessageProtectionCypher : NSObject <ENCypher> {

	IDSMPPublicLegacyIdentity* _publicIdentity;

}

@property (nonatomic,readonly) IDSMPPublicLegacyIdentity * publicIdentity;              //@synthesize publicIdentity=_publicIdentity - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)cypherWithEndpoint:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(IDSMPPublicLegacyIdentity *)publicIdentity;
-(id)cypherData:(id)arg1 withAccountIdentity:(id)arg2 identifier:(id*)arg3 error:(id*)arg4 ;
-(id)decypherData:(id)arg1 withAccountIdentity:(id)arg2 signingDevicePublicKey:(id)arg3 identifier:(id)arg4 error:(id*)arg5 ;
-(id)initWithPublicIdentity:(id)arg1 ;
-(id)_fullIdentityFromAccountIdentity:(id)arg1 error:(id*)arg2 ;
@end

