/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:51 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLMomentGenerationDataManagement.h>
#import <libobjc.A.dylib/PLHighlightItemModelReader.h>

@class NSDictionary, PLXPCTransaction, CNContactStore, PLMomentGeneration, PLPhotoLibraryPathManager, PLLibraryServicesManager, PLRoutineService, PLCameraAppWatcher, PLPhotoLibrary, NSManagedObjectContext, NSString;

@interface PLMomentGenerationDataManager : NSObject <PLMomentGenerationDataManagement, PLHighlightItemModelReader> {

	PLXPCTransaction* _keepAliveTransaction;
	/*^block*/id _reachabilityBlock;
	CNContactStore* _contactStore;
	PLMomentGeneration* _generator;
	NSDictionary* _generationOptions;
	BOOL _observingReachability;
	os_unfair_lock_s _lightweightMigrationLock;
	PLPhotoLibraryPathManager* _lightWeightMigrationPathManager;
	PLLibraryServicesManager* _libraryServicesManager;
	PLRoutineService* _routineManager;
	BOOL _shouldPerformLightweightValidation;
	BOOL _previousValidationSucceeded;
	BOOL _isLightweightMigrationManager;
	long long _previousValidatedModelVersion;
	PLCameraAppWatcher* _cameraWatcher;
	PLPhotoLibrary* _momentGenerationLibrary;
	NSManagedObjectContext* _managedObjectContext;

}

@property (nonatomic,__weak,readonly) CNContactStore * _contactStore; 
@property (nonatomic,retain) PLPhotoLibrary * momentGenerationLibrary;                   //@synthesize momentGenerationLibrary=_momentGenerationLibrary - In the implementation block
@property (nonatomic,readonly) PLCameraAppWatcher * cameraWatcher;                       //@synthesize cameraWatcher=_cameraWatcher - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) BOOL isLightweightMigrationManager;                       //@synthesize isLightweightMigrationManager=_isLightweightMigrationManager - In the implementation block
@property (assign,nonatomic) BOOL shouldPerformLightweightValidation;                    //@synthesize shouldPerformLightweightValidation=_shouldPerformLightweightValidation - In the implementation block
@property (assign,nonatomic) long long previousValidatedModelVersion;                    //@synthesize previousValidatedModelVersion=_previousValidatedModelVersion - In the implementation block
@property (assign,nonatomic) BOOL previousValidationSucceeded;                           //@synthesize previousValidationSucceeded=_previousValidationSucceeded - In the implementation block
@property (nonatomic,readonly) NSDictionary * generationOptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(void)setManagerMomentarilyBlessed:(id)arg1 ;
+(void)_setManagedObjectContextMomentarilyBlessed:(id)arg1 ;
+(BOOL)isManagedObjectContextMomentarilyBlessed:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasChanges;
-(BOOL)isNetworkReachable;
-(NSManagedObjectContext *)managedObjectContext;
-(id)insertedObjects;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(id)updatedObjects;
-(id)deletedObjects;
-(BOOL)save:(id*)arg1 ;
-(void)refreshAllObjects;
-(void)refreshObject:(id)arg1 mergeChanges:(BOOL)arg2 ;
-(id)generator;
-(CNContactStore *)_contactStore;
-(id)locationsOfInterest;
-(BOOL)routineIsAvailable;
-(id)initWithLibraryServicesManager:(id)arg1 ;
-(id)initWithManagedObjectContext:(id)arg1 pathManagerForLightweightMigration:(id)arg2 ;
-(void)performBlock:(/*^block*/id)arg1 synchronously:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)orphanedAssetIDsWithError:(id*)arg1 ;
-(id)fetchNeighborHighlightItemsForHighlightItems:(id)arg1 ;
-(id)fetchChildHighlightItemsForHighlightItem:(id)arg1 ;
-(id)fetchParentHighlightItemsForHighlightItems:(id)arg1 ;
-(void)performDataTransaction:(/*^block*/id)arg1 synchronously:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)performBlock:(/*^block*/id)arg1 synchronously:(BOOL)arg2 priority:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)performDataTransaction:(/*^block*/id)arg1 synchronously:(BOOL)arg2 priority:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(unsigned long long)hardGenerationBatchSizeLimit;
-(void)invalidateLocationDataForAssetsInMoment:(id)arg1 ;
-(void)invalidateLocationDataForAssetsWithOIDs:(id)arg1 ;
-(void)pendingChangesUpdated:(unsigned long long)arg1 ;
-(id)momentAnalysisTransactionWithName:(const char*)arg1 ;
-(id)assetWithUniqueID:(id)arg1 error:(id*)arg2 ;
-(id)assetsWithUniqueIDs:(id)arg1 error:(id*)arg2 ;
-(id)momentWithUniqueID:(id)arg1 error:(id*)arg2 ;
-(void)enumerateAssetsWithIDs:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)momentListWithUniqueID:(id)arg1 forLevel:(short)arg2 error:(id*)arg3 ;
-(id)momentsWithUniqueIDs:(id)arg1 error:(id*)arg2 ;
-(id)momentsForAssetsWithUniqueIDs:(id)arg1 error:(id*)arg2 ;
-(id)momentsSinceDate:(id)arg1 ;
-(id)momentsBetweenDate:(id)arg1 andDate:(id)arg2 sorted:(BOOL)arg3 ;
-(id)yearMomentListForYear:(long long)arg1 ;
-(id)monthMomentListForMonth:(long long)arg1 year:(long long)arg2 ;
-(id)allMomentsWithError:(id*)arg1 ;
-(id)allInvalidMomentsWithError:(id*)arg1 ;
-(id)momentsWithLocationTypeUnprocessedWithError:(id*)arg1 ;
-(id)momentsRequiringLocationProcessingWhenFrequentLocationsChangedWithError:(id*)arg1 ;
-(id)allMomentIDsWithError:(id*)arg1 ;
-(id)allInvalidMomentIDsWithError:(id*)arg1 ;
-(id)allMomentsWithInvalidReverseLocationData;
-(id)allMomentListsForLevel:(short)arg1 ;
-(id)allMomentLists;
-(id)momentsIntersectingDateInterval:(id)arg1 ;
-(id)allAssetsToBeIncludedInMomentsWithError:(id*)arg1 ;
-(id)invalidAssetsIgnoringAssetIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)allInvalidAssetsWithError:(id*)arg1 ;
-(id)allAssetIDsToBeIncludedInMomentsWithError:(id*)arg1 ;
-(id)highlightsIntersectingDateInterval:(id)arg1 ofKind:(unsigned short)arg2 ;
-(id)allPhotosHighlightsOfAllKindsWithError:(id*)arg1 ;
-(id)allPhotosHighlightsOfKind:(unsigned short)arg1 error:(id*)arg2 ;
-(id)allPhotosHighlightsOfKind:(unsigned short)arg1 withPredicate:(id)arg2 error:(id*)arg3 ;
-(id)allPhotosHighlightsWithPredicate:(id)arg1 error:(id*)arg2 ;
-(id)allInvalidPhotosHighlightsOfAllKindsWithError:(id*)arg1 ;
-(id)allEmptyPhotosHighlightsOfKind:(unsigned short)arg1 error:(id*)arg2 ;
-(BOOL)deleteAllMomentsWithError:(id*)arg1 ;
-(BOOL)deleteAllHighlightsWithError:(id*)arg1 ;
-(BOOL)deleteAllMomentListsWithError:(id*)arg1 ;
-(Class)momentListDataClassForGranularityLevel:(short)arg1 ;
-(Class)momentDataClass;
-(Class)momentAssetDataClass;
-(id)insertNewMomentListForGranularityLevel:(short)arg1 ;
-(id)insertNewMoment;
-(id)insertNewPhotosHighlight;
-(void)resetOnFailure;
-(void)beginObservingNetworkReachabilityChangesWithBlock:(/*^block*/id)arg1 ;
-(void)stopObservingNetworkReachabilityChanges;
-(id)homeAddressDictionary;
-(BOOL)cameraIsActive;
-(void)fetchLocationsOfInterestIfNeeded;
-(void)logRoutineInformation;
-(id)lastLocationOfInterestVisit;
-(id)locationCoordinatesForAssetIDs:(id)arg1 ;
-(void)invalidateShiftedLocationForAllAssetsInMoments;
-(id)allAssetIDsNeedingLocationShiftWithError:(id*)arg1 ;
-(void)runPeriodicMaintenanceTasks:(unsigned long long)arg1 withTransaction:(id)arg2 ;
-(void)invalidateAllHighlightSubtitles;
-(BOOL)wantsMomentReplayLogging;
-(id)replayLogPath;
-(BOOL)shouldPerformLightweightValidation;
-(void)setShouldPerformLightweightValidation:(BOOL)arg1 ;
-(long long)previousValidatedModelVersion;
-(void)setPreviousValidatedModelVersion:(long long)arg1 ;
-(BOOL)previousValidationSucceeded;
-(void)setPreviousValidationSucceeded:(BOOL)arg1 ;
-(BOOL)isLightweightMigrationManager;
-(NSDictionary *)generationOptions;
-(void)_finalizeInit;
-(void)reloadGenerationOptions;
-(PLPhotoLibrary *)momentGenerationLibrary;
-(void)_networkReachabilityDidChange:(id)arg1 ;
-(id)_currentHomeAddressDictionary;
-(void)_updateKeepAlive;
-(void)_removeKeepAlive;
-(id)_highlightsRelationshipKeyPathsForPrefetchingForKind:(unsigned short)arg1 ;
-(id)_highlightsRelationshipKeyPathsForPrefetching;
-(BOOL)_batchDeleteForEntityName:(id)arg1 error:(id*)arg2 ;
-(void)verifyAndRepairOrphanedAssets:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(PLCameraAppWatcher *)cameraWatcher;
-(void)setMomentGenerationLibrary:(PLPhotoLibrary *)arg1 ;
@end

