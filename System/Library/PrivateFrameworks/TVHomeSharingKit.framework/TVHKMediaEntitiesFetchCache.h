/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TVHKMediaServerIdentifier, TVHKShowsCache, TVHKSeasonsCache;

@interface TVHKMediaEntitiesFetchCache : NSObject <NSCopying> {

	TVHKMediaServerIdentifier* _mediaServerIdentifier;
	TVHKShowsCache* _showsCache;
	TVHKSeasonsCache* _seasonsCache;

}

@property (nonatomic,copy,readonly) TVHKMediaServerIdentifier * mediaServerIdentifier;              //@synthesize mediaServerIdentifier=_mediaServerIdentifier - In the implementation block
@property (nonatomic,readonly) TVHKShowsCache * showsCache;                                         //@synthesize showsCache=_showsCache - In the implementation block
@property (nonatomic,readonly) TVHKSeasonsCache * seasonsCache;                                     //@synthesize seasonsCache=_seasonsCache - In the implementation block
+(id)new;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)clear;
-(TVHKMediaServerIdentifier *)mediaServerIdentifier;
-(TVHKSeasonsCache *)seasonsCache;
-(id)initWithMediaServerIdentifier:(id)arg1 ;
-(TVHKShowsCache *)showsCache;
@end

