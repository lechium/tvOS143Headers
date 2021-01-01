/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PHPhotoLibrary, PVClusterer, PVContext, VCPFaceVisionIntegrating, VCPPhotosPersistenceDelegate;

@interface VCPFaceClusterer : NSObject {

	PHPhotoLibrary* _photoLibrary;
	PVClusterer* _clusterer;
	PVContext* _context;
	VCPFaceVisionIntegrating* _visionIntegrating;
	VCPPhotosPersistenceDelegate* _persistenceDelegate;
	/*^block*/id _updateBlock;

}

@property (nonatomic,copy) id updateBlock;              //@synthesize updateBlock=_updateBlock - In the implementation block
-(void)stop;
-(BOOL)resetFaceClusteringState:(id*)arg1 ;
-(id)differencesBetweenClustersInClusterCacheAndLibrary:(id*)arg1 ;
-(void)setUpdateBlock:(id)arg1 ;
-(id)updateBlock;
-(id)initWithPhotoLibrary:(id)arg1 andContext:(id)arg2 ;
-(BOOL)reclusterFacesWithThreshold:(id)arg1 shouldRecluster:(BOOL)arg2 withContext:(id)arg3 extendTimeout:(/*^block*/id)arg4 cancel:(/*^block*/id)arg5 error:(id*)arg6 ;
-(id)clusterer;
-(void)startAndSyncClusterCacheWithLibrary:(BOOL)arg1 reply:(/*^block*/id)arg2 ;
-(void)performFaceClusteringAndWait;
-(long long)clustererState;
-(BOOL)_resetFaceClusteringStateWithContext:(id)arg1 error:(id*)arg2 ;
-(int)clusterFacesWithExtendTimeoutBlock:(/*^block*/id)arg1 andCancelBlock:(/*^block*/id)arg2 ;
-(id)clusteringStatus;
-(void)performFaceClusteringWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelFaceClustering;
-(void)performFaceClusteringIfNecessaryAndWait;
-(void)scheduleClusteringOfFacesWithLocalIdentifiers:(id)arg1 ;
-(void)scheduleUnclusteringOfFacesWithClusterSequenceNumbers:(id)arg1 ;
-(unsigned long long)numberOfFacesPendingClustering;
-(BOOL)reclusterFacesWithThreshold:(id)arg1 shouldRecluster:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)getFaceClusters:(id*)arg1 clusteringThreshold:(double*)arg2 utilizingGPU:(BOOL*)arg3 error:(id*)arg4 ;
-(BOOL)clustererIsReadyToReturnSuggestions;
-(void)resetClusterer;
-(int)clusterFacesIfNecessaryWithExtendTimeoutBlock:(/*^block*/id)arg1 andCancelBlock:(/*^block*/id)arg2 ;
@end

