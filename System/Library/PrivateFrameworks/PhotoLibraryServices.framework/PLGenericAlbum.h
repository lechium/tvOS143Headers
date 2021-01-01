/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/_PLGenericAlbum.h>
#import <libobjc.A.dylib/PLSearchableAssetCollection.h>
#import <libobjc.A.dylib/PLSyncableObject.h>
#import <libobjc.A.dylib/PLAlbumProtocol.h>
#import <libobjc.A.dylib/PLDerivedAlbumOrigin.h>
#import <libobjc.A.dylib/PLIndexMappersDataOrigin.h>

@protocol PLIndexMappingCache;
@class NSString, NSDate, NSMutableOrderedSet, PLPhotoLibrary, NSNumber, NSObject, NSURL, NSData, NSOrderedSet, PLManagedAsset, NSArray;

@interface PLGenericAlbum : _PLGenericAlbum <PLSearchableAssetCollection, PLSyncableObject, PLAlbumProtocol, PLDerivedAlbumOrigin, PLIndexMappersDataOrigin> {

	NSObject*<PLIndexMappingCache> _derivedAlbums[5];
	BOOL isRegisteredForChanges;
	BOOL didRegisteredWithUserInterfaceContext;

}

@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
@property (nonatomic,readonly) NSString * keyAssetUUID; 
@property (nonatomic,readonly) NSDate * keyAssetCreationDate; 
@property (nonatomic,readonly) NSDate * searchableStartDate; 
@property (nonatomic,readonly) NSDate * searchableEndDate; 
@property (nonatomic,readonly) unsigned long long numberOfAssets; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) id localID; 
@property (assign,nonatomic) short cloudLocalState; 
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
@property (assign,nonatomic) short trashedState; 
@property (nonatomic,retain) NSDate * trashedDate; 
@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (nonatomic,retain) NSString * uuid; 
@property (assign,nonatomic) int kindValue; 
@property (nonatomic,retain) NSString * title; 
@property (nonatomic,retain) NSString * cloudGUID; 
@property (assign,nonatomic) BOOL isPinned; 
@property (assign,nonatomic) BOOL isPrototype; 
@property (assign,nonatomic) short cloudDeleteState; 
@property (nonatomic,retain) NSData * userQueryData; 
@property (nonatomic,readonly) BOOL isLibrary; 
@property (nonatomic,readonly) BOOL isCameraAlbum; 
@property (nonatomic,readonly) BOOL isSmartAlbum; 
@property (nonatomic,readonly) BOOL isUserCreated; 
@property (nonatomic,readonly) BOOL isOwnPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isProjectAlbumRootFolder; 
@property (nonatomic,readonly) BOOL isRegularRootFolder; 
@property (nonatomic,readonly) BOOL isRecentlyAddedAlbum; 
@property (nonatomic,readonly) BOOL isUserLibraryAlbum; 
@property (nonatomic,readonly) BOOL isProjectAlbum; 
@property (nonatomic,readonly) BOOL shouldDeleteWhenEmpty; 
@property (assign,nonatomic) BOOL isRegisteredForChanges; 
@property (assign,nonatomic) BOOL didRegisteredWithUserInterfaceContext; 
@property (nonatomic,retain,readonly) NSMutableOrderedSet * mutableAssets; 
@property (nonatomic,retain,readonly) NSNumber * kind; 
@property (assign,nonatomic) BOOL hasUnseenContentBoolValue; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain,readonly) NSObject * posterImage; 
@property (nonatomic,readonly) BOOL isPanoramasAlbum; 
@property (nonatomic,readonly) BOOL isPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isPendingPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isStandInAlbum; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,readonly) BOOL isInTrash; 
@property (nonatomic,readonly) BOOL isOwnedCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isFamilyCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isMultipleContributorCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL canContributeToCloudSharedAlbum; 
@property (nonatomic,retain) NSString * importSessionID; 
@property (nonatomic,retain,readonly) NSURL * groupURL; 
@property (nonatomic,copy,readonly) id sortingComparator; 
@property (assign,nonatomic) int pendingItemsCount; 
@property (assign,nonatomic) int pendingItemsType; 
@property (assign,nonatomic) unsigned long long batchSize; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,retain,readonly) NSOrderedSet * assets; 
@property (nonatomic,readonly) unsigned long long approximateCount; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) BOOL canShowComments; 
@property (nonatomic,readonly) BOOL canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
+(id)baseSearchIndexPredicate;
+(id)albumsWithCloudGUIDs:(id)arg1 inLibrary:(id)arg2 ;
+(id)albumWithCloudGUID:(id)arg1 inLibrary:(id)arg2 ;
+(id)albumsToUploadInitiallyInLibrary:(id)arg1 limit:(unsigned long long)arg2 ;
+(id)includeUnpushedParentsForAlbums:(id)arg1 limit:(unsigned long long)arg2 ;
+(id)filesystemImportProgressAlbumInLibrary:(id)arg1 ;
+(id)otaRestoreProgressAlbumInLibrary:(id)arg1 ;
+(id)syncProgressAlbumInLibrary:(id)arg1 ;
+(id)albumsWithKind:(int)arg1 inManagedObjectContext:(id)arg2 ;
+(id)insertNewAlbumWithKind:(int)arg1 title:(id)arg2 intoLibrary:(id)arg3 ;
+(id)albumWithKind:(int)arg1 inManagedObjectContext:(id)arg2 ;
+(id)projectAlbumRootFolderInLibrary:(id)arg1 ;
+(id)rootFolderInLibrary:(id)arg1 ;
+(id)albumWithUUID:(id)arg1 inLibrary:(id)arg2 ;
+(BOOL)is1WaySyncKind:(int)arg1 ;
+(BOOL)isSmartAlbumForKind:(int)arg1 ;
+(BOOL)isUserCreatedForKind:(int)arg1 ;
+(id)allSyncedAlbumsInManagedObjectContext:(id)arg1 ;
+(id)albumFromGroupURL:(id)arg1 photoLibrary:(id)arg2 ;
+(id)eventsWithName:(id)arg1 andImportSessionIdentifier:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)albumsForStreamID:(id)arg1 inLibrary:(id)arg2 ;
+(id)childKeyForOrdering;
+(id)allAlbumsRegisteredWithManagedObjectContext:(id)arg1 ;
+(BOOL)isFolder:(int)arg1 ;
+(id)localizedTitleForAlbumKind:(int)arg1 cplEnabled:(BOOL)arg2 ;
+(id)localizedRecoveredTitle;
+(id)defaultAlbumKindsForFetchingWithCPLEnabled:(BOOL)arg1 ;
+(id)keyPathsForValuesAffectingName;
+(id)keyPathsForValuesAffectingKindValue;
+(id)uuidFromGroupURL:(id)arg1 ;
+(id)_singletonFetchingAlbumWithKind:(int)arg1 library:(id)arg2 ;
+(id)_singletonManagedAlbumWithKind:(int)arg1 library:(id)arg2 ;
+(id)userLibraryAlbumInLibrary:(id)arg1 ;
+(id)allAssetsAlbumInLibrary:(id)arg1 ;
+(id)allPanoramasAlbumInLibrary:(id)arg1 ;
+(id)allVerticalPanoramasAlbumInLibrary:(id)arg1 ;
+(id)allHorizontalPanoramasAlbumInLibrary:(id)arg1 ;
+(id)allVideosAlbumInLibrary:(id)arg1 ;
+(id)allFavoritesAlbumInLibrary:(id)arg1 ;
+(id)allPhotoStreamAssetsAlbumInLibrary:(id)arg1 ;
+(id)iTunesLibraryAlbumInLibrary:(id)arg1 ;
+(id)trashBinAlbumInLibrary:(id)arg1 ;
+(id)unableToUploadAlbumInLibrary:(id)arg1 ;
+(id)allAlbumsInLibrary:(id)arg1 ;
+(id)albumWithObjectID:(id)arg1 inLibrary:(id)arg2 ;
+(id)albumWithName:(id)arg1 inLibrary:(id)arg2 ;
+(id)_unpushedParentsOfAlbums:(id)arg1 ;
+(void)resetAlbumStateForCloudInLibrary:(id)arg1 ;
+(void)_removeAlbumsAndFolders:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(void)removeAllUserAlbumsAndFoldersInLibrary:(id)arg1 ;
+(void)removeEmptyAlbumsAndFoldersForCloudResetInManagedObjectContext:(id)arg1 ;
+(void)removeTrashedAlbumsAndFoldersForCloudResetInManagedObjectContext:(id)arg1 ;
+(void)removeInvalidAlbumsAndFoldersInManagedObjectContext:(id)arg1 ;
+(id)albumsMatchingPredicate:(id)arg1 expectedResultCount:(id)arg2 inLibrary:(id)arg3 ;
+(id)_insertNewAlbumWithKind:(int)arg1 title:(id)arg2 lastInterestingDate:(id)arg3 intoLibrary:(id)arg4 ;
+(id)insertNewAlbumWithTitle:(id)arg1 intoLibrary:(id)arg2 ;
+(id)insertNewSmartAlbumIntoLibrary:(id)arg1 ;
+(id)insertNewProjectAlbumWithTitle:(id)arg1 documentType:(id)arg2 intoLibrary:(id)arg3 ;
+(id)insertNewAlbumIntoLibrary:(id)arg1 ;
+(id)insertNewSyncedEventWithTitle:(id)arg1 intoLibrary:(id)arg2 ;
+(id)insertNewSyncedEventIntoLibrary:(id)arg1 ;
+(id)insertNewCloudSharedAlbumWithTitle:(id)arg1 lastInterestingDate:(id)arg2 intoLibrary:(id)arg3 ;
+(id)insertNewLegacyFaceAlbumIntoLibrary:(id)arg1 ;
+(id)allAlbumsInManagedObjectContext:(id)arg1 ;
+(id)insertAlbumWithKind:(int)arg1 title:(id)arg2 uuid:(id)arg3 inManagedObjectContext:(id)arg4 ;
+(id)_albumsMatchingPredicate:(id)arg1 expectedResultCount:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(void)addSingletonObjectsToContext:(id)arg1 ;
+(id)searchIndexAllowedPredicate;
+(id)_predicateForSupportedAlbumTypes;
-(NSString *)name;
-(NSString *)description;
-(void)dealloc;
-(unsigned long long)count;
-(BOOL)isEmpty;
-(unsigned long long)approximateCount;
-(NSString *)localizedTitle;
-(NSString *)subtitle;
-(void)delete;
-(void)awakeFromFetch;
-(void)willTurnIntoFault;
-(void)awakeFromInsert;
-(void)willSave;
-(unsigned long long)photosCount;
-(BOOL)isUserCreated;
-(id)_scopedIdentifier;
-(id)momentShare;
-(unsigned long long)videosCount;
-(unsigned long long)assetsCount;
-(PLPhotoLibrary *)photoLibrary;
-(id)assetUUIDsForPreviewWithCount:(unsigned long long)arg1 ;
-(id)cplAlbumChangeInPhotoLibrary:(id)arg1 ;
-(id)cplFullRecord;
-(BOOL)supportsCloudUpload;
-(int)kindValue;
-(NSString *)keyAssetUUID;
-(unsigned long long)numberOfAssets;
-(id)payloadID;
-(id)payloadIDForTombstone:(id)arg1 ;
-(id)payloadForChangedKeys:(id)arg1 ;
-(BOOL)isProjectAlbum;
-(BOOL)isRegularRootFolder;
-(BOOL)isProjectAlbumRootFolder;
-(BOOL)isSmartAlbum;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(BOOL)canMoveToTrash;
-(BOOL)isOwnPhotoStreamAlbum;
-(void)applyTrashedState:(short)arg1 cascade:(BOOL)arg2 ;
-(void)reducePendingItemsCountBy:(unsigned long long)arg1 ;
-(void)batchFetchAssets:(id)arg1 ;
-(BOOL)hasUnseenContentBoolValue;
-(void)setHasUnseenContentBoolValue:(BOOL)arg1 ;
-(NSObject *)posterImage;
-(BOOL)isLibrary;
-(BOOL)isCameraAlbum;
-(BOOL)isPanoramasAlbum;
-(BOOL)isPhotoStreamAlbum;
-(BOOL)isCloudSharedAlbum;
-(BOOL)isPendingPhotoStreamAlbum;
-(BOOL)isStandInAlbum;
-(BOOL)isFolder;
-(BOOL)isInTrash;
-(BOOL)isOwnedCloudSharedAlbum;
-(BOOL)isFamilyCloudSharedAlbum;
-(BOOL)isMultipleContributorCloudSharedAlbum;
-(BOOL)isRecentlyAddedAlbum;
-(BOOL)isUserLibraryAlbum;
-(BOOL)canContributeToCloudSharedAlbum;
-(BOOL)shouldDeleteWhenEmpty;
-(NSURL *)groupURL;
-(id)sortingComparator;
-(BOOL)canShowComments;
-(BOOL)canShowAvalancheStacks;
-(NSArray *)localizedLocationNames;
-(BOOL)isSyncableChange;
-(id)localID;
-(unsigned long long)searchIndexCategory;
-(NSDate *)keyAssetCreationDate;
-(NSDate *)searchableEndDate;
-(NSDate *)searchableStartDate;
-(id)searchIndexContents;
-(void)setKindValue:(int)arg1 ;
-(BOOL)validForPersistenceChangedForChangedKeys:(id)arg1 ;
-(id)childKeyForOrdering;
-(void)registerForChanges;
-(void)unregisterForChanges;
-(void)setDidRegisteredWithUserInterfaceContext:(BOOL)arg1 ;
-(BOOL)didRegisteredWithUserInterfaceContext;
-(BOOL)isRegisteredForChanges;
-(id)_kindDescription;
-(id)_compactDebugDescription;
-(id)_prettyDescription;
-(unsigned long long)countForAssetsOfKind:(short)arg1 ;
-(void)enumerateDerivedIndexMappers:(/*^block*/id)arg1 ;
-(BOOL)hasDerivedIndexMappers;
-(void)registerDerivedAlbum:(id)arg1 ;
-(void)unregisterAllDerivedAlbums;
-(void)enumerateDerivedAlbums:(/*^block*/id)arg1 ;
-(id)childManagedObject;
-(void)_applyTrashedState:(short)arg1 date:(BOOL)arg2 :(id)arg3 cascade:(BOOL)arg4 ;
-(void)repairUuidAndTitleWithRecoveryReason:(const char*)arg1 ;
-(void)_repairTitleIfEmpty;
-(id)assetsByObjectIDAtIndexes:(id)arg1 ;
-(void)updateAlbumFolderRelation:(id)arg1 inLibrary:(id)arg2 ;
-(void)setIsRegisteredForChanges:(BOOL)arg1 ;
-(BOOL)isProjectAlbumSupportingCloudUpload;
-(id)_searchableExtremityDateFromStart:(BOOL)arg1 ;
-(void)applyPropertiesFromAlbumChange:(id)arg1 ;
@end

