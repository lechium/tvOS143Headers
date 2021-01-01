/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:40 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXLayoutGenerator.h>

@class PXAspectFitLayoutMetrics;

@interface PXAspectFitLayoutGenerator : PXLayoutGenerator {

	PXLayoutGeometry* _geometries;
	unsigned long long _geometriesCount;
	long long _lastGeometryIndex;
	CGSize _contentSize;
	double _currentRowUnmodifiedHeight;
	double _currentRowFinalHeight;

}

@property (nonatomic,copy) PXAspectFitLayoutMetrics * metrics; 
-(void)dealloc;
-(CGSize)size;
-(void)invalidate;
-(id)initWithMetrics:(id)arg1 ;
-(CGSize)estimatedSize;
-(void)getGeometries:(PXLayoutGeometry*)arg1 inRange:(NSRange)arg2 withKind:(long long)arg3 ;
-(void)_prepareGeometriesForCount:(unsigned long long)arg1 ;
-(PXLayoutGeometry)_lastGeometry;
-(void)_computeGeometriesIfNeeded;
-(void)_fillRowFromIndex:(long long*)arg1 withCount:(long long)arg2 ;
-(double)_rowHeightForItemsInRange:(NSRange)arg1 ;
-(PXLayoutGeometry)_geometryForItemAtIndex:(unsigned long long)arg1 atPosition:(CGPoint)arg2 withHorizontalGap:(double)arg3 ;
@end

