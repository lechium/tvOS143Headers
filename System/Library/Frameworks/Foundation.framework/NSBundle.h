/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:41 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Foundation/Foundation-Structs.h>
@class NSString, NSURL, NSDictionary, NSArray;

@interface NSBundle : NSObject {

	unsigned long long _flags;
	A{__CFBundle}* _cfBundle;
	unsigned long long _reserved2;
	Class _principalClass;
	id _initialPath;
	id _resolvedPath;
	NSString* _firstClassName;
	os_unfair_lock_s _lock;

}

@property (getter=isLoaded,readonly) BOOL loaded; 
@property (copy,readonly) NSURL * bundleURL; 
@property (copy,readonly) NSURL * resourceURL; 
@property (copy,readonly) NSURL * executableURL; 
@property (copy,readonly) NSURL * privateFrameworksURL; 
@property (copy,readonly) NSURL * sharedFrameworksURL; 
@property (copy,readonly) NSURL * sharedSupportURL; 
@property (copy,readonly) NSURL * builtInPlugInsURL; 
@property (copy,readonly) NSURL * appStoreReceiptURL; 
@property (copy,readonly) NSString * bundlePath; 
@property (copy,readonly) NSString * resourcePath; 
@property (copy,readonly) NSString * executablePath; 
@property (copy,readonly) NSString * privateFrameworksPath; 
@property (copy,readonly) NSString * sharedFrameworksPath; 
@property (copy,readonly) NSString * sharedSupportPath; 
@property (copy,readonly) NSString * builtInPlugInsPath; 
@property (copy,readonly) NSString * bundleIdentifier; 
@property (copy,readonly) NSDictionary * infoDictionary; 
@property (copy,readonly) NSDictionary * localizedInfoDictionary; 
@property (readonly) Class principalClass; 
@property (copy,readonly) NSArray * preferredLocalizations; 
@property (copy,readonly) NSArray * localizations; 
@property (copy,readonly) NSString * developmentLocalization; 
@property (copy,readonly) NSArray * executableArchitectures; 
+(id)currentNibPath;
+(id)currentNibLoadingBundle;
+(void)pushNibLoadingBundle:(id)arg1 ;
+(void)pushNibPath:(id)arg1 ;
+(void)popNibPath;
+(void)popNibLoadingBundle;
+(id)__IS__iconsetResourceBundle;
+(id)__IS__frameworkBundle;
+(id)__IS__iconsetResourceAssetsCatalogURL;
+(id)__IS__frameworkLocalizedString:(id)arg1 ;
+(id)userNotificationsBundleWithIdentifier:(id)arg1 ;
+(id)un_safeBundleWithURL:(id)arg1 ;
+(id)debugDescription;
+(id)mainBundle;
+(id)bundleWithPath:(id)arg1 ;
+(id)bundleWithURL:(id)arg1 ;
+(id)bundleForClass:(Class)arg1 ;
+(id)loadedBundles;
+(id)preferredLocalizationsFromArray:(id)arg1 ;
+(id)findBundleResources:(id)arg1 callingMethod:(SEL)arg2 directory:(id)arg3 languages:(id)arg4 name:(id)arg5 types:(id)arg6 limit:(unsigned long long)arg7 ;
+(id)findBundleResourceURLsCallingMethod:(SEL)arg1 baseURL:(id)arg2 passingTest:(/*^block*/id)arg3 ;
+(id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
+(id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 inBundleWithURL:(id)arg4 ;
+(id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 ;
+(id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 inBundleWithURL:(id)arg3 ;
+(void)setSystemLanguages:(id)arg1 ;
+(id)bundleWithIdentifier:(id)arg1 ;
+(id)_bundleWithIdentifier:(id)arg1 andLibraryName:(id)arg2 ;
+(id)allBundles;
+(id)allFrameworks;
+(id)preferredLocalizationsFromArray:(id)arg1 forPreferences:(id)arg2 ;
-(id)loadNibNamed:(id)arg1 owner:(id)arg2 options:(id)arg3 ;
-(id)dataForResourceName:(id)arg1 ;
-(id)_preferredEnglishLocalizationBundle;
-(id)localizedStringInDeviceLanguageForKey:(id)arg1 ;
-(BOOL)load;
-(id)description;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(CFBundleRef)_cfBundle;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 localization:(id)arg4 ;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 subdirectory:(id)arg3 ;
-(id)URLForResource:(id)arg1 withExtension:(id)arg2 ;
-(BOOL)loadAndReturnError:(id*)arg1 ;
-(CFBundleRef)_cfBundleIfPresent;
-(BOOL)unload;
-(NSURL *)bundleURL;
-(NSDictionary *)infoDictionary;
-(NSArray *)localizations;
-(NSDictionary *)localizedInfoDictionary;
-(NSString *)bundlePath;
-(BOOL)isLoaded;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLocalization:(id)arg4 ;
-(id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLocalization:(id)arg3 ;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 ;
-(id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 ;
-(id)findBundleResourceURLsCallingMethod:(SEL)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 ;
-(id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 localization:(id)arg3 ;
-(id)URLsForResourcesWithExtension:(id)arg1 subdirectory:(id)arg2 ;
-(id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(BOOL)_searchForLocalizedString:(id)arg1 foundKey:(id*)arg2 foundTable:(id*)arg3 ;
-(NSString *)resourcePath;
-(NSURL *)resourceURL;
-(NSString *)executablePath;
-(NSURL *)executableURL;
-(NSURL *)appStoreReceiptURL;
-(id)_wrappedBundleURL;
-(id)_wrapperContainerURL;
-(id)pathForAuxiliaryExecutable:(id)arg1 ;
-(id)URLForAuxiliaryExecutable:(id)arg1 ;
-(NSString *)privateFrameworksPath;
-(NSURL *)privateFrameworksURL;
-(NSString *)sharedFrameworksPath;
-(NSURL *)sharedFrameworksURL;
-(NSString *)sharedSupportPath;
-(NSURL *)sharedSupportURL;
-(NSString *)builtInPlugInsPath;
-(NSURL *)builtInPlugInsURL;
-(unsigned long long)versionNumber;
-(id)bundleLanguages;
-(void)invalidateResourceCache;
-(Class)classNamed:(id)arg1 ;
-(Class)principalClass;
-(id)objectForInfoDictionaryKey:(id)arg1 ;
-(void)__static;
-(id)_regionsArray;
-(id)_pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forRegion:(id)arg4 ;
-(id)_pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forRegion:(id)arg3 ;
-(id)pathForResource:(id)arg1 ofType:(id)arg2 inDirectory:(id)arg3 forLanguage:(id)arg4 ;
-(id)pathsForResourcesOfType:(id)arg1 inDirectory:(id)arg2 forLanguage:(id)arg3 ;
-(NSArray *)preferredLocalizations;
-(NSString *)developmentLocalization;
-(BOOL)preflightAndReturnError:(id*)arg1 ;
-(NSArray *)executableArchitectures;
-(id)localizedAttributedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 ;
-(id)localizedAttributedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 locale:(id)arg4 ;
-(void)setPreservationPriority:(double)arg1 forTags:(id)arg2 ;
-(void)setPreservationPriority:(double)arg1 forTag:(id)arg2 ;
-(double)preservationPriorityForTag:(id)arg1 ;
@end
