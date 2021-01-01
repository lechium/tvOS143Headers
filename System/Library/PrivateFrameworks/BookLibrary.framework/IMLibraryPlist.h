/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface IMLibraryPlist : NSObject {

	long long _kind;
	NSString* _path;
	NSString* _directory;

}

@property (assign,nonatomic) long long kind;                        //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy) NSString * path;                         //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSString * directory;                    //@synthesize directory=_directory - In the implementation block
@property (nonatomic,readonly) NSString * sidecarPath; 
+(id)libraryPlistWithKind:(long long)arg1 ;
+(id)booksArrayFromPlistEntry:(id)arg1 ;
+(id)folderNameFromPlistEntry:(id)arg1 ;
+(id)storeIdFromPlistEntry:(id)arg1 ;
+(id)isSampleFromPlistEntry:(id)arg1 ;
+(id)permlinkFromPlistEntry:(id)arg1 ;
+(void)setAccessDate:(id)arg1 toPlistEntry:(id)arg2 ;
+(void)setBooksArray:(id)arg1 toPlistEntry:(id)arg2 ;
+(id)purchasesRepositoryPath;
+(id)managedRepositoryPath;
+(id)sharedRepositoryPath;
+(id)proofingRepositoryPath;
+(id)sampleRepositoryPath;
+(id)stashedSampleRepositoryPath;
+(void)setDeletesArray:(id)arg1 toPlistEntry:(id)arg2 ;
+(id)deletesArrayFromPlistEntry:(id)arg1 ;
+(id)bookEpubIdFromPlistEntry:(id)arg1 ;
+(id)uniqueIdFromPlistEntry:(id)arg1 ;
+(id)lookupFolderNameFromAssetID:(id)arg1 contents:(id)arg2 ;
+(id)entryForAssetID:(id)arg1 contents:(id)arg2 ;
+(id)publicationVersionFromPlistEntry:(id)arg1 ;
+(id)publicationVersionNumberFromPlistEntry:(id)arg1 ;
+(id)humanReadablePublicationVersionFromPlistEntry:(id)arg1 ;
+(id)pageProgressionFromPlistEntry:(id)arg1 ;
+(id)languageFromPlistEntry:(id)arg1 ;
+(id)coverWritingModeFromPlistEntry:(id)arg1 ;
+(id)scrollDirectionFromPlistEntry:(id)arg1 ;
+(id)backupFolderNameFromPlistEntry:(id)arg1 ;
+(BOOL)isThinnedAssetFromPlistEntry:(id)arg1 ;
+(id)keyNameForAuthor;
+(id)keyNameForSortAuthor;
+(id)keyNameForTitle;
+(id)keyNameForSortTitle;
+(id)keyNameForGenre;
+(id)keyNameForExplicitContent;
+(id)keyNameForProofedAsset;
+(id)keyNameForIsEphemeral;
+(id)keyNameForDeletesArray;
+(id)keyNameForBooksArray;
+(id)keyNameForPublicationVersion;
+(id)keyNameForHumanReadablePublicationVersion;
+(id)keyNameForPageProgression;
+(id)keyNameForAssetType;
+(id)languagesFromPlistEntry:(id)arg1 ;
+(id)primaryLanguageFromPlistEntry:(id)arg1 ;
+(id)assetIDFromPlistEntry:(id)arg1 forAssetAtPath:(id)arg2 ;
+(id)keyNameForCoverWritingMode;
+(id)keyNameForScrollDirection;
+(id)keyNameForLanguages;
+(id)keyNameForPrimaryLanguage;
+(id)keyNameForUniqueId;
+(id)keyNameForAccessDate;
+(id)keyNameForPath;
+(id)keyNameForBackupPath;
+(id)keyNameForStoreId2;
+(id)keyNameForStoreId;
+(id)keyNameForImportDate;
+(id)publisherUniqueIDFromItunesMetadataEntry:(id)arg1 ;
+(id)uniqueIDFromItunesMetadataEntry:(id)arg1 ;
+(id)packageFileHashFromItunesMetadataEntry:(id)arg1 ;
+(id)sharedContainerURL;
+(id)entryForAssetURL:(id)arg1 contents:(id)arg2 ;
+(id)isManagedBookFromURL:(id)arg1 ;
+(id)lookupAssetURLStringFromAssetID:(id)arg1 contents:(id)arg2 ;
+(id)lookupPublicationVersionFromAssetID:(id)arg1 contents:(id)arg2 ;
+(id)lookupPublicationVersionNumberFromAssetID:(id)arg1 contents:(id)arg2 ;
+(id)lookupHumanReadablePublicationVersionFromAssetID:(id)arg1 contents:(id)arg2 ;
+(id)lookupPageProgressionFromAssetID:(id)arg1 contents:(id)arg2 ;
+(id)lookupLanguageFromAssetID:(id)arg1 contents:(id)arg2 ;
+(id)lookupCoverWritingModeFromAssetID:(id)arg1 contents:(id)arg2 ;
+(id)lookupScrollDirectionFromAssetID:(id)arg1 contents:(id)arg2 ;
+(id)lookupBackupFolderNameFromAssetID:(id)arg1 contents:(id)arg2 ;
+(BOOL)lookupIsThinnedFromAssetID:(id)arg1 contents:(id)arg2 ;
+(id)storeIDsforThinnedBooksFromContents:(id)arg1 ;
+(id)authorFromPlistEntry:(id)arg1 ;
+(id)sortAuthorFromPlistEntry:(id)arg1 ;
+(id)titleFromPlistEntry:(id)arg1 ;
+(id)sortTitleFromPlistEntry:(id)arg1 ;
+(id)genreFromPlistEntry:(id)arg1 ;
+(id)isExplicitContentFromPlistEntry:(id)arg1 ;
+(id)isProofedAssetFromPlistEntry:(id)arg1 ;
+(id)isEphemeralFromPlistEntry:(id)arg1 ;
+(id)temporaryItemIdentifierFromPlistEntry:(id)arg1 ;
+(id)persistentIDFromPlistEntry:(id)arg1 ;
+(id)albumFromPlistEntry:(id)arg1 ;
+(id)isItunesUFromPlistEntry:(id)arg1 ;
+(id)feedURLFromPlistEntry:(id)arg1 ;
+(id)mimeTypeFromPlistEntry:(id)arg1 ;
+(id)extensionFromPlistEntry:(id)arg1 ;
+(id)assetTypeFromPlistEntry:(id)arg1 ;
+(id)assetIDFromPlistEntry:(id)arg1 ;
+(id)accessDateFromPlistEntry:(id)arg1 ;
+(id)coverPathFromPlistEntry:(id)arg1 ;
+(id)importDateFromPlistEntry:(id)arg1 ;
+(id)assetIDFromItunesMetadataEntry:(id)arg1 ;
+(id)coverPathFromItunesMetadataEntry:(id)arg1 ;
+(id)coverHashFromItunesMetadataEntry:(id)arg1 ;
+(id)titleFromItunesMetadataEntry:(id)arg1 ;
+(id)endOfBookExperiencesFromItunesMetadataEntry:(id)arg1 ;
+(id)experienceKindFromExperienceEntry:(id)arg1 ;
+(id)experienceLocationFromExperienceEntry:(id)arg1 ;
+(id)experienceLocationTypeFromExperienceEntry:(id)arg1 ;
+(id)experienceVersionFromExperienceEntry:(id)arg1 ;
+(id)experienceParamsFromExperienceEntry:(id)arg1 ;
+(id)experienceConfidenceFromExperienceParamEntry:(id)arg1 ;
+(id)keyNameForComments;
+(id)keyNameForBookDescription;
+(id)keyNameForYear;
+(id)keyNameForLastOpened;
+(id)keyNameForFirstOpened;
+(id)keyNameForRating;
+(id)keyNameForReadingLocation;
+(id)keyNameForHighWaterMark;
+(id)keyNameForGeneration;
+(id)keyNameForSubject;
+(id)booksRepositoryPath;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)contents;
-(NSString *)directory;
-(long long)kind;
-(void)setKind:(long long)arg1 ;
-(void)setDirectory:(NSString *)arg1 ;
-(void)addDeletedFiles:(id)arg1 ;
-(void)removeDeletedPaths:(id)arg1 ;
-(id)_initWithDirectory:(id)arg1 fileName:(id)arg2 ;
-(id)unfilteredSidecarContents;
-(NSString *)sidecarPath;
-(id)p_contents:(id)arg1 ;
-(id)unfilteredContents;
-(void)p_rewriteSidecarWithDeletes:(id)arg1 ;
-(BOOL)bumpModificationDate;
-(id)calculateChecksum;
-(BOOL)isPathInDirectory:(id)arg1 ;
@end

