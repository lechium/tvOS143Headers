/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLJournalManagerCore.h>

@protocol OS_dispatch_queue, OS_dispatch_group;
@class PLPhotoLibrary, PLChangeHandlingNotificationObserver, NSObject, NSPersistentHistoryToken;

@interface PLJournalManager : PLJournalManagerCore {

	PLPhotoLibrary* _photoLibrary;
	PLPhotoLibrary* _transientPhotoLibrary;
	PLChangeHandlingNotificationObserver* _changeHandlingNotificationObserver;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _startupWaitGroup;
	unsigned short _state;
	NSPersistentHistoryToken* _currentHistoryToken;
	AB _ignoreHistoryDuringSnapshot;

}
+(BOOL)assetJournalExists:(id)arg1 error:(id*)arg2 ;
+(BOOL)existingJournalsCompatibleForRebuild:(id)arg1 error:(id*)arg2 ;
+(id)payloadClasses;
+(id)entriesByPayloadClassIDFromHistoryToken:(id)arg1 currentHistoryToken:(id*)arg2 withManagedObjectContext:(id)arg3 payloadIDsToSkipInserts:(id)arg4 shouldStopBlock:(/*^block*/id)arg5 ;
+(Class)payloadClassForAdditionalEntityName:(id)arg1 ;
+(id)existingObjectWithID:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)start;
-(void)stop;
-(void)_start;
-(void)snapshotJournalsForPayloadClassIDs:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)coalesceJournalsForPayloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithPhotoLibrary:(id)arg1 ;
-(void)recreateNonAssetsInManagedObjectContext:(id)arg1 progress:(id)arg2 ;
-(void)recreateAssetsInManagedObjectContext:(id)arg1 options:(unsigned char)arg2 progress:(id)arg3 ;
-(void)notifyDidImportFileSystemAssets;
-(void)notifyWillImportFileSystemAssets;
-(void)_registerForChangeHandlingNotifications;
-(void)_unregisterForChangeHandlingNotifications;
-(void)_startAfterRebuild;
-(void)_handleChangeHandlingNotificationWithTransaction:(id)arg1 ;
-(BOOL)forceFullSnapshot:(id*)arg1 ;
-(void)_loadHistoryToken;
-(id)newTransientContext;
-(BOOL)_needSnapshot;
-(BOOL)_needFullSnapshot;
-(BOOL)_needPartialSnapshot:(id)arg1 ;
-(BOOL)_performSnapshotsForceFull:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)_coalesceJournalsForPayloadClassIDs:(id)arg1 withChangeJournalOverThreshold:(float)arg2 ;
-(BOOL)_appendEntriesByPayloadClassID:(id)arg1 withCurrentHistoryToken:(id)arg2 ;
-(BOOL)_replayFromCurrentHistoryToken;
-(BOOL)_replayFromCurrentHistoryTokenWithPayloadIDsToSkipInserts:(id)arg1 ;
-(void)recreateAllObjectsInManagedObjectContext:(id)arg1 options:(unsigned char)arg2 ;
-(void)_recreateAssetsInManagedObjectContext:(id)arg1 options:(unsigned char)arg2 progress:(id)arg3 ;
-(void)_recreateNonAssetsInManagedObjectContext:(id)arg1 progress:(id)arg2 ;
-(id)assetsToImportFromAssetJournalInManagedObjectContext:(id)arg1 outOnDiskURLs:(id)arg2 ;
-(id)_assetsToImportFromAssetJournalInManagedObjectContext:(id)arg1 outOnDiskURLs:(id)arg2 ;
-(void)_removeLegacyPersistedMetadataIfNecessary;
@end

