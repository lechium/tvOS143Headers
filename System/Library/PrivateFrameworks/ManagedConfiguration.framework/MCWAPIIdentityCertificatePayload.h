/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <ManagedConfiguration/MCCertificatePayload.h>

@class NSData;

@interface MCWAPIIdentityCertificatePayload : MCCertificatePayload {

	NSData* _pemData;

}

@property (nonatomic,retain,readonly) NSData * pemData;              //@synthesize pemData=_pemData - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)verboseDescription;
-(SecCertificateRef)copyCertificate;
-(BOOL)isIdentity;
-(SecIdentityRef)copyIdentityFromKeychain;
-(NSData *)pemData;
@end

