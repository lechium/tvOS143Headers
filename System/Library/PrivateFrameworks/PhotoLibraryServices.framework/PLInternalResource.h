/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLManagedObject.h>
#import <libobjc.A.dylib/PLResource.h>
#import <libobjc.A.dylib/PLValidatesResourceModel.h>
#import <libobjc.A.dylib/PLResourceAvailabilityMarking.h>
#import <libobjc.A.dylib/PLCloudDeletable.h>

@class NSDate, NSString, PLInternalResourceSidecarRepresentation, PLUniformTypeIdentifier, PLCodec, PLManagedAsset, NSData, PLFileSystemBookmark, PLFileSystemVolume, NSNumber, PLCloudMaster;

@interface PLInternalResource : PLManagedObject <PLResource, PLValidatesResourceModel, PLResourceAvailabilityMarking, PLCloudDeletable> {

	PLInternalResourceSidecarRepresentation* _sidecarRepresentation;

}

@property (assign,nonatomic) unsigned resourceType; 
@property (assign,nonatomic) unsigned version; 
@property (assign,nonatomic) unsigned recipeID; 
@property (nonatomic,retain) PLUniformTypeIdentifier * uniformTypeIdentifier; 
@property (assign,nonatomic) unsigned orientation; 
@property (assign,nonatomic) long long unorientedWidth; 
@property (assign,nonatomic) long long unorientedHeight; 
@property (nonatomic,retain) PLCodec * codec; 
@property (nonatomic,readonly) long long orientedWidth; 
@property (nonatomic,readonly) long long orientedHeight; 
@property (nonatomic,retain) PLManagedAsset * asset; 
@property (nonatomic,readonly) BOOL isDerivative; 
@property (assign,nonatomic) short localAvailability; 
@property (assign,nonatomic) short localAvailabilityTarget; 
@property (assign,nonatomic) short remoteAvailability; 
@property (assign,nonatomic) short remoteAvailabilityTarget; 
@property (assign,nonatomic) short dataStoreClassID; 
@property (assign,nonatomic) long long dataStoreSubtype; 
@property (nonatomic,copy) NSData * dataStoreKeyData; 
@property (assign,nonatomic) long long dataLength; 
@property (assign,nonatomic) long long fileID; 
@property (nonatomic,retain) NSString * fingerprint; 
@property (assign,nonatomic) short trashedState; 
@property (nonatomic,retain) NSDate * trashedDate; 
@property (nonatomic,retain) NSString * cloudDeleteAssetUUIDWithResourceType; 
@property (assign,nonatomic) int qualitySortValue; 
@property (nonatomic,retain) PLFileSystemBookmark * fileSystemBookmark; 
@property (nonatomic,retain) PLFileSystemVolume * fileSystemVolume; 
@property (nonatomic,retain) NSNumber * sidecarIndex; 
@property (assign,nonatomic) long long ptpTrashedState; 
@property (nonatomic,readonly) PLInternalResourceSidecarRepresentation * sidecarRepresentation;              //@synthesize sidecarRepresentation=_sidecarRepresentation - In the implementation block
@property (assign,nonatomic) short cloudLocalState; 
@property (nonatomic,retain) NSDate * cloudMasterDateCreated; 
@property (nonatomic,retain) NSDate * cloudLastOnDemandDownloadDate; 
@property (nonatomic,retain) NSDate * cloudLastPrefetchDate; 
@property (assign,nonatomic) short cloudPrefetchCount; 
@property (nonatomic,retain) NSDate * cloudPrunedAt; 
@property (assign,nonatomic) int cloudSourceType; 
@property (nonatomic,retain) PLCloudMaster * transientCloudMaster; 
@property (nonatomic,readonly) unsigned long long cplType; 
@property (nonatomic,readonly) float scale; 
@property (nonatomic,copy,readonly) id<PLAssetID> assetID; 
@property (nonatomic,readonly) id<PLResourceDataStore> dataStore; 
@property (nonatomic,readonly) id<PLResourceDataStoreKey> dataStoreKey; 
@property (nonatomic,readonly) id<PLCodecIdentity> codecID; 
@property (nonatomic,readonly) long long estimatedDataLength; 
@property (nonatomic,readonly) id<PLUniformTypeIdentifierIdentity> uniformTypeIdentifierID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) short cloudDeleteState; 
@property (readonly) long long cloudDeletionType; 
@property (copy,readonly) NSString * cloudUUIDForDeletion; 
+(id)entityName;
+(id)resourceForManagedAsset:(id)arg1 sharedStreamsType:(unsigned)arg2 managedObjectContext:(id)arg3 error:(id*)arg4 ;
+(id)insertResourceForAssetObjectID:(id)arg1 resourceIdentity:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(BOOL)deleteObsoleteResourcesInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(long long)cloudDeletionTypeForTombstone:(id)arg1 ;
+(id)cloudUUIDKeyForDeletion;
+(BOOL)supportsTrashedStateForResourceIdentity:(id)arg1 ;
+(id)listOfSyncedProperties;
+(id)_obsoleteResourceRecipesWithCPLOff;
+(BOOL)batchResetFileIDInManagedObjectContext:(id)arg1 error:(id*)arg2 ;
+(id)predicateForAvailableResources;
+(id)predicateForPurgeableOriginalResources;
+(id)purgeablePushedPredicateForCPLResourceTypes:(id)arg1 urgency:(long long)arg2 ;
+(id)originalCPLResourceTypesForAsset;
+(id)originalCPLResourceTypesForMaster;
+(id)nonOriginalCPLResourceTypes;
+(short)plTrashedStateForCPLExpungedState:(unsigned long long)arg1 ;
+(id)insertResourceForMasterObjectID:(id)arg1 withExternalCPLResource:(id)arg2 inManagedObjectContext:(id)arg3 ;
+(id)predicateForAllOriginalResourcesLocallyAvailable;
+(unsigned long long)bytesForAllResourcesInLibrary:(id)arg1 ;
+(void)resetCloudResourcesStateForCloudInManagedObjectContext:(id)arg1 hardReset:(BOOL)arg2 ;
+(id)predicateForAllFullSizeResourcesLocallyAvailable;
+(id)originalCPLResourceTypes;
+(id)prunePredicateForCPLResourceTypes:(id)arg1 ;
+(unsigned long long)cplExpungedStateForTrashedState:(short)arg1 ;
+(BOOL)_countOfLocallyAvailableCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 forMediumSized:(BOOL)arg3 localCount:(unsigned long long*)arg4 unavailableCount:(unsigned long long*)arg5 error:(id*)arg6 ;
+(BOOL)isCPLJPEGThumbnailResource:(id)arg1 ;
+(void)resetPrefetchStateForResourcesWithVersion:(unsigned)arg1 cplType:(unsigned long long)arg2 assetUuids:(id)arg3 inLibrary:(id)arg4 ;
+(unsigned long long)bytesNeededToDownloadOriginalResourcesInLibrary:(id)arg1 ;
+(BOOL)countOfMediumOriginalLocallyAvailableCloudResourcesInManagedObjectContext:(id)arg1 localCount:(unsigned long long*)arg2 unavailableCount:(unsigned long long*)arg3 error:(id*)arg4 ;
+(BOOL)countOfLocallyAvailableCloudResourcesOfType:(unsigned long long)arg1 inManagedObjectContext:(id)arg2 localCount:(unsigned long long*)arg3 unavailableCount:(unsigned long long*)arg4 error:(id*)arg5 ;
+(id)prefetchResourcePredicateForCPLResourceType:(unsigned long long)arg1 isAssetResource:(BOOL)arg2 maxRetry:(unsigned long long)arg3 additionalResourcePredicates:(id)arg4 ;
+(id)predicateForImageResourcePixelsLessOrEqual:(long long)arg1 ;
+(id)predicateForResourceCreatedAfterDate:(id)arg1 ;
+(id)predicateForMaxFilesize:(long long)arg1 ;
+(id)predicateForResourceIsNotLocallyAvailableWithCPLResourceType:(unsigned long long)arg1 version:(unsigned)arg2 ;
+(id)prunePredicateForAllCPLResourceTypes;
+(id)predicateForOriginalsToDownload;
-(NSString *)debugDescription;
-(id)redactedDescription;
-(id)fileURL;
-(float)scale;
-(void)prepareForDeletion;
-(void)willSave;
-(long long)estimatedDataLength;
-(void)setFingerprint:(NSString *)arg1 ;
-(id)scopedIdentifier;
-(unsigned long long)cplType;
-(void)setCloudLocalState:(short)arg1 ;
-(void)markAsNotLocallyAvailable;
-(BOOL)supportsCloudUpload;
-(long long)cloudDeletionType;
-(id)payloadID;
-(id)payloadForChangedKeys:(id)arg1 ;
-(BOOL)isDerivative;
-(BOOL)isLocallyAvailable;
-(id<PLResourceDataStoreKey>)dataStoreKey;
-(id<PLAssetID>)assetID;
-(void)setLocalAvailability:(short)arg1 ;
-(id)validatedExternalResourceRepresentationUsingFileURL:(id)arg1 ;
-(id<PLUniformTypeIdentifierIdentity>)uniformTypeIdentifierID;
-(id<PLResourceDataStore>)dataStore;
-(void)setDataLength:(long long)arg1 ;
-(void)setCloudAttributesWithExternalResource:(id)arg1 ;
-(void)resetPrefetchState;
-(id<PLCodecIdentity>)codecID;
-(void)setResourceIdentity:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)cplResourceIncludeFile:(BOOL)arg1 ;
-(void)applyTrashedState:(short)arg1 ;
-(NSString *)cloudUUIDForDeletion;
-(void)markAsLocallyAvailableWithFilePath:(id)arg1 ;
-(id)validateForAssetID:(id)arg1 resourceIdentity:(id)arg2 ;
-(BOOL)isInCloud;
-(BOOL)isDefaultOrientation;
-(BOOL)isPlayableVideo;
-(float)scaleGivenAssetHasAdjustments:(BOOL)arg1 currentWidth:(long long)arg2 currentHeight:(long long)arg3 ;
-(long long)orientedWidth;
-(long long)orientedHeight;
-(id)_libraryID;
-(BOOL)_colorSpaceIsNativeForDisplay;
-(BOOL)isSyncableChange;
-(BOOL)supportsTrashedState;
-(BOOL)isTrashedOrExpunged;
-(void)applyTrashedState:(short)arg1 trashedDate:(id)arg2 ;
-(BOOL)shouldPersistTrashedState;
-(void)persistTrashedStateToFilesystem;
-(PLInternalResourceSidecarRepresentation *)sidecarRepresentation;
-(BOOL)repairResourceValidationErrors:(id)arg1 managedObjectContext:(id)arg2 ;
-(void)setQualitySortValueBasedOnAssetWidth:(long long)arg1 height:(long long)arg2 ;
-(BOOL)isAdjustedResource;
-(BOOL)isAdjustedFullSizeRenderResource;
-(void)deleteResource;
-(BOOL)isRemotelyAvailable;
-(id)photosCTLDescription;
-(id)photosCTLJSONDict;
-(id)singleLineDescription;
-(void)transitional_reconsiderLocalAvailabilityBasedOnExistingLocationOfCPLResourceAtFilePath:(id)arg1 ;
-(BOOL)isCPLResource;
-(id)cplFileURL;
-(void)updateResourceForMasterExternalCPLResource:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(BOOL)isCPLMasterResource;
-(BOOL)isCPLAssetResource;
-(id)referenceMediaFileURL;
-(BOOL)canRepresentAsSidecar;
-(BOOL)isCPLJPEGThumbnail;
-(BOOL)isCPLOriginalResource;
-(id)expungeableResourceStateRepresentation;
@end

