/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSItemProviderReading.h>
#import <libobjc.A.dylib/NSItemProviderWriting.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString, NSData, NSNumber;

@interface NSURL : NSObject <NSItemProviderReading, NSItemProviderWriting, NSSecureCoding, NSCopying> {

	NSString* _urlString;
	NSURL* _baseURL;
	void* _clients;
	void* _reserved;

}

@property (setter=_setTitle:,nonatomic,copy) NSString * _title; 
@property (nonatomic,readonly) NSURL * normalizedURL; 
@property (setter=ls_setPreferredLocalizations:,retain) NSArray * ls_preferredLocalizations; 
@property (getter=isiWorkURL,readonly) BOOL iWorkURL; 
@property (copy,readonly) NSArray * pathComponents; 
@property (copy,readonly) NSString * lastPathComponent; 
@property (copy,readonly) NSString * pathExtension; 
@property (copy,readonly) NSURL * URLByDeletingLastPathComponent; 
@property (copy,readonly) NSURL * URLByDeletingPathExtension; 
@property (copy,readonly) NSURL * URLByStandardizingPath; 
@property (copy,readonly) NSURL * URLByResolvingSymlinksInPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (copy,readonly) NSData * dataRepresentation; 
@property (copy,readonly) NSString * absoluteString; 
@property (copy,readonly) NSString * relativeString; 
@property (copy,readonly) NSURL * baseURL; 
@property (copy,readonly) NSURL * absoluteURL; 
@property (copy,readonly) NSString * scheme; 
@property (copy,readonly) NSString * resourceSpecifier; 
@property (copy,readonly) NSString * host; 
@property (copy,readonly) NSNumber * port; 
@property (copy,readonly) NSString * user; 
@property (copy,readonly) NSString * password; 
@property (copy,readonly) NSString * path; 
@property (copy,readonly) NSString * fragment; 
@property (copy,readonly) NSString * parameterString; 
@property (copy,readonly) NSString * query; 
@property (copy,readonly) NSString * relativePath; 
@property (readonly) BOOL hasDirectoryPath; 
@property (readonly) const char* fileSystemRepresentation; 
@property (getter=isFileURL,readonly) BOOL fileURL; 
@property (copy,readonly) NSURL * standardizedURL; 
@property (copy,readonly) NSURL * filePathURL; 
+(id)ui_incomingDirectory:(BOOL)arg1 ;
+(id)ui_cloudDocsContainerURL;
+(id)ui_URLFromExportBookmark:(id)arg1 ;
+(id)mapsURLWithQuery:(id)arg1 ;
+(id)mapsURLWithSourceAddress:(id)arg1 destinationAddress:(id)arg2 ;
+(id)URLWithDisplayIdentifier:(id)arg1 forSearchResultDomain:(int)arg2 andIdentifier:(unsigned long long)arg3 ;
+(BOOL)_allowsCreationOfFileURLFromItemProvider;
+(void)_setAllowsCreationOfFileURLFromItemProvider:(BOOL)arg1 ;
+(id)_web_uniqueWebDataURL;
+(id)_web_URLWithDataAsString:(id)arg1 ;
+(id)_webkit_URLWithUserTypedString:(id)arg1 ;
+(id)_web_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2 ;
+(id)_web_URLWithUserTypedString:(id)arg1 relativeToURL:(id)arg2 ;
+(id)_web_URLWithUserTypedString:(id)arg1 ;
+(id)_webkit_URLWithUserTypedString:(id)arg1 relativeToURL:(id)arg2 ;
+(id)_web_URLWithData:(id)arg1 ;
+(id)_web_URLWithData:(id)arg1 relativeToURL:(id)arg2 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)fileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2 ;
+(id)URLWithString:(id)arg1 ;
+(id)fileURLWithFileSystemRepresentation:(const char*)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3 ;
+(id)fileURLWithPath:(id)arg1 ;
+(id)writableTypeIdentifiersForItemProvider;
+(id)readableTypeIdentifiersForItemProvider;
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(id)fileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3 ;
+(id)URLWithString:(id)arg1 relativeToURL:(id)arg2 ;
+(id)URLByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(BOOL*)arg4 error:(id*)arg5 ;
+(id)URLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2 ;
+(id)absoluteURLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2 ;
+(id)fileURLWithPath:(id)arg1 relativeToURL:(id)arg2 ;
+(id)URLByResolvingAliasFileAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)fileURLWithPathComponents:(id)arg1 ;
+(id)_fileURLWithPath:(id)arg1 cachingResourceValuesForKeys:(id)arg2 error:(id*)arg3 ;
+(id)_URLWithDataAsString:(id)arg1 relativeToURL:(id)arg2 ;
+(id)_web_URLWithString:(id)arg1 relativeToURL:(id)arg2 ;
+(id)_web_URLWithComponents:(SCD_Struct_NS26)arg1 ;
+(id)_URLWithData:(id)arg1 relativeToURL:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)__unurl;
+(id)resourceValuesForKeys:(id)arg1 fromBookmarkData:(id)arg2 ;
+(BOOL)writeBookmarkData:(id)arg1 toURL:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
+(id)bookmarkDataWithContentsOfURL:(id)arg1 error:(id*)arg2 ;
-(id)_NSItemProviderArchive_customArchiveDictionary;
-(void)_NSItemProviderArchive_didUnarchiveCustomDictionary:(id)arg1 ;
-(NSString *)_title;
-(void)_setTitle:(id)arg1 ;
-(void)ui_setIsContentManaged:(BOOL)arg1 ;
-(BOOL)ui_isUnfulfilledPromiseURL;
-(id)ui_downloadOperationForActivity:(id)arg1 inScene:(id)arg2 ;
-(id)ui_bookmarkForExportWithError:(id*)arg1 ;
-(BOOL)ui_isContentManaged;
-(BOOL)ui_canOpenInPlace;
-(id)ui_issueSandboxExtensionOfClass:(const char*)arg1 error:(id*)arg2 ;
-(BOOL)ui_hasSandboxExtendedForClass:(const char*)arg1 ;
-(BOOL)ui_isFileProviderURL;
-(id)ui_issueReadSandboxExtensionWithError:(id*)arg1 ;
-(id)ui_issueReadWriteSandboxExtensionWithError:(id*)arg1 ;
-(BOOL)ui_hasReadSandboxExtended;
-(void)ui_setIsFileProviderURL:(BOOL)arg1 ;
-(void)ui_scheduleForCleanup;
-(id)ui_resolveOnDiskBookmarkAndPromise;
-(id)ui_downloadOperationForActivity:(id)arg1 ;
-(id)ui_URLByResolvingSymlinksAndCopyingSecurityScope;
-(void)_domain:(id*)arg1 subdomain:(id*)arg2 ;
-(id)phobosURL;
-(id)radarWebURL;
-(id)searchResultDomain;
-(id)searchResultIdentifier;
-(BOOL)isSpringboardHandledURL;
-(BOOL)isWebcalURL;
-(BOOL)isAccountURL;
-(BOOL)isJavaScriptURL;
-(BOOL)isHTTPOrHTTPSURL;
-(BOOL)isInternalUIKitURL;
-(BOOL)__is_isApplication;
-(BOOL)__is_isAppExtension;
-(id)__is_volumeURL;
-(BOOL)__is_isBootVolume;
-(BOOL)__is__isDirectory;
-(BOOL)__is__conformsToUTI:(id)arg1 ;
-(long long)__is__fileSize;
-(id)__is__modDate;
-(BOOL)__is__isVolume;
-(BOOL)__is__isAliasFile;
-(BOOL)__has_ResourceFork;
-(BOOL)__is_isOnBootVolume;
-(BOOL)__is_hasFileExtension:(id)arg1 ;
-(id)_webkit_scriptIfJavaScriptURL;
-(id)_web_originalDataAsString;
-(id)_webkit_canonicalize;
-(id)_webkit_URLFromURLOrSchemelessFileURL;
-(id)_web_userVisibleString;
-(BOOL)_webkit_isJavaScriptURL;
-(BOOL)_webkit_isFileURL;
-(id)_web_schemeData;
-(id)_web_hostData;
-(id)_web_originalData;
-(BOOL)_web_isEmpty;
-(const char*)_web_URLCString;
-(id)_webkit_canonicalize_with_wtf;
-(id)_webkit_URLByRemovingFragment;
-(id)_web_URLByRemovingUserInfo;
-(id)_web_schemeSeparatorWithoutColon;
-(id)_web_dataForURLComponentType:(long long)arg1 ;
-(id)_web_hostString;
-(id)_webkit_suggestedFilenameWithMIMEType:(id)arg1 ;
-(NSURL *)normalizedURL;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)CAMLType;
-(id)mapsURL;
-(void)ls_setPreferredLocalizations:(id)arg1 ;
-(NSArray *)ls_preferredLocalizations;
-(BOOL)isiWorkURL;
-(BOOL)conformsToOverridePatternWithKey:(id)arg1 ;
-(id)iWorkApplicationName;
-(id)iWorkDocumentName;
-(id)fmfURL;
-(id)fmipURL;
-(id)iTunesStoreURL;
-(id)iCloudEmailPrefsURL;
-(id)photosURL;
-(id)keynoteLiveURL;
-(id)keynoteLiveURL_noFragment;
-(id)iCloudSharingURL;
-(id)iCloudSharingURL_noFragment;
-(BOOL)_EX_isApplication;
-(BOOL)_EX_isDirectory;
-(id)_EX_containingApplicationBundleURL;
-(id)retain;
-(oneway void)release;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(BOOL)_tryRetain;
-(BOOL)_isDeallocating;
-(unsigned long long)retainCount;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isMemberOfClass:(Class)arg1 ;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)_cfTypeID;
-(id)initFileURLWithPath:(id)arg1 ;
-(NSURL *)absoluteURL;
-(NSString *)relativeString;
-(NSURL *)baseURL;
-(NSString *)scheme;
-(NSString *)host;
-(NSNumber *)port;
-(NSString *)user;
-(NSString *)password;
-(CFURLRef)_cfurl;
-(NSString *)parameterString;
-(NSString *)query;
-(NSString *)fragment;
-(id)initWithString:(id)arg1 ;
-(const char*)fileSystemRepresentation;
-(NSString *)path;
-(NSString *)lastPathComponent;
-(id)URLByAppendingPathComponent:(id)arg1 ;
-(id)URLByAppendingPathComponent:(id)arg1 isDirectory:(BOOL)arg2 ;
-(BOOL)isFileURL;
-(NSString *)absoluteString;
-(NSURL *)URLByDeletingLastPathComponent;
-(NSString *)pathExtension;
-(NSURL *)URLByDeletingPathExtension;
-(id)URLByAppendingPathExtension:(id)arg1 ;
-(id)initFileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2 ;
-(BOOL)getFileSystemRepresentation:(char*)arg1 maxLength:(unsigned long long)arg2 ;
-(NSArray *)pathComponents;
-(long long)_promiseExtensionConsume;
-(void)_promiseExtensionRelease:(long long)arg1 ;
-(id)_fixedUpSideFaultError:(id)arg1 ;
-(void)_performWithPhysicalURL:(/*^block*/id)arg1 ;
-(id)_valueFromFaultDictionary:(id)arg1 forKey:(id)arg2 ;
-(BOOL)checkPromisedItemIsReachableAndReturnError:(id*)arg1 ;
-(BOOL)getPromisedItemResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3 ;
-(id)promisedItemResourceValuesForKeys:(id)arg1 error:(id*)arg2 ;
-(NSArray *)writableTypeIdentifiersForItemProvider;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)_web_isJavaScriptURL;
-(NSURL *)standardizedURL;
-(void)_freeClients;
-(BOOL)_isAbsolute;
-(id)initWithString:(id)arg1 relativeToURL:(id)arg2 ;
-(id)initWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2 ;
-(id)initAbsoluteURLWithDataRepresentation:(id)arg1 relativeToURL:(id)arg2 ;
-(id)initFileURLWithPath:(id)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3 ;
-(id)initFileURLWithPath:(id)arg1 relativeToURL:(id)arg2 ;
-(id)initFileURLWithFileSystemRepresentation:(const char*)arg1 isDirectory:(BOOL)arg2 relativeToURL:(id)arg3 ;
-(id)initByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToURL:(id)arg3 bookmarkDataIsStale:(BOOL*)arg4 error:(id*)arg5 ;
-(id)initByResolvingAliasFileAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(CFDictionaryRef)_clientsCreatingIfNecessary:(BOOL)arg1 ;
-(NSString *)resourceSpecifier;
-(id)initWithScheme:(id)arg1 host:(id)arg2 path:(id)arg3 ;
-(NSData *)dataRepresentation;
-(NSString *)relativePath;
-(BOOL)hasDirectoryPath;
-(NSURL *)URLByStandardizingPath;
-(NSURL *)URLByResolvingSymlinksInPath;
-(id)_initFileURLWithPath:(id)arg1 cachingResourceValuesForKeys:(id)arg2 error:(id*)arg3 ;
-(SCD_Struct_NS26)_web_URLComponents;
-(id)_hostString;
-(id)_web_scriptIfJavaScriptURL;
-(id)_web_suggestedFilenameWithMIMEType:(id)arg1 ;
-(id)_web_URLByRemovingLastPathComponent_nowarn;
-(id)_web_URLByRemovingUserAndPath_nowarn;
-(id)_web_URLByRemovingUserAndQueryAndFragment_nowarn;
-(id)_URLByEscapingSpacesAndControlChars;
-(id)_URLArchive;
-(BOOL)_isSafeFileForBackgroundUpload:(int)arg1 withToken:(SCD_Struct_NS28)arg2 ;
-(BOOL)_isSafeFileForBackgroundUploadForMe;
-(BOOL)_isSafeDirectoryForDownloads:(int)arg1 withToken:(SCD_Struct_NS28)arg2 ;
-(BOOL)isFileReferenceURL;
-(BOOL)getResourceValue:(out id*)arg1 forKey:(id)arg2 error:(out id*)arg3 ;
-(id)resourceValuesForKeys:(id)arg1 error:(id*)arg2 ;
-(BOOL)setResourceValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)setResourceValues:(id)arg1 error:(id*)arg2 ;
-(void)removeCachedResourceValueForKey:(id)arg1 ;
-(void)removeAllCachedResourceValues;
-(void)setTemporaryResourceValue:(id)arg1 forKey:(id)arg2 ;
-(BOOL)checkResourceIsReachableAndReturnError:(id*)arg1 ;
-(id)fileReferenceURL;
-(NSURL *)filePathURL;
-(id)bookmarkDataWithOptions:(unsigned long long)arg1 includingResourceValuesForKeys:(id)arg2 relativeToURL:(id)arg3 error:(id*)arg4 ;
-(BOOL)startAccessingSecurityScopedResource;
-(void)stopAccessingSecurityScopedResource;
@end

