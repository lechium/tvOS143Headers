/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSecurityScopedURLWrapper, NSDictionary, NSURL;

@interface AVURLAssetItemProviderData : NSObject <NSSecureCoding> {

	NSSecurityScopedURLWrapper* _securityScopedURLWrapper;
	NSDictionary* _assetInitializationOptions;

}

@property (nonatomic,readonly) NSURL * securityScopedURL; 
@property (nonatomic,readonly) NSDictionary * assetInitializationOptions;              //@synthesize assetInitializationOptions=_assetInitializationOptions - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)itemProviderDataWithURL:(id)arg1 assetInitializationOptions:(id)arg2 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 assetInitializationOptions:(id)arg2 ;
-(NSURL *)securityScopedURL;
-(NSDictionary *)assetInitializationOptions;
@end
