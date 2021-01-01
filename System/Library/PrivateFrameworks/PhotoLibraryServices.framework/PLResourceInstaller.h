/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PLResourceInstaller : NSObject
+(id)generateValidatedExternalImageResourceOfType:(unsigned)arg1 forFilePath:(id)arg2 requireFileToBePresent:(BOOL)arg3 version:(unsigned)arg4 basedOnFullSizeWidth:(long long)arg5 andHeight:(long long)arg6 isNativeColorSpace:(BOOL)arg7 isLosslessEncoding:(BOOL)arg8 recipe:(id)arg9 assetKind:(short)arg10 context:(id)arg11 ;
+(void)_recipeAndDerivativeStateFromCPLResourceType:(unsigned long long)arg1 fromAdjustedSet:(BOOL)arg2 assetType:(short)arg3 recipeID:(unsigned*)arg4 ;
+(void)_applyImageOrientationToExternalResource:(id)arg1 originalOrientation:(unsigned)arg2 assetOrienation:(unsigned)arg3 ;
+(void)_applyColorSpaceAndCodecUsingFileToExternalResource:(id)arg1 managedObjectContext:(id)arg2 ;
+(void)_applyColorSpaceAndCodecToNonDerivativeExternalResource:(id)arg1 fromCloudMaster:(id)arg2 originalColorSpace:(id)arg3 ;
+(BOOL)_isPenultimateVersionFromCPLType:(unsigned long long)arg1 ;
+(id)validatedExternalResourceFromExternalResourceCloudAttributes:(id)arg1 cplType:(unsigned long long)arg2 assetType:(short)arg3 uti:(id)arg4 originalOrientation:(unsigned)arg5 orientation:(unsigned)arg6 originalColorSpace:(id)arg7 resourceWidth:(unsigned long long)arg8 resourceHeight:(unsigned long long)arg9 assetWidth:(unsigned long long)arg10 assetHeight:(unsigned long long)arg11 resourceFingerprint:(id)arg12 resourceSize:(unsigned long long)arg13 isAvailable:(BOOL)arg14 fromAdjustedSet:(BOOL)arg15 resourceURL:(id)arg16 cloudMaster:(id)arg17 isForMigration:(BOOL)arg18 context:(id)arg19 ;
+(unsigned long long)derivativeCPLTypeFromRecipeID:(unsigned)arg1 version:(unsigned)arg2 ;
+(unsigned long long)nonDerivativeCPLTypeFromResourceType:(unsigned)arg1 version:(unsigned)arg2 uniformTypeIdentifier:(id)arg3 ;
+(BOOL)isValidCPLResourceTypeForPersistence:(unsigned long long)arg1 ;
+(id)generateExternalResourceFromCPLResource:(id)arg1 cloudMaster:(id)arg2 masterResources:(id)arg3 ;
+(id)generateExternalResourceFromCPLResource:(id)arg1 asset:(id)arg2 fromAdjustedSet:(BOOL)arg3 ;
+(unsigned)recipeIDFromCPLResourceType:(unsigned long long)arg1 assetType:(short)arg2 fromAdjustedSet:(BOOL)arg3 ;
+(unsigned)resourceVersionFromCPLType:(unsigned long long)arg1 fromAdjustedSet:(BOOL)arg2 ;
+(unsigned)resourceTypeFromCPLType:(unsigned long long)arg1 assetType:(short)arg2 ;
+(id)externalResourcesForExistingAsset:(id)arg1 referencedResourceURLs:(id)arg2 ;
+(BOOL)installInternalResourcesForExistingAsset:(id)arg1 assumeNoExistingResources:(BOOL)arg2 referencedResourceURLs:(id)arg3 error:(id*)arg4 ;
+(id)onDemand_installAdjustedDeferredFullSizeVideoComplementResourceForAsset:(id)arg1 ;
+(void)onDemand_installAdjustedFullSizeRenderResourceAtFilePath:(id)arg1 forAsset:(id)arg2 ;
+(id)onDemand_installOriginalAdjustmentResourceIfPresentForAsset:(id)arg1 ;
+(id)onDemand_installLocalVideoKeyFrameForAsset:(id)arg1 ;
+(id)validatedExternalResourceForLocalVideoIfPresentAtPath:(id)arg1 context:(id)arg2 ;
+(id)onDemand_installOriginalVideoComplementResourceIfPresentForAsset:(id)arg1 ;
+(BOOL)resetInternalResourcesInStore:(id)arg1 resetUTIs:(BOOL)arg2 resetCodecs:(BOOL)arg3 resetMasters:(BOOL)arg4 migrator:(id)arg5 ;
+(BOOL)resetImageRequestHintsInStore:(id)arg1 migrator:(id)arg2 ;
+(BOOL)removeLegacyCloudResourcesInStore:(id)arg1 migrator:(id)arg2 ;
+(BOOL)createInternalResourcesForExistingAssetsWithNoExistingResourcesInStore:(id)arg1 migrator:(id)arg2 ;
+(BOOL)reconsiderSavedAssetTypeInStore:(id)arg1 migrator:(id)arg2 ;
+(id)onDemand_installPrimaryImageResourceWithRecipe:(id)arg1 version:(unsigned)arg2 forAsset:(id)arg3 ;
+(unsigned long long)_getURLDataLength:(id)arg1 ;
+(id)_validatedExternalResourceFromSupplementalFileURL:(id)arg1 withUTI:(id)arg2 ptpTrashedState:(long long)arg3 index:(id)arg4 asset:(id)arg5 ;
+(id)_validatedExternalResourceIfPresentForAudioOrUnknownAsset:(id)arg1 ;
+(BOOL)recoverSupplementalResourcesForAsset:(id)arg1 usingSidecarFinder:(id)arg2 outResourcesStoreCount:(unsigned long long*)arg3 error:(id*)arg4 ;
+(BOOL)installSupplementalResourceForExistingFileAtURL:(id)arg1 ptpTrashedState:(long long)arg2 index:(id)arg3 forAsset:(id)arg4 imageOrientation:(id)arg5 resultingResource:(id*)arg6 error:(id*)arg7 ;
+(BOOL)_installInternalResourcesForExistingAsset:(id)arg1 assumeNoExistingResources:(BOOL)arg2 referencedResourceURLs:(id)arg3 includeLegacyCloudResources:(BOOL)arg4 outResourcesStoreCount:(unsigned long long*)arg5 error:(id*)arg6 ;
+(void)_applyImageIOMetadataToExternalResource:(id)arg1 fromFileURL:(id)arg2 assumedWidth:(long long)arg3 assumedHeight:(long long)arg4 recipe:(id)arg5 assetKind:(short)arg6 context:(id)arg7 ;
+(id)_predicateForUnrecoverableResources;
+(id)onDemand_installAdjustedFullSizeVideoComplementResourceIfPresentForAsset:(id)arg1 ;
+(id)onDemand_installOriginalSOCImagePresentForAsset:(id)arg1 referencedResourceURLs:(id)arg2 ;
+(id)onDemand_installOriginalSOCVideoPresentForAsset:(id)arg1 referencedResourceURLs:(id)arg2 ;
+(id)onDemand_installOriginalSOCVideoComplementPresentForAsset:(id)arg1 referencedResourceURLs:(id)arg2 ;
+(id)generateAdjustedFullSizeRenderResourceForFilePath:(id)arg1 requireFileToBePresent:(BOOL)arg2 basedOnFullSizeWidth:(long long)arg3 andHeight:(long long)arg4 context:(id)arg5 ;
+(id)_speculativePathForPenultimateFullsizeRenderImageFileForAsset:(id)arg1 ;
+(id)_validatedExternalResourcesFromLocalImageOrVideoAsset:(id)arg1 referencedResourceURLs:(id)arg2 ;
+(id)generateVideoResourcesFromVideoAsset:(id)arg1 referencedVideoPath:(id)arg2 ;
+(id)_validatedExternalResourcesFromSharedStreamAsset:(id)arg1 ;
+(BOOL)installInternalResourcesForExistingAssetsWithNoExistingResourcesInManagedObjectContext:(id)arg1 migrator:(id)arg2 ;
+(id)generateValidatedExternalOtherResourceOfType:(unsigned)arg1 forFilePath:(id)arg2 uti:(id)arg3 requireFileToBePresent:(BOOL)arg4 version:(unsigned)arg5 ;
@end

