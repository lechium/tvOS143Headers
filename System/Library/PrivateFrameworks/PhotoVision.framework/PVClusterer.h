/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoVision/PhotoVision-Structs.h>
#import <libobjc.A.dylib/PVFaceClusteringProtocol.h>

@protocol PVVisionIntegrating, PVPersistenceDelegate;
@class PVQueue, PVContext, NSURL, NSString, NSNumber, NSSet, NSMutableSet, PVCanceler, VNCanceller, VNClustererBuilder, NSMutableArray, PVSuggestionRequest, NSLock, NSMutableDictionary, NSDate, PVEventManager;

@interface PVClusterer : NSObject <PVFaceClusteringProtocol> {

	id<PVVisionIntegrating> _visionIntegration;
	id<PVPersistenceDelegate> _persistenceDelegate;
	PVQueue* _processingQueue;
	PVContext* _context;
	NSURL* _cacheDirUrl;
	NSURL* _cacheFileUrl;
	NSString* _clusteringType;
	NSNumber* _threshold;
	NSSet* _faceCSNsInClusterCache;
	unsigned long long _nextSeqNum;
	NSMutableSet* _faceIdStrsToAdd;
	NSMutableSet* _faceCSNsToRemove;
	unsigned long long _accumulatedChangesCount;
	unsigned long long _nextClusterTriggeringAccumulatedChangesCount;
	PVCanceler* _clusteringCanceler;
	VNCanceller* _visionCanceler;
	VNClustererBuilder* _clusterBuilder;
	BOOL _rebuildClusterer;
	NSMutableArray* _outstandingSuggestionRequests;
	PVSuggestionRequest* _currentSuggestionRequest;
	NSLock* _suggestionLock;
	NSLock* _currentStatusSnapshotLock;
	SCD_Struct_PV3 _currentStatusSnapshot;
	BOOL _currentStatusSnapshotIsValid;
	NSLock* _propertyDictionaryLock;
	NSMutableDictionary* _propertyDictionary;
	long long _clustererBringUpState;
	NSDate* _timestampOfLastClusterComparison;
	PVEventManager* _eventManager;

}

@property (nonatomic,readonly) BOOL needsFullSync; 
@property (nonatomic,readonly) BOOL needsUpdate; 
@property (getter=isReady,nonatomic,readonly) BOOL ready; 
@property (assign,nonatomic) long long clustererBringUpState;              //@synthesize clustererBringUpState=_clustererBringUpState - In the implementation block
@property (__weak) PVEventManager * eventManager;                          //@synthesize eventManager=_eventManager - In the implementation block
@property (nonatomic,readonly) long long clustererState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(BOOL)removeClusteringStateCacheWithContext:(id)arg1 cacheDirectoryUrl:(id)arg2 error:(id*)arg3 ;
-(BOOL)isReady;
-(void)terminate;
-(id)status;
-(BOOL)needsUpdate;
-(id)differencesBetweenClustersInClusterCacheAndLibrary:(id*)arg1 ;
-(id)level0ClusterAsFaceCSNsByLevel0KeyFaceCSNForClusterIdentifiedByFaceCSN:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)initWithContext:(id)arg1 persistenceDelegate:(id)arg2 cacheDirectoryURL:(id)arg3 visionIntegration:(id)arg4 ;
-(long long)restoreClusterCacheAndSyncWithLibrary:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)isReadyToReturnSuggestions;
-(id)requestSuggestionsForFaceClusterSequenceNumbers:(id)arg1 withClusteringFlags:(id)arg2 updateHandler:(/*^block*/id)arg3 error:(id*)arg4 ;
-(void)setEventManager:(PVEventManager *)arg1 ;
-(void)scheduleClusteringAfterRemovingFaceCSNs:(id)arg1 addingFaceIdStrs:(id)arg2 ;
-(unsigned long long)numberOfAccumulatedClusterChanges;
-(void)clusterIfNecessaryAndWait;
-(void)clusterAndWait;
-(void)performClusteringWithCompletion:(/*^block*/id)arg1 ;
-(void)cancelClustering;
-(BOOL)getClusters:(id*)arg1 threshold:(double*)arg2 utilizingGPU:(BOOL*)arg3 error:(id*)arg4 ;
-(long long)clustererState;
-(PVEventManager *)eventManager;
-(id)distancesFromClustersIdentifiedByFaceCSNs:(id)arg1 toClustersIdentifiedByFaceCSNs:(id)arg2 error:(id*)arg3 ;
-(void)cancelAllSuggestionRequests;
-(void)cancelSuggestionRequest:(id)arg1 ;
-(id)distanceBetweenLevel0ClusterIdentifiedByFaceCSN:(unsigned long long)arg1 andLevel0ClusterIdentifiedByFaceCSN:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)_processingQueueDetermineNextClusterTriggeringAccumulatedChangesCountIfNecessary;
-(BOOL)_processingQueuePerformForcedFaceClustering:(BOOL)arg1 withCanceler:(id)arg2 ;
-(void)_cancelClusteringAndRestoreClusterCache:(BOOL)arg1 ;
-(void)_recordClusteringState:(BOOL)arg1 ;
-(void)_recordClusterRebuildRequired:(BOOL)arg1 ;
-(void)_recordCountOfPendingFacesToAdd:(unsigned long long)arg1 ;
-(void)_recordIncrementCountOfPendingFacesToAdd:(unsigned long long)arg1 ;
-(void)_recordCurrentStatus:(SCD_Struct_PV3)arg1 ;
-(BOOL)_performAndPersistClustersByAddingFaceObs:(id)arg1 groupingIdentifiers:(id)arg2 removingFaceObs:(id)arg3 updateFaces:(id)arg4 canceler:(id)arg5 error:(id*)arg6 ;
-(id)_faceObservationsFromFaceCSNs:(id)arg1 ;
-(id)_faceObservationsFromFaceIdStrs:(id)arg1 assignClusterSeqNumberIfNeeded:(BOOL)arg2 updatedFaces:(id)arg3 groupingIdentifiers:(id)arg4 ;
-(id)_faceObservationsFromFaces:(id)arg1 assignClusterSeqNumberIfNeeded:(BOOL)arg2 updatedFaces:(id)arg3 ;
-(void)_removeEmptyGroups;
-(void)_processingQueueQuickSyncClustererWithPhotoLibraryUsingFacesInClusterCache:(id)arg1 visionClusters:(id*)arg2 withCanceler:(id)arg3 ;
-(void)_processingQueueSyncClustererWithPhotoLibraryUsingFacesInClusterCache:(id)arg1 withCanceler:(id)arg2 ;
-(BOOL)_processingQueueGetFaceClusterSequenceNumbersInClusterCache:(id*)arg1 lastClusterSequenceNumber:(unsigned long long*)arg2 error:(id*)arg3 ;
-(BOOL)_processingQueueSaveClusterCache:(id*)arg1 ;
-(id)_visionClusterMemmapFileInCacheDirectoryURL:(id)arg1 clusterState:(id)arg2 error:(id*)arg3 ;
-(BOOL)_processingQueueRestoreClusteringCacheWithCacheDirectoryURL:(id)arg1 clusterState:(id)arg2 threshold:(id)arg3 error:(id*)arg4 ;
-(BOOL)_processingQueueResetClusterCache:(id*)arg1 ;
-(id)_visionClusterStateDataBlobFromClusterSnapshotFileAtURL:(id)arg1 error:(id*)arg2 ;
-(void)_removeVisionClusterCacheFilesNotReferencedByVisionClusterState:(id)arg1 ;
-(BOOL)_processingQueueRestoreFromClusterSnapshotFileAtURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)_processingQueueRestoreClusterCacheAndSyncWithLibrary:(BOOL)arg1 error:(id*)arg2 ;
-(id)suggestedFaceClusterSequenceNumbersForFaceClusterSequenceNumbersRepresentingClusters:(id)arg1 error:(id*)arg2 ;
-(BOOL)_processingQueueGetVisionClusters:(id)arg1 minimumClusterSize:(unsigned long long)arg2 returnClusterAsCountedSet:(BOOL)arg3 error:(id*)arg4 ;
-(id)_propertyDictionaryFileURL;
-(void)_readPropertyDictionary;
-(void)_setPropertyDictionaryValue:(id)arg1 forKey:(id)arg2 ;
-(id)_stringForPVClustererBringUpState:(long long)arg1 ;
-(void)setClustererBringUpState:(long long)arg1 ;
-(BOOL)needsFullSync;
-(long long)clustererBringUpState;
@end

