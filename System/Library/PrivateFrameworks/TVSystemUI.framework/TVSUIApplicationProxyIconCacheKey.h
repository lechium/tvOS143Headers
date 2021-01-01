/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVSystemUI.framework/TVSystemUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSystemUI/TVSystemUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TVSUIApplicationProxyIconCacheKey : NSObject <NSCopying> {

	NSString* _applicationIdentifier;
	double _displayScale;
	NSString* _lifetimeCacheKeyString;
	NSString* _applicationIconName;

}

@property (nonatomic,copy) NSString * lifetimeCacheKeyString;                      //@synthesize lifetimeCacheKeyString=_lifetimeCacheKeyString - In the implementation block
@property (nonatomic,copy) NSString * applicationIconName;                         //@synthesize applicationIconName=_applicationIconName - In the implementation block
@property (nonatomic,copy,readonly) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * filesystemSafeKeyName; 
@property (readonly) double displayScale;                                          //@synthesize displayScale=_displayScale - In the implementation block
+(id)iconCacheKeyForProxy:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)_init;
-(NSString *)applicationIdentifier;
-(double)displayScale;
-(NSString *)filesystemSafeKeyName;
-(NSString *)lifetimeCacheKeyString;
-(NSString *)applicationIconName;
-(void)setLifetimeCacheKeyString:(NSString *)arg1 ;
-(void)setApplicationIconName:(NSString *)arg1 ;
@end

