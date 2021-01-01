/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreWiFi/CoreWiFi-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CWFEAPCredentials : NSObject <NSCopying, NSSecureCoding> {

	void* _TLSIdentityHandle;
	NSString* _username;
	NSString* _password;

}

@property (nonatomic,copy) NSString * username;                        //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * password;                        //@synthesize password=_password - In the implementation block
@property (nonatomic,copy) SecIdentityRef TLSIdentity; 
@property (nonatomic,copy) const void* TLSIdentityHandle; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)password;
-(NSString *)username;
-(void)setPassword:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(SecIdentityRef)TLSIdentity;
-(void)setTLSIdentity:(SecIdentityRef)arg1 ;
-(BOOL)isEqualToEAPCredentials:(id)arg1 ;
-(const void*)TLSIdentityHandle;
-(void)setTLSIdentityHandle:(const void*)arg1 ;
@end

