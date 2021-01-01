/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutGenerator.h>

@class NSIndexSet, PXGridLayoutMetrics;

@interface PXGridLayoutGenerator : PXLayoutGenerator {

	long long _numberOfItemsWide;
	NSIndexSet* _geometrySet;

}

@property (nonatomic,copy) PXGridLayoutMetrics * metrics; 
-(CGSize)size;
-(id)initWithMetrics:(id)arg1 ;
-(CGSize)estimatedSize;
-(void)getGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 withKind:(long long)arg3 ;
-(id)geometryKinds;
-(unsigned long long)numberOfGeometriesWithKind:(long long)arg1 ;
-(void)_getContentGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 ;
-(void)_getHeaderGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 ;
-(void)_getAdditionalGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 ;
-(void)getGeometry:(PXLayoutGeometry*)arg1 forItemAtIndex:(unsigned long long)arg2 ;
@end

