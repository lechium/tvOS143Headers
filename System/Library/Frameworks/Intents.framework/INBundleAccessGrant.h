/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Intents/Intents-Structs.h>
@class NSDictionary, NSSet;

@interface INBundleAccessGrant : NSObject {

	long long _acquireCount;
	os_unfair_lock_s _lock;
	NSDictionary* _securityScopedURLs;

}

@property (nonatomic,readonly) NSDictionary * securityScopedURLs;              //@synthesize securityScopedURLs=_securityScopedURLs - In the implementation block
@property (nonatomic,readonly) NSSet * bundleIdentifiers; 
-(void)dealloc;
-(void)relinquish;
-(void)acquire;
-(NSDictionary *)securityScopedURLs;
-(id)initWithSecurityScopedURLs:(id)arg1 ;
-(NSSet *)bundleIdentifiers;
@end
