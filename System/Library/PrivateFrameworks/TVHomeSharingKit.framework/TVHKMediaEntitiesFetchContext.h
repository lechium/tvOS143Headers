/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TVHKMediaEntitiesFetchContext : NSObject <NSCopying> {

	NSString* _fetchControllerIdentifier;
	NSString* _fetchRequestIdentifier;

}

@property (nonatomic,readonly) NSString * fetchControllerIdentifier;              //@synthesize fetchControllerIdentifier=_fetchControllerIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * fetchRequestIdentifier;                 //@synthesize fetchRequestIdentifier=_fetchRequestIdentifier - In the implementation block
+(id)new;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSString *)fetchControllerIdentifier;
-(NSString *)fetchRequestIdentifier;
-(id)initWithFetchControllerIdentifier:(id)arg1 fetchRequestIdentifier:(id)arg2 ;
@end

