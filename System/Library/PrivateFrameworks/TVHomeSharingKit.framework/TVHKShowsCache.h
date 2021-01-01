/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <TVHomeSharingKit/TVHKMediaEntitiesCache.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface TVHKShowsCache : TVHKMediaEntitiesCache <NSCopying> {

	NSArray* _DAAPShows;

}

@property (nonatomic,copy) NSArray * DAAPShows;                   //@synthesize DAAPShows=_DAAPShows - In the implementation block
@property (nonatomic,copy,readonly) NSArray * shows; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)clear;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSArray *)shows;
-(void)updateWithMediaEntities:(id)arg1 currentServerRevision:(unsigned long long)arg2 ;
-(NSArray *)DAAPShows;
-(void)setDAAPShows:(NSArray *)arg1 ;
-(id)showForIdentifier:(id)arg1 ;
@end

