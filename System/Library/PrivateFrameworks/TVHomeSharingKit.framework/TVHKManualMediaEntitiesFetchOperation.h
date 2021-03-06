/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVHomeSharingKit/TVHKMediaEntitiesFetchOperation.h>

@interface TVHKManualMediaEntitiesFetchOperation : TVHKMediaEntitiesFetchOperation {

	/*^block*/id _fetchMediaEntitiesBlock;

}

@property (nonatomic,copy) id fetchMediaEntitiesBlock;              //@synthesize fetchMediaEntitiesBlock=_fetchMediaEntitiesBlock - In the implementation block
-(void)executionDidBegin;
-(void)_processPredicate;
-(void)_fetchMediaEntities;
-(void)_completeFetchWithMediaEntities:(id)arg1 error:(id)arg2 ;
-(id)fetchMediaEntitiesBlock;
-(void)setFetchMediaEntitiesBlock:(id)arg1 ;
@end

