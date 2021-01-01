/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutSnapshot.h>

@class NSArray, PXLayoutPageMap;

@interface PXSectionedLayoutSnapshot : PXLayoutSnapshot {

	NSArray* _sections;
	PXLayoutPageMap* _pageMap;

}
+(id)emptyLayoutSnapshot;
-(id)description;
-(id)init;
-(id)initWithContentRect:(CGRect)arg1 ;
-(id)initWithContentRect:(CGRect)arg1 forSections:(id)arg2 ;
-(PXLayoutGeometry)geometryForItem:(id)arg1 ;
-(void)enumerateGeometriesForItemsInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateFramesForSectionsInRect:(CGRect)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CGRect)frameForSectionAtIndex:(unsigned long long)arg1 ;
@end

