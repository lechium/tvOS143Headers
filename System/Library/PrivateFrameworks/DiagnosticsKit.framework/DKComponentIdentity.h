/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DiagnosticsKit/DiagnosticsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, DKCanonicalVersion, NSSet;

@interface DKComponentIdentity : NSObject <NSCopying, NSSecureCoding> {

	NSString* _type;
	NSString* _identifier;
	NSString* _domain;
	DKCanonicalVersion* _version;
	NSSet* _resources;

}

@property (nonatomic,readonly) NSString * type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSString * domain;                         //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) DKCanonicalVersion * version;              //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSSet * resources;                         //@synthesize resources=_resources - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)componentIdentityWithDomain:(id)arg1 version:(id)arg2 resources:(id)arg3 ;
+(id)componentIdentityWithType:(id)arg1 identifier:(id)arg2 version:(id)arg3 resources:(id)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)domain;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)type;
-(NSString *)identifier;
-(DKCanonicalVersion *)version;
-(NSSet *)resources;
-(BOOL)isNewerThan:(id)arg1 ;
-(id)initWithDomain:(id)arg1 version:(id)arg2 resources:(id)arg3 ;
-(id)initWithType:(id)arg1 identifier:(id)arg2 version:(id)arg3 resources:(id)arg4 ;
-(BOOL)isEqualToComponentIdentity:(id)arg1 ;
@end

