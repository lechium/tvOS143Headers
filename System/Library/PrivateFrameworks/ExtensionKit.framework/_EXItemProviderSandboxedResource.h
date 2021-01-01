/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:57 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ExtensionKit.framework/ExtensionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ExtensionKit/ExtensionKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSData;

@interface _EXItemProviderSandboxedResource : NSObject <NSSecureCoding, NSCopying> {

	BOOL _accessingSecurityScopedResource;
	NSURL* _resourceURL;
	NSData* _sandboxExtensionToken;

}

@property (nonatomic,copy) NSData * sandboxExtensionToken;                                                               //@synthesize sandboxExtensionToken=_sandboxExtensionToken - In the implementation block
@property (nonatomic,copy) NSURL * resourceURL;                                                                          //@synthesize resourceURL=_resourceURL - In the implementation block
@property (assign,getter=isAccessingSecurityScopedResource,nonatomic) BOOL accessingSecurityScopedResource;              //@synthesize accessingSecurityScopedResource=_accessingSecurityScopedResource - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)resourceURL;
-(NSData *)sandboxExtensionToken;
-(void)setSandboxExtensionToken:(NSData *)arg1 ;
-(void)setResourceURL:(NSURL *)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 auditToken:(SCD_Struct_EX1)arg2 error:(id*)arg3 ;
-(BOOL)isAccessingSecurityScopedResource;
-(void)setAccessingSecurityScopedResource:(BOOL)arg1 ;
-(id)resolveURLAndReturnError:(id*)arg1 ;
@end

