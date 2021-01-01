/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXCuratedLibraryStatisticsController : NSObject {

	PXLayoutGeometry* _resuableLayoutGeometries;
	long long _reusableLayoutGeometriesCapacity;

}
+(id)defaultController;
-(void)dealloc;
-(void)collectStatisticsForViewModel:(id)arg1 extendedTraitCollection:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)_enumerateDaysSectionsForViewModel:(id)arg1 extendedTraitCollection:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(PXLayoutGeometry*)_layoutGeometryBufferWithCount:(long long)arg1 ;
@end
