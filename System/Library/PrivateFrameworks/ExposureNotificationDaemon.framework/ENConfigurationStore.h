/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:56 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface ENConfigurationStore : NSObject {

	BOOL _developerServerConfiguration;
	NSString* _directoryPath;
	NSObject*<OS_dispatch_queue> _storeQueue;
	NSString* _regionIdentifierOverride;

}

@property (nonatomic,copy,readonly) NSString * directoryPath;                      //@synthesize directoryPath=_directoryPath - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> storeQueue;              //@synthesize storeQueue=_storeQueue - In the implementation block
@property (assign,nonatomic) BOOL developerServerConfiguration;                    //@synthesize developerServerConfiguration=_developerServerConfiguration - In the implementation block
@property (nonatomic,copy) NSString * regionIdentifierOverride;                    //@synthesize regionIdentifierOverride=_regionIdentifierOverride - In the implementation block
+(id)legacyAppCacheURL;
-(id)init;
-(NSString *)directoryPath;
-(void)allRegionConfigurationsWithCompletion:(/*^block*/id)arg1 ;
-(void)allRegionServerConfigurationsWithCompletion:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)storeQueue;
-(id)serverConfigurationForRegion:(id)arg1 ;
-(id)downloadConfigurationForRegion:(id)arg1 ;
-(id)configurationForRegion:(id)arg1 ;
-(id)initWithDirectoryPath:(id)arg1 ;
-(void)setStoreQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDeveloperServerConfiguration:(BOOL)arg1 ;
-(void)setRegionIdentifierOverride:(NSString *)arg1 ;
-(id)regionCacheURL;
-(id)configurationCacheURL;
-(id)systemConfigurationCacheURL;
-(id)_configurationForRegion:(id)arg1 ;
-(id)fileURLforRegionConfiguration:(id)arg1 ;
-(id)_serverConfigurationResponseForRegion:(id)arg1 ;
-(id)_agencyConfigurationForRegion:(id)arg1 ;
-(BOOL)_saveCountrySubdivisionList:(id)arg1 country:(id)arg2 error:(id*)arg3 ;
-(id)fileURLforCountrySubdivisionList:(id)arg1 ;
-(BOOL)_saveServerConfigurationResponse:(id)arg1 error:(id*)arg2 ;
-(id)regionFromServerResponse:(id)arg1 ;
-(id)fileURLforRegionServerConfiguration:(id)arg1 ;
-(BOOL)removeConfigurationsForRegionCode:(id)arg1 error:(id*)arg2 ;
-(void)enumerateCachedRegionServerConfigurationsWithCountryCode:(id)arg1 handler:(/*^block*/id)arg2 ;
-(BOOL)_removeSubdivisionListForRegion:(id)arg1 error:(id*)arg2 ;
-(id)_directoryURLForCachedConfigurations;
-(void)_enumerateCachedServerResponseConfigurationsWithDirectoryURL:(id)arg1 prefix:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)enumerateCachedRegionServerConfigurationsWithHandler:(/*^block*/id)arg1 ;
-(void)allCachedServerResponseConfigurationsWithCompletion:(/*^block*/id)arg1 ;
-(id)_allCachedServerResponseConfigurationsWithPrefix:(id)arg1 ;
-(id)allRegionServerConfigurationsForCountryCode:(id)arg1 ;
-(id)_localeForRegion:(id)arg1 ;
-(id)_serverConfigurationResponseForFileURL:(id)arg1 ;
-(void)allCachedServerResponseConfigurationsWithCountryCode:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)developerServerConfiguration;
-(NSString *)regionIdentifierOverride;
-(id)developerConfigurationsURL;
-(id)serverConfigurationCacheURL;
-(id)_serverConfigurationForRegion:(id)arg1 ;
-(id)serverConfigurationResponseForRegion:(id)arg1 ;
-(id)localeForRegion:(id)arg1 ;
-(id)_subdivisionListForRegion:(id)arg1 ;
-(id)_localeIdentifiersForRegion:(id)arg1 ;
-(id)subdivisionListCacheURL;
-(BOOL)saveRegionConfiguration:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveCountrySubdivisionList:(id)arg1 region:(id)arg2 error:(id*)arg3 ;
-(BOOL)saveServerConfigurationResponse:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeConfigurationsForRegion:(id)arg1 includingSubdivisions:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)removeSubdivisionListForRegion:(id)arg1 error:(id*)arg2 ;
-(id)allCachedCountries;
-(id)allRegionServerConfigurations;
-(void)allAgencyServerRegionConfigurationsWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)regionSupportsSubdivisions:(id)arg1 ;
-(id)serverExposureConfigurationForRegion:(id)arg1 ;
-(id)agencyConfigurationForRegion:(id)arg1 ;
-(id)subdivisionListForRegion:(id)arg1 ;
-(id)localeIdentifiersForRegion:(id)arg1 ;
-(void)prefsChanged;
-(BOOL)saveTemporaryServerConfigurations:(id)arg1 error:(id*)arg2 ;
-(void)clearTemporaryServerConfigurations;
-(void)resetStore;
-(id)cachedAppConfiguationForBundleID:(id)arg1 forRegionID:(id)arg2 ;
-(id)legacyAppConfiguationForMobileCountryCode:(id)arg1 ;
@end

