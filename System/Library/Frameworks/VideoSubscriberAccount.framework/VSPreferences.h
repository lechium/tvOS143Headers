/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUndoManager, NSUserDefaults, VSDevice, NSURL;

@interface VSPreferences : NSObject {

	NSUndoManager* _undoManager;
	NSUserDefaults* _userDefaults;
	NSUserDefaults* _globalUserDefaults;
	VSDevice* _device;

}

@property (nonatomic,retain) NSUserDefaults * userDefaults;                         //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,retain) NSUserDefaults * globalUserDefaults;                   //@synthesize globalUserDefaults=_globalUserDefaults - In the implementation block
@property (nonatomic,retain) VSDevice * device;                                     //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) NSUndoManager * undoManager;                           //@synthesize undoManager=_undoManager - In the implementation block
@property (nonatomic,copy,readonly) NSURL * overridingAppBootURL; 
@property (nonatomic,readonly) BOOL shouldDisableRequestTimeouts; 
@property (nonatomic,readonly) BOOL shouldAlwaysAllowRemoteInspection; 
@property (nonatomic,readonly) BOOL shouldSkipSetup; 
@property (assign,nonatomic) long long cachedAvailabilityStatus; 
@property (assign,nonatomic) long long cachedDeveloperProviderStatus; 
@property (assign,nonatomic) long long cachedStoreProviderStatus; 
@property (nonatomic,readonly) BOOL hasSentWelcomeMessage; 
-(VSDevice *)device;
-(void)setDevice:(VSDevice *)arg1 ;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(NSUndoManager *)undoManager;
-(NSUserDefaults *)userDefaults;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(id)metricUserID;
-(id)metricUserIDLastGenerated;
-(void)setMetricUserID:(id)arg1 ;
-(void)_updateValue:(id)arg1 forKey:(id)arg2 ;
-(void)_updateShouldSkipSetupWithNumber:(id)arg1 ;
-(NSUserDefaults *)globalUserDefaults;
-(NSURL *)overridingAppBootURL;
-(BOOL)shouldDisableRequestTimeouts;
-(BOOL)shouldAlwaysAllowRemoteInspection;
-(BOOL)shouldSkipSetup;
-(void)noteShouldSkipSetup;
-(void)removeSkipSetupPreset;
-(long long)cachedAvailabilityStatus;
-(void)setCachedAvailabilityStatus:(long long)arg1 ;
-(long long)cachedDeveloperProviderStatus;
-(void)setCachedDeveloperProviderStatus:(long long)arg1 ;
-(long long)cachedStoreProviderStatus;
-(void)setCachedStoreProviderStatus:(long long)arg1 ;
-(BOOL)hasSentWelcomeMessage;
-(void)noteDidSendWelcomeMessage;
-(BOOL)hasChosenDesiredApp;
-(void)noteDesiredApp:(id)arg1 ;
-(BOOL)isInSTBMode;
-(BOOL)shouldIgnoreExtendedValidation;
-(BOOL)allowInsecureAuthContext;
-(void)noteIsInSTBMode:(BOOL)arg1 ;
-(BOOL)setTopBoxInfoIsSetTopBoxOverride;
-(id)setTopBoxInfoProviderIdOverride;
-(id)setTopBoxInfoProviderDisplayNameOverride;
-(id)setTopBoxInfoAppAdamIdOverride;
-(id)setTopBoxInfoBundleIdentifierOverride;
-(void)setIgnoreSetTopBoxProfile:(BOOL)arg1 ;
-(BOOL)ignoreSetTopBoxProfile;
-(void)setGlobalUserDefaults:(NSUserDefaults *)arg1 ;
@end

